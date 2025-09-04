# HW4 — Arrays, Structs, and Files

📄 Spec: [CS36HW4.pdf](../../docs/CS36HW4.pdf)

## 🎯 Overview

Homework 4 combines **arrays, structs, and file I/O**.  
- Store multiple employee records in an array of `struct`.  
- Implement sorting by name.  
- Write and read data from both **text** and **binary** files.  
- No global variables.  
- Follow provided function template.  


## ⚙️ How to Build & Run
```bash
gcc -std=c11 -Wall -Wextra -O2 -o hw04 src/HW4_PS1_last_first.c
./hw04

🧪 Notes

Required: six employees, totals, average calculations.

File I/O: must save and reload employee data.

Sorting: must be case-insensitive (if specified).

Strictly match output format from spec.