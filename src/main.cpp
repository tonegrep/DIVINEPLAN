#include <iostream>

#include "application.h"
#include "filetracker.h"

int main() {    
    
    Application * app = new Application();
    return app->Init();
    
}