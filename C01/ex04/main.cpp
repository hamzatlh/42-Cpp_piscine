/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 14:50:25 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/13 10:55:04 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iomanip>
# include <iostream>
# include <string>
# include <fstream>

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream ifs(filename);
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		return (1);
	}
	std::string new_filename = filename + ".replace";
	std::ofstream ofs(new_filename);
	if (!ofs.is_open())
	{
		std::cout << "Error: could not create output file" << std::endl;
		return (1);
	}
	std::string str;
	while (std::getline(ifs, str))
	{
        size_t pos = 0;
        while ((pos = str.find(s1, pos)) != std::string::npos)
		{
            str.erase(pos, s1.length());
            str.insert(pos, s2);
            pos += s2.length();
        }
		ofs << str << std::endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}