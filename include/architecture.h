#ifndef _ARCHITECTURE_H_
#define _ARCHITECTURE_H_

/** FILE: architecture.h
*   Architecture class contains all the tracked
*   objects that shold be drawn to the screen
*/

#include "data.h"
#include <vector>


class Architecture {
private:
    std::vector<Class> tracked_classes;
    std::vector<Func> tracked_functions;
    std::vector<Variable> tracked_variables;
public:
    std::vector<Class> * GetClasses();
    std::vector<Func> * GetFunctions();
    std::vector<Variable> * GetVariables();
    int PushClass(Class item);
    int PushFunction(Func item);
    int PushVariable(Variable item);

};



#endif