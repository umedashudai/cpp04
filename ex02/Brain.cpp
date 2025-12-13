/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 23:19:32 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 15:34:08 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

    std::cout << "Brain default constructor" << std::endl;
}

Brain::Brain(const Brain& copy) {

    std::cout << "Brain copy constructor" << std::endl;
    if (this != &copy)
        *this = copy;
}

Brain& Brain::operator=(const Brain& copy) {

    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = copy._ideas[i];
    }
    return *this;
}

Brain::~Brain(void) {
    
    std::cout << "Brain destructor" << std::endl;
}
