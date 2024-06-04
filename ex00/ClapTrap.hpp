/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/04 17:18:16 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int 		_hit;
		unsigned int 		_energy;
		unsigned int 		_attack;
	
	public:
		// Default constructor
		ClapTrap(std::string name);
		// Copy constructor (create a new object as a copy of an existing one)
		ClapTrap(const ClapTrap &other);
		// Copy assignment operator
		ClapTrap& operator=(const ClapTrap &other);
		// Destructor (in this case no dynamically allocated resources)
		~ClapTrap(void);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif