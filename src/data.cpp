#include "data.h"

int Data::SetName(std::string title) {
    name = title;
    return 0;
}

std::string Data::GetName() {
    return name;
}

sf::CircleShape * Class::GetBody() {
    return &body;
} 

sf::RectangleShape * Variable::GetBody() {
    return &body;
}

sf::CircleShape * Func::GetBody() {
    return &body;
} 

