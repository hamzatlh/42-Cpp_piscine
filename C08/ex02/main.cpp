/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 10:29:06 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/01 13:29:22 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "stack: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	return 0;
}


// int main()
// {
// 	std::list<int> mlist;
// 	mlist.push_back(5);
// 	mlist.push_back(17);
// 	std::cout << "top: " << mlist.back() << std::endl;
// 	mlist.pop_back();
// 	std::cout << "size: " << mlist.size() << std::endl;
// 	mlist.push_back(3);
// 	mlist.push_back(5);
// 	mlist.push_back(737);
// 	mlist.push_back(0);
// 	std::list<int>::iterator it2 = mlist.begin();
// 	std::list<int>::iterator ite2 = mlist.end();
// 	++it2;
// 	--it2;
// 	std::cout << "stack: ";
// 	while (it2 != ite2)
// 	{
// 		std::cout << *it2 << " ";
// 		++it2;
// 	}
// 	std::cout << std::endl;
// 	// std::list<int> s2(mlist);
// 	return (0);
// }