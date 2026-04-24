#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
int arr [ ]= {3,5,3,2,8,5,6,8,8};
int n= sizeof(arr)/sizeof(arr[0]);

unordered_map<int,int>freq
for(int i=0;i<n;i++){
    freq[arr[i]]++;
}
cout<<"freq of elements";
for(auto pair : freq){
    cout<<pair.first <<"-->"pair.second<<endl;
}
return 0;
}


// sort without hashmap

#include<iostream>
using namespace std;
int main(){
int arr[]={3,5,3,2,8,5,6,8,8};
int n = sizeof (arr)/sizeof(arr[0]);

bool is visited[n];
for(int i = 0;i<n;i++){
    visited[i]= false;
}
int count = 1;
for(int j = i+1;j<n;j++){
    if(arr[i] == arr[j]){
        visited[j]= true;
        count ++;
    }
}
cout<<arr[i]<<count<<endl;
return 0;
}