/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/04 17:17:46 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hit(10), _energy(10),
	_attack(0)
{
	std::cout << "Default constructor called & ";
	std::cout << "ClapTrap " << _name << " activated!" << std::endl;
}

// Copy constructor
/* *this = other only necessary in case of dynamically allocated resources;
in the example below if not specified C++ will generate one automatically,
but CPP98 will issue a warning */
ClapTrap::ClapTrap(const ClapTrap &other)
{
	*this = other;
	std::cout << "Copy constructor called" << std::endl;
}

// Copy assignment operator overload
/* one reason for copy assignment is to avoid memory leask in case of dynamically
allocated resources; Copy assignment allows your class to follow value semantics, 
meaning that each object behaves independently of the others. 
This is often a desirable property in object-oriented programming. */
ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
	this->_name = other._name;
    this->_hit = other._hit;
    this->_energy = other._energy;
    this->_attack = other._attack;
	std::cout <<"Copy assignment operator called" << std::endl;
    return *this;
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy <= 0)
	{
		std::cout << "ClapTrap" << _name << "has zero engery left!" << std::endl;
		return;
	}
	std::cout << _name << " attacks " << target << " resulting in " << _attack
		 << " damage points" << std::endl;
	_energy -= 9;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit <= amount)
	{
		std::cout << "ClapTrap " << _name << " did not survive the attack!"
			<< std::endl;
		return;
	}
	std::cout << "ClapTrap " << _name << " " << amount << " damage!" << std::endl;
	_hit -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= amount)
	{
		std::cout << _name << "repair failed - ciao!" << std::endl;\
		return;
	}
	std::cout << _name << " repair initiated for " << amount << " point!" << std::endl;
	_energy -= 1;
	_hit += amount;
}