/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:21:39 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 18:51:34 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB{
	private:
	std::string name;
	Weapon* weapon;
	public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon& weapon);
};
#endif