#ifndef _APPLICATION_H_
#define _APPLICATION_H_

/** FILE: application.h
 *  Application is like main class
 *  Keeps app running &stuff
*/

#include "architecture.h"
#include "parser.h"
#include "graphics.h"

class Application {

private:
    Parser             parser;
    Architecture       arch;
    Graphics           graph;
    sf::RenderWindow   window;

    bool         is_on;
public:
    Application();
    int Init();
};


#endif