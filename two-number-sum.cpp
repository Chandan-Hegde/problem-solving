#include <vector>

using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {//O(n2)
  vector<int> target_array;
  for (auto it1 = array.begin(); it1 != (array.end()  - 1) ; it1++){
    for ( auto it2 = it1 + 1; it2 != array.end() ; it2++ ){
        if ( ((*it1) + (*it2)) == targetSum){
          target_array.push_back(*it1);
          target_array.push_back(*it2);
          return target_array;
        }
    }
  }
  return target_array;
}
