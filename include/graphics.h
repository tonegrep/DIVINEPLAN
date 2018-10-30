#ifndef _GRAPHICS_H_
#define _GRAPHICS_H_

/** FILE: graphics.h
*   Graphics class primarly draws things
*/

#include <vector>
#include <algorithm>
#include <SFML/Graphics.hpp>
#include "data.h"
#include "architecture.h"


class Graphics {
private:
    template <class CONTAINER>
    void DrawItems(CONTAINER * cont);
public:
    Graphics();
    void Update(sf::RenderWindow & window,\
               Architecture & arch);
    

};


#endif