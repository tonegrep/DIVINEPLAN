#include "filetracker.h"

/*implement some recursive function to iterate through the whole 
directory and search for the source files (only headers in C++ case)*/

void PrintFiles(std::vector<path> trackedfiles, std::vector<path> updatedfiles) {
    std::cout << "Tracked: \n";
    for (std::vector<path>::iterator it = trackedfiles.begin(); it != trackedfiles.end(); ++it) {
        std::cout << *it << "  ";
    }
    std::cout << "Updated: \n";
    for (std::vector<path>::iterator it1 = updatedfiles.begin(); it1 != updatedfiles.end(); ++it1) {
        std::cout << *it1 << "  ";
    }
}

FileTracker::FileTracker(std::string pathstr/*god please check if this exists*/) {

    UpdateFiles(pathstr);
}

int FileTracker::UpdateFiles(path current) {
    
    for (auto &p : recursive_directory_iterator(current))
    {
        if (is_regular_file(p)) {
            std::vector<path>::iterator it = std::find(trackedfiles.begin(), trackedfiles.end(), p);
            if (it == trackedfiles.end())
                updatedfiles.push_back(p);
            else {
                if(last_write_time(p) != last_write_time(*it)) {
                    if(std::find(updatedfiles.begin(), updatedfiles.end(), p) == updatedfiles.end())
                        updatedfiles.push_back(p);
                }          
            }
        };
    }
}

void FileTracker::FlushUpdated() {
    //TODO: need to check if updated files are already in tracked vector
    updatedfiles.clear();
}

const std::vector<path> & FileTracker::GetUpdatedFiles() {
    return updatedfiles;
}