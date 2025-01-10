# Quick Sort

## Introduction
Quick Sort is an efficient, comparison-based, divide-and-conquer sorting algorithm. Quick Sort selects a 'pivot' element from the array and partitions the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.

## How It Works
1. **Choose a pivot:** Select an element from the array (pivot). The choice of pivot can vary (e.g., first element, last element, random element, or median).
2. **Partitioning:** Rearrange the elements in the array so that elements less than or equal the pivot come before it and elements greater than the pivot come after it.
3. **Recursion:** Recursively apply the same process to the sub-arrays formed by dividing the array around the pivot.
4. **Combine:** Once the sub-arrays are sorted, the entire array is sorted.


## Time Complexity Analysis

- **Worst-case time complexity:** O(n²)  
  - This occurs when the pivot selected is always the smallest or largest element (e.g., if the array is already sorted or nearly sorted).
  
- **Best-case time complexity:** O(n log n)  
  - Occurs when the pivot splits the array into nearly equal halves.

- **Average-case time complexity:** O(n log n)  
  - On average, Quick Sort performs O(n log n) comparisons.

## Space Complexity

- **Space complexity:** O(n)  
  - The space complexity is O(n) due to the recursion stack, which grows with the depth of recursion. Quick Sort is an in-place sorting algorithm, so no additional space is required for the array.

## Characteristics

- **Stable:** No, Quick Sort is not stable. Equal elements may not retain their relative order.
- **In-place:** Yes, because it sorts the array in place without using additional memory for temporary arrays.
- **Efficient for large datasets:** Quick Sort is often faster in practice than other O(n log n) algorithms like Merge Sort, even though its worst-case time complexity is O(n²) which can possibly be avoided almost every time by random pivot selection.

## Conclusion
Quick Sort is a highly efficient sorting algorithm with an average-case time complexity of O(n log n), making it suitable for large datasets. However, it is not stable and can have a worst-case time complexity of O(n²), which can be mitigated by using different pivot selection strategies (like random pivoting).

## Best Resource
- [YouTube Video part-1](https://youtu.be/COk73cpQbFQ?si=SEnOBJaLl1ZZSLqr).
- [YouTube Video part-2](https://youtu.be/3Bbm3Prd5Fo?si=n1rJ0smb_94CM1RU).
