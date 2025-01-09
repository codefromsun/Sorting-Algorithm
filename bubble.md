# Bubble Sort

## Introduction
Bubble Sort is a simple comparison-based sorting algorithm. It repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.

## How It Works
1. Starting from the first element, compare the current element with the next element.
2. If the current element is greater than the next element, swap them.
3. Move to the next element and repeat steps 1 and 2 for the rest of the list.
4. After each pass through the list, the largest element "bubbles up" to its correct position at the end of the list.
5. Repeat the process for the remaining unsorted part of the list (i.e., excluding the sorted elements at the end).



## Time Complexity Analysis

- **Worst-case time complexity:** O(n²)
  - Occurs when the array is sorted in reverse order.

- **Best-case time complexity:** O(n)
  - Occurs when the array is already sorted.
  - In this case, the algorithm will only need to pass through the array once without performing any swaps.

- **Average-case time complexity:** O(n²)
  - On average, Bubble Sort performs O(n²) comparisons and swaps.

## Space Complexity
- **Space complexity:** O(1)
  - Bubble Sort is an in-place sorting algorithm, which means it does not require additional memory for an auxiliary array.

## Characteristics
- **Stable:** Yes, because equal elements retain their relative order.
- **In-place:** Yes, because it does not require extra memory space beyond the input array.

## Conclusion
Bubble Sort is a simple but inefficient sorting algorithm, mainly used for educational purposes. Due to its quadratic time complexity, it is not suitable for large datasets. However, it is easy to understand and implement.

## Best_Resource
[Youtube_video](https://youtu.be/Jdtq5uKz-w4?si=YncOJ6LxFtwy6lsd)