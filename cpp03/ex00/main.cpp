/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 20:42:15 by vico              #+#    #+#             */
/*   Updated: 2021/11/24 15:47:12 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap	clap("Henry");

	clap.attack("Donny");
	clap.takeDamage(8);
	clap.beRepaired(5);
	ClapTrap	clap2("Timothe");

	clap2.setAttackdamage(100);
	clap2.attack("Donny");
	clap2.setHitpoints(100);
	clap2.takeDamage(8);
	std::cout << "ClapTrap " << clap2.getname() << " has " << clap2.getHitpoints() << " hitpoint(s)\n";
}
