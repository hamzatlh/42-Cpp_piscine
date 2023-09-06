/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:54:24 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 18:54:49 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// int d()
// {
// 	// IMateriaSource* src = new MateriaSource();
// 	// src->learnMateria(new Ice());
// 	// src->learnMateria(new Cure());
// 	// std::string name = "me";
// 	// Character me(name);
	
// 	// ICharacter* me = new Character("me");
// 	// // AMateria* tmp1 = new Cure() ;
// 	// // AMateria* tmp1 = new Cure() ;
// 	// // AMateria* tmp1 = new Cure() ;
// 	// // AMateria* tmp1 = new Cure() ;
// 	// // AMateria* tmp1 = new Cure() ;
// 	// // AMateria* tmp2 = new Cure() ;
// 	// // AMateria* tmp3 = new Ice() ;
// 	// // AMateria* tmp4 = new Cure() ;
// 	// // tmp = src->createMateria("ice");
// 	// // me->equip(tmp1);
// 	// // me->equip(tmp2);
// 	// // me->equip(tmp3);
// 	// // me->equip(tmp4);
// 	// me->equip(new Ice());
// 	// me->equip(new Ice());
// 	// me->equip(new Ice());
// 	// me->equip(new Ice());
// 	// me->equip(new Ice());
	
// 	// me->unequip(0);
// 	// me->unequip(1);
// 	// me->unequip(2);
// 	// me->unequip(3);
	
// 	// me->unequip(4);
// 	// // me->use(0, *me);

// 	// Character a("me");
// 	// Character b("yor");

// 	Character c;
// 	Character c3(c);


// 	// a = b;

	

// 	// // for (int i = 0; i < 100000; i++)
// 	// // {
// 	// // 	me->equip(new Ice());
// 	// // 	me->unequip(0);
// 	// // 	me->use(0, *me);
// 	// // 	me->equip(new Cure());
// 	// // 	me->use(0, *me);

// 	// // }
// 	// // Character /you("you");
// 	// // ICharacter* you = new Character("you");
// 	// // Character you("me");
// 	// // you = me;
	
// 	// // for (int i = 0; i < 2; i++)
// 	// // {
// 	// // 	you->equip(new Ice());
// 	// // 	you->unequip(0);
// 	// // 	you->equip(new Cure());
// 	// // }
	
// 	// // tmp = src->createMateria("cure");
// 	// // ICharacter* bob = new Character("bob");
// 	// // me->unequip(1);
	
// 	// // me->equip(tmp1);
	
// 	// // me->unequip(3);
	
// 	// // me->equip(tmp3);
	
// 	// // me->unequip(0);
// 	// // me->unequip(1);
// 	// // me->equip(tmp2);
// 	// // me->equip(tmp2);

// 	// // me->use(0, *me);
// 	// // me->use(1, *me);
// 	// // me->use(2, *me);
// 	// // me->use(3, *me);
// 	// // me->use(-10, *bob);
// 	// // delete bob;
// 	// delete me;
// 	// // delete you;
// 	// delete src
// 	return 0;
// }

// int main()
// {
// 	d();
// 	while(1);
// }

int mai()
{
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;
	// return 0;

	// Character a("a");
    
    // a.equip(new Cure());
    // a.equip(new Ice());
    // a.equip(new Cure());
    // a.equip(new Ice());
    
    // a.use(0, a);
    // a.use(1, a);
    // a.use(2, a);
    // a.use(3, a);
	
    // Character b("b");
	
    // b.equip(new Cure());
    // b.equip(new Ice());
    
	// a = b;
    
	// b.use(0, b);
    // b.use(1, b);
	// Character a("a");
    // a.equip(new Cure());
    // a.equip(new Ice());
    // a.equip(new Cure());
    // a.equip(new Ice());
    
    // a.use(0, a);
    // a.use(1, a);
    // a.use(2, a);
    // a.use(3, a);
    
    // Character b("b");
    // b = a;
    // b.use(0, b);
    // b.use(1, b);
    // b.use(2, b);
    // b.use(3, b);

	ICharacter *i = new Character("bob");
    
    i->equip(new Cure());
    i->equip(new Ice());
    i->equip(new Cure());
    i->equip(new Ice());
    
    i->unequip(1);
    i->use(1, *i);
    
    i->unequip(0);
	return (0);
}

int main()
{
	mai();
	while (1);
	return (0);
}