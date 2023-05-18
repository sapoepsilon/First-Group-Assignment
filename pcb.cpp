#include <iostream>
#include <vector>

// Process Control Block (PCB)
struct PCB
{
    int processID;
    std::string processState;
    int priorityLevel;
    // CPU registers and other necessary fields
};

// Ready Queue
class ReadyQueue
{
private:
    std::vector<PCB> processes;

public:
    void addProcess(const PCB &process)
    {
        processes.push_back(process);
    }

    void removeProcess(int processID)
    {
        for (auto it = processes.begin(); it != processes.end(); ++it)
        {
            if (it->processID == processID)
            {
                processes.erase(it);
                break;
            }
        }
    }

    void printProcesses()
    {
        for (const auto &process : processes)
        {
            std::cout << "Process ID: " << process.processID << ", State: " << process.processState
                      << ", Priority: " << process.priorityLevel << std::endl;
        }
    }
};

// Round-Robin Scheduler
class Scheduler
{
private:
    ReadyQueue readyQueue;

public:
    void addToReadyQueue(const PCB &process)
    {
        readyQueue.addProcess(process);
    }

    void removeFromReadyQueue(int processID)
    {
        readyQueue.removeProcess(processID);
    }

    void run()
    {
        while (!readyQueue.empty())
        {
            // Select the next process to run based on a fixed time slice
            PCB currentProcess = readyQueue.front();
            readyQueue.pop();

            // Execute the current process

            // Perform context switching
        }
    }
};