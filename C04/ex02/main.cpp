/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:19:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/07 12:14:25 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	AAnimal *b = new Dog();
	AAnimal *c = new Cat();
	std::cout << b->getType() << std::endl;
	std::cout << c->getType() << std::endl;
	b->makeSound();
	c->makeSound();
	delete b;
	delete c;
	return(0);
}

