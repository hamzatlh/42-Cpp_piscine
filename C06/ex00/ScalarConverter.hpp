/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:34:29 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/13 19:34:01 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cctype>
#include <climits>
#include <cfloat>

class ScalarConverter{
	private :
		ScalarConverter();
		ScalarConverter (const ScalarConverter& old);
		ScalarConverter& operator=(const ScalarConverter& old);
	public :
		~ScalarConverter();
		static void convert(std::string str);
		class ImpossibleException : public std::exception{
			public :
				const char* what() const throw(); 
		};
};
#endif