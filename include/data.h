#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>
#include <list>

class Data {
protected:
    std::string name;
public:


};

class Variable : public Data {
private:
    std::string variable_type;

};

class Func : public Data {
private:
    std::list<Variable> params;
    std::string return_value;

};




#endif