/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:30:52 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 20:47:42 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap S1("S1");
	ClapTrap S2("S2");
	ClapTrap S3("S3");
	ClapTrap S4("S4");
	ClapTrap s5;
	s5.attack("s5");
	S1.attack("S2");
	S2.beRepaired(5);
	S2.takeDamage(5);
	S2.takeDamage(5);
	S2.takeDamage(5);
	S1.attack("S3");
	S3 = S1;
	S3.takeDamage(5);
	S3.takeDamage(5);
	S3.takeDamage(5);
	S2.beRepaired(5);
	S2.takeDamage(5);
	S2.takeDamage(5);
	S2.beRepaired(5);
	S3.attack("S4");
	S4.takeDamage(5);
	S4.beRepaired(5);
	S4.takeDamage(5);
	S4.takeDamage(5);
	S4.takeDamage(5);
	S4.takeDamage(5);
}