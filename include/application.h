#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include "architecture.h"
#include "parser.h"
#include "graphics.h"

class Application {

private:
    Parser       parser;
    Architecture arch;
    Graphics     graph;

    bool         is_on;
public:
    Application();
    int Init();
};


#endif