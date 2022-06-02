/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:54:15 by abonnel           #+#    #+#             */
/*   Updated: 2022/06/01 18:19:23 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL
#define ASPELL

#include <iostream>

class ATarget;

class ASpell {
	protected : 
		std::string name;
		std::string effects;
	
	public :
		ASpell();
		ASpell(const ASpell &to_copy);
		ASpell(std::string const &name, std::string const &effects);
		ASpell &operator=(const ASpell &to_copy);
		virtual ~ASpell();

		std::string const &getName() const;
		std::string const &getEffects() const;

		virtual ASpell *clone() const = 0;

		void launch(ATarget const &target) const;
};

#include "ATarget.hpp"

#endif
