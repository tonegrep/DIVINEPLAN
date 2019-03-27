#include <fstream>
#include <string>
#include "parselogic.h"

int IParseC::Parse(path source, Architecture & arch) {
    std::cout << "budu parsit" << source << std::endl;
    if (is_regular_file(source)) {
        
        if (source.extension() == ".h" || source.extension() == ".hpp") {

            std::ifstream f{ source };
            
            std::string line;
            while (std::getline(f, line))
            {   
                std::size_t pos = 0;
                if (pos = line.find("class") != std::string::npos) {
                    Class * c = new Class();     
                    std::string sub = line.substr(pos+1);   
                    c->SetName(line.substr(pos + 1, sub.find_first_of(" ")));   
                    std::cout << "ya rodilsa" << c->GetName() << std::endl; 
                    //TODO:
                    //arch.FindNewClassCoords(*c);
                    //c->GetBody()->setPosition(sf::Vector2f(30.0f, 50.0f));
                    //c->GetBody()->setRadius(20.0f);
                    arch.PushClass(*c);
                }
            }

        }
    }
}