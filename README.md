# Collatz_Conjecture
## Description

This project implements the Collatz Conjecture using both iterative and recursive algorithms in C++. The Collatz Conjecture is a mathematical sequence defined as follows: start with any positive integer `n`. Then each term is obtained from the previous term as follows:
- If the previous term is even, the next term is one half of the previous term.
- If the previous term is odd, the next term is 3 times the previous term plus 1.

The sequence ends when it reaches the number 1.

## Usage

1. Compile the project using the provided Makefile: make

2. Run the executable: make run

3. Follow the menu prompts to use either the iterative or recursive algorithm to compute the number of steps to reach 1 for a given number.