#include "filetracker.h"

/*implement some recursive function to iterate through the whole 
directory and search for the source files (only headers in C++ case)*/

FileTracker::FileTracker(std::string pathstr/*god please check if this exists*/) :
    projectpath(path(pathstr)) {
    

    UpdateFiles(projectpath);
}

int FileTracker::UpdateFiles(path current) {

    if (exists(current))
    {
      if (is_directory(current))
      {
        //for (directory_entry& x : directory_iterator(current)) {
            
        //}
          //std::cout << "    " << x.path() << '\n'; 
      }
      else
        std::cout << current << " exists, but is not a regular file or directory\n";
    }
    else
      std::cout << current << " does not exist\n";
}

void FileTracker::FlushUpdated() {
    //TODO: need to check if updated files are already in tracked vector
    updatedfiles.clear();
}

std::vector<path> FileTracker::GetUpdatedFiles() {
    return updatedfiles;
}