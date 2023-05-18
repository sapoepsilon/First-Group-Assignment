## Assignment: Processes and Threads for Maze Generation and Solution
## Objective:
Your task is to generate 100 random 50x50 mazes and their solutions using a process scheduler and thread management system. Each maze generation and solution process will be a separate task managed by the process scheduler. Moreover, each step in the maze generation and solution process will be managed by a separate thread. 

The goal is to use this [Maze Generator](https://github.com/ferenc-nemeth/maze-generation-algorithms) or another of your choice for the assignment.

# Requirements:
## Part 1: Process Scheduler

    Implement a process control block (PCB) data structure to represent each maze generation process. The PCB should contain at least the following fields: process ID, process state, priority level, and CPU registers.
    Implement a ready queue to hold processes that are ready to run. The ready queue should support adding and removing processes, as well as iterating through the processes in the queue.
    Implement a simple round-robin scheduler that selects the next process to run based on a fixed time slice.
    Implement a system call interface to create and terminate processes.
    Implement context switching functionality to save and restore the state of a process.


## Part 2: Thread Management

    Implement a thread control block (TCB) data structure to represent a thread for the steps in generating and solving the maze. The TCB should contain at least the following fields: thread ID, thread state, parent process ID, and CPU registers.
    Implement a thread queue to hold threads that are ready to run.
    Implement a simple thread scheduler that selects the next thread to run based on a fixed time slice.
    Implement a system call interface to create and terminate threads.

    Implement synchronization primitives such as locks and semaphores to ensure thread safety. Ensure no duplicate file names occur during the generation and saving of maze and its solution.


## Part 3: Maze Generation and Solution

    Generate a maze using the Maze Generator or another of your choice.
    Save the generated maze to a file with unique file names (e.g., maze_01.png).
    Generate a solution to the maze.
    Save the solution to a file with unique file names (e.g., solution_01.png).


## Deliverables:

    C++ source code for the process scheduler, thread management system, and maze generation and solution, including all required data structures, algorithms, and system call interfaces. The code should be well-commented and organized.
    A test suite that thoroughly tests the functionality of your process scheduler, thread management system, and maze generation and solution. The test suite should include test cases that cover normal operation, as well as edge cases and potential error conditions.
    A report that describes your design decisions, implementation details, and test results. The report should be well-organized, with clear explanations and diagrams where appropriate. The report should also include a discussion of any challenges you encountered during the implementation, as well as any limitations or potential improvements to your system.
    A zip file of the 100 uniquely named maze and solution files.


## Submission:
Submit a single zip file containing your C++ source code, test suite, report, and the maze and solution files. The zip file should be named with your full name and the assignment number (e.g., John_Doe_Assignment.zip). Submit your assignment through the appropriate submission platform as directed by your instructor.