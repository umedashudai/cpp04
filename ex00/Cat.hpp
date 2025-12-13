/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 11:33:39 by shuu              #+#    #+#             */
/*   Updated: 2025/12/09 20:04:50 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    
    public:
        Cat(void);
        Cat(const Cat& copy);
        Cat& operator=(const Cat& copy);
        ~Cat(void);
        void makeSound(void) const;
};

#endif
