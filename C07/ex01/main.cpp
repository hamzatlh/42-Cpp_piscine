/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:45:57 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/02 10:15:00 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"

typedef int b;
b main(void)
{
	b arr[] = {1, 2, 3, 4, 5};
	iter(arr, sizeof(arr) / sizeof(arr[0]), print<b>);

	
	// std::string arr2[] = {"hello", "2", "3", "4", "5"};
	// iter(arr2, sizeof(arr2) / sizeof(*arr2), print<std::string>);
	return (0);
}

// int main()
// {
// 	int tab[] = { 0, 1, 2, 3, 4 };
// 	Awesome tab2[5];
// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);
// 	return 0;
// }