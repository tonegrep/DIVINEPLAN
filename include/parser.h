#ifndef _PARSER_H_
#define _PARSER_H_

#include <experimental/filesystem>
#include "parselogic.h"
#include "filetracker.h"
#include "architecture.h"

using namespace std::experimental::filesystem;

class Parser {
private:
    path directory;
    FileTracker * track;
    IParseLogic * logic;
public:
    Parser();
    Parser(std::string dir);
    int ReadModified();

};


#endif