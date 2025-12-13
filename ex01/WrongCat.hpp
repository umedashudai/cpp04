/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:57:14 by shuu              #+#    #+#             */
/*   Updated: 2025/12/09 21:58:08 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    
    public:
        WrongCat(void);
        WrongCat(const WrongCat& copy);
        WrongCat& operator=(const WrongCat& copy);
        ~WrongCat(void);
        void makeSound(void) const;
};

#endif
