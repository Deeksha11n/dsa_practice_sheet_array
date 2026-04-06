class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        int n = arr.size( );
          int min_element = INT_MAX;
        int max_element = INT_MIN;
        for(int i =0 ;i<n;i++){
            
            if(arr[i] < min_element){
                min_element= arr[i];
            }
            if(arr[i]>max_element){
                max_element= arr[i];
            }
        }
        return{min_element,max_element};
        
    }
    int main( ){
        vector<int>arr={1,2,6,8,10,3,19};
        vector<int>result=getMinMax(arr);
         cout << result[0] << " " << result[1] << endl;
        return 0;
        
    }
    
};