#include "split.hpp"

int main() {
  string s;
  // read and split each line of input
  while(getline(cin, s)) {
    vector<string> v=split(s);

    // write each word in v
    for(vector<string>::size_type i=0;i != v.size(); ++i)
      cout << v[i] << endl;
  }
}
