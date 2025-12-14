/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:22:35 by shuu              #+#    #+#             */
/*   Updated: 2025/12/14 19:53:54 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("default") {

    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
    
    std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& copy) : type("default") {

    std::cout << "Animal copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}   

Animal& Animal::operator=(const Animal& copy) {

    if (this != &copy)
        this->type = copy.type;
    return *this;
}

Animal::~Animal(void) {

    std::cout << "Animal destructor" << std::endl;
}

const std::string& Animal::getType(void) const {

    return this->type;
}

void Animal::makeSound(void) const {

    std::cout << "Animal doesn't have a specific sound" << std::endl;
}
