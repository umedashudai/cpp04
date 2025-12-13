/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:06:49 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:09:35 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

    this->_type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) {

    std::cout << "Dog Copy constructor" << std::endl;
    if (this != &copy)
        this->_brain = new Brain(*(copy.getBrain()));
    else
        this->_brain = NULL;
}
        
Dog& Dog::operator=(const Dog& copy) {
    
    if (this != &copy)
    {
        this->_type = copy.getType();
        this->_brain = new Brain(*(copy.getBrain()));
    }
    return *this;
}

Dog::~Dog(void) {
    
    std::cout << "Dog destructor" << std::endl;
}

Brain* Dog::getBrain(void) const {

    return this->_brain;
}

void Dog::makeSound(void) const {
    
    std::cout << "ugggggrrrrrrrrgggrrrr" << std::endl;;
}
