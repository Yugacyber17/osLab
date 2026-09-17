# PROGRAM 8 : CPU SCHEDULING ALGORITHMS

## AIM :
To simulate CPU scheduling algorithms (FCFS, SJF, Priority, Round Robin) and compare their performance. Students can evaluate waiting time, turnaround time, and scheduling efficiency (Process management)

## CONTEXT :
This program demonstrates the First Come, First Served (FCFS) CPU scheduling algorithm, one of the simplest process scheduling algorithms used by operating systems. The process that arrives first is allocated the CPU first and runs until completion (non-preemptive scheduling).

## CONCEPTS IN FCFS ALGORITHM

| Term | Meaning | Formula |
|---|---|---|
| Arrival Time (AT) | Time at which a process enters the ready queue | Given as input |
| Burst Time (BT) | CPU time required by a process | Given as input |
| Start Time (ST) | Time at which the process starts execution | `ST = max(Previous CT, AT)` |
| Completion Time (CT) | Time at which a process finishes execution | `CT = ST + BT` |
| Turnaround Time (TAT) | Total time spent by a process in the system | `TAT = CT - AT` |
| Waiting Time (WT) | Time spent waiting in the ready queue | `WT = TAT - BT` |
| Average Turnaround Time | Average turnaround time of all processes | `ΣTAT / n` |
| Average Waiting Time | Average waiting time of all processes | `ΣWT / n` |

## SOURCE CODE :
**File :**[exp8.c] (https://github.com/Yugacyber17/osLab/blob/e8d7aa4466526578e94f50936a1a0acbaff63272/ex08/exp8.c)
## AIM :
To simulate CPU scheduling algorithms (FCFS, SJF, Priority, Round Robin) and compare their performance. Students can evaluate waiting time, turnaround time, and scheduling efficiency (Process management)

## CONTEXT :
This program demonstrates the First Come, First Served (FCFS) CPU scheduling algorithm, one of the simplest process scheduling algorithms used by operating systems. The process that arrives first is allocated the CPU first and runs until completion (non-preemptive scheduling).

## CONCEPTS IN FCFS ALGORITHM

| Term | Meaning | Formula |
|---|---|---|
| Arrival Time (AT) | Time at which a process enters the ready queue | Given as input |
| Burst Time (BT) | CPU time required by a process | Given as input |
| Start Time (ST) | Time at which the process starts execution | `ST = max(Previous CT, AT)` |
| Completion Time (CT) | Time at which a process finishes execution | `CT = ST + BT` |
| Turnaround Time (TAT) | Total time spent by a process in the system | `TAT = CT - AT` |
| Waiting Time (WT) | Time spent waiting in the ready queue | `WT = TAT - BT` |
| Average Turnaround Time | Average turnaround time of all processes | `ΣTAT / n` |
| Average Waiting Time | Average waiting time of all processes | `ΣWT / n` |

## SOURCE CODE :
**File :** [exp8.c](https://github.com/Yugacyber17/osLab/blob/6d184ec13354bf1f605fcf44c16af9a623e0d0c9/ex08/exp8.c)

## COMPILATION :

```bash
gcc exp8.c -o exp8
```

## EXECUTION :

```bash
./exp8
```

## OUTPUT :
![Output for Experiment 8](https://github.com/Yugacyber17/osLab/blob/7847660126bba8d60cb6923dddd6c27db228a2ce/ex08/output8.png)

## COMPILATION :

```bash
gcc exp8.c -o exp8
```

## EXECUTION :

```bash
./exp8
```

## OUTPUT :
![Output for Experiment 8](https://github.com/Yugacyber17/osLab/blob/7847660126bba8d60cb6923dddd6c27db228a2ce/ex08/output8.png)
