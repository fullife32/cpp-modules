/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:56:51 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 18:55:26 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
public:
	Cat();
	Cat( std::string type );
	virtual ~Cat();
	Cat( Cat const &other );
	Cat &operator=( Cat const &other );

	void	makeSound() const;
};

#endif