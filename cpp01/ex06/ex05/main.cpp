/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 02:40:05 by vico              #+#    #+#             */
/*   Updated: 2021/11/19 22:19:34 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main()
{
	Karen	karen;

	karen.complain(DEBUG);
	karen.complain(INFO);
	karen.complain(WARNING);
	karen.complain(ERROR);
	return 0;
}