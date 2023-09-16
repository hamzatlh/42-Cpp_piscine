/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:34:29 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/16 19:22:20 by htalhaou         ###   ########.fr       */
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
	if (!std::isdigit(str[0]))
	{
		if (str.length() == 1)
			return (1);
	}
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
		if (str[i] == '.' && str[i] == 'f' && str[i + 1] != '\0')
			return (0);
		if (str[i] == '.' && str[i + 1] == 'f')
			return (0);
		if(str[i] == 'f' && (dot <= 1 && str[i + 1] != 'f' && str[i + 2] == '\0'))
			return (1);
		if (!std::isdigit(str[i]) && dot == 0)
			return (0);
		i++;
	}
	return (0);
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
		if (dot > 1)
			return (0);
		if (!std::isdigit(str[i]) && dot == 1 && str[i + 1] == '\0')
			return (0);
		i++;
	}
	return (1);
}

const char* ScalarConverter::ImpossibleException::what() const throw()
{
		return ("char : impossible\nint : impossible\nfloat : impossible\ndouble : impossible"); 
}

void ScalarConverter::convert(std::string str)
{

	std::cout << std::fixed << std::setprecision((str.find(".") == std::string::npos ? 0 : (str.length() - str.find(".") - 1)));
	char *end;
	double str2 = std::strtod(str.c_str(), &end);
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inf" || str == "-inf" || str == "-inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str2 << 'f' << std::endl;
		std::cout << "double : " << str2 << std::endl;
		return ;
	}
	else if (isChar(str))
	{
		if (*end != '\0' && str.length() != 1)
			throw ImpossibleException();
		std::cout << std::fixed << std::setprecision((str.length() - str.find('.') - 1));
		std::cout << "char: '" << str[0] << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
		std::cout << "float: " << static_cast<double>(str[0]) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
	}
	else if (isInt(str))
	{
		char *end;
		double i = std::strtod(str.c_str(), &end);
		std::cout << std::fixed << std::setprecision((str.find(".") == std::string::npos ? 1 : (str.length() - str.find(".") - 1)));
		if (i < 32 || i > 126)
		{
			if (i > CHAR_MAX || i < CHAR_MIN || *end != '\0')
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
		std::cout << "float : " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
	}
	else if (isFloat(str))
	{
		char *end;
		double f = std::strtod(str.c_str(), &end);
		std::cout << std::fixed << std::setprecision((str.find(".") == std::string::npos ? 1 : (str.length() - str.find(".") - 2)));
		if (*end != '\0' && strlen(end) != 1)
			throw ImpossibleException();
		if (f < 32 || f > 126)
		{
			if (f > INT_MAX || f < INT_MIN || *end != '\0')
				std::cout << "char : impossible" << std::endl;
			else
				std::cout << "char: Non displayable" << static_cast<char>(f) << "'" << std::endl;	
		}
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
		std::cout << std::fixed << std::setprecision((str.find(".") == std::string::npos ? 1 : (str.length() - str.find(".") - 1)));
		char *end;
		double d = std::strtod(str.c_str(), &end);
		if (*end != '\0' && str.length() != 1)
			throw ImpossibleException();
		if (d < 32 || d > 126 )
		{
			if (d > INT_MAX || d < INT_MIN || *end != '\0')
				std::cout << "char : impossible" << std::endl;
			else
				std::cout << "char: Non displayable" << static_cast<char>(d) << std::endl;	
		}
		else
			std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
		std::cout << "int: ";
		if (d > INT_MAX || d < INT_MIN)
			std::cout << "impossible" << std::endl;
		else
			std::cout << static_cast<int>(d) << std::endl;
		
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else
		throw ImpossibleException();
}