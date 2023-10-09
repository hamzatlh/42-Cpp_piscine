/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:05:17 by htalhaou          #+#    #+#             */
/*   Updated: 2023/10/09 17:35:31 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
   if (ac != 2)
   {
      std::cout << "invalid arguement" << std::endl;
      return (0);
   }
   rpn(av[1]);
   return (0);
}