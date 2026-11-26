<div align="center">

# 🖥️ C Language Practice

**49 hands-on C programs — from your very first `printf` all the way to matrices, searching, pointers, dynamic memory, structures and file handling.**

[![Build](https://github.com/panditbhavik15/C-Language-Practice/actions/workflows/c-cpp.yml/badge.svg)](https://github.com/panditbhavik15/C-Language-Practice/actions/workflows/c-cpp.yml)
[![Language](https://img.shields.io/github/languages/top/panditbhavik15/C-Language-Practice?color=00599C)](https://github.com/panditbhavik15/C-Language-Practice)
[![Standard](https://img.shields.io/badge/standard-C11-blue)](https://en.wikipedia.org/wiki/C11_(C_standard_revision))
[![License](https://img.shields.io/github/license/panditbhavik15/C-Language-Practice?color=green)](LICENSE)
[![Last Commit](https://img.shields.io/github/last-commit/panditbhavik15/C-Language-Practice)](https://github.com/panditbhavik15/C-Language-Practice/commits/main)
[![Stars](https://img.shields.io/github/stars/panditbhavik15/C-Language-Practice?style=social)](https://github.com/panditbhavik15/C-Language-Practice/stargazers)

[Why This Repo](#-why-this-repository) • [Program Index](#-program-index) • [Quick Start](#-quick-start) • [How to Run](#️-how-to-run-a-single-program) • [Contributing](#-contributing) • [Author](#-author)

</div>

---

## 📖 About

Welcome to **C Language Practice** 👋

This repository is a sequential, beginner-friendly collection of C programs written while learning the language from the ground up — the same order a college practical course or a self-taught roadmap would follow.

**Every single file** follows the same simple layout:

1. A one-line comment saying what the program does
2. The complete, runnable source code
3. A plain-English `Explanation` block at the bottom describing each step

No frameworks, no build system to learn, no setup headaches. Just `gcc` and a terminal.

> **Learn → Practice → Build → Improve 🚀**

---

## ✨ Why This Repository

| | |
|---|---|
| ✅ **Everything compiles** | All 49 programs are built with `gcc -std=c11 -Wall -Wextra` on every push by GitHub Actions. No broken files, no warnings. |
| 📝 **Explained line by line** | Every program ends with an `Explanation` block written for absolute beginners, including the full sample output. |
| 🧭 **Ordered learning path** | Files are numbered `Program 01.c` → `Program 49.c` and grouped by topic, so you always know what to study next. |
| 🪶 **Zero dependencies** | Only the C standard library. Works on Windows, Linux and macOS. |
| 🤝 **Beginner friendly** | Found a bug or want to add your own program? Pull requests are genuinely welcome. |

---

## 📚 Program Index

### 1. Getting Started — Input & Output

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 1 | Hello, World! | Your first C program and `printf()` | [Program 01.c](Program%2001.c) |
| 2 | Variables & `printf()` | Declaring an `int` and printing it with `%d` | [Program 02.c](Program%2002.c) |
| 3 | Reading Input with `scanf()` | Taking a number from the user | [Program 03.c](Program%2003.c) |
| 4 | Add Two Numbers | Input → calculation → output | [Program 04.c](Program%2004.c) |
| 8 | Characters with `char` | Storing a single character, `%c` | [Program 08.c](Program%2008.c) |
| 9 | Read a Character | `scanf(" %c")` and why the space matters | [Program 09.c](Program%2009.c) |

### 2. Data Types & Numbers

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 7 | Adding Decimals | The `float` type and `%.2f` | [Program 07.c](Program%2007.c) |
| 10 | Read a Decimal Number | `%f` with `scanf()` | [Program 10.c](Program%2010.c) |
| 11 | Area of a Circle | Applying a formula with `float` | [Program 11.c](Program%2011.c) |
| 12 | Simple Interest | `I = (p × r × n) / 100` | [Program 12.c](Program%2012.c) |
| 13 | Celsius → Fahrenheit | `F = 1.8 × C + 32` | [Program 13.c](Program%2013.c) |

### 3. Operators & Expressions

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 5 | Arithmetic Operations | `+`, `-`, `*`, `/` on two numbers | [Program 05.c](Program%2005.c) |
| 6 | Modulus / Remainder | The `%` operator | [Program 06.c](Program%2006.c) |
| 14 | All Arithmetic Operators | Division vs. remainder in one program | [Program 14.c](Program%2014.c) |
| 15 | Odd or Even | The conditional (ternary) operator `? :` | [Program 15.c](Program%2015.c) |
| 16 | Increment & Decrement | `a++` and `a--` | [Program 16.c](Program%2016.c) |
| 17 | Shorthand Assignment | `+=`, `-=`, `*=`, `/=` | [Program 17.c](Program%2017.c) |
| 18 | `sizeof` Operator | How much memory each type uses | [Program 18.c](Program%2018.c) |
| 49 | Bitwise Operators | `&`, `\|`, `^`, `~`, `<<`, `>>` | [Program 49.c](Program%2049.c) |

### 4. Decision Making & `switch`

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 19 | Grade Using `if-else` Ladder | Chained conditions | [Program 19.c](Program%2019.c) |
| 34 | Largest of Three Numbers | The `&&` operator | [Program 34.c](Program%2034.c) |
| 35 | Simple Calculator | The `switch` statement | [Program 35.c](Program%2035.c) |
| 36 | Vowel or Consonant | `switch` with fall-through cases | [Program 36.c](Program%2036.c) |

### 5. Loops & Patterns

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 20 | Numbers from 1 to N | The `for` loop | [Program 20.c](Program%2020.c) |
| 21 | Sum of Digits | The `while` loop | [Program 21.c](Program%2021.c) |
| 22 | Multiplication Table | The `do-while` loop | [Program 22.c](Program%2022.c) |
| 23 | Pyramid Star Pattern | Nested loops | [Program 23.c](Program%2023.c) |
| 33 | Fibonacci Series | Building a sequence in a loop | [Program 33.c](Program%2033.c) |

### 6. Classic Number Programs

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 37 | Reverse a Number | Extracting digits with `% 10` | [Program 37.c](Program%2037.c) |
| 38 | Palindrome Number | Comparing a number with its reverse | [Program 38.c](Program%2038.c) |
| 39 | Armstrong Number | Digits raised to a power | [Program 39.c](Program%2039.c) |
| 40 | Primes in a Range | Reusing a helper function | [Program 40.c](Program%2040.c) |
| 41 | GCD & LCM | Euclid's algorithm | [Program 41.c](Program%2041.c) |

### 7. Functions & Recursion

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 24 | Factorial Using Recursion | A function that calls itself | [Program 24.c](Program%2024.c) |
| 25 | Prime Number Check | Writing your own function | [Program 25.c](Program%2025.c) |

### 8. Arrays

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 26 | Largest & Smallest Element | Traversing an array | [Program 26.c](Program%2026.c) |
| 27 | Reverse an Array | Swapping in place | [Program 27.c](Program%2027.c) |

### 9. 2D Arrays & Matrices

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 44 | Matrix Addition | Working with 2D arrays | [Program 44.c](Program%2044.c) |
| 45 | Transpose of a Matrix | Swapping rows and columns | [Program 45.c](Program%2045.c) |

### 10. Sorting & Searching

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 42 | Bubble Sort | Comparing and swapping neighbours | [Program 42.c](Program%2042.c) |
| 43 | Binary Search | Halving the search space | [Program 43.c](Program%2043.c) |

### 11. Strings

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 28 | Length, Vowels & Consonants | Strings without `strlen()` | [Program 28.c](Program%2028.c) |
| 29 | Palindrome Check | Comparing characters from both ends | [Program 29.c](Program%2029.c) |
| 46 | Count Words | Counting without `strtok()` | [Program 46.c](Program%2046.c) |
| 47 | Join Two Strings | Doing `strcat()` by hand | [Program 47.c](Program%2047.c) |

### 12. Pointers & Dynamic Memory

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 30 | Swap Two Numbers | Pointers and pass-by-reference | [Program 30.c](Program%2030.c) |
| 48 | `malloc()` & `free()` | Allocating memory at run time | [Program 48.c](Program%2048.c) |

### 13. Structures & File Handling

| # | Program | What you learn | Source |
|:--|:--------|:---------------|:-------|
| 31 | Student Record | Grouping data with `struct` | [Program 31.c](Program%2031.c) |
| 32 | Write & Read a File | `fopen`, `fprintf`, `fgets`, `fclose` | [Program 32.c](Program%2032.c) |

---

## 🚀 Quick Start

```bash
# 1. Clone the repository
git clone https://github.com/panditbhavik15/C-Language-Practice.git

# 2. Move into the folder
cd C-Language-Practice

# 3. Compile every program at once (output goes into ./build)
bash compile-all.sh
```

`compile-all.sh` prints `OK` or `FAIL` for each file and exits with a non-zero status if anything breaks — that is exactly what the GitHub Actions workflow runs on every push.

**Windows (Command Prompt or PowerShell)**

```bat
compile-all.cmd
```

`compile-all.cmd` is the same build for Windows: MinGW's `gcc`, the same `OK` / `FAIL` lines, output into `build\`, and a non-zero exit status if anything fails.

---

## ⚙️ How to Run a Single Program

**Linux / macOS**

```bash
gcc -Wall -Wextra "Program 01.c" -o program1
./program1
```

**Windows (MinGW / Git Bash)**

```bash
gcc -Wall -Wextra "Program 01.c" -o program1.exe
./program1.exe
```

**Windows (Command Prompt)**

```bat
gcc -Wall -Wextra "Program 01.c" -o program1.exe
program1.exe
```

> 💡 **Keep the quotes.** File names contain spaces (`Program 01.c`), so the shell needs them.

---

## 🧪 Tests

Every program has an input/output pair recorded in `tests/cases/`:

```text
tests/cases/05.test

    --- input
    20
    10
    --- output
    Enter first number: Enter second number: Addition = 30
    Subtraction = 10
    ...
```

Compile each program, feed it the recorded input and compare what it prints:

```bash
bash run-tests.sh
```

**Windows (Command Prompt or PowerShell)**

```bat
run-tests.cmd
```

`run-tests.cmd` is the same check with no Git Bash needed: it compiles each program
with MinGW's `gcc` and prints the same `PASS` / `FAIL` / `SKIP` lines.

The script prints `PASS` or `FAIL` for every program, shows a diff when the output
changed, and exits non-zero if anything fails. `SKIP` means the program has no
case file yet.

When you change a program on purpose, re-record its output and review the result
(on Windows use `run-tests.cmd --update`):

```bash
bash run-tests.sh --update
git diff tests/cases
```

CI runs this after the build on every push, so a program that compiles but prints
the wrong answer is caught too.

---

## 🧠 Suggested Learning Order

- [x] Programs **1 – 10** — syntax, variables, input and output
- [x] Programs **11 – 18, 49** — formulas, every basic operator, bitwise math
- [x] Programs **19 – 23, 33, 34 – 36** — decisions, `switch`, loops and patterns
- [x] Programs **37 – 41** — the classic number practicals
- [x] Programs **24, 25** — writing your own functions
- [x] Programs **26, 27, 44, 45** — arrays and matrices
- [x] Programs **42, 43** — sorting and searching
- [x] Programs **28, 29, 46, 47** — strings
- [x] Programs **30, 48** — pointers and dynamic memory
- [x] Programs **31, 32** — structures and files

---

## 🤝 Contributing

Contributions are welcome — a new program, a clearer explanation or a bug fix all help.

1. Fork the repository
2. Create a branch: `git checkout -b add-my-program`
3. Add your file following the existing style (`Program NN.c`, code + `Explanation` block)
4. Make sure it compiles without warnings (`bash compile-all.sh` or `compile-all.cmd`) and record a test case with `bash run-tests.sh --update`
5. Open a pull request

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for the full style guide.

---

## 📜 License

Released under the **MIT License** — free to use, modify and share. See [LICENSE](LICENSE).

---

## 👨‍💻 Author

**Bhavik Pandit**
B.Tech in Computer Science (AI & ML) · Dr. Subhash University, Gujarat

[![GitHub](https://img.shields.io/badge/GitHub-panditbhavik15-181717?logo=github&logoColor=white)](https://github.com/panditbhavik15)

---

<div align="center">

### ⭐ If these programs helped you, please drop a star — it genuinely helps!

*Happy coding!*

</div>
