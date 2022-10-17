#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)


int main(){
		
	vector<int> v{1,2,3,4,5,6,7};
	int k = 3;
	
	int max_sum = 0;
	for (int i = 0; i < k; ++i){
		max_sum += v[i];
	}
		

	// cout<< max_sum << endl;
	int window_sum = max_sum;
	for (int i = k; i<v.size(); i++)
		window_sum += v[i] - v[i-k];
		max_sum = max(max_sum,window_sum);
		cout << max_sum << endl;


}