int main()
{
    Scheduler scheduler;

    // Create and add processes to the ready queue
    PCB process1 = {1, "Running", 1};
    PCB process2 = {2, "Ready", 2};
    PCB process3 = {3, "Ready", 1};

    scheduler.addToReadyQueue(process1);
    scheduler.addToReadyQueue(process2);
    scheduler.addToReadyQueue(process3);

    // Remove a process from the ready queue
    scheduler.removeFromReadyQueue(2);

    // Print the processes in the ready queue
    scheduler.printProcesses();

    // Run the scheduler to execute the processes
    scheduler.run();

    return 0;
}