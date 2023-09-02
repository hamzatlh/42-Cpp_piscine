/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:32:05 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 20:50:20 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <iomanip>

class ClapTrap {
	private :
		std::string Name;
		int Hit_points;
		int Energy_points;
		int Attack_damage;
	public :
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& old);
		ClapTrap& operator=(const ClapTrap& old);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif