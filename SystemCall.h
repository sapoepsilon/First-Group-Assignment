#include "Scheduler.h"

class SystemCall {
private:
    Scheduler& scheduler;

public:
    SystemCall(Scheduler& sched);
    void createProcess(int pid, int priority);
    void terminateProcess(int pid);
    // ... other necessary methods ...
};
