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

## 📦 Repo Layout

CS36-FA23/
├─ README.md
├─ LICENSE
├─ .gitignore
├─ docs/ (assignment & lab specifications, PDFs)
│ ├─ CS36HW1.pdf
│ ├─ CS36HW2.pdf
│ ├─ CS36HW3.pdf
│ ├─ CS36HW4.pdf
│ ├─ CS36Lab01.pdf
│ ├─ CS36Lab02.pdf
│ ├─ CS36Lab03.pdf
│ └─ CS36Lab04.pdf
├─ assignments/
│ ├─ hw01/
│ ├─ hw02/
│ ├─ hw03/
│ └─ hw04/
└─ labs/
├─ lab01/
├─ lab02/
├─ lab03/
└─ lab04/

---

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
