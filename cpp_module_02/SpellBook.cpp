#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell) {
	if (spell)
		spell_array.insert(std::make_pair(spell->getName(), spell->clone()));
};

void SpellBook::forgetSpell(std::string const &spell_name){
	std::map<std::string, ASpell*>::iterator it = spell_array.find(spell_name);
	if (it != spell_array.end())
		delete it->second;
	spell_array.erase(spell_name);
};

ASpell * SpellBook::createSpell(std::string const &spell_name) {
	ASpell *spell_ptr = NULL;
	std::map<std::string, ASpell*>::iterator it = spell_array.find(spell_name);
        if (it != spell_array.end())
                spell_ptr =  it->second;
	return spell_ptr;
};

SpellBook:: SpellBook() {};
SpellBook:: ~SpellBook() {
	for (std::map<std::string, ASpell*>::iterator it = spell_array.begin(); it != spell_array.end(); it++){
		std::cout << "DELETE" << std::endl;
		delete it->second;};
	spell_array.clear();
};
