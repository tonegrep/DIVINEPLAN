#ifndef _PARSER_H_
#define _PARSER_H_

#include "parselogic.h"
#include "filetracker.h"

class Parser {
private:
    FileTracker * track;
    ParseLogic * logic;
public:
    Parser();

};


#endif