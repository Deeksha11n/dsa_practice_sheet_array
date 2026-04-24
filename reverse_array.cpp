#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
}
// method 2

int start = 0 ; end= n-1;
while(start<end){
    swap(arr[start++],arr[end--]);
}
for(int i =0 i;i<n;i++){
    cout<<arr[i]<<" ";
}
// method 3
void reverse(int arr[],int start,int end){
    if(start>=end)
     return;
int temp = arr[start];
  arr[start]= arr[end];
arr[end]= temp;
reverse(arr,start++,end--)

}
int main(){
in arr[]={10,20,30,40};
int n = sizeof(arr)/sizeof(arr[0]);
 reverse(arr,0,n-1);
 for(int i =0;i<n;i++)
    cout<<arr[i];
}
// start = 0
// end = n-1

// sort 1 half in ascending order and second half in descending order
void ascDesc(int arr[], int n){
    sor(arr,arr+n)
    
    for(int i = 0;i<n/2;i++)
      cout<<arr[i]<<" ";
     for(int i =j-1;j>=n;j--)
      cout<<arr[j]<<" ";
}
int main(){
int arr[]={3,4,1,10,20,40,20};
int n = sizeof(arr)/sizeof(arr[0]);
 ascDesc(arr,n)
return 0;
}