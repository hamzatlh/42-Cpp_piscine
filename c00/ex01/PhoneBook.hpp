/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:52:55 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/13 18:11:07 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"

class PhoneBook{
	
	private:
		Contact contacts[8];
		int nb_of_contacts;
	public:
		PhoneBook();
		void add_contact(Contact contact);
		void search_contact();
		void print_contact(Contact contact);
		void exit_prog();
		void start();
};

#endif