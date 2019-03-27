#include "application.h"

Application::Application() {
    //TODO: add check for this directory
    parser = new Parser("gumno");
    is_on = true;
    window.create(sf::VideoMode(800, 600), "DIVINEPLAN");
    Init();
}

int Application::Init() {
    while (window.isOpen()) {
        //Update graphics, check if buttons are pressed & retrieve updates
        parser->ReadModified(arch);
        window.clear(sf::Color::Cyan);
        graph.Update(window, arch);
        //parser->TrackUpdated();
        
        window.display();
    };
    return EXIT_SUCCESS;
}