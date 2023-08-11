/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 17:00:40 by htalhaou          #+#    #+#             */
/*   Updated: 2023/08/11 15:34:08 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


PhoneBook::PhoneBook()
{
	this->nb_of_contacts = 0;
}

void PhoneBook::add_contact(Contact contact)
{
	if (nb_of_contacts < 8)
	{
		contacts[nb_of_contacts] = contact;
		nb_of_contacts++;
	}
	else
	{
		for (int i = 7; i < 0; i--)
			contacts[i] = contacts[i + 1];
		contacts[7] = contact;
	}
}

void PhoneBook::search_contact() {
    int index;
    std::string input;

    std::cout << std::setw(10) << "index" << "|";
    std::cout << std::setw(15) << "first name" << "|";
    std::cout << std::setw(15) << "last name" << "|";
    std::cout << std::setw(15) << "nickname" << std::endl;

    for (int i = 0; i < nb_of_contacts; i++) {
        std::cout << std::setw(10) << i << "|";
        std::string first_name = contacts[i].get_first_name();
        std::string last_name = contacts[i].get_last_name();
        std::string nickname = contacts[i].get_nickname();
        
        if (first_name.length() > 9) {
            first_name = first_name.substr(0, 9) + ".";
        }
        if (last_name.length() > 9) {
            last_name = last_name.substr(0, 9) + ".";
        }
        if (nickname.length() > 9) {
            nickname = nickname.substr(0, 9) + ".";
        }

        std::cout << std::setw(10) << std::right << first_name << "|";
        std::cout << std::setw(10) << std::right << last_name << "|";
        std::cout << std::setw(10) << std::right << nickname << std::endl;
    }

    std::cout << "Enter index of the contact you want to see : ";
    std::cin >> input;
    if (std::isdigit(input[0])) {
        index = std::atoi(input.c_str()); // to_change
        if (index >= 0 && index < nb_of_contacts)
            print_contact(contacts[index]);
        else
            std::cout << "Invalid index" << std::endl;
    } else {
        std::cout << "Invalid input" << std::endl;
    }
}


void PhoneBook::exit_prog()
{
	std::cout << "Exiting program..." << std::endl;
	// exit (0);
}

void PhoneBook::print_contact(Contact contact)
{
	std::cout << "first name : " << contact.get_first_name() << std::endl;
	std::cout << "last name : " << contact.get_last_name() << std::endl;
	std::cout << "nickname : " << contact.get_nickname() << std::endl;
	std::cout << "phone number : " << contact.get_phone_number() << std::endl;
	std::cout << "darkest secret : " << contact.get_darkest_secret() << std::endl;
}

void PhoneBook::start()
{
	std::string input;

	while (1)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT) : ";
		std::cin>> input;
		if (input == "ADD")
		{
			Contact new_contact;
			std::string first_name;
			std::cout << "Enter first name : ";
			std::cin >> first_name;
			new_contact.set_first_name(first_name);
			std::string last_name;
			std::cout << "Enter last name : ";
			std::cin >> last_name;
			new_contact.set_last_name(last_name);
			std::string nickname;
			std::cout << "Enter nickname : ";
			std::cin >> nickname;
			new_contact.set_nickname(nickname);
			std::string dark_secret;
			std::cout << "Enter dark_set : ";
			std::cin >> dark_secret;
			new_contact.set_darkest_secret(dark_secret);
			std::string phone_number;
			bool validPhoneNumber = false;
    		while (!validPhoneNumber) {
    		    std::cout << "Enter phone_number : ";
    		    std::cin >> phone_number;
		
    		    if (phone_number.length() == 10 && std::all_of(phone_number.begin(), phone_number.end(), ::isdigit)) {
    		        validPhoneNumber = true;
    		    } else {
    		        std::cout << "Invalid input, enter a 10 digit number!" << std::endl;
    		    }
    		}

			new_contact.set_phone_number(phone_number);
			add_contact(new_contact);
		}
		else if (input == "SEARCH")
			search_contact();
		else if (input == "EXIT")
		{
			exit_prog();
			break;
		}
		else
			std::cout << "Invalid command" << std::endl;
	}
}
