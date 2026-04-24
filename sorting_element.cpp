#include<iostream>
using namespace std;
int main(){
int arr[]={10,3,5,1,9};
 int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 0 ;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){

            int temp = arr[i];
            arr[i]=arr[j];
            temp = arr[j];
        }
    }
}
cout<<"sorted array";
for(int i =0;i<n;i++)
  cout<<arr[i]<<" ";
return 0;
}