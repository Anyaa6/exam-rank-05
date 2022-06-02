/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:43:57 by abonnel           #+#    #+#             */
/*   Updated: 2022/06/01 18:17:33 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#ifndef WARLOCK_HPP
#define  WARLOCK_HPP
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock {
	private :
		std::string name; 
		std::string title;

		Warlock(Warlock const &to_copy);
		Warlock();
		Warlock &operator=(Warlock const &to_copy);

		SpellBook spells;

	public : 
		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &given_title);

		void introduce() const;

		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string spell_name);
		void launchSpell(std::string spell_name, ATarget &target);


};

#endif //WARLOCK_HPP
