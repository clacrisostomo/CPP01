/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:25:22 by csantos-          #+#    #+#             */
/*   Updated: 2023/08/27 17:49:08 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{

	private:

		std::string _name;
		
	public:
	
		Zombie(std::string name);
		Zombie();
		~Zombie();

		std::string getName(void);
		void setName(std::string name);
		void announce(void);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int n, std::string name);

#endif