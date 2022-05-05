# MyLispy
This is C Language basic emplimentation of Lisp. My long term goal is to turn this into my own inline language used for school like math computation for things like calculus, probibility, statistics, physics, etc.

## Goal

The goal is to create a REPL suitable language optimized for common calculations.

## Overview

- Simle REPL that repeats the user line input. Uses `editline/readline.h` and `editline/history.h` in order to add usability of the write line. 

- For Mac this requires that you leave out the `editline/history.h` preproceessing line and compile it using `cc -std=c99 -Wall prompt.c -ledit -o prompt`. 

- This uses the MPC library to parse. Things get complicated here. Once MPC is in use you need to compile using `cc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing`. 

- At this point we are using Polish Notation https://en.wikipedia.org/wiki/Polish_notation.

## Sources
- https://www.buildyourownlisp.com/
