#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook {
private : 
	SpellBook(SpellBook const &to_copy);
	SpellBook &operator=(SpellBook const &to_copy);

	std::map<std::string, ASpell*> spell_array;
public : 
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell_name);
	ASpell *createSpell(std::string const &spell_name);

};

#endif
