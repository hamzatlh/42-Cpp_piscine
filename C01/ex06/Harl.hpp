/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:44:27 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/13 14:44:48 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP

#include <iostream>
#include <string>
#include <iomanip>


class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};


#endif