/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:32:37 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/08 15:46:22 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private :
		Brain *brain;
	public :
		Cat();
		Cat (const Cat& old);
		Cat& operator=(const Cat& old);
		~Cat();
		void makeSound() const;
};
#endif