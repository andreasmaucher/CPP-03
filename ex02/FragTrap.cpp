/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/27 15:56:56 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 100;
    this->_attack = 30;

    std::cout << "FragTrap " << this->_name << " constructed." << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destructed." << std::endl;
}

void    FragTrap::highFive( void ) 
{
    if (this->_energy <= 0) 
	{
        std::cout << "FragTrap " << this->_name << " has no energy left - ciao." << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name << " high fives everyone." << std::endl;
    this->_energy -= 1;
}