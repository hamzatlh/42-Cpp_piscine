/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 11:32:37 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 19:50:03 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{
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