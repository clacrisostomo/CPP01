/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csantos- <csantos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 17:28:55 by csantos-          #+#    #+#             */
/*   Updated: 2023/08/27 17:49:12 by csantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(std::string name){
	this->_name = name;
	return ;
}

Zombie::Zombie(){
	this->_name = "";
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(void){
	return(_name);
}

void Zombie::setName(std::string name){
	_name = name;
}

Zombie::~Zombie(){
	std::cout << _name << " is dead!" << std::endl;
}