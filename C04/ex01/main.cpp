/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:19:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 14:36:17 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	// const Animal *j[4];
	const Animal **j = new const Animal*[4];
	for(int i = 0; i < 2; i++)
	{
		j[i] = new Dog;
	}
	for(int i = 2; i < 4; i++)
	{
		j[i] = new Cat;
	}
	for(int i = 0; i < 4; i++)
	{
		delete j[i];
	}
	delete [] j;
	return 0;
}
