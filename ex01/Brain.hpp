/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 23:14:44 by shuu              #+#    #+#             */
/*   Updated: 2025/12/13 19:53:08 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string> 
#include <iostream>

class Brain {
    
    private:
        std::string _ideas[100];
    public:
        Brain(void);
        Brain(const Brain& copy);
        Brain& operator=(const Brain& copy);
        ~Brain(void);
        void addIdea(int i, std::string idea);
        std::string getIdea(int i);
};

#endif
