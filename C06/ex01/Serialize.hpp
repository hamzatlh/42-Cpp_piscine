/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:52:25 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/15 19:09:10 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP


#include <iostream>
#include <cstdint>

struct Data
{
	int n;
};

class Serialize
{
	private:
		Serialize();
		Serialize(Serialize const & src);
		Serialize & operator=(Serialize const & rhs);
	public:
		~Serialize();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif