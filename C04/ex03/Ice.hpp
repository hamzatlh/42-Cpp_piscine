/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:30:57 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/05 18:55:47 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const& type);
		Ice(const Ice&  old);
		Ice& operator=(const Ice& old);
		virtual ~Ice();
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const;
};

#endif