#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	vector<int> num(n);

	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	// sort
	sort(num.begin(), num.end());

	for (int i = 0; i < n; i++) {
		cout << num[i] << endl;
	}

	return 0;
}