#ifndef _PARSELOGIC_H_
#define _PARSELOGIC_H_

#include <vector>
#include <fstream>
#include "architecture.h"
#include <experimental/filesystem>

using namespace std::experimental::filesystem;

class IParseLogic {
private:


public:
    virtual int Parse(path source, Architecture & arch) = 0; 
    virtual ~IParseLogic() {};
};


class IParseJava : public IParseLogic {
private:


public:
    int Parse(path source, Architecture & arch);

};


class IParseC : public IParseLogic {
private:


public:
    int Parse(path source, Architecture & arch);
};



#endif