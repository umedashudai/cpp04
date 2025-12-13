/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:32 by shuu              #+#    #+#             */
/*   Updated: 2025/12/09 22:45:50 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    
    public:
        Dog(void);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        ~Dog(void);
        void makeSound(void) const;
};

#endif
