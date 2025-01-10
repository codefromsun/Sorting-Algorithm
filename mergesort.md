# Merge Sort

## Introduction
Merge Sort is a highly efficient, comparison-based, divide-and-conquer sorting algorithm. It works by dividing the array into smaller sub-arrays, sorting each sub-array, and then merging them back together in sorted order.

## How It Works
1. **Divide:** Split the array into two halves. Keep splitting the halves recursively until each sub-array contains a single element (which is trivially sorted).
2. **Conquer:** Merge the sorted sub-arrays to produce sorted larger arrays.
3. **Combine:** Continue merging the sub-arrays until the entire array is sorted.


## Time Complexity Analysis

- **Worst-case time complexity:** O(n log n)  
  - The array is divided into halves log(n) times, and merging two halves takes O(n) time. Therefore, the total time complexity is O(n log n).

- **Best-case time complexity:** O(n log n)  
  - Even if the array is already sorted, the algorithm still divides and merges all sub-arrays, resulting in O(n log n) complexity.

- **Average-case time complexity:** O(n log n)  
  - On average, Merge Sort performs O(n log n) comparisons and merges.

## Space Complexity

- **Space complexity:** O(n)  
  - Merge Sort requires additional memory for the temporary sub-arrays used during the merging process. This makes its space complexity O(n).

## Characteristics

- **Stable:** Yes, because equal elements retain their relative order during the merging process.
- **In-place:** No, because it requires additional memory for the temporary sub-arrays.
- **Divide and conquer:** Merge Sort follows the divide-and-conquer paradigm, which splits the problem into smaller parts and solves each part recursively.

## Conclusion
Merge Sort is a highly efficient sorting algorithm with a consistent O(n log n) time complexity. However, it requires extra memory space and is not an in-place algorithm. It is well-suited for large datasets where time efficiency is more important than memory usage.

## Best_Resource
- [Youtube_video part-1](https://youtu.be/TzeBrDU-JaY?si=vjE6OajeBVkwOsf0)
- [Youtube_video part-2](https://youtu.be/0nlPxaC2lTw?si=p08_O0cYvdhQ_k5X)
