#include <iostream>
#include <cmath>
#include <bits/stdc++.h>

#define pi pair <int, int> 

/* https://www.codechef.com/problems/POINTS

You are given a set of points in the 2D plane. You start at the point with the least X and greatest Y value, and end at the point with the greatest X and least Y value. The rule for movement is that you can not move to a point with a lesser X value as compared to the X value of the point you are on. Also for points having the same X value, you need to visit the point with the greatest Y value before visiting the next point with the same X value. So, if there are 2 points: (0,4 and 4,0) we would start with (0,4) - i.e. least X takes precedence over greatest Y. You need to visit every point in the plane.

Input
You will be given an integer t(1<=t<=20) representing the number of test cases. A new line follows; after which the t test cases are given. Each test case starts with a blank line followed by an integer n(2<=n<=100000), which represents the number of points to follow. This is followed by a new line. Then follow the n points, each being a pair of integers separated by a single space; followed by a new line. The X and Y coordinates of each point will be between 0 and 10000 both inclusive.

Output
For each test case, print the total distance traveled by you from start to finish; keeping in mind the rules mentioned above, correct to 2 decimal places. The result for each test case must be on a new line.
*/ 


using namespace std;

bool comp(const pi &a, const pi &b){
    
    if (a.first == b.first)
        return (a.second > b.second);
    return (a.first < b.first);
    
}

int square(int x){
    return (x * x);
}


double compute_distance (vector<pi> v){
    
    double distance = 0;
    
    sort (v.begin(), v.end(), comp);
    
    for (auto it1 = v.begin(); it1 != (v.end() - 1); it1++){
        auto it2 = it1 + 1;
        
        pi p1 = *it1;
        pi p2 = *it2;
        
        int x1 = p1.first; int x2 = p2.first;
        int y1 = p1.second; int y2 = p2.second;
        
        distance += ( sqrt( (square(x2 - x1)) +  (square(y2 - y1) ) ) );
        
    }
    return distance;
    
}

int main() {
	// your code goes here
	int t, n, x, y;
	std::vector<pi>  v;
	std::cin >> t;
	
	while(t--){
	    
	    cin >> n;
	    for (int i=0; i < n; i++){
	        cin >> x;
	        cin >> y;

	        v.push_back({x, y});
	    }
	    
	    double out = compute_distance(v);
	    
	    cout << out << endl;
	    
	}
	
	return 0;
}
