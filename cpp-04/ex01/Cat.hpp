/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eassouli <eassouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:56:51 by eassouli          #+#    #+#             */
/*   Updated: 2022/02/09 14:14:26 by eassouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat( std::string type );
	~Cat();
	Cat( Cat const &other );
	Cat &operator=( Cat const &other );

	void	makeSound() const;
};

#endif