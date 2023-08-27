/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:38:26 by csantos-          #+#    #+#             */
/*   Updated: 2023/08/27 17:40:30 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void){
	
	Zombie *horde = zombieHorde(40, "Zumbiii");
	for (int i = 0; i < 40; i++)
	{
		std::cout << "[Zombie " << i + 1 << "] ";
		horde->announce();
	}
	delete[] horde;
	return (0);
}