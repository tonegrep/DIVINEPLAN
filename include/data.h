#ifndef _DATA_H_
#define _DATA_H_

#include <iostream>
#include <list>
#include <SFML/Graphics.hpp>


class Data {
protected:
    std::string name;
public:
    virtual sf::Shape * getBody() = 0;
    virtual ~Data();
};


class Class : public Data {
private:
    sf::CircleShape body;
public:
    sf::Shape * getBody();
};

class Variable : public Data {
private:
    sf::RectangleShape body;
    std::string variable_type;

public:
    sf::Shape * getBody();
};

class Func : public Data {
private:
    sf::CircleShape body;
    std::list<Variable> params;
    std::string return_value;
public:
    sf::Shape * getBody();
};

#endif