/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:33:15 by eassouli          #+#    #+#             */
/*   Updated: 2022/01/21 19:37:36 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie
{
private:
	std::string	_name;

public:
	Zombie( std::string zombieName );
	~Zombie();

	void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif