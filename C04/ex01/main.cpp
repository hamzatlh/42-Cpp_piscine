/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:19:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 20:41:44 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

#define SIZE 10 
int main()
{

	const Animal *animal[SIZE];
	int i; 
	// const Animal **animal = new const Animal*[SIZE];
	for(i = 0; i < SIZE; i++)
	{
		if (i < SIZE / 2)
			animal[i] = new Dog();
		else
			animal[i] = new Cat();
	}
	for(int i = 0; i < SIZE; i++)
	{
		delete animal[i];
	}
	return 0;
}

