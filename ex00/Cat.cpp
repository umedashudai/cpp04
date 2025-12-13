/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:40:47 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:24:02 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void) {
        
    this->_type = "Cat";
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) {

	std::cout << "Cat copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}

Cat& Cat::operator=(const Cat& copy) {

    if (this != &copy)
        this->_type = copy.getType();
    return *this;
}
        
Cat::~Cat(void) {

    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound(void) const {
        
	std::cout << "meowmeowmewo" << std::endl;
}
