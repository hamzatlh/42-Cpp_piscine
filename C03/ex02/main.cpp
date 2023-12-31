/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:30:52 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 21:03:55 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap s1("s1");
	ScavTrap s2("s2");

	// s1.beRepaired(5);
	s1.attack("s2");
	// s1.beRepaired(5);
	// s1.beRepaired(5);
	// s1.attack("s2");
	// s1.attack("s2");
	// ScavTrap S2("s2");
	// ScavTrap S3(s1);
	// ScavTrap s4;
	// s4 = S2;
	// s1.attack("s2");
	// s1.attack("S2");
	// S2.takeDamage(20);
	// S2.takeDamage(20);
	// S2.takeDamage(20);
	// s1.attack("S3");
	// S2.beRepaired(10);
	// S2.beRepaired(10);
	// S2.attack("S3");
	// S3 = S1;
	// S3.takeDamage(20);
	// S3.takeDamage(20);
	// S3.takeDamage(20);
	// S2.beRepaired(20);
	// S2.takeDamage(20);
	// S2.takeDamage(20);
	// S2.beRepaired(5);
	// S3.attack("S4");
	// S4.takeDamage(5);
	s1.beRepaired(5);
	s2.guardGate();
	s1.highFivesGuys();
	return (0);
}