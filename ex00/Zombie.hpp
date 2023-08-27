/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:16:40 by csantos-          #+#    #+#             */
/*   Updated: 2023/08/27 16:19:49 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	
	private:
		
		std::string	_name;

	public:
		
		Zombie(std::string name);
		Zombie();
		~Zombie();

		std::string getName(void);
		void setName(std::string name);
		void announce(void);
		
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif