/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:18:44 by shuu              #+#    #+#             */
/*   Updated: 2025/12/09 20:21:14 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include  <iostream>

class Animal {

    protected:
        std::string _type;
    public:
        Animal(void);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        ~Animal(void);
        const std::string& getType(void) const;
        virtual void makeSound(void) const;
};

#endif
