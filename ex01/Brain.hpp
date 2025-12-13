/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shuu <shuu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 23:14:44 by shuu              #+#    #+#             */
/*   Updated: 2025/12/10 15:33:51 by shuu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string> 
#include <iostream>

class Brain {
    
    protected:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(const Brain& copy);
        Brain& operator=(const Brain& copy);
        ~Brain(void);
};

#endif