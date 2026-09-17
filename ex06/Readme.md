# PROGRAM 6 : INTER-PROCESS COMMUNICATION USING PIPES AND FIFO

## AIM :
To implement inter-process communication between processes using:
1.​ Unnamed pipes (pipe())
2.​ Named pipes / FIFO (mkfifo()) 
and exchange data between related and unrelated processes.

## CONTEXT :
This program demonstrates Inter-Process Communication (IPC) using an unnamed pipe in the Linux operating system. 
We explore,  Pipe: It is a communication mechanism that allows two related processes (a parent and its child) to exchange data.

## LINUX SYSTEM CALLS USED

| System Call | Function |
|---|---|
| `pipe()` | Creates an unnamed pipe for communication between related processes. |
| `fork()` | Creates a child process from the parent process. |
| `read()` | Reads data from the pipe (or a file descriptor). |
| `write()` | Writes data to the pipe (or a file descriptor). |
| `close()` | Closes the read or write end of the pipe and releases resources. |

## SOURCE CODE :
**File :** [exp6.c](https://github.com/Yugacyber17/osLab/blob/ca01a3ca99974aaf1ae5c757f780e8a5741cadac/ex06/ex6.c)
## COMPILATION :

```bash
gcc exp6.c -o exp6
```

## EXECUTION :

```bash
./exp6
```

## OUTPUT :
![Output for Experiment 6](https://github.com/Yugacyber17/osLab/blob/087d0774c701b5a694d4d1a8aeb34f0f6e1b3fb0/ex06/output6.png)
