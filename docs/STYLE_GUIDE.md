# C Style Guide

This project follows a small set of conventions so every example remains readable and portable.

## Source files

- Place programs in the most relevant folder under `src/`.
- Use descriptive `snake_case.c` filenames.
- Give each source file one focused learning objective.
- Use standard C11 and standard-library headers only.

## Formatting

- Indent with four spaces; do not use tabs in C files.
- Put braces on their own line for functions and control-flow blocks.
- Keep lines concise and remove trailing whitespace.
- Use comments to explain intent or a non-obvious decision, not to narrate syntax.

## Correctness and safety

- Declare entry points as `int main(void)` when no arguments are used.
- Check user input before using it in calculations or as an array bound.
- Prefer bounded input functions such as `fgets`; never use `gets`.
- Avoid compiler-specific headers and platform-specific behavior.
- Return a nonzero exit status when the program cannot continue safely.

## Validation

Every contribution must pass:

```bash
make check
make
```

The CI workflow repeats these checks with both GCC and Clang.
