#ifndef _FILETRACKER_H_
#define _FILETRACKER_H_

#include <iostream>
#include <vector>
#include <algorithm>
#include <experimental/filesystem>

using namespace std::experimental::filesystem;

class FileTracker {
private:
    std::vector<path> trackedfiles;
    std::vector<path> updatedfiles;
public:
    FileTracker(std::string pathstr);
    int UpdateFiles(path current);
    void FlushUpdated();
    const std::vector<path> & GetUpdatedFiles();
    std::vector<path> GetUpdatedFiles(std::string extension);
    
};

#endif