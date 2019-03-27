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
    /**
     * @brief Inits filetracker in pathstr directory
     * 
     * @param pathstr 
     */
    FileTracker(std::string pathstr);
    /**
     * @brief 
     * 
     * @param current 
     * @return int 
     */
    int UpdateFiles(path current);
    /**
     * @brief removes already tracked files from updated
     * 
     */
    void FlushUpdated();
    /**
     * @brief Get the Updated Files object
     * 
     * @return const std::vector<path> updatedfiles
     */
    const std::vector<path> & GetUpdatedFiles();
    /**
     * @brief Get files from the Updated Files with particular extension
     * 
     * @param extension 
     * @return std::vector<path> updatedfiles
     */
    std::vector<path> GetUpdatedFiles(std::string extension);
    
};

#endif