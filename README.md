# 🚀 Competitive Programming Archive & Toolkit

[![Python](https://img.shields.io/badge/Python-3.x-3776AB?style=for-the-badge&logo=python&logoColor=white)](https://www.python.org/)
[![Codeforces](https://img.shields.io/badge/Codeforces-Solutions-1F8ACB?style=for-the-badge&logo=codeforces&logoColor=white)](https://codeforces.com/)
[![LeetCode](https://img.shields.io/badge/LeetCode-Practice-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)](https://leetcode.com/)
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg?style=for-the-badge)](https://github.com/aryanmsrh/competitive-programming)

A structured personal repository containing competitive programming problem solutions, contest submissions, reusable algorithms, and optimized Fast I/O boilerplate templates primarily written in Python.

---

## 📌 Table of Contents

- [Overview](#-overview)
- [Repository Structure](#-repository-structure)
- [Solution File Standard](#-solution-file-standard)
- [Python in Competitive Programming](#-python-in-competitive-programming)
  - [Fast I/O](#fast-io)
  - [Recursion Limits](#recursion-limits)
  - [Optimization Best Practices](#optimization-best-practices)
- [Local Development & Workflow](#-local-development--workflow)
- [Topics & Problem Categories](#-topics--problem-categories)
- [Platforms & Resources](#-platforms--resources)
- [Author](#-author)

---

## 📖 Overview

This repository serves as a personal knowledge base and continuous log for competitive programming across multiple online judges:

- **Codeforces**: Div. 1–4 contest submissions and problemset problems sorted by rating.
- **LeetCode**: Practice problems categorized by difficulty (`easy`, `medium`, `hard`) focusing on data structures, system design patterns, and algorithmic foundations.
- **Templates**: Reusable boilerplates, optimized I/O routines, custom data structures, and reference notes for contests.

---

## 📂 Repository Structure

```text
competitive-programming/
├── codeforces/
│   ├── contests/                  # Contest-specific submissions
│   │   ├── div1/
│   │   ├── div2/
│   │   ├── div3/                  # e.g., Codeforces Round (Div. 3)
│   │   ├── div4/
│   │   └── educational/
│   └── problemsets/               # Practice problems categorized by rating
│       ├── 800/
│       ├── 900/
│       ├── 1000/
│       └── ...
├── leetcode/                      # LeetCode problems categorized by difficulty
│   ├── easy/
│   ├── medium/
│   └── hard/
├── templates/                     # Reusable templates and reference notes
│   ├── python_fastio.py           # Standard competitive programming fast I/O setup
│   └── notes.md                   # Quick notes on patterns, edge cases, and formulas
├── .gitignore                     # Ignores input/output files (*.in, *.out, input.txt)
└── README.md
```

---

## 📝 Solution File Standard

To keep all problem solutions maintainable and easy to review later, each solution script follows a consistent metadata header:

```python
"""
Codeforces Round XXX (Div. X) / LeetCode XXX
Problem: <Problem Code / Number> - <Problem Title>
Link: <Problem URL>
Rating / Difficulty: <Difficulty Rating / Easy | Medium | Hard>
Tags: <algorithm, data structure, math, etc.>
Key Idea: <Brief note on the intuition, approach, time/space complexity>
"""

import sys
input = sys.stdin.readline

def solve():
    # Problem logic goes here
    pass

def main():
    line = input()
    if not line:
        return
    t = int(line.strip())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
```

---

## ⚡ Python in Competitive Programming

Python provides rapid prototyping and expressive syntax, but competitive programming platforms impose strict time limits (typically $1.0\text{s} - 2.0\text{s}$). The following configurations and techniques are utilized across solutions in this repository:

### Fast I/O

Standard `input()` performs slower due to extra boundary checks and newline stripping. Using `sys.stdin.readline` significantly reduces I/O overhead when processing large inputs ($N \ge 10^5$):

```python
import sys

# Fast input
input = sys.stdin.readline

# Fast output for multiple lines
def write(data):
    sys.stdout.write(str(data) + "\n")
```

### Recursion Limits

Python's default recursion depth limit is 1,000, which leads to `RecursionError` on deep tree or graph traversals ($N \le 2 \times 10^5$). When solving DFS / recursion-heavy problems:

```python
import sys
sys.setrecursionlimit(300000)
```

### Optimization Best Practices

- **PyPy vs CPython**: On Codeforces, submit under **PyPy 3** when available; it provides JIT compilation speedups that can make Python competitive with C++.
- **List Comprehensions & In-Place Operations**: Faster than explicit Python `for` loops appending to lists.
- **String Formatting**: Prefer `sys.stdout.write(" ".join(...))` over printing items one by one inside a loop.
- **Bitwise Operations**: Prefer bit-manipulation when dealing with powers of 2 (`1 << k`) and parity checks (`x & 1`).

---

## 💻 Local Development & Workflow

### 1. Running a Solution with Local Input

The repository is configured to ignore scratch test files (`input.txt`, `output.txt`, `*.in`, `*.out`) via [.gitignore](file:///home/aryanm/dev/cp/.gitignore).

Create an `input.txt` file in your working directory and redirect standard input:

```bash
# Run with input redirection
python3 codeforces/problemsets/800/2259B.py < input.txt

# Or output to a file for comparison
python3 codeforces/problemsets/800/2259B.py < input.txt > output.txt
```

### 2. Adding a New Problem

1. Copy the boilerplate from [templates/python_fastio.py](file:///home/aryanm/dev/cp/templates/python_fastio.py) into the appropriate folder (e.g. `codeforces/problemsets/<rating>/<id>.py` or `leetcode/<difficulty>/<problem_name>.py`).
2. Fill in the metadata header (`Problem`, `Link`, `Rating`, `Tags`, `Key Idea`).
3. Implement `solve()` and test against sample and edge test cases.

---

## 🧠 Topics & Problem Categories

- **Mathematics & Number Theory**: GCD/LCM (Euclidean Algorithm), Sieve of Eratosthenes, Modular Arithmetic, Modular Inverse, Combinatorics ($nCr \pmod p$).
- **Data Structures**: Hash Maps, Heaps (`heapq`), Disjoint Set Union (DSU / Union-Find), Monotonic Stacks & Queues, Segment Trees, Fenwick Trees (Binary Indexed Tree).
- **Two Pointers & Sliding Window**: Subarray sum constraints, longest substring variations.
- **Binary Search**: Binary search on answer, upper/lower bounds (`bisect` module).
- **Graph Theory**: Breadth-First Search (BFS), Depth-First Search (DFS), Dijkstra's Shortest Path, Topological Sorting, Cycle Detection.
- **Dynamic Programming**: 1D/2D DP, Knapsack variations, Longest Increasing Subsequence (LIS), Bitmask DP.
- **Greedy Algorithms**: Interval scheduling, sorting-based greedy choices.

---

## 🔗 Platforms & Resources

- [Codeforces](https://codeforces.com/)
- [LeetCode](https://leetcode.com/)
- [CSES Problem Set](https://cses.fi/problemset/)
- [CP-Algorithms (E-Maxx in English)](https://cp-algorithms.com/)
- [USACO Guide](https://usaco.guide/)

---

## 👤 Author

- **Aryan Mishra** ([@aryanmsrh](https://github.com/aryanmsrh))
