/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:34:29 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/13 22:53:42 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter (const ScalarConverter& old)
{
	*this = old;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& old)
{
	(void)old;
	return *this;
}

static int isChar(std::string str)
{
	if (str.length() == 1 && !std::isdigit(str[0]))
            	return (1);
	return (0);
}

static int isInt(std::string str)
{
	int i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}


static int isFloat(std::string str)
{
	int i = 0;
	int dot = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] == '.')
			dot++;
		if (dot > 1)
			return (0);
		if (!std::isdigit(str[i]) && str[i] != '.')
			return (0);
		i++;
	}
	return (1);
}

static int isDouble(std::string str)
{
	int i = 0;
	int dot = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] == '.')
			dot++;
		else if (!std::isdigit(str[i]))
			return (0);
		if (dot > 1)
			return (0);
		i++;
	}
	return (1);
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
	return "impossible";
}

void ScalarConverter::convert(std::string str)
{
	std::cout << std::fixed << std::setprecision((str.length() - str.find('.') - 1));
	if (isChar(str))
	{
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(str[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << ".0" << std::endl;
	}
	else if (isInt(str))
	{
		char *end;
		double i = std::strtod(str.c_str(), &end);
		if (i < 32 || i > 126)
		{
			if (i > INT_MAX || i < INT_MIN || *end != '\0')
				std::cout << "char : impossible" << std::endl;
			else
				std::cout << "char : Non displayable" << std::endl;
		}
		else
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		if (i > INT_MAX || i < INT_MIN  || *end != '\0')
			std::cout << "int : impossible" << std::endl;
		else
			std::cout << "int : " <<  static_cast<int>(i) << std::endl;
		std::cout << "float: ";
		std::cout  << static_cast<float>(i) << "f" << std::endl;
		
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	}
	else if (isFloat(str))
	{
		double f = std::strtod(str.c_str(), NULL);
		if (f < 32 || f > 126)
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
		std::cout << "int: ";
		if (f > INT_MAX || f < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(f) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else if (isDouble(str))
	{
		double d = std::strtod(str.c_str(), NULL);
		if (d < 32 || d > 126)
			std::cout << "char : Non displayable" << std::endl;
		else
			std::cout << static_cast<char>(d) << std::endl;
		std::cout << "int: ";
		if (d > INT_MAX || d < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(d) << std::endl;
		if (d > INT_MAX || d < INT_MAX)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;
	}
}