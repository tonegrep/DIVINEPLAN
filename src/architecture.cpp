#include "architecture.h"


/** \brief Add data to container
*   \return Current container size
*/
int Architecture::pushData(Data & entry) {
    tracked_data.push_back(entry);
    return tracked_data.size();
}