/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 09:45:57 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/24 11:53:26 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Iter.hpp"

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, sizeof(arr) / sizeof(arr[0]), print);
	std::string arr2[] = {"1", "2", "3", "4", "5"};
	iter(arr2, sizeof(arr2) / sizeof(arr2[0]), print);
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