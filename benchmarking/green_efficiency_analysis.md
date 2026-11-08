# Green Efficiency Analysis

## Measurement Methodology

The purpose of this experiment was to examine how program execution time changes across different implementations and processing stages. The provided C programs were compiled and executed in the benchmarking directory. Execution time was recorded in seconds, and repeated runs were used to observe variations.

In the baseline experiment, the program performed 100,000,000 iterations. Three execution times were recorded: 0.199965 seconds, 0.199595 seconds, and 0.199190 seconds. The average execution time was approximately 0.199583 seconds.

In the algorithm comparison experiment, the Naive algorithm and the Single-pass algorithm were each measured three times. Their average execution times were approximately 0.668947 seconds and 0.00002833 seconds, respectively.

Finally, the instrumentation experiment measured the total execution time and three individual phases: BUILD_DATA, PROCESS, and REDUCE. Each measurement was repeated three times, and average values were calculated.

## Observed Performance Differences

The algorithm comparison showed a substantial difference in recorded execution time. The Naive algorithm averaged approximately 0.668947 seconds, while the Single-pass algorithm averaged approximately 0.00002833 seconds. The Naive implementation therefore took approximately 23,610 times longer based on these recorded averages.

This difference is consistent with the algorithm structures: the Naive implementation uses nested loops and has O(n²) time complexity, while the Single-pass implementation processes the data in one pass and has O(n) time complexity.

However, their reported results were different. The Naive algorithm returned 625025000, while the Single-pass algorithm returned 25000. Therefore, these measurements demonstrate a runtime difference between the provided implementations, but they do not establish that both implementations perform exactly the same calculation.

The instrumentation experiment recorded an average total time of approximately 0.00034233 seconds. The average BUILD_DATA time was 0.00014133 seconds, PROCESS took 0.00013400 seconds, and REDUCE took 0.00006533 seconds. BUILD_DATA was the longest measured phase in this experiment.

## Relation Between Runtime and Energy Consumption

Execution time is relevant to energy efficiency because a processor that remains active for less time may have less opportunity to consume energy while performing a task. The algorithm comparison illustrates why reducing unnecessary computation can be beneficial: the Single-pass implementation completed much faster than the Naive implementation in the recorded runs.

However, execution time alone does not measure electrical energy consumption. Energy depends on both power and time. No power meter or direct energy measurement was used in these experiments. Therefore, the results support conclusions about runtime, not exact electricity savings or carbon emissions.

## Limitations of the Experiment

The experiment has several limitations. First, only three runs were recorded for each program, so the measurements may not represent performance under every system condition. Second, execution time can vary because of system activity and measurement precision. Very short measurements, such as the Single-pass and instrumentation results, are particularly sensitive to timer resolution.

Third, the programs perform different workloads, so their execution times should not be treated as a controlled comparison of identical tasks. The different results returned by the two comparison algorithms are another important limitation. Finally, the experiment did not measure CPU power, total energy, or environmental impact directly.

## Practical Engineering Takeaway

The measurements demonstrate that algorithm design and unnecessary repeated work can have a major effect on execution time. Choosing an efficient algorithm, measuring individual processing phases, and identifying the slowest part of a program are useful engineering practices.

Engineers should also verify that compared implementations produce equivalent results before drawing performance conclusions. For stronger sustainability claims, runtime measurements should be combined with direct energy measurements using appropriate hardware or monitoring tools. Efficient software should be evaluated using both correctness and performance evidence.
