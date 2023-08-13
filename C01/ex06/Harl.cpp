/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:44:36 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/13 15:33:18 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nthink I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month" << std::endl;
}


void Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"debug", "info", "warning", "error"};
	int i; 
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			break;
	}
	switch (i)
	{
	case 0:
		this->debug();
	case 1:
		this->info();
	case 02:
		this->warning();
	case 03:
		this->error();
		break;
	default :
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
