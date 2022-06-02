#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <map>
#include "ATarget.hpp"

class TargetGenerator {
private :
        TargetGenerator(TargetGenerator const &to_copy);
        TargetGenerator &operator=(TargetGenerator const &to_copy);

        std::map<std::string, ATarget*> target_array;
public :
        TargetGenerator();
        ~TargetGenerator();

        void learnTargetType(ATarget *target);
        void forgetTargetType(std::string const &target_name);
        ATarget *createTarget(std::string const &target_name);

};

#endif
