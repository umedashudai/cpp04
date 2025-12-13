/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:39 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 22:21:33 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    
    private:
        Brain* _brain;
    public:
        Cat(void);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        virtual ~Cat(void);
        Brain* getBrain(void) const;
        void makeSound(void) const;
};

#endif
