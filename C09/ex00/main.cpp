/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:46:29 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/05 19:44:11 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "file not found" << std::endl;
        return (1);
    }
    if (parse_input(argv[1]))
    {
        // std::cout << "Error: parse input" << std::endl;
        return (1);
    }
    else
        std::cout << "input file parsed successfuly" << std::endl;
    return (0);
}