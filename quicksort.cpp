#include <iostream>
using namespace std;

// Function to partition the array around a pivot element
int partition(int arr[], int low, int high) {
    // Choose the pivot element (first element of the array)
    int pivot = arr[low];
    int left = low + 1; // Index for elements greater than pivot
    int right = high;   // Index for elements less than or equal to pivot

    // Continue partitioning until left and right indices meet
    while (left <= right) {
        // Move left index to the right until we find an element greater than the pivot
        if (arr[left] <= pivot) {
            left++;
        }

        // Move right index to the left until we find an element less than or equal to the pivot
        if (arr[right] > pivot) {
            right--;
        }

        // If left index is still less than right index, swap the elements
        if (left < right && (arr[left] > pivot && arr[right] <= pivot)) {
            swap(arr[left], arr[right]);
        }
    }

    // Swap the pivot element with the element at the right index
    swap(arr[low], arr[right]);

    // Return the index of the pivot element
    return right;
}

// Function to perform quicksort on the array
void quick_sort(int arr[], int low, int high) {
    // Base case: if low is greater than or equal to high, return
    if (low >= high) {
        return;
    }

    // Partition the array and get the index of the pivot element
    int pivotIndex = partition(arr, low, high);

    // Recursively sort the subarrays on either side of the pivot
    quick_sort(arr, low, pivotIndex - 1);
    quick_sort(arr, pivotIndex + 1, high);
}

void print_array(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

int arr[]={7,8,5,6,9};
int size=sizeof(arr)/sizeof(arr[0]);
print_array(arr,size); //  BEFORE SORTING
quick_sort(arr,0,size-1);
print_array(arr,size); //  AFTER SORTING

    return 0;
}