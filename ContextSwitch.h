#include "ProcessControlBlock.h"

class ContextSwitch {
public:
    void saveState(ProcessControlBlock& pcb);
    void restoreState(ProcessControlBlock& pcb);
};
