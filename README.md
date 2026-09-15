# Competitive Programming

[![Python](https://img.shields.io/badge/Python-3.x-3776AB?style=flat-square&logo=python&logoColor=white)](https://www.python.org/)
[![Codeforces](https://img.shields.io/badge/Codeforces-Solutions-1F8ACB?style=flat-square&logo=codeforces&logoColor=white)](https://codeforces.com/)
[![LeetCode](https://img.shields.io/badge/LeetCode-Practice-FFA116?style=flat-square&logo=leetcode&logoColor=white)](https://leetcode.com/)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg?style=flat-square)](LICENSE)

Personal repository containing solutions to Codeforces and LeetCode problems, contest submissions, and reusable Python templates.

---

## Structure

```text
competitive-programming/
├── codeforces/
│   ├── contests/          # Contest submissions (div1, div2, div3, etc.)
│   └── problemsets/       # Problemset solutions categorized by rating (800, 900, ...)
├── leetcode/              # LeetCode problems (easy, medium, hard)
├── templates/             # Fast I/O and algorithm boilerplates
├── .gitignore
├── LICENSE
└── README.md
```

---

## Solution Header Convention

Each solution file includes a metadata header for quick reference:

```python
"""
Codeforces Round XXX (Div. X) / LeetCode XXX
Problem: <Problem ID> - <Problem Title>
Link: <Problem URL>
Rating / Difficulty: <Rating / Easy | Medium | Hard>
Tags: <tags>
Key Idea: <Approach overview>
"""
```

---

## Fast I/O Template

Python solutions use fast I/O from [templates/python_fastio.py](templates/python_fastio.py):

```python
import sys
input = sys.stdin.readline

def solve():
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

## Local Testing

Test solutions locally using input redirection:

```bash
python3 codeforces/problemsets/800/2259B.py < input.txt
```

---

## License

This project is licensed under the [MIT License](LICENSE).
