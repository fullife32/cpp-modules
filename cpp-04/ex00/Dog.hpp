/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:57:53 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 18:55:31 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
public:
	Dog();
	Dog( std::string type );
	virtual ~Dog();
	Dog( Dog const &other );
	Dog &operator=( Dog const &other );

	void	makeSound() const;
};

#endif