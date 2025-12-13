/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:06:49 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:24:16 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {

    this->_type = "Dog";
    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) {

     std::cout << "Dog Copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}
        
Dog& Dog::operator=(const Dog& copy) {
    
    if (this != &copy)
        this->_type = copy.getType();
    return *this;
}

Dog::~Dog(void) {
    
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound(void) const {
    
    std::cout << "ugggggrrrrrrrrgggrrrr" << std::endl;;
}
