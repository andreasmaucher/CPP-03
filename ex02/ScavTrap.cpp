/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/10 15:31:09 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 50;
    this->_attack = 20;

    std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap " << this->_name << " destructed." << std::endl;
}

void    ScavTrap::attack(std::string const& target)
{
    if (this->_energy <= 0)
	{
        std::cout << "ScavTrap " << this->_name << " has no energy anymore." << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " 
			<< this->_attack << " points of damage!" << std::endl;
    this->_energy -= 1;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}