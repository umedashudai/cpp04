/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:06:49 by shuu              #+#    #+#             */
/*   Updated: 2025/12/14 11:44:40 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain()) {

    std::cout << "Dog default constructor" << std::endl;

}

Dog::Dog(const Dog& copy) {

    std::cout << "Dog Copy constructor" << std::endl;
    if (this != &copy)
    {
        if (copy._brain)
            this->_brain = new Brain(*(copy._brain));
        else
            this->_brain = NULL;
    }
}
        
Dog& Dog::operator=(const Dog& copy) {
    
    if (this != &copy)
    {
        this->type = copy.type;
        delete this->_brain;
        if (copy._brain)
            this->_brain = new Brain(*(copy._brain));
        else
            this->_brain = NULL;
    }
    return *this;
}

Dog::~Dog(void) {
    
    std::cout << "Dog destructor" << std::endl;
    delete this->_brain;
}

void Dog::makeSound(void) const {
    
    std::cout << "ugggggrrrrrrrrgggrrrr" << std::endl;;
}

std::string Dog::getIdea(int i) const {

    if (i < 0 || 100 < i)
        return "Out of range";
    return this->_brain->getIdea(i);
}

void Dog::addIdea(int i, std::string idea) {

    if (i < 0 || 100 < i)
        return ;
    this->_brain->addIdea(i, idea);
}

Brain* Dog::getBrain(void) const {
    
    return this->_brain;
}
