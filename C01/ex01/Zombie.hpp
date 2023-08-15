/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:06:42 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/15 12:48:07 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>
# include <iomanip>

class Zombie
{
	private:
		std::string name;
	public:
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif