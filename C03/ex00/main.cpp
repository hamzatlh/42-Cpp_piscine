/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:30:52 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/25 12:45:56 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap s1("s1");

	s1.attack("s2");
	s1.beRepaired(5);
	s1.attack("s2");
	s1.attack("s2");

	// ClapTrap S1("S1");
	// ClapTrap S2("S2");
	// ClapTrap S3("S3");
	// ClapTrap S4("S4");
	// ClapTrap S1;
	// S1.attack("S2");
	// S2.takeDamage(5);
	// S2.takeDamage(5);
	// S2.takeDamage(5);
	// S1.attack("S3");
	// S2.beRepaired(5);
	// S3 = S1;
	// S3.takeDamage(5);
	// S3.takeDamage(5);
	// S3.takeDamage(5);
	// S2.beRepaired(5);
	// S2.takeDamage(5);
	// S2.takeDamage(5);
	// S2.beRepaired(5);
	// S3.attack("S4");
	// S4.takeDamage(5);
	// S4.beRepaired(5);
}