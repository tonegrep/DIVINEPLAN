#ifndef _PARSELOGIC_H_
#define _PARSELOGIC_H_

#include <vector>
#include <experimental/filesystem>

using namespace std::experimental::filesystem;

class ParseLogic {
private:


public:
    virtual int Parse(const std::vector<path> & modified) = 0; 
    virtual ~ParseLogic();
};


class ParseJava : public ParseLogic {
private:


public:
    int Parse(const std::vector<path> & modified);

};


class ParseC : public ParseLogic {
private:


public:
    int Parse(const std::vector<path> & modified);
};



#endif