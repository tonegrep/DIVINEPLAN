#ifndef _FILETRACKER_H_
#define _FILETRACKER_H_

#include <iostream>
#include <vector>
#include <experimental/filesystem>

using namespace std::experimental::filesystem;

class FileTracker {
private:
    path projectpath;
    std::vector<path> trackedfiles;
    std::vector<path> updatedfiles;
public:
    FileTracker(std::string pathstr);
    int UpdateFiles(path current);
    void FlushUpdated();
    std::vector<path> GetUpdatedFiles();
};

#endif