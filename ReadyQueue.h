#ifndef READYQUEUE_H
#define READYQUEUE_H

#include <list>
#include <algorithm>
#include "ProcessControlBlock.h"

class ReadyQueue {
private:
    std::list<ProcessControlBlock> queue;

public:
    void addProcess(ProcessControlBlock pcb) {
        queue.push_back(pcb);
    }

    ProcessControlBlock getNextProcess() {
        // This example uses a simple FIFO scheduling algorithm
        ProcessControlBlock next = queue.front();
        queue.pop_front();
        return next;
    }

    bool isEmpty() {
        return queue.empty();
    }

    void removeProcess(int pid) {
        queue.remove_if([pid](const ProcessControlBlock& pcb) {
            return pcb.getProcessID() == pid;
        });
    }
};

#endif // READYQUEUE_H
