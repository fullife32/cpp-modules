/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 19:08:04 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/11 19:21:07 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_MATERIA_H
# define A_MATERIA_H

#include <string>
#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string const	m_type;
public:
	AMateria();
	AMateria( std::string const &type );
	virtual ~AMateria();
	AMateria( AMateria const &other );
	AMateria &operator=( AMateria const &other );

	std::string const	&getType() const;

	virtual AMateria*	clone() const = 0;
	virtual void		use( ICharacter& target ) const;
};

#endif