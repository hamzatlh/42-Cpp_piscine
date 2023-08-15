/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 18:22:04 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/13 12:26:12 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Weapon{
	private:
		std::string type;
	public:
		Weapon(std::string type);
		void setType(std::string type);
		const std::string& getType();
};

#endif