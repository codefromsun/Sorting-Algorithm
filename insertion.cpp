// insertion sort
#include <iostream>
using namespace std;

void insertion_sort(int arr[],int s){
 // Iterate through the array, starting from the second element
for(int i=1;i<s;i++){
    int ins=arr[i];
    int j;
// Shift elements to the right until the correct position is found
    for(j=i-1;ins<arr[j] && j>=0;j--){
        arr[j+1]=arr[j];
    }
        arr[j+1]=ins;

}

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
insertion_sort(arr,size);
print_array(arr,size); //  AFTER SORTING

    return 0;
}