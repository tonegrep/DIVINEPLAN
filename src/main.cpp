#include <iostream>

#include "application.h"

int main() {    
    Application * app = new Application();
    return app->Init();
}