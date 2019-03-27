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
    /**
     * @brief gets new or updated files ready to be drawn
     * 
     * @return int 
     */
    int ReadModified(Architecture arch);

    int TrackUpdated();

};


#endif