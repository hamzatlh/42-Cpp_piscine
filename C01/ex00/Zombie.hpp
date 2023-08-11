/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 21:22:35 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 11:46:21 by htalhaou         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void announce(void);
		void setName(std::string name);
		std::string getName(void);
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif