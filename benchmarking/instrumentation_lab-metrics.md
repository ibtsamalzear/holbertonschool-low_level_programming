# Controlled Instrumentation Experiment

## 1. Objective

The objective of this experiment is to measure the execution time of a multi-phase C program using the `clock()` function.

The program contains three phases:

- BUILD_DATA: Generates the dataset.
- PROCESS: Performs calculations on the dataset.
- REDUCE: Calculates the checksum.

## 2. Measurement Method

The program uses `clock_t` and `clock()` from the C time library.

Each phase is measured separately by recording the start and end CPU clock values.

Execution time is calculated using:

```c
(double)(end - start) / CLOCKS_PER_SEC
```

The TOTAL measurement starts before BUILD_DATA and ends after REDUCE. Therefore, it includes all three phases and the small timing overhead between them.

## 3. Measurement Boundaries

- TOTAL: Starts immediately before BUILD_DATA and ends immediately after REDUCE.
- BUILD_DATA: Measures only the `build_dataset()` function.
- PROCESS: Measures only the `process_dataset()` function.
- REDUCE: Measures only the `reduce_checksum()` function.

The algorithmic logic remains unchanged.

## 4. Benchmark Results

The program was executed three times.

### Run 1

```text
TOTAL seconds: 0.000350
BUILD_DATA seconds: 0.000138
PROCESS seconds: 0.000145
REDUCE seconds: 0.000066
```

### Run 2

```text
TOTAL seconds: 0.000316
BUILD_DATA seconds: 0.000136
PROCESS seconds: 0.000115
REDUCE seconds: 0.000064
```

### Run 3

```text
TOTAL seconds: 0.000361
BUILD_DATA seconds: 0.000150
PROCESS seconds: 0.000142
REDUCE seconds: 0.000066
```

## 5. Average Execution Time

The average execution times are:

- TOTAL: approximately 0.00034233 seconds.
- BUILD_DATA: approximately 0.00014133 seconds.
- PROCESS: approximately 0.00013400 seconds.
- REDUCE: approximately 0.00006533 seconds.

## 6. Analysis

The TOTAL measurement is greater than each individual phase measurement in all three runs.

BUILD_DATA and PROCESS generally take more execution time than REDUCE.

The small differences between TOTAL and the sum of the individual phase measurements are expected because of timing overhead and the measurement boundaries.

Execution times vary slightly between runs due to system conditions and measurement precision.

## 7. Performance and Energy Efficiency

The measurements help identify which program phases consume more CPU execution time.

Reducing unnecessary operations may improve performance and potentially reduce energy consumption.

However, this experiment measures CPU execution time only. It does not directly measure electrical power or energy usage.

## 8. Conclusion

The experiment successfully demonstrates how to instrument a multi-phase C program using `clock()`.

The program measures total execution time and the execution time of each individual phase.

The results show that controlled instrumentation helps identify performance differences between program phases and supports informed optimization decisions.

