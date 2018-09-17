#ifndef _PARSELOGIC_H_
#define _PARSELOGIC_H_

class ParseLogic {
private:


public:
    virtual int Parse() = 0; 
};


class ParseJava : public ParseLogic {
private:


public:
    int Parse();

};


class ParseC : public ParseLogic {
private:


public:
    int Parse();
};



#endif