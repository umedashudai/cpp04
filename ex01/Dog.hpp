/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:32 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:21:45 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
    private:
        Brain* _brain;
    public:
        Dog(void);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        virtual ~Dog(void);
        Brain* getBrain(void) const;
        void makeSound(void) const;
};

#endif
