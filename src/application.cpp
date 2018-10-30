#include "application.h"

Application::Application() {
    //parser("..");
    is_on = true;
    window.create(sf::VideoMode(800, 600), "DIVINEPLAN");
}

int Application::Init() {
    while (window.isOpen()) {
        //Update graphics, check if buttons are pressed & retrieve updates
        graph.Update(window, arch);

    };
    return EXIT_SUCCESS;
}