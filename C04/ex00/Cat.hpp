/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:32:37 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/01 12:43:31 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
	public :
		Cat();
		Cat (const Cat& old);
		Cat& operator=(const Cat& old);
		~Cat();
		std::string getType() const;
		void makeSound() const;
};
#endif