# MyLispy
This is C Language basic emplimentation of Lisp. My long term goal is to turn this into my own inline language used for school like math computation for things like calculus, probibility, statistics, physics, etc.

## Overview
### Prompt 
Simle REPL that repeats the user line input. Uses `editline/readline.h` and `editline/history.h` in order to add usability of the write line. For Mac this requires that you leave out the `editline/history.h` preproceessing line and compile it using `cc -std=c99 -Wall prompt.c -ledit -o prompt`.
### Parsing (using MPC)

### Evaulation

## Sources
- https://www.buildyourownlisp.com/
