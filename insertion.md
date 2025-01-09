# Insertion Sort

## Introduction
Insertion sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.

## How It Works
1. Start with the second element (the first element is trivially considered sorted).
2. Compare the current element with the elements before it.
3. Shift all elements greater than the current element to one position ahead of their current position.
4. Insert the current element into its correct position
(just right after smaller element).
5. Repeat the process for the rest of the array.


## Time Complexity Analysis

- **Worst-case time complexity:** O(n²)  
  - Occurs when the array is sorted in reverse order, resulting in the maximum number of shifts.

- **Best-case time complexity:** O(n)  
  - Occurs when the array is already sorted. In this case, the algorithm only compares elements without performing any shifts.

- **Average-case time complexity:** O(n²)  
  - On average, Insertion Sort performs O(n²) comparisons and shifts.

## Space Complexity

- **Space complexity:** O(1)  
  - Insertion Sort is an in-place sorting algorithm, requiring no additional memory beyond the input array.

## Characteristics

- **Stable:** Yes, because equal elements retain their relative order.
- **In-place:** Yes, because it does not require extra memory space beyond the input array.
- **Efficient for small datasets:** Insertion Sort is efficient for small datasets or lists that are already partially sorted.

## Conclusion
Insertion Sort is a simple and intuitive sorting algorithm that works well on small and nearly sorted datasets. However, due to its O(n²) time complexity, it is not suitable for large datasets.

## Best_Resource
[Youtube_video](https://youtu.be/i-SKeOcBwko?si=mf635KcxaIlreQq6)