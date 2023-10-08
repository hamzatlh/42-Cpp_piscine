/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:46:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/08 17:42:59 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int checkLine(std::string line)
{
    static bool isFirstLine = true;
    int count;
    if (line.empty())
    {
        std::cout << "Error: empty line" << std::endl;
        return (1);
    }
    count = std::count(line.begin(), line.end(), ',');
    if (count != 1)
    {
        std::cout << "line " << line << std::endl;
        std::cout << "Error: too many commas" << std::endl;
        return (1);
    }
	if (isFirstLine)
	{
		isFirstLine = false;
		if (line != "date,exchange_rate")
		{
			std::cout << "Error: first line is not correct" << std::endl;
			return (1);
		}
        
	}
    else if (line.find_first_not_of("0123456789-,.") != std::string::npos)
    {
        std::cout << "line " << line << std::endl;
        std::cout << "Error: not a number" << std::endl;
        
        return (1);
    }
    if (line.find_first_of(",") == 0 || line.find_last_of(",") == line.size() - 1)
    {
        std::cout << "Error: comma at the beginning or end of line" << std::endl;
        return (1);
    }
    return (0);
}

int parse_data(std::map<std::string, double> *map)
{
    std::ifstream file("data.csv");
    // std::map<std::string, double> map;
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string line;
    bool isFirstLine = true;
    while (std::getline(file, line))
    {
        if (checkLine(line) == 1)
            return (1);
        else if (isFirstLine)
        {
            isFirstLine = false;
            continue;
        }
        else
        {
            std::string date = line.substr(0, line.find(","));
            std::string rate_str = line.substr(line.find(",") + 1);
            char* end;
            double rate = std::strtod(rate_str.c_str(), &end);
            (*map)[date] = rate;
        }
    }
    if ((*map).empty())
    {
        std::cout << "Error: empty file" << std::endl;
        return (1);
    }
    if ((*map).size() == 1)
    {
        std::cout << "Error: one line" << std::endl;
        return (1);
    }
    // std::cout << "map[2012-11-27]: " << map["2011-01-03"] << std::endl;
    file.close();
    return 0;
}

int check_input(std::string line)
{
    static bool isFirstLine = true;
    int count;
    if (line.empty())
    {
        std::cout << "Error: empty line" << std::endl;
        return (1);
    }
    count = std::count(line.begin(), line.end(), '|');
    if (count != 1)
    {
        std::cout << "Error: too many pipe" << std::endl;
        return (1);
    }
	if (isFirstLine)
	{
		isFirstLine = false;
		if (line != "date | value")
		{
			std::cout << "Error: first line is not correct" << std::endl;
			return (1);
		}
        
	}
    else if (line.find_first_not_of("0123456789-|. ") != std::string::npos)
    {
        std::cout << "line " << line << std::endl;
        std::cout << "Error: not a number" << std::endl;
        return (1);
    }
    if (line.find_first_of("|") == 0 || line.find_last_of("|") == line.size() - 1)
    {
        std::cout << "Error: comma at the beginning or end of line" << std::endl;
        return (1);
    }
    return (0);
}

int parse_input(std::string filename)
{
    std::ifstream file(filename.c_str());
    std::map<std::string, double> map;
    parse_data(&map);
    if (!file.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    std::string line;
    bool isFirstLine = true;
    while (std::getline(file, line))
    {
        if (line.empty())
        {
            std::cout << "Error: empty line" << std::endl;
            continue;
        }
        if (isFirstLine)
        {
            isFirstLine = false;
            if (line != "date | value")
            {
                std::cout << "Error: first line is not correct" << std::endl;
                continue;
            }
            continue;
        }
        else
        {
            int count = std::count(line.begin(), line.end(), '|');
            if (count != 1)
            {
                std::cout << "Error: bad input => " << line << std::endl;
                continue;
            }
            std::string date = line.substr(0, line.find("|"));
            std::string rate_str = line.substr(line.find("|") + 1);
            if (date.size() != 11 || date[4] != '-' || date[7] != '-')
            {
                std::cout << "date: " << date << std::endl;
                std::cout << "Error: wrong date format" << std::endl;
                continue;
            }
            if (date[5] > '1' || (date[5] == '1' && date[6] > '2') || date[8] > '3' || (date[8] == '3' && date[9] > '1') \
                || (date[5] == '0' && date[6] == '0' )|| (date[8] == '0' && date[9] == '0'))
            {
                std::cout << "Error: wrong date format" << std::endl;
                continue;
            }
            if (date[5] == '0' && date[6] == '2')
            {
                if (date[8] > '2' || (date[8] == '2' && date[9] > '9'))
                {
                    std::cout << "Error: wrong date format" << std::endl;
                    continue;
                }
            }
            char* end;
            double rate = std::strtod(rate_str.c_str(), &end);
            if(rate < 0 || *end != '\0')
            {
                std::cout << "Error: not a positive number." << std::endl;
                continue;
            }
            if (rate > INT_MAX)
            {
                std::cout << "Error: too large number." << std::endl;
                continue;
            }
            map[date] = rate;
        }
        std::cout << line << std::endl;
    } 
    file.close();
    // for (std::map<std::string, double>::const_iterator it = map.begin(); it != map.end(); ++it) {
    // const std::string& key = it->first;
    // const double& val = it->second;
    // std::cout << key << " => " << val << std::endl;
// }

    return 0;
}