#include <vector>

using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  for (int i = 0; i < array.size(); i++){  //o(n)
    array[i] = array[i] * array[i];
  }
  sort(array.begin(), array.end()); //o(n logn)
  return array;
}
