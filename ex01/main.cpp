/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sumedai <sumedai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 22:05:37 by shuu              #+#    #+#             */
/*   Updated: 2025/12/14 11:33:24 by sumedai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    {
        std::cout << "pdf test" << std::endl;
        const Animal* meta = new Animal();
        const Animal* j = new Dog();
        const Animal* i = new Cat();
        std::cout << "----------" << std::endl;
        Dog d2;
        Dog dog3(d2);
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    // std::cout << "---------------------------------------------" << std::endl;
    // {
    //     std::cout << "deep copy test" << std::endl;
    //     Dog dog1;
    //     Dog dog2;
    //     dog2 = dog1;
    //     std::cout << "dog1 idea 2 = " << dog1.getIdea(2) << std::endl;
    //     std::cout << "dog2 idea 2 = " << dog2.getIdea(2) << std::endl;
    //     std::cout << "deep copy" << std::endl;
    //     dog1.addIdea(2, "namunamu");
    //     std::cout << "dog1 idea 2 = " << dog1.getIdea(2) << std::endl;
    //     std::cout << "dog2 idea 2 = " << dog2.getIdea(2) << std::endl;
    //     std::cout << "dog1's brain adress = " << dog1.getBrain() << std::endl;
    //     std::cout << "dog2's brain adress = " << dog2.getBrain() << std::endl;
    //     Dog dog3(dog1);
    //     std::cout <<  "dog3 idea 2 = " << dog3.getIdea(2) << std::endl;
    //     std::cout << "dog3's brain adress = " << dog3.getBrain() << std::endl;
    // }
    // std::cout << "---------------------------------------------" << std::endl;
    // {
    //     Animal* animals[10];

    //     for (int i = 0; i < 5; i++)
    //         animals[i] = new Dog();
    //     for (int i = 5; i < 10; i++)
    //         animals[i] = new Cat();

    //     for (int i = 0; i < 10; i++)
    //         delete animals[i]; 
    // }
    // std::cout << "\n" << std::endl;
    // return 0;
}
