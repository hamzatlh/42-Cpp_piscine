/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:28:13 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/07 12:09:02 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private :
		Brain *brain;
	public :
		Dog();
		Dog (const Dog& old);
		Dog& operator=(const Dog& old);
		~Dog();
		void makeSound() const;
};

#endif