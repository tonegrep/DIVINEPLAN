#include "parser.h"


Parser::Parser(std::string dir)  :
    directory(dir), 
    logic(new IParseC()), 
    track(new FileTracker(directory)) {
        
}

int Parser::ReadModified(Architecture arch) {
    track->UpdateFiles(directory);
    std::vector<path>::iterator it;
    for (auto &it : track->GetUpdatedFiles()) {
        std::cout << "wooo whee parsim" << std::endl;
        logic->Parse(it, arch);
    }
    return 0;
};

int Parser::TrackUpdated(){
    track->FlushUpdated();
    return 0;
}