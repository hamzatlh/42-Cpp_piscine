/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:46:29 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/08 17:09:41 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "file not found" << std::endl;
        return (1);
    }
    parse_input(argv[1]);
    return (0);
}