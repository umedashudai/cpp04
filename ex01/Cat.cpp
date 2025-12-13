/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:40:47 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:18:37 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat(void) {
    
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& copy) {

    this->_type = "Cat";
	std::cout << "Cat copy constructor" << std::endl;
    if (this != &copy)
        this->_brain = new Brain(*(copy.getBrain()));
    else
        this->_brain = NULL;
       
}

Cat& Cat::operator=(const Cat& copy) {

    if (this != &copy) {
        this->_type = copy.getType();
        this->_brain = new Brain(*(copy.getBrain()));
    }
    return *this;
}
        
Cat::~Cat(void) {

    std::cout << "Cat destructor" << std::endl;
}

Brain* Cat::getBrain(void) const {

    return this->_brain;
}

void Cat::makeSound(void) const {
        
	std::cout << "meowmeowmewo" << std::endl;
}
