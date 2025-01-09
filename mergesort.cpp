
# include <iostream>
using namespace std;

void merge(int left[],int l,int right[],int r,int arr[]){

    int i=0,j=0,k=0;

    while(i<l && j<r){

      if(left[i]<=right[j]){
          arr[k]=left[i];
          i++;
          k++; 
      }  
      else{
          arr[k]=right[j];
          j++;
          k++;
      }
    }

        while(i<l){
            arr[k]=left[i];
            i++;
            k++;
        }

        while(j<r){
            arr[k]=right[j];
            j++;
            k++;
        }
    
}

void merge_sort(int arr[],int n){
if (n<2){
    return;  
}
int llen=n/2;
int rlen=n-llen;
int *l=new int[llen];
int *r=new int[rlen];
for (int i = 0; i < llen; i++)
{
    l[i]=arr[i];
}

int k=0;
for (int j=llen;j<n;j++){
    r[k]=arr[j];
    k++;
}

merge_sort(l,llen);
merge_sort(r,rlen);
merge(l,llen,r,rlen,arr);
delete[] l;
delete[] r;
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
merge_sort(arr,size);
print_array(arr,size); //  AFTER SORTING

    return 0;
}