#include "ReadyQueue.h"

class Scheduler {
private:
    ReadyQueue readyQueue;
    ProcessControlBlock* currentProcess;

public:
    Scheduler();
    void schedule();
    // ... other necessary methods ...
};
