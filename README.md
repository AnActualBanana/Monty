# Monty - List Management Program

## Description
Monty is an interpreter for Monty ByteCode files. It processes opcodes in a file provided by the user and manipulates a Stack or Queue (a doubly linked list). The data structure can operate as either:

- **Stack** (LIFO - Last In, First Out)
- **Queue** (FIFO - First In, First Out)

## Features
- Reads Monty bytecode files (.m files)
- Executes opcodes to manipulate stacks and queues
- Supports various operations like push, pop, swap, pint, pall, etc.

## Installation
Clone the repository:
```sh
git clone https://github.com/AnActualBanana/Monty.git
cd monty
```

## Compilation
Compile the source files using:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

## Usage
Run the Monty interpreter with a file containing Monty ByteCode:
```sh
./monty filename.m
```

### Example
```sh
echo "push 1
push 2
pall" > test.m
./monty test.m
```
Output:
```
2
1
```

## Supported Opcodes
| Opcode | Description |
|--------|-------------|
| `push` | Pushes an element onto the stack |
| `pall` | Prints all elements in the stack |
| `pint` | Prints the top element of the stack |
| `pop`  | Removes the top element from the stack |
| `swap` | Swaps the top two elements of the stack |
| `nop`  | Does nothing |

## Files
| File | Description |
|------|-------------|
| `monty.h` | Header file containing function prototypes and struct definitions |
| `main.c` | Entry point for the program |
| `executor.c` | Executes Monty bytecode instructions |
| `push.c` | Handles push operations |
| `pop.c` | Handles pop operations |
| `pall.c` | Handles pall operations |
| `pint.c` | Handles pint operations |
| `swap.c` | Handles swap operations |
| `free_stack.c` | Frees allocated memory |

## Authors
[Logan McClain, Sam Townsend](https://github.com/AnActualBanana , https://github.com/SamuelTownsend)
