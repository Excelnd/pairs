// Pairs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <bitset>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int pairs(vector < int > a, int k) {
	int ans = 0;
	sort(a.begin(), a.end());
	//123
	for (int i = 0; i < a.size() - 1; i++) {
		for (int j = i + 1; j < a.size() && (a[j] - a[i]) <= k; j++) {
			if (a[j] - a[i] == k) ans++;
		}
	}
	return ans;
}

int main()
{
	int res;
	int _a_size, _k;

	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<int> a;
	int _a_item;
	for (int _a_i = 0; _a_i < _a_size; _a_i++) {
		cin >> _a_item;
		_a.push_back(_a_item);
	}

	res = pairs(_a, _k);
	cout << res;
	
    return 0;
}

