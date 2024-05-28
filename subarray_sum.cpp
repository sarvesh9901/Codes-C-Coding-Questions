#include<iostream>
#include <vector>
using namespace std;
void subarray_sum(vector<int> &arr){
  int sum = 0;
  for(int i=0;i<arr.size();i++){
    sum = 0;
    for(int j=i;j<arr.size();j++){
      sum += arr[j];
      cout<<sum<<" ";
    }
  }
}
int main(){
    vector<int> arr {1,2,2};
    subarray_sum(arr);
    return 0;
}