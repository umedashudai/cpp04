/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:54:12 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 18:58:44 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("") {

    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {

    std::cout << "WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) : _type("") {

    std::cout << "WrogAnimal copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {

    if (this != &copy)
        this->_type = copy._type;
    return *this;
}

WrongAnimal::~WrongAnimal(void) {

    std::cout << "WrongAnimal destructor" << std::endl;
}

const std::string& WrongAnimal::getType(void) const {

    return this->_type;
}

void WrongAnimal::makeSound(void) const {

    std::cout << "WrongAnimal doesn't have a specific sound" << std::endl;
}
