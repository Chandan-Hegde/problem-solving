#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  // Write your code here.

  if (array.size() < sequence.size()){
    return false;
  }

  vector<int> :: iterator it1 = array.begin();
  vector<int> :: iterator it2 = sequence.begin();

  while ( it1 != array.end() &&  it2 != sequence.end() ){
    if((*it1) == (*it2))
      it2++;
  
    it1++;
  }

  if (it2 == sequence.end())
    return true;
  else
    return false;

}
