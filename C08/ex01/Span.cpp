/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:56:20 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/30 17:53:22 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	this->N = 0;
	this->tab.reserve(0);
}

Span::Span(unsigned int n)
{
	this->N = n;
	this->tab.reserve(n);
}

Span::Span(Span const& src)
{
	*this = src;
}


Span& Span::operator=(Span const& src)
{
	if (this == &src)
		return (*this);
	this->N = src.N;
	this->tab = src.tab;
	return (*this);
}


Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (this->tab.size() >= this->N)
		throw std::exception();
	this->tab.push_back(n);
}

int Span::shortestSpan()
{
	unsigned int i;
	i = 1;
	if (this->tab.size() <= 1)
		throw std::exception();
	std::sort(tab.begin(), tab.end());
	int min = INT_MAX;
	while (i < tab.size())
	{
		if (tab[i] - tab[i - 1] < min)
			min = tab[i] - tab[i - 1];
		i++;
	}
	return (min);
}

int Span::longestSpan()
{
	unsigned int i;
	i = 1;
	if (this->tab.size() <= 1)
		throw std::exception();
	std::sort(tab.begin(), tab.end());
	int max = tab[tab.size() - 1] - tab[0];
	return (max);
}

void Span::addNumberbiss(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::cout << "size: " << this->tab.size() << std::endl;
	if (this->tab.size() + std::distance(begin, end) > this->N)
	{
		std::cout << "size: " << this->tab.size() << std::endl;
		throw std::exception();
	}
	std::cout << "size: " << this->tab.size() << std::endl;
	// this->tab.insert(this->tab.end(), begin, end);
	for (std::vector<int>::iterator it = begin; it != end; it++)
		this->tab.push_back(*it);
}