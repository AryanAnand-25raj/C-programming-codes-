# C Programming Examples

[![C quality checks](https://github.com/AryanAnand-25raj/C-programming-codes-/actions/workflows/c-quality.yml/badge.svg)](https://github.com/AryanAnand-25raj/C-programming-codes-/actions/workflows/c-quality.yml)
[![C11](https://img.shields.io/badge/standard-C11-blue.svg)](https://www.open-std.org/jtc1/sc22/wg14/)
[![Examples](https://img.shields.io/badge/examples-33-success.svg)](#concepts-and-examples)

A structured collection of standalone C programs for learning language fundamentals, control flow, data handling, and introductory algorithms.

The examples are grouped by their primary programming concept so learners can move from simple conditionals and loops to arrays, pointers, structures, searching, and sorting.

## Repository structure

```text
.
├── src/
│   ├── arithmetic/      # Calculations and numeric operations
│   ├── arrays/          # Array traversal and aggregation
│   ├── conditionals/    # if/else and switch statements
│   ├── loops/           # for and while loops
│   ├── matrices/        # Two-dimensional array operations
│   ├── patterns/        # Nested-loop pattern exercises
│   ├── pointers/        # Address and pointer operations
│   ├── searching/       # Linear and binary search
│   ├── sorting/         # Elementary sorting algorithms
│   ├── strings/         # Character arrays and string functions
│   └── structures/      # User-defined record types
├── docs/                # Project coding conventions
├── .github/             # CI and contribution templates
├── CONTRIBUTING.md
├── Makefile
└── README.md
```

> [!NOTE]
> C does not have constructors. Constructors are a feature of object-oriented languages such as C++ and Java. In C, related data is modeled with `struct`, so those examples are grouped under [`src/structures`](src/structures).

## Concepts and examples

### 1. Conditionals

Examples using `if`, `else if`, `else`, logical operators, and `switch`:

- [Arithmetic calculator](src/conditionals/arithmetic_calculator.c)
- [Equality check](src/conditionals/equality_check.c)
- [Even or odd](src/conditionals/even_or_odd.c)
- [Grade calculator](src/conditionals/grade_calculator.c)
- [Greatest of three numbers](src/conditionals/greatest_of_three.c)
- [Leap-year check](src/conditionals/leap_year.c)

### 2. Loops

Examples using `for` and `while` loops for repetition:

- [Factorial](src/loops/factorial.c)
- [Fibonacci series](src/loops/fibonacci.c)
- [Prime-number check](src/loops/prime_check.c)
- [Sum of even and odd numbers](src/loops/sum_even_odd.c)
- [Sum of natural numbers](src/loops/sum_natural_numbers.c)

### 3. Arithmetic

- [Simple and compound interest](src/arithmetic/interest_calculator.c)
- [Student marks summary](src/arithmetic/marks_summary.c)
- [Swap using arithmetic](src/arithmetic/swap_using_arithmetic.c)

### 4. Arrays and matrices

- [Array sum](src/arrays/array_sum.c)
- [Minimum and maximum](src/arrays/min_max.c)
- [Element-wise sum of two arrays](src/arrays/sum_two_arrays.c)
- [Diagonal matrix sum](src/matrices/diagonal_sum.c)
- [Matrix multiplication](src/matrices/matrix_multiplication.c)

### 5. Searching and sorting

- [Linear search](src/searching/linear_search.c)
- [Binary search](src/searching/binary_search.c)
- [Bubble sort](src/sorting/bubble_sort.c)
- [Insertion sort](src/sorting/insertion_sort.c)
- [Selection sort](src/sorting/selection_sort.c)

### 6. Pointers, strings, and structures

- [Swap using pointers](src/pointers/swap_using_pointers.c)
- [String operations](src/strings/string_operations.c)
- [Student records](src/structures/student_records.c)
- [Student records with sample data](src/structures/student_records_sample.c)
- [Student records with text IDs](src/structures/student_records_text_id.c)

### 7. Nested-loop patterns

- [Number diamond](src/patterns/diamond_number_pattern.c)
- [Inverted alphabet pattern](src/patterns/inverted_alphabet_pattern.c)
- [Number triangle](src/patterns/number_triangle.c)
- [Star triangle](src/patterns/star_triangle.c)

## Getting started

### Requirements

- GCC or Clang with C11 support
- GNU Make

### Clone and build

```bash
git clone https://github.com/AryanAnand-25raj/C-programming-codes-.git
cd C-programming-codes-
make
```

Built programs mirror the source structure inside `bin/`. For example:

```bash
./bin/loops/fibonacci
./bin/sorting/bubble_sort
```

On Windows PowerShell, use the generated `.exe` file when applicable.

### Compile one example

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic -Werror \
  src/loops/fibonacci.c -o fibonacci
./fibonacci
```

## Quality checks

Run strict syntax and warning checks across every example:

```bash
make check
```

The GitHub Actions workflow performs the same checks with both GCC and Clang on every pull request.

## Contributing

Read [CONTRIBUTING.md](CONTRIBUTING.md) and the [C style guide](docs/STYLE_GUIDE.md) before submitting a change. New examples should be placed in the folder matching their primary learning concept.

## License

No license has been selected yet. Until one is added, copyright remains with the repository owner.
