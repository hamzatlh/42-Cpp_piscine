/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:20:11 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/02 14:37:21 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	private :
		std::string ideas[100];
	public :
		Brain();
		Brain(const Brain& old);
		Brain& operator=(const Brain& old);
		~Brain(); 
};

#endif