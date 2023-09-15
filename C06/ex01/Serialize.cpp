/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:52:13 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/15 18:58:43 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::Serialize(Serialize const& old)
{
	(*this )= old;
	std::string s1;
	
}

Serialize::~Serialize()
{
}

Serialize& Serialize::operator=(Serialize const& old)
{
	(void)old;
	return (*this);
}

uintptr_t Serialize::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
