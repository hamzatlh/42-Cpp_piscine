/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:47:36 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/16 12:10:14 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
	Data *data = new Data;
	data->n = 42;
	uintptr_t raw = Serialize::serialize(data);
	std::cout << raw << std::endl;
	Data *data2 = Serialize::deserialize(raw);
	std::cout << data2->n << std::endl;
	delete data;
	return 0;
}