/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:52:18 by shuu              #+#    #+#             */
/*   Updated: 2025/12/09 22:46:01 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include  <iostream>

class WrongAnimal {

    protected:
        std::string _type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal& operator=(const WrongAnimal& copy);
        ~WrongAnimal(void);
        const std::string& getType(void) const;
        void makeSound(void) const;
};

#endif
