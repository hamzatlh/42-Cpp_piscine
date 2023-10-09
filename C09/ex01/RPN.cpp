/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:04:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/09 20:09:23 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int		is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return (1);
	return (0);
}

int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

int		is_valid(char c)
{
	if (is_operator(c) || is_digit(c) || is_space(c))
		return (1);
	return (0);
}

int		is_empty(std::stack<int> stack)
{
	if (stack.empty())
		return (1);
	return (0);
}

int		is_error(std::string str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		if (is_space(str[i]))
			count++;
		if (!is_valid(str[i]))
			return (1);
		i++;
	}
	if (count == i)
		return (1);
	return (0);
}

int		app_operation(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/' && b != 0)
		return (a / b);
	if (op == '/' && b == 0)
	{
		std::cout << "Error" << std::endl;
		exit (1);
	}
	return (0);
}

int		rpn(std::string str)
{
	std::stack<int> stack;
	int i = 0;
	int a;
	int b;
	int res;
	if (is_error(str))
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	while (str[i])
	{
		if (is_digit(str[i]))
		{
			stack.push(str[i] - '0');
			while (is_digit(str[i]))
				i++;
		}
		if (is_operator(str[i]))
		{
			if (is_empty(stack))
			{
				std::cout << "Error" << std::endl;
				return (0);
			}
			b = stack.top();
			stack.pop();
			if (is_empty(stack))
			{
				std::cout << "Error" << std::endl;
				return (0);
			}
			a = stack.top();
			stack.pop();
			res = app_operation(a, b, str[i]);
			stack.push(res);
		}
		i++;
	}
	if (stack.size() != 1)
	{
		std::cout << "Error" << std::endl;
		return (0);
	}
	std::cout << stack.top() << std::endl;
	return (0);
}

