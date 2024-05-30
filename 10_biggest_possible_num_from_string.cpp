#include <iostream>
#include<algorithm>
using namespace std;
// biggest possible from string
int main() {
  string s = "665354364354";
  sort(s.begin(),s.end(),greater<int>());
  cout<<s;
  return 0;
}