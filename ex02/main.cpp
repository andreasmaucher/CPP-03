/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaucher <amaucher@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:22:27 by amaucher          #+#    #+#             */
/*   Updated: 2024/04/27 15:48:11 by amaucher         ###   ########.fr       */
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

#include "FragTrap.hpp"

int main(void)
{
	FragTrap rockie("Rocky");
	FragTrap rockie2 (rockie);

	rockie.attack("Tyson");
	rockie.takeDamage(1);
	rockie.beRepaired(1);
	rockie.attack("Tyson");
	rockie.takeDamage(10);
	rockie.highFive();

	return (0);
}

