#include "TargetGenerator.hpp"
void TargetGenerator::learnTargetType(ATarget *target) {
        if (target)
                target_array.insert(std::make_pair(target->getType(), target->clone()));
};

void TargetGenerator::forgetTargetType(std::string const &target_name){
        std::map<std::string, ATarget*>::iterator it = target_array.find(target_name);
        if (it != target_array.end())
                delete it->second;
        target_array.erase(target_name);
};

ATarget * TargetGenerator::createTarget(std::string const &target_name) {
        ATarget *target_ptr = NULL;
        std::map<std::string, ATarget*>::iterator it = target_array.find(target_name);
        if (it != target_array.end())
                target_ptr =  it->second->clone();
        return target_ptr;
};

TargetGenerator:: TargetGenerator() {};
TargetGenerator:: ~TargetGenerator() {
        for (std::map<std::string, ATarget*>::iterator it = target_array.begin(); it != target_array.end(); it++)
                delete it->second;
};
