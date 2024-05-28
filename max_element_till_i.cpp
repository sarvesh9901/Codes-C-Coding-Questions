#include<iostream>
#include <vector>
using namespace std;
int max_element_till_i(vector<int> &arr){
    
    int maxi = 000;
    for (int i=0;i<arr.size();i++){
        maxi = max(maxi,arr[i]);
        cout<<maxi<<" "<<endl;
    }
    return maxi;
}
int main(){
    vector<int> arr {0,1,5,3,9,5,11};
    int ans = max_element_till_i(arr);
    cout<<ans;
    return 0;
}