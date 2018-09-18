#ifndef _PARSER_H_
#define _PARSER_H_

#include <experimental/filesystem>
#include "parselogic.h"
#include "filetracker.h"

using namespace std::experimental::filesystem;

class Parser {
private:
    path directory;
    FileTracker * track;
    ParseLogic * logic;
public:

    Parser(std::string dir);
    int ReadModified();

};


#endif