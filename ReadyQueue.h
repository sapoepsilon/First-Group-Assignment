#include <list>
#include "ProcessControlBlock.h"

class ReadyQueue {
private:
    std::list<ProcessControlBlock> queue;

public:
    void addProcess(ProcessControlBlock pcb);
    ProcessControlBlock getNextProcess();
    // ... other necessary methods ...
};
