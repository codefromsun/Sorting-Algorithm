
#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    
    for (int  i = 0; i < n-1; i++)
    { 
        for (int  j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1]){  //swapping element
                int temp=arr[j];
                arr[j]=arr[j+1];  
                arr[j+1]=temp;
            }
        }
        
    }
    
}


void bubble_sort_optimized(int arr[],int n){
    for (int  i = 0; i < n-1; i++)

    { int flag=0;
        for (int  j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
      
        
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
bubble_sort(arr,size);
print_array(arr,size); //  AFTER SORTING

    return 0;
}