<div align="center">

# 🏛️ Data Structures in C++
### Practical Laboratory Portfolio & Implementation Log

[![Language](https://img.shields.io/badge/Language-C%2B%2B17%20%2F%20C%2B%2B20-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://en.cppreference.com/)
[![Standard](https://img.shields.io/badge/Standard-ISO%2FIEC%2014882-blue?style=for-the-badge)](https://isocpp.org/)
[![Compiler](https://img.shields.io/badge/Compiler-GCC%20%7C%20Clang%20%7C%20MSVC-orange?style=for-the-badge)](https://gcc.gnu.org/)
[![Platform](https://img.shields.io/badge/Platform-Cross--Platform-lightgrey?style=for-the-badge)](https://github.com/makarandbobhate/data-structures-cpp)

<p align="center">
  A structured, modular laboratory repository illustrating fundamental-to-advanced paradigms of <b>Data Structures & Algorithms (DSA)</b> in modern C++, focusing on memory layout efficiency, asymptotic complexity analysis, and clean algorithmic architecture.
</p>

</div>

---

## 📌 Student & Academic Profile

| Attribute | Details |
| :--- | :--- |
| **Candidate Name** | **Makarand Pankaj Bobhate** |
| **Roll Number** | `09` |
| **Institution** | **MIT ADT University** |
| **Department / Class** | School of AI (SO AI) |
| **Division** | Division 5 |
| **Course Module** | Data Structures & Algorithms (DSA) |
| **Programming Language** | C++ |

---

## 🎯 Curriculum Objectives & Competencies

This laboratory suite targets mastery over foundational computational structures and algorithmic problem-solving paradigms:
* **Linear Data Structures:** Memory layout, contiguous indexing, and pointer structures across 1D/2D Arrays, Singly/Doubly Linked Lists, Stacks (LIFO), and Queues (FIFO).
* **Searching Algorithms:** Systematic element lookup comparing sequential search ($O(n)$) against divide-and-conquer logarithmic binary search ($O(\log n)$).
* **Sorting Techniques:** Algorithmic stability, in-place exchanges, and divide-and-conquer partition strategies (Bubble, Insertion, Selection, Merge, and Quick Sort).
* **Non-Linear Hierarchies:** Tree traversals (Inorder, Preorder, Postorder), Binary Search Trees (BST), and Graph representations (Adjacency Matrix & Lists).
* **Asymptotic Complexity:** Rigorous evaluation of Time and Auxiliary Space complexities across Best, Average, and Worst-case runtime regimes.

---

## 📑 Lab Practicals Index

| Practical | Core DSA Paradigm | Problem Statement & Specification | Code Source | Output |
| :---: | :--- | :--- | :---: | :---: |
| **01** | **Linear Search** | **Sequential Array Lookup:** Sequential element lookup in a 1D array with match flag, target index retrieval, and boundary termination. | [`linear_search.cpp`](./linear_search.cpp) | [📸 View](./outputs/linear_search.png) |
| **02** | **Binary Search** | **Logarithmic Divide & Conquer:** Search on a sorted array using pointer bounding (`low`, `mid`, `high`) achieving $O(\log n)$ complexity. | [`binary_search.cpp`](./binary_search.cpp) | [📸 View](./outputs/binary_search.png) |
| **03** | **Stack (LIFO)** | **Stack Implementation using Array:** Fixed-size LIFO buffer with push, pop, peek, and display operations, including overflow and underflow detection. | [`stack_using_array.cpp`](./stack_using_array.cpp) | [📸 View](./outputs/stack_using_array.png) |

---

## 🛠️ Build & Execution Instructions

All practical files are self-contained and require standard ISO C++ compilation.

### Prerequisites
* **Compiler:** `g++` (MinGW-w64 on Windows or native GCC on Linux/macOS) / `clang++` / `MSVC (cl.exe)`
* **Terminal:** PowerShell, Command Prompt, or Bash

### Compilation Command

```bash
# General syntax
g++ -std=c++17 -Wall -Wextra "<filename>.cpp" -o output

# Windows execution
./output.exe

# Linux/macOS execution
./output
```

#### Example (Practical 1 - Linear Search):
```bash
g++ -std=c++17 linear_search.cpp -o linear_search
./linear_search.exe
```

#### Example (Practical 2 - Binary Search):
```bash
g++ -std=c++17 binary_search.cpp -o binary_search
./binary_search.exe
```

#### Example (Practical 3 - Stack using Array):
```bash
g++ -std=c++17 stack_using_array.cpp -o stack_using_array
./stack_using_array.exe
```

---

## 📁 Repository Directory Structure

```text
data-structure/
├── .gitignore               # Ignores build artifacts, executables (.exe, .o), and IDE configs
├── README.md                # Comprehensive documentation and practical directory
├── linear_search.cpp        # Practical 1: Linear Search Algorithm
├── binary_search.cpp        # Practical 2: Binary Search Algorithm
├── stack_using_array.cpp    # Practical 3: Stack Implementation using Array
└── outputs/                 # Terminal output screenshots
    ├── linear_search.png    # Terminal output for Linear Search
    ├── binary_search.png    # Terminal output for Binary Search
    └── stack_using_array.png # Terminal output for Stack using Array
```

---

<div align="center">

Developed & maintained by **[Makarand Bobhate](https://github.com/makarandbobhate)**<br>
<sub>Released for academic reference and software engineering practice.</sub>

</div>
