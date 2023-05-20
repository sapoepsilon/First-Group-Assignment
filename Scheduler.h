#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "ReadyQueue.h"
#include "ContextSwitch.h"

class Scheduler {
private:
    ReadyQueue readyQueue;
    ProcessControlBlock* currentProcess;
    ContextSwitch contextSwitch;

public:
    Scheduler() : currentProcess(nullptr) { }

    void schedule() {
        if (currentProcess != nullptr) {
            contextSwitch.saveState(*currentProcess);
            currentProcess->setProcessState(ProcessControlBlock::READY);
            readyQueue.addProcess(*currentProcess);
        }

        if (!readyQueue.isEmpty()) {
            currentProcess = new ProcessControlBlock(readyQueue.getNextProcess());
            currentProcess->setProcessState(ProcessControlBlock::RUNNING);
            contextSwitch.restoreState(*currentProcess);
        }
    }

    void addProcess(ProcessControlBlock pcb) {
        readyQueue.addProcess(pcb);
        if (currentProcess == nullptr) {
            schedule();
        }
    }

    void terminateCurrentProcess() {
        if (currentProcess != nullptr) {
            currentProcess->setProcessState(ProcessControlBlock::TERMINATED);
            delete currentProcess;
            currentProcess = nullptr;
        }
        schedule();
    }
};

#endif // SCHEDULER_H
