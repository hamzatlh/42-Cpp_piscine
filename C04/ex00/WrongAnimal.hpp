/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 17:53:38 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 10:11:31 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal{
	protected :
		std::string type;
	public :
		WrongAnimal();
		WrongAnimal(const WrongAnimal& old);
		WrongAnimal& operator=(const WrongAnimal& old);
		~WrongAnimal();
		void makeSound() const;
		std::string getType() const;
};

#endif