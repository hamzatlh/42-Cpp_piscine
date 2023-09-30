/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 11:56:05 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/30 11:29:50 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
	private:
		unsigned int N;
		std::vector<int> tab;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const& src);
		Span& operator=(Span const& src);
		~Span();
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
};

#endif