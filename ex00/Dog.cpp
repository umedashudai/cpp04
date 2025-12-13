/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:06:49 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 21:27:26 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {

    std::cout << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& copy) {

     std::cout << "Dog Copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}
        
Dog& Dog::operator=(const Dog& copy) {
    
    if (this != &copy)
        this->type = copy.type;
    return *this;
}

Dog::~Dog(void) {
    
    std::cout << "Dog destructor" << std::endl;
}

void Dog::makeSound(void) const {
    
    std::cout << "ugggggrrrrrrrrgggrrrr" << std::endl;;
}
