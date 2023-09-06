/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:55:27 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 13:02:44 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& old);
		AMateria& operator=(const AMateria& old);
		virtual ~AMateria() {std::cout << "AMateria destructor called" << std::endl;};
		std::string const& getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		void setType(std::string const& type);
		std::string const& getName() const;
};

#endif