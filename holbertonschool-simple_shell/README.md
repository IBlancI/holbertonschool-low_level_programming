Simple Shell
Introduction
This is a Holberton School project that consists of making our own simple shell with a limited amount of functions from the standard library.

List of allowed functions and system calls
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
_exit (man 2 _exit)
fflush (man 3 fflush)
fork (man 2 fork)
free (man 3 free)
getcwd (man 3 getcwd)
getline (man 3 getline)
getpid (man 2 getpid)
isatty (man 3 isatty)
kill (man 2 kill)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (__xstat) (man 2 stat)
lstat (__lxstat) (man 2 lstat)
fstat (__fxstat) (man 2 fstat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
Usage
To use this program:

Clone the repo

git clone https://github.com/IBlancI/simple_shell
Compile it with

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
How to use it
In order to use this shell, in a terminal, first run the program:

prompt$ ./hsh

It will then display a simple prompt and wait for commands.

$

A command will be of the type $ command This shell can handle two types of commands: builtins and normal program.

List of built-ins
exit
Exits the shell
env
Prints the current environment
setenv
Initialize a new environment variable, or modify an existing one
unsetenv
Remove an environment variable
cd [directory]
Changes the current directory of the process
help
Display all the enviroment variables
history
Displays the history list
Command
Basicly Every Program in $PATH It Support Single Word like ls

It Handle Path ls /tmp

it Handle Options Like ls -l

it Handle All Three Togther Like ls -l /var

it Handle Command Path Also Like /bin/ls And All The Option And Path Like /bin/ls -l /var

it Handle Comments #