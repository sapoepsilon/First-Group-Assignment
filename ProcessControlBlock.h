#ifndef PROCESSCONTROLBLOCK_H
#define PROCESSCONTROLBLOCK_H

class ProcessControlBlock {
public:
    enum State {
        NEW,
        READY,
        RUNNING,
        WAITING,
        TERMINATED
    };

private:
    int processID;
    State processState;
    int priorityLevel;
    int cpuRegisters[16];  // Simplified example - in a real OS, this would be more complex

public:
    ProcessControlBlock(int pid, int priority)
        : processID(pid), priorityLevel(priority), processState(State::NEW) {
        // Initialize CPU registers to zero
        for(int& reg : cpuRegisters) {
            reg = 0;
        }
    }

    int getProcessID() const { return processID; }
    State getProcessState() const { return processState; }
    int getPriorityLevel() const { return priorityLevel; }
    int getCPURegister(int index) const { return cpuRegisters[index]; }

    void setProcessState(State state) { processState = state; }
    void setPriorityLevel(int priority) { priorityLevel = priority; }
    void setCPURegister(int index, int value) { cpuRegisters[index] = value; }
};

#endif // PROCESSCONTROLBLOCK_H

//  The above code will compile and run as a C++ program but doesn't actually interface with the operating system to create and manage real processes and threads.
//  It's a simulation meant for educational purposes.