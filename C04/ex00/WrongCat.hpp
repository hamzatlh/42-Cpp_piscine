/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 18:15:33 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 12:11:39 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public :
		WrongCat();
		WrongCat(const WrongCat& old);
		WrongCat& operator=(const WrongCat& old);
		~WrongCat();
		void makeSound() const;
};
#endif