#include <iostream>
#include<vector>
using namespace std;
void longest_arithmatic_subarray(vector<int> &arr){
  int pd= arr[1]-arr[0];
  int length = 2;
  int ans = 2;
  for(int i =2;i<arr.size();i++){
    if(pd == arr[i]-arr[i-1]){
      length++;
    }
    else{
      pd = arr[i]-arr[i-1];
      length  = 2;
    }
    ans = max(ans,length);
    
  }
  cout<<"Length of longest arithmatic subarray is "<<ans<<endl;
}
int main() {
  vector<int> arr {10,7,4,6,8,10,11};
  longest_arithmatic_subarray(arr);
  return 0;
}