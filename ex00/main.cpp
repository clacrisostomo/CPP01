/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 16:42:51 by csantos-          #+#    #+#             */
/*   Updated: 2023/08/27 17:05:23 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void){
	
	Zombie *Z;
	
	Z = newZombie("Zumbi");
	Z->announce();
	randomChump("Darth Vader");
	delete Z;
	return (0);
}