#include "parser.h"


Parser::Parser(std::string dir)  :
    directory(dir) {
    logic = new ParseC();
    track = new FileTracker(directory);
}

int Parser::ReadModified() {
    track->UpdateFiles(directory);
    logic->Parse(track->GetUpdatedFiles());
    track->FlushUpdated();
    return 0;
};