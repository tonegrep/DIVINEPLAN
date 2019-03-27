#include "filetracker.h"

inline void PrintFiles(std::vector<path> trackedfiles, std::vector<path> updatedfiles) {
    std::cout << "Tracked: \n";
    for (std::vector<path>::iterator it = trackedfiles.begin(); it != trackedfiles.end(); ++it) {
        std::cout << *it << "  ";
    }
    std::cout << "Updated: \n";
    for (std::vector<path>::iterator it1 = updatedfiles.begin(); it1 != updatedfiles.end(); ++it1) {
        std::cout << *it1 << "  ";
    }
    std::cout << "\n\n";
}

FileTracker::FileTracker(std::string pathstr) {

    //UpdateFiles(pathstr);
}

int FileTracker::UpdateFiles(path current) {
    //PrintFiles(trackedfiles, updatedfiles);
    for (auto &p : recursive_directory_iterator(current))
    {
        if (is_regular_file(p)) {
            std::vector<path>::iterator it = std::find(trackedfiles.begin(), trackedfiles.end(), p);
            if (it == trackedfiles.end()) {
                std::vector<path>::iterator it1 = std::find(updatedfiles.begin(), updatedfiles.end(), p);
                if (it1 == updatedfiles.end()) 
                    updatedfiles.push_back(p);
                else
                    trackedfiles.push_back(p);          
            }
            else {
                if (last_write_time(p) != last_write_time(*it)) {
                    if (std::find(updatedfiles.begin(), updatedfiles.end(), p) == updatedfiles.end())
                        updatedfiles.push_back(p);
                }          
            }
        };
    }
    FlushUpdated();
    //PrintFiles(trackedfiles, updatedfiles);
}

void FileTracker::FlushUpdated() {
    //TODO: need to check if updated files are already in tracked vector
    for (auto &tfile : trackedfiles) {
        for(std::vector<path>::iterator it = updatedfiles.begin(); it != updatedfiles.end();) {
            if (tfile == *it) {
                it = updatedfiles.erase(it);
            } else {
                ++it;
            }
                
        }

    }
}

const std::vector<path> & FileTracker::GetUpdatedFiles() {
    return updatedfiles;
}

std::vector<path> FileTracker::GetUpdatedFiles(std::string extension) {
    std::vector<path> out;
    for (auto &it : updatedfiles) {
        if (it.extension() != extension)
            out.push_back(it);
    }
    return out;
}