/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:40:55 by vico              #+#    #+#             */
/*   Updated: 2021/11/26 19:26:56 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "animal created\n";
	this->type = "null";
}

Animal::Animal(std::string type)
{
	std::cout << "animal created\n";
	this->type = type;
}

Animal::Animal(Animal const &copy)
{
	std::cout << "animal copied\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << "animal destroyed\n";
}

std::string Animal::getType() const
{
	return this->type;
}

void	Animal::makeSound() const
{
}

Animal&	Animal::operator=(Animal const &obj)
{
	this->type = obj.getType();
	return *this;
}
