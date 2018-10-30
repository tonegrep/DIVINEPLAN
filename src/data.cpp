#include "data.h"

sf::CircleShape * Class::GetBody() {
    return &body;
} 

sf::RectangleShape * Variable::GetBody() {
    return &body;
}

sf::CircleShape * Func::GetBody() {
    return &body;
} 

