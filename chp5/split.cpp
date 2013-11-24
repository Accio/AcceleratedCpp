#include "split.hpp"

vector<string> split(const string& s) {
  vector<string> ret;
  typedef string::size_type str_size;
  str_size i=0;

  // invariant: we have processed characters [original value of i,i)
  while(i!=s.size()) {
    //ignore leading blanks
    // invariant: characters in range [original i, currenti) are all spaces
    while(i != s.size() && isspace(s[i]))
      ++i;

    // final end of next end
    str_size j=i;
    // invariant: none of the characters in range [original j, current j) is a space
    while(j != s.size() && !isspace(s[j]))
      ++j;

    // if we found some nonwhitespace characters
    if(i!=j) {
      // copy from s starting from i and taking j-i characters
      ret.push_back(s.substr(i, j-i));
      i=j;
    }
  }
  return ret;
}
