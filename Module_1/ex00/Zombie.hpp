/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: safandri <safandri@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:23:58 by safandri          #+#    #+#             */
/*   Updated: 2025/01/09 10:23:55 by safandri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	private:
		std::string m_name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie*	newZombie(std::string m_name);
void	randomChump(std::string m_name);

#endif