#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define absolute(x)  ( ((x) < 0 ) ? -(x) : (x) );

vector<int> sortedSquaredArray(vector<int> array) { //T(n) = O(n) and S(n) = O(n)
  // Write your code here.
  vector<int> squared_soreted_array;
  auto pt_small = array.begin(), pt_large = array.end() - 1;
  while(pt_small != pt_large){
    int abs_small = absolute(*pt_small);
    int abs_large = absolute(*pt_large);
    if ( abs_small > abs_large  ){
      squared_soreted_array.insert(squared_soreted_array.begin(), (*pt_small * *pt_small));
      pt_small++;
    } 
    else{
      squared_soreted_array.insert(squared_soreted_array.begin(), (*pt_large * *pt_large));
      pt_large--;
    }
  }
  squared_soreted_array.insert(squared_soreted_array.begin(), (*pt_small * *pt_small));
  
  return squared_soreted_array;
}
