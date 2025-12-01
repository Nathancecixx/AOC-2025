<p align="center">
  <img src="https://img.shields.io/badge/event-Advent%20of%20Code%202025-%23b30000?style=for-the-badge" />
  <img src="https://img.shields.io/badge/language-C%2B%2B17-blue?style=for-the-badge" />
  <img src="https://img.shields.io/badge/status-in%20progress-%23FFD700?style=for-the-badge" />
</p>

<h1 align="center">🎄 Advent of Code 2025 – C++ Solutions 🎄</h1>

<p align="center">
  <a href="https://adventofcode.com/2025">Official Advent of Code 2025 Site</a>
</p>

## ✨ What is Advent of Code?

Advent of Code (AoC) is an annual programming event in December with a new puzzle unlocked each day from the 1st to the 25th.
Each day has:

* **Part 1** – introduces the puzzle mechanic.
* **Part 2** – twists the rules and forces you to extend or rethink your solution.

You earn ⭐ **stars** ⭐ by solving each part.
This repository is my personal **Advent of Code 2025 submission's**, written in **C++**.

---

## 📁 Repository Structure

> Layout designed to jump into any days solution

```text
.
├─ 2025/
│  ├─ day01/
│  │  ├─ main.cpp        # Solution for the Day (both parts)
│  │  ├─ input.txt       # My personal puzzle input
│  │  └─ CMakeLists.txt  
│  ├─ day02/
│  │  └─ ...
│  └─ ...
├─ README.md
└─ ...
```

* Each **day** lives in its own folder.
* `main.cpp` (or similarly named file) contains the solution.
* `input.txt` is the actual input provided by Advent of Code for my account.
* Some days may also include helper headers, notes, or experimental files.

---

## 🏗️ How to Build & Run

You can compile any day’s solution with a standard C++ compiler.

From the repo root, for example for **Day 1**:

```bash
cd 2025/day01

# Compile (GCC / Clang)
g++ -std=c++17 -O2 -Wall -Wextra main.cpp -o day01

# Run (the program reads from input.txt internally, or modify to use stdin)
./day01
```

If you prefer using `input.txt` via stdin, you can easily change `main.cpp` to read from `std::cin` instead of a file and then:

```bash
./day01 < input.txt
```

---

## 📊 Progress Tracker

> ⭐ = Part 1 done, ⭐⭐ = Part 1 + Part 2

| Day | Puzzle Name     | Language | Status | Notes                         |
| --- | --------------- | -------- | ------ | ----------------------------- |
| 01  | Secret Entrance | C++      | ⭐⭐     | Dial rotations + modular math |
| 02  | *TBD*           | C++      | ⬜⬜     |                               |
| 03  | *TBD*           | C++      | ⬜⬜     |                               |
| 04  | *TBD*           | C++      | ⬜⬜     |                               |
| 05  | *TBD*           | C++      | ⬜⬜     |                               |
| 06  | *TBD*           | C++      | ⬜⬜     |                               |
| 07  | *TBD*           | C++      | ⬜⬜     |                               |
| 08  | *TBD*           | C++      | ⬜⬜     |                               |
| 09  | *TBD*           | C++      | ⬜⬜     |                               |
| 10  | *TBD*           | C++      | ⬜⬜     |                               |
| 11  | *TBD*           | C++      | ⬜⬜     |                               |
| 12  | *TBD*           | C++      | ⬜⬜     |                               |

> This year there is only 12 days of code

---


## 🎅 Final Note

Whether you’re here to:

* Study C++ solutions,
* Compare approaches,
* Or just watch the stars stack up,

Thanks for stopping by — and happy coding! ⭐
