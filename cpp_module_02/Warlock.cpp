/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:38:02 by abonnel           #+#    #+#             */
/*   Updated: 2022/06/01 18:21:51 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Warlock.hpp"

std::string const &Warlock::getName() const {
	return name;
};

std::string const &Warlock::getTitle() const {
	return title;
};

void Warlock::setTitle(std::string const &given_title) {
	title = given_title;
};

Warlock::Warlock(std::string const &name, std::string const &title): name(name), title(title){
	std::cout << name << ": This looks like another boring day." << std::endl;	
};

Warlock::~Warlock() {
	std::cout << name << ": My job here is done!"<< std::endl;
};

void Warlock::introduce() const {
	std::cout << name << ": I am " << name << ", " << title  << "!" << std::endl;
};

void Warlock::learnSpell(ASpell *spell) {
	if (spell)
		spells.learnSpell(spell);
};

void Warlock::forgetSpell(std::string spell_name){
	spells.forgetSpell(spell_name);
};

void Warlock::launchSpell(std::string spell_name, ATarget &target){
	ASpell *spell_ptr = spells.createSpell(spell_name);

	if (spell_ptr)
		spell_ptr->launch(target);
};
