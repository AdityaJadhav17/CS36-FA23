# CS36 — C Programming

[![License](https://img.shields.io/badge/license-MIT-informational)](./LICENSE)
[![Made with](https://img.shields.io/badge/made_with-C-blue)]()

---

## 📖 Course Description
This course introduces the **C programming language**, focusing on how to create, execute, and debug programs.  

**Topics include:**
- Input and output statements  
- Control statements  
- Random numbers  
- Functions and parameter passing  
- Recursion  
- Loops  
- Arrays  
- Structures  
- Text, binary, and header files  
- Pointers  
- Linked lists  

**Compiler/IDE:** Code::Blocks (GCC toolchain)  

---

## 📦 Repository Layout

```
CS36-FA23/

├── assignments/
│   ├── hw01/
│   │   ├── README.md
│   │   ├── src/
│   ├── hw02/
│   │   ├── README.md
│   │   ├── src/
│   ├── hw03/
│   │   ├── README.md
│   │   ├── src/
│   └── hw04/
│       ├── README.md
│       ├── src/
├── docs/
│   └── resources/
├── labs/
│   ├── lab01/
│   │   ├── README.md
│   │   ├── src/
│   ├── lab02/
│   │   ├── README.md
│   │   ├── src/
│   ├── lab03/
│   │   ├── README.md
│   │   ├── src/
│   └── lab04/
│       ├── README.md
│       ├── src/
├── .gitignore
├── LICENSE
├── README.md

```

## 📚 Assignments
- [HW1 — Intro Basics](./assignments/hw01/README.md)  
- [HW2 — Decisions & Loops](./assignments/hw02/README.md)  
- [HW3 — Functions](./assignments/hw03/README.md)  
- [HW4 — Arrays, Structs, and Files](./assignments/hw04/README.md)  

---

## 🧪 Labs
- [Lab 1 — Intro Basics](./labs/lab01/README.md)  
- [Lab 2 — Decisions & Loops](./labs/lab02/README.md)  
- [Lab 3 — Functions](./labs/lab03/README.md)  
- [Lab 4 — Arrays & Strings](./labs/lab04/README.md)  

---

## ⚙️ How to Build & Run (Generic)
Using GCC:
```bash
gcc -std=c11 -Wall -Wextra -O2 -o program src/filename.c
./program
Using Code::Blocks:

Create a new project.

Add the .c file(s) from the appropriate src/ folder.

Build → Run (F9). 
