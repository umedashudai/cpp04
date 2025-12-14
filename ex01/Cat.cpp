/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:40:47 by shuu              #+#    #+#             */
/*   Updated: 2025/12/14 11:07:35 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain()) {
        
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) {

	std::cout << "Cat copy constructor" << std::endl;
    if (this != &copy)
    {
        if (copy._brain)
            this->_brain = new Brain(*(copy._brain));
        else
            this->_brain = NULL;
    }
}

Cat& Cat::operator=(const Cat& copy) {

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
        
Cat::~Cat(void) {

    std::cout << "Cat destructor" << std::endl;
    delete this->_brain;
}

void Cat::makeSound(void) const {
        
	std::cout << "meowmeowmewo" << std::endl;
}

std::string Cat::getIdea(int i) const {

    if (i < 0 || 100 < i)
        return "Out of range";
    return this->_brain->getIdea(i);
}

void Cat::addIdea(int i, std::string idea) {

    if (i < 0 || 100 < i)
        return ;
    this->_brain->addIdea(i, idea);
}

Brain* Cat::getBrain(void) const {
    
    return this->_brain;
}
