## Assignment 1: Simple Process Scheduler and Thread Management

# Objective: Implement a simple process scheduler that allows for process creation, termination, and context switching. Implement basic thread management functionality such as thread creation and synchronization.

# Requirements:

## Part 1: Process Scheduler

1.  Implement a process control block (PCB) data structure to represent processes. The PCB should contain at least the following fields: process ID, process state, priority level, and CPU registers.
2.  Implement a ready queue to hold processes that are ready to run. The ready queue should support adding and removing processes, as well as iterating through the processes in the queue.
3.  Implement a simple round-robin scheduler that selects the next process to run based on a fixed time slice. The scheduler should maintain a pointer to the currently running process and update it accordingly when a new process is scheduled.
4.  Implement a system call interface to create and terminate processes. The system call interface should provide functions for creating a new process, terminating a process, and checking the status of a process.
5.  Implement context switching functionality to save and restore the state of a process. This should include saving and restoring the values of the CPU registers and updating the process state.

## Part 2: Thread Management

1.  Implement a thread control block (TCB) data structure to represent threads. The TCB should contain at least the following fields: thread ID, thread state, parent process ID, and CPU registers.
2.  Implement a thread queue to hold threads that are ready to run. The thread queue should support adding and removing threads, as well as iterating through the threads in the queue.
3.  Implement a simple thread scheduler that selects the next thread to run based on a fixed time slice. The scheduler should maintain a pointer to the currently running thread and update it accordingly when a new thread is scheduled.
4.  Implement a system call interface to create and terminate threads. The system call interface should provide functions for creating a new thread, terminating a thread, and checking the status of a thread.
5.  Implement synchronization primitives such as locks and semaphores to ensure thread safety. This should include the implementation of a mutex lock and a counting semaphore.

# Deliverables:

1.  C++ source code for the process scheduler and thread management system, including all required data structures, algorithms, and system call interfaces. The code should be well-commented and organized.
2.  A test suite that thoroughly tests the functionality of your process scheduler and thread management system. The test suite should include test cases that cover normal operation, as well as edge cases and potential error conditions.
3.  A report that describes your design decisions, implementation details, and test results. The report should be well-organized, with clear explanations and diagrams where appropriate. The report should also include a discussion of any challenges you encountered during the implementation, as well as any limitations or potential improvements to your system.

Submission:

Submit a single zip file containing your C++ source code, test suite, and report. The zip file should be named with your full name and the assignment number (e.g., John_Doe_Assignment1.zip). Submit your assignment through the appropriate submission platform as directed by your instructor. 

Or, sumbit your github link
