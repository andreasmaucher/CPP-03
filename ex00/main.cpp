/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/06/03 15:24:04 by amaucher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Inheritance:
- capability of a class to derive properties from another class
- process in which, new classes are created from the existing classes
- new class created is called “derived class” or “child class” and the
 existing class is known as the “base class” or “parent class”
- new features in the derived class will not affect the base class
*/

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap rockie("Rocky");

	rockie.attack("Tyson");
	rockie.takeDamage(1);
	rockie.beRepaired(1);
	rockie.attack("Tyson");
	rockie.takeDamage(10);

	return (0);
}

