/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:50:35 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 16:39:42 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string Name;
		AMateria*	Inventory[4];
		bool 		tmp[4];
		// int Scount;
	public:
		Character();
		Character(std::string const& name);
		Character(const Character& old);
		Character& operator=(const Character& old);
		~Character();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		std::string const& getName() const;


	void freeAllocation(void);


};

#endif