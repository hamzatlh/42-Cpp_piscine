/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:19:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/16 12:19:52 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"



int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound();
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete i;
	// delete j;
	// return (0);
	Animal* animal = new Animal();
	Dog *dog = dynamic_cast<Dog*>(animal);
	dog->makeSound();
	// if (dog)
	// 	std::cout << "dog" << std::endl;
	// else
	// 	std::cout << "not dog" << std::endl;
}

// int main()
// {
// 	mai();
// 	while(1);
// }

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	meta->makeSound();
// 	delete meta;
// 	delete i;
// 	return (0);
// }
