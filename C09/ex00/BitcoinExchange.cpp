/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:46:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/03 21:02:40 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int checkLine(std::string line)
{
    static bool isFirstLine = true;
	if (isFirstLine)
	{
		isFirstLine = false;
		if (line != "date,exchange_rate")
		{
			std::cout << "Error: first line is not correct" << std::endl;
			return (1);
		}
	}
    // if (line.find(',') == std::string::npos)
    // {
    //     std::cout << "Error: line is not correct" << std::endl;
    //     return (1);
    // }
    if (isFirstLine == false &&  line.find_first_not_of("0123456789-") != std::string::npos)
    {
        std::cout << "line " << line << std::endl;
        std::cout << "Error: not a number" << std::endl;
        return (1);
    }
    return (0);
}



int parse_data(std::string filename)
{
    std::vector<std::string> vec;
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string line;
    while (std::getline(file, line))
    {
        if (checkLine(line) == 1)
            return (1);
        else
            vec.push_back(line);
    }
    for (std::vector<std::string>::size_type i = 0; i < vec.size(); i++)
    {
        std::cout << "==>" << vec[i] << std::endl;
    }
    file.close();
    return 0;
}

