/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 21:52:18 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 19:40:29 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include  <iostream>

class WrongAnimal {

    protected:
        std::string type;
    public:
        WrongAnimal(void);
        WrongAnimal(const WrongAnimal& copy);
        WrongAnimal(std::string type);
        WrongAnimal& operator=(const WrongAnimal& copy);
        ~WrongAnimal(void);
        const std::string& getType(void) const;
        void makeSound(void) const;
};

#endif
