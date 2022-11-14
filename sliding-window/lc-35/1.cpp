#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)


int main(){
	string s;
	cin >> s;
	int n = s.size();
	int left = 0;
	int right = 0;
	int length = 0;
	vector<int> map(256, -1);
	while(right < n){
		cout << "right: " << right << endl;
		if(map[s[right]] != -1) left= max(left, map[s[right]]+1);		
		cout << "left : " << left << endl;
		map[s[right]] = right;
		cout << "key: " << s[right] << " val : "<< right<< endl;
		length = max(length, right -left + 1);
		cout << "length: " << length << endl;
		right++;
		cout << endl;
	}
	cout<< "length : " << length << endl;
{
#ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
    return 0;

}
