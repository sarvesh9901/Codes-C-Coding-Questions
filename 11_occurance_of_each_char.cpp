#include <iostream>
#include<string>
#include<climits>
using namespace std;
// fing occurance of each char in str


int main() {
  string s = "fejrgjorj";
  int freq[26];
  for (int i=0;i<26;i++){
    freq[i]=0;
  }
  for(int i=0;i<s.size();i++){
    freq[s[i]-'a']++;
  }
  int maxi = INT_MIN;
  for(int i=0;i<26;i++){
    maxi = max(maxi,freq[i]);
  }
  cout<<maxi;
  return 0;
}