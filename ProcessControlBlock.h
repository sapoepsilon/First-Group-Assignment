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
    int cpuRegisters[16];

public:
    ProcessControlBlock(int pid, int priority);
    // ... getters and setters ...
};
