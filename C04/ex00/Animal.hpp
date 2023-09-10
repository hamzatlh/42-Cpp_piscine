/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:22:03 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 16:31:19 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include <iomanip>

class Animal{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& old);
		Animal& operator=(const Animal& old);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif