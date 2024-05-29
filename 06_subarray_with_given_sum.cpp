#include <iostream>
#include<vector>
#include "bits/stdc++.h"
using namespace std;
void subarray_with_given_sum(vector <int> &arr,int target){
  int n = arr.size();
  int i=0 , j=0, st= -1, en = -1, sum =0;
  while(j<n && sum+arr[j]<target){
    sum += arr[j];
    j++;
  }
  if(sum==target){
    cout<<i<< " "<<j<<endl;
    return;
  }
  while(j<n){
    sum +=arr[j];
    while(sum >target){
      sum -= arr[i];
      i++;
    }
    if(sum==target){
      st= i;en =j;
      break;
    }
  }
  cout<<st<<" "<<en<<endl;
}
int main() {
  vector<int> arr {1,2,3,7,5};
  subarray_with_given_sum(arr,12);
  return 0;
}