/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:18:44 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 21:28:21 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include  <iostream>

class Animal {

    protected:
        std::string type;
    public:
        Animal(void);
        Animal(std::string type);
        Animal(const Animal& copy);
        Animal& operator=(const Animal& copy);
        ~Animal(void);
        const std::string& getType(void) const;
        virtual void makeSound(void) const;
};

#endif
