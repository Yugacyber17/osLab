# PROGRAM 2 : SHELL SCRIPTING AND COMMAND-LINE ARGUMENTS

## AIM :
To develop shell scripts for performing basic arithmetic, file handling, decision making, loops, and command-line argument processing using the Bash shell.

## CONTEXT :
Shell scripting in Linux is the practice of writing a sequence of commands into a plain text file (extn:sh) to automate repetitive system tasks, configure environments, and manage software deployments. The file is interpreted line by line by a command-line interpreter known as a shell, with the GNU Bourne-Again Shell (Bash) being the most common default version across major Linux distributions.

## COMMANDS USED IN YOUR SCRIPT :

| Command/Feature | Function |
|---|---|
| `echo` | Prints messages to the terminal. |
| `wc -l` | Counts the number of lines in a file. |
| `$#` | Returns the number of command-line arguments. |
| `$@` | Represents all command-line arguments. |
| `-f` | Checks whether the argument is a regular file. |
| `-d` | Checks whether the argument is a directory. |
| `for` | Iterates through each command-line argument. |
| `if`, `elif`, `else` | Performs conditional execution. |

## SOURCE CODE :
**File :** [checkfile.sh](https://github.com/Yugacyber17/osLab/blob/b68b7cbe7eb263da860366c003f34ef1439e3725/ex02/checkfile.sh)
## HOW TO CREATE :

```bash
Step 1: nano checkfile.sh 
Step 2: Paste the code given above
Step 3: To save: ctrl+o and press enter 
Step 4: To exit: ctrl+x 
```

## EXECUTION :

```bash
Step 1: chmod u+x checkfile.sh 
Step 2: ./checkfile.sh file1.txt testdir sample.txt
```

## OUTPUT :
![Output for Experiment 2](https://github.com/Yugacyber17/osLab/blob/4356f16c352856ab873bf5e98fddb6794e51daa4/ex02/output2.png)
