/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:32 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 21:06:51 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    
    private:
        Brain *_brain;
    public:
        Dog(void);
        Dog(const Dog& copy);
        Dog& operator=(const Dog& copy);
        ~Dog(void);
        void makeSound(void) const;
        void addIdea(int i, std::string idea);
        std::string getIdea(int i) const;
        Brain* getBrain(void) const;
};

#endif
