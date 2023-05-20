#ifndef SYSTEMCALL_H
#define SYSTEMCALL_H

#include "Scheduler.h"

class SystemCall {
private:
    Scheduler& scheduler;

public:
    SystemCall(Scheduler& sched) : scheduler(sched) { }

    void createProcess(int pid, int priority) {
        ProcessControlBlock newProcess(pid, priority);
        scheduler.addProcess(newProcess);
    }

    void terminateProcess(int pid) {
        // In a real OS, you would search the process by its PID and then terminate it
        // For this simple model, we are just terminating the currently running process
        scheduler.terminateCurrentProcess();
    }

    ProcessControlBlock::State checkProcessStatus(int pid) {
        // In a real OS, you would search the process by its PID and then return its status
        // For this simple model, we are just returning the status of the currently running process
        if(scheduler.getCurrentProcess() != nullptr)
            return scheduler.getCurrentProcess()->getProcessState();
        else
            return ProcessControlBlock::TERMINATED;
    }
};

#endif // SYSTEMCALL_H
