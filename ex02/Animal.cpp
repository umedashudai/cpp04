/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:22:35 by shuu              #+#    #+#             */
/*   Updated: 2025/12/09 22:37:30 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("") {

    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal& copy) : _type("") {

    std::cout << "Animal copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}

Animal& Animal::operator=(const Animal& copy) {

    if (this != &copy)
        this->_type = copy.getType();
    return *this;
}

Animal::~Animal(void) {

    std::cout << "Animal destructor" << std::endl;
}

const std::string& Animal::getType(void) const {

    return this->_type;
}

void Animal::makeSound(void) const {

    std::cout << "Animal doesn't have a specific sound" << std::endl;
}
