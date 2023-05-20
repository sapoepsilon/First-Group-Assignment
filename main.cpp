#include "ProcessControlBlock.h"
#include "ReadyQueue.h"
#include "Scheduler.h"
#include "SystemCall.h"
#include "ContextSwitch.h"

int main() {
    // Create a Scheduler
    Scheduler scheduler;

    // Create a SystemCall interface, which takes the scheduler as a parameter
    SystemCall sysCall(scheduler);

    // Use the SystemCall interface to create some processes
    sysCall.createProcess(1, 5);
    sysCall.createProcess(2, 3);
    sysCall.createProcess(3, 7);

    // Use the Scheduler to schedule the processes
    while (scheduler.getCurrentProcess() != nullptr) {
        scheduler.schedule();
    }

    return 0;
}
