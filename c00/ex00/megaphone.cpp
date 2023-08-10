/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:03:18 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/09 19:00:41 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv[i])
	{
		for(int j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
		if (argv[i + 1] != NULL)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}