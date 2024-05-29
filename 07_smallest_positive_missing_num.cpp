#include <iostream>
#include <vector>
using namespace std;

void smallest_positive_num(vector<int> &arr){
  vector<int> check (arr.size() , 0);
  for(int i=0;i<arr.size();i++){
    if(arr[i]>=0){
      check[arr[i]] = 1;
    }
  }
  for (int i=0;i<check.size();i++){
    if(check[i]==0){
      cout<<i<<endl;
      break;
    }
  }
}
int main() {
  vector<int> arr {-1, -2, 0, 1, 2, 3, 4};
  smallest_positive_num(arr);
  return 0;
}