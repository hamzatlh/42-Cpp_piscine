/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 10:22:03 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/07 12:08:36 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include <iomanip>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const AAnimal& old);
		AAnimal& operator=(const AAnimal& old);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif