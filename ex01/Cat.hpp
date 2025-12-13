/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:39 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 21:06:05 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    
    private:
        Brain *_brain;
    public:
        Cat(void);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        ~Cat(void);
        void makeSound(void) const;
        void addIdea(int i, std::string idea);
        std::string getIdea(int i) const;
        Brain* getBrain(void) const;
};

#endif
