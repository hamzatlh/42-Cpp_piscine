/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:46:29 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/03 16:34:18 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main()
{
    std::string filename = "data.csv";
    int result = parse_data(filename);
    if (result == 0)
        std::cout << "Data parsed successfully!" << std::endl;
    else
        std::cout << "Error parsing data." << std::endl;
    return 0;
}