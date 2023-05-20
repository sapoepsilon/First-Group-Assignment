#ifndef CONTEXTSWITCH_H
#define CONTEXTSWITCH_H

#include "ProcessControlBlock.h"

class ContextSwitch {
public:
    void saveState(ProcessControlBlock& pcb) {
        // In real scenario, this would involve saving the CPU state, including registers and program counter.
        // For this simplified model, let's assume that we're saving some data into a register.
        pcb.setCPURegister(0, 100);  // setting 0th register to a value, for example
    }

    void restoreState(ProcessControlBlock& pcb) {
        // In real scenario, this would involve restoring previously saved CPU state, including registers and program counter.
        // For this simplified model, let's assume that we're restoring some data from a register.
        int restoredValue = pcb.getCPURegister(0);  // getting the value of 0th register
        (void)restoredValue;  // not used in this simple model
    }
};

#endif // CONTEXTSWITCH_H
