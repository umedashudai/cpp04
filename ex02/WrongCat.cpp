/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:58:25 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:19:22 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(void) {
        
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {

	std::cout << "WrongCat copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;   
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {

    if (this != &copy)
        this->_type = copy.getType();
    return *this;
}
        
WrongCat::~WrongCat(void) {

    std::cout << "WrongCat destructor" << std::endl;
}

void WrongCat::makeSound(void) const {
        
	std::cout << "aaaaaaa??? (Wrong cat sound)" << std::endl;
}
