# data-structures-cpp

Core data structures and algorithms implemented in modern C++.

## Included implementations

- Data structures:
  - `SinglyLinkedList`
  - `Stack`
  - `Queue`
  - `BinarySearchTree`
- Algorithms:
  - `bubble_sort`
  - `quick_sort`
  - `binary_search`

All implementations are header-only in:

- `/home/runner/work/data-structures-cpp/data-structures-cpp/include/core_dsa.hpp`

## Build and run tests

```bash
g++ -std=c++17 -Wall -Wextra -pedantic \
  /home/runner/work/data-structures-cpp/data-structures-cpp/tests/core_dsa_test.cpp \
  -I/home/runner/work/data-structures-cpp/data-structures-cpp/include \
  -o /tmp/core_dsa_test

/tmp/core_dsa_test
```
