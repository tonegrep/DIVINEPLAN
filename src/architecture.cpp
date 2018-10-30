#include "architecture.h"

std::vector<Class>* Architecture::GetClasses() {
    return &tracked_classes;    
} 
std::vector<Func>* Architecture::GetFunctions() {
    return &tracked_functions;
}
std::vector<Variable>* Architecture::GetVariables() {
    return &tracked_variables;
}

int Architecture::PushClass(Class item) {
    tracked_classes.push_back(item);
    return tracked_classes.size();
}
int Architecture::PushFunction(Func item) {
    tracked_functions.push_back(item);
    return tracked_functions.size();
}
int Architecture::PushVariable(Variable item) {
    tracked_variables.push_back(item);
    return tracked_variables.size();
}