#include <iostream>
#include<vector>
#include "bits/stdc++.h"
using namespace std;
void find_first_smallest(vector<int> &arr){
  int mini = INT_MAX;
  vector<int> help (arr.size(),  -1);
  for (int i =0;i<arr.size();i++){
    if(help[arr[i]] != -1){
      mini = min(mini , help[arr[i]]);
    }
    else{
      help[arr[i]] = i;
    }
  }
  if(mini == INT_MAX){
    cout<<"-1"<<endl;
  }
  else{
    cout<<"first_smallest_element present at "<<mini<<endl;
  }
}
int main() {
  vector<int> arr {1,2,5,3,4,3,5,7};
  find_first_smallest(arr);
  return 0;
}