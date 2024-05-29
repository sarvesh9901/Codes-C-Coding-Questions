#include <iostream>
#include <vector>
#include<climits>
using namespace std;

bool pair_sum(vector<int> &arr , int target){
  int n = arr.size();
  int s = 0;
  int e = n-1;
  while(s<e){
    if(arr[s]+arr[e]==target){
      return true;
    }
    else if(arr[s]+arr[e]< target){
      s++;
    }
    else{
      e--;
    }
  }
  return false;
}
int main() {
  vector<int> arr {2,4,7,11,14,16,20,21};
  bool ans = pair_sum(arr,31);
  cout<<ans;
  return 0;
}