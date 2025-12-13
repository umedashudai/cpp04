/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:40:47 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 17:42:48 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) : Animal("Cat") {
        
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) {

	std::cout << "Cat copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}

Cat& Cat::operator=(const Cat& copy) {

    if (this != &copy)
        this->_type = copy._type;
    return *this;
}
        
Cat::~Cat(void) {

    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound(void) const {
        
	std::cout << "meowmeowmewo" << std::endl;
}
