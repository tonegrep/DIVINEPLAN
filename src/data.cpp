#include "data.h"

sf::Shape * Class::getBody() {
return &body;
} 

sf::Shape * Variable::getBody() {
return &body;
}

sf::Shape * Func::getBody() {
return &body;
} 