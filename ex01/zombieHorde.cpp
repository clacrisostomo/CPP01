/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:35:16 by csantos-          #+#    #+#             */
/*   Updated: 2023/08/27 17:51:24 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "./Zombie.hpp"

Zombie* zombieHorde(int n, std::string name){
	
	Zombie *horde = new Zombie[n];

	for (int i = 0; i < n; i++){
		horde[i].setName(name);
	}

	return horde;
}