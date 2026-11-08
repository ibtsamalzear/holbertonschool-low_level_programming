# Algorithmic Efficiency Comparison

## 1. Objective

The objective of this task is to compare the execution time of two algorithms using the C `clock()` function.

The experiment measures how long each algorithm takes to execute and compares their algorithmic efficiency.

## 2. Compilation

The program was compiled using the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-long-long comparison_algorithms.c -o comparison_algorithms
```

## 3. Benchmark Results

The program was executed three times.

### Run 1

```text
Naive algorithm result: 625025000
Naive algorithm time: 0.667949 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000028 seconds
```

### Run 2

```text
Naive algorithm result: 625025000
Naive algorithm time: 0.669084 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000029 seconds
```

### Run 3

```text
Naive algorithm result: 625025000
Naive algorithm time: 0.669807 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000028 seconds
```

## 4. Average Execution Time

The average execution times are:

- Naive algorithm: approximately 0.668947 seconds.
- Single-pass algorithm: approximately 0.00002833 seconds.

Based on the displayed measurements, the naive algorithm took approximately 23,610 times longer than the single-pass algorithm.

## 5. Algorithmic Complexity

### Naive Algorithm

- Time complexity: O(n²).
- It uses nested loops.
- It repeatedly checks elements in the array.

### Single-pass Algorithm

- Time complexity: O(n).
- It uses one loop.
- It checks each array element only once.

The single-pass algorithm has better time complexity and execution performance.

## 6. Result Analysis

The two algorithms produced different results:

- Naive algorithm result: 625025000.
- Single-pass algorithm result: 25000.

This difference occurs because the naive algorithm counts even numbers repeatedly across array prefixes, while the single-pass algorithm counts each even number only once.

Therefore, the supplied implementations do not produce the same result. The timing comparison reflects the provided implementations, but it is not a comparison of two equivalent implementations producing identical outputs.

## 7. Performance and Energy Efficiency

The single-pass algorithm performs fewer operations and requires less execution time.

Reducing unnecessary operations can reduce CPU activity and may contribute to lower energy consumption.

However, this experiment measures execution time only. It does not directly measure electrical power consumption or energy usage.

## 8. Conclusion

The benchmark results demonstrate that the single-pass algorithm is significantly faster than the naive algorithm.

The naive algorithm has O(n²) time complexity, while the single-pass algorithm has O(n) time complexity.

This experiment highlights the importance of choosing efficient algorithms to improve software performance and potentially reduce energy consumption.

