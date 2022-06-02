/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abonnel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:39:02 by abonnel           #+#    #+#             */
/*   Updated: 2022/06/01 17:52:53 by abonnel          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){
};

ATarget::ATarget(const ATarget &to_copy){
	type = to_copy.type;
};

ATarget::ATarget(std::string const &type): type(type){
};

ATarget &ATarget::operator=(const ATarget &to_copy){
	type = to_copy.type;
	return (*this);
};

ATarget::~ATarget(){
};


std::string const &ATarget::getType() const{
	return type;
};


void ATarget::getHitBySpell(ASpell const &spell) const{
	std::cout << type << " has been " << spell.getEffects() << "!" << std::endl;
};

