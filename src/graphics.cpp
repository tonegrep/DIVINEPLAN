#include "graphics.h"

Graphics::Graphics() {
    //TODO graph init sequence
}

template <class CONTAINER>
void DrawItems(CONTAINER * cont) {
    for(auto& item : *cont) {
        window.draw(item);
    }
}

void Graphics::Update(sf::RenderWindow & window, Architecture & arch) {
    /*              *(arch.GetClasses())
    for(std::vector<Data>::iterator it = items.begin(); it != items.end(); ++it) {*/
    DrawItems(arch.GetClasses());
    DrawItems(arch.GetFunctions());
    DrawItems(arch.GetVariables());

}