/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:11:53 by abonnel           #+#    #+#             */
/*   Updated: 2022/06/01 17:32:34 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(){
};

ASpell::ASpell(const ASpell &to_copy){
	name = to_copy.name;
	effects = to_copy.effects;
};

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects) {

};

ASpell &ASpell::operator=(const ASpell &to_copy){
	name = to_copy.name;
    effects = to_copy.effects;
	return (*this);
};

ASpell::~ASpell(){
};


std::string const &ASpell::getName() const{
	return name;
};

std::string const &ASpell::getEffects() const{
	return effects;
};

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
};
