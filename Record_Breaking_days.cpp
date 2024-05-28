#include <iostream>
#include<vector>
using namespace std;
int record_breaker(vector<int> &arr){
  int maxi = -1;
  int ans =0;
  if(arr.size()==1){
    return 1;
  }
  for(int i=0;i<arr.size();i++){
    if(arr[i] > maxi && arr[i] > arr[i+1]){
      ans++;
    }
    maxi= max(maxi,arr[i]);
    
  }
  return ans;
}
int main() {
  vector<int> arr {1,2,0,7,2,0,2,2};
  int result = record_breaker(arr);
  cout<<"Total record breaking days are "<<result;

  return 0;
}