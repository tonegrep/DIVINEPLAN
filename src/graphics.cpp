#include "graphics.h"

Graphics::Graphics() {
    //TODO graph init sequence
}

template <class CONTAINER>
void Graphics::DrawItems(CONTAINER * cont, sf::RenderWindow & window) {
    for(auto& item : *cont) {
        window.draw(item);
    }
}

void Graphics::Update(sf::RenderWindow & window, Architecture & arch) {
    /*              *(arch.GetClasses())
    for(std::vector<Data>::iterator it = items.begin(); it != items.end(); ++it) {*/
    DrawItems(arch.GetClasses(), window);
    DrawItems(arch.GetFunctions(), window);
    DrawItems(arch.GetVariables(), window);

}