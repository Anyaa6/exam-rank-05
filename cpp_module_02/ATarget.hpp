#ifndef ATARGET
#define ATARGET

#include <iostream>

class ASpell;

class ATarget {
	protected :
		std::string type;

	public :
		ATarget();
		ATarget(const ATarget &to_copy);
		ATarget(std::string const &type);
		ATarget &operator=(const ATarget &to_copy);
		virtual ~ATarget();

		std::string const &getType() const;

		virtual ATarget *clone() const = 0;

		void getHitBySpell(ASpell const &spell) const;
};

#include "ASpell.hpp"
#endif
