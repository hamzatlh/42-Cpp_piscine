/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:54:24 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 18:16:19 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int d()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// std::string name = "me";
	// Character me(name);
	
	// ICharacter* me = new Character("me");
	// // AMateria* tmp1 = new Cure() ;
	// // AMateria* tmp1 = new Cure() ;
	// // AMateria* tmp1 = new Cure() ;
	// // AMateria* tmp1 = new Cure() ;
	// // AMateria* tmp1 = new Cure() ;
	// // AMateria* tmp2 = new Cure() ;
	// // AMateria* tmp3 = new Ice() ;
	// // AMateria* tmp4 = new Cure() ;
	// // tmp = src->createMateria("ice");
	// // me->equip(tmp1);
	// // me->equip(tmp2);
	// // me->equip(tmp3);
	// // me->equip(tmp4);
	// me->equip(new Ice());
	// me->equip(new Ice());
	// me->equip(new Ice());
	// me->equip(new Ice());
	// me->equip(new Ice());
	
	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	// me->unequip(3);
	
	// me->unequip(4);
	// // me->use(0, *me);

	// Character a("me");
	// Character b("yor");

	Character c;
	Character c3(c);


	// a = b;

	

	// // for (int i = 0; i < 100000; i++)
	// // {
	// // 	me->equip(new Ice());
	// // 	me->unequip(0);
	// // 	me->use(0, *me);
	// // 	me->equip(new Cure());
	// // 	me->use(0, *me);

	// // }
	// // Character /you("you");
	// // ICharacter* you = new Character("you");
	// // Character you("me");
	// // you = me;
	
	// // for (int i = 0; i < 2; i++)
	// // {
	// // 	you->equip(new Ice());
	// // 	you->unequip(0);
	// // 	you->equip(new Cure());
	// // }
	
	// // tmp = src->createMateria("cure");
	// // ICharacter* bob = new Character("bob");
	// // me->unequip(1);
	
	// // me->equip(tmp1);
	
	// // me->unequip(3);
	
	// // me->equip(tmp3);
	
	// // me->unequip(0);
	// // me->unequip(1);
	// // me->equip(tmp2);
	// // me->equip(tmp2);

	// // me->use(0, *me);
	// // me->use(1, *me);
	// // me->use(2, *me);
	// // me->use(3, *me);
	// // me->use(-10, *bob);
	// // delete bob;
	// delete me;
	// // delete you;
	// delete src
	return 0;
}

int main()
{
	d();
	while(1);
}