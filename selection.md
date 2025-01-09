# Selection Sort

## Introduction
Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.
## How It Works
1. Start with the first element of the array.
2. Find the smallest element in the unsorted portion of the array.
3. Swap the smallest element with the first unsorted element.
4. Move to the next element and repeat steps 2 and 3 for the remaining unsorted portion of the array.
5. Continue this process until the entire array is sorted.



## Time Complexity Analysis

- **Worst-case time complexity:** O(n²)  
  - Selection Sort always performs O(n²) comparisons, regardless of the initial order of the elements.

- **Best-case time complexity:** O(n²)  
  - Even if the array is already sorted, Selection Sort will still compare all elements, making it O(n²).

- **Average-case time complexity:** O(n²)  
  - On average, Selection Sort performs O(n²) comparisons and O(n) swaps.

## Space Complexity

- **Space complexity:** O(1)  
  - Selection Sort is an in-place sorting algorithm, meaning it requires a constant amount of additional memory beyond the input array.

## Characteristics

- **Stable:** No, because equal elements may be swapped, potentially disrupting their relative order.
- **In-place:** Yes, because it does not require extra memory space beyond the input array.
- **Performance:** Selection Sort performs the same number of comparisons, regardless of the initial arrangement of the elements. However, the number of swaps is minimized compared to other simple algorithms like Bubble Sort.

## Conclusion
Selection Sort is a straightforward algorithm, but it is inefficient for large datasets due to its O(n²) time complexity. It is primarily used when memory usage is a concern, as it only requires O(1) space.

## Best Resource
For a visual and detailed explanation, check out this [YouTube Video](https://youtu.be/GUDLRan2DWM?si=30O_GfKQOKFsziVw).
