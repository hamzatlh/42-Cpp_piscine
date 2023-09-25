/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 11:11:28 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/24 13:42:53 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> arr1;
    std::cout << "default constructor: \n" << "arr1 size: " << arr1.size() << std::endl;
    std::cout << std::endl;
    
    Array<int> arr2(5);
    std::cout << "constructor: \n" << "arr2 size: " << arr2.size() << std::endl;
    std::cout << std::endl;
    
    Array<int> arr3(arr2);
    std::cout << "copy constructor: \n" << "arr3 size: " << arr3.size() << std::endl;
    std::cout << std::endl;
    
    Array<int> arr4 = arr2;
    std::cout << "copy assainement: \n" << "arr4 size: " << arr4.size() << std::endl;
    std::cout << std::endl;
    
    for (unsigned int i = 0; i < arr2.size(); i++)
    {
        arr2[i] = i;
    }
    for (unsigned int i = 0; i < arr2.size(); i++)
    {
        std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
    }
    std::cout << std::endl;
    try
    {
        std::cout << "try to access arr2[6]: " << arr2[6] << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    // int *p = 0;
    // int *po = NULL;
    std::cout << (void *)0 << std::endl; 
    std::cout << NULL << std::endl; 
    return 0;
}