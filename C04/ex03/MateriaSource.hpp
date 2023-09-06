/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htalhaou <htalhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:22:12 by htalhaou          #+#    #+#             */
/*   Updated: 2023/09/06 17:13:02 by htalhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materias[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& old);
		MateriaSource& operator=(MateriaSource const& old);
		~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
		std::string const& getType() const;
};

#endif