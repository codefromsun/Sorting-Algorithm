// selection sort
#include <iostream>
using namespace std;


void selection_sort(int arr[],int size){

for (int i = 0; i < size-1; i++)
{ 
int min_index=i;

    for ( int j = i+1; j < size; j++)
    {
        if(arr[min_index]>arr[j]){
            min_index=j;
        }
    }
    
   // Swap the minimum element with the current element 
   int temp=arr[i];     
   arr[i]=arr[min_index];
   arr[min_index]=temp;
   
      
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
selection_sort(arr,size);
print_array(arr,size); //  AFTER SORTING

    return 0;
}