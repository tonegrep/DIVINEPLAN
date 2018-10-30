#ifndef _DATA_H_
#define _DATA_H_

/** FILE: data.h
*   Data hierarchy is designed to represent 
*   the various structures from parsed code
*/

#include <iostream>
#include <list>
#include <SFML/Graphics.hpp>


class Data {
protected:
    std::string name;
public:
    virtual sf::Shape * GetBody() = 0;
    virtual ~Data();
};

class Class : public Data {
private:
    sf::CircleShape body;
public:
    sf::CircleShape * GetBody();
};

class Variable : public Data {
private:
    sf::RectangleShape body;
    std::string variable_type;

public:
    sf::RectangleShape * GetBody();
};

class Func : public Data {
private:
    sf::CircleShape body;
    std::list<Variable> params;
    std::string return_value;
public:
    sf::CircleShape * GetBody();
};

#endif