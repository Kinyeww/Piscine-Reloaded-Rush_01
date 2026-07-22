# Rush01

Rush01 is a 42 project based on the **Skyscraper puzzle**.

The program receives 16 visibility clues and generates a valid 4×4 grid using the numbers `1` to `4`.

Each row and column must contain every number exactly once.

## How the Puzzle Works

Each number represents the height of a building.

When looking from one side of the grid, taller buildings hide shorter buildings behind them.

For example:

```text
1 2 3 4
```

From the left, you can see all 4 buildings.

```text
4 3 2 1
```

From the left, you can only see 1 building because the tallest building blocks the others.

## Input Format

The program expects exactly 16 numbers separated by spaces.

```text
"col1up col2up col3up col4up col1down col2down col3down col4down row1left row2left row3left row4left row1right row2right row3right row4right"
```

The clues are provided in this order:

```text
Top clues
Bottom clues
Left clues
Right clues
```

Each clue must be a number from `1` to `4`.

## Compilation

Compile the project using:

```bash
make
```

This should create an executable, usually named:

```bash
rush-01
```

If your executable has a different name, replace `rush-01` in the examples below.

## Usage

Run the program with the 16 clues inside quotation marks:

```bash
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

Example output:

```text
1 2 3 4
2 3 4 1
3 4 1 2
4 1 2 3
```

The exact output depends on the clues provided.

## Invalid Input

The program should display:

```text
Error
```

when:

* The number of clues is not 16.
* A clue is outside the range `1` to `4`.
* The input contains invalid characters.
* The clues do not have a valid solution.
* Too many arguments are provided.

Examples of invalid commands:

```bash
./rush-01
```

```bash
./rush-01 "1 2 3"
```

```bash
./rush-01 "0 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4"
```

```bash
./rush-01 "a b c d"
```

## Cleaning the Project

Remove object files:

```bash
make clean
```

Remove object files and the executable:

```bash
make fclean
```

Recompile the entire project:

```bash
make re
```

## Testing

Test the program with valid and invalid inputs.

Valid input example:

```bash
./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
```

Another input example:

```bash
./rush-01 "1 2 2 3 3 2 2 1 1 2 2 3 3 2 2 1"
```

You should also test invalid inputs to confirm that the program prints `Error`.

## Rules Summary

A valid solution must follow these rules:

1. The grid must be 4×4.
2. Each row must contain `1`, `2`, `3`, and `4` exactly once.
3. Each column must contain `1`, `2`, `3`, and `4` exactly once.
4. The grid must satisfy all 16 visibility clues.

## Project Structure

A possible project structure is:

```text
rush01/
├── Makefile
├── includes/
│   └── rush01.h
├── srcs/
│   ├── main.c
│   ├── parsing.c
│   ├── solving.c
│   ├── validation.c
│   └── output.c
└── README.md
```

Your file structure may be different depending on your implementation.

## Notes

This README assumes the standard mandatory 4×4 version of the 42 Rush01 project.

The bonus version may support different grid sizes and may require a different input format.
