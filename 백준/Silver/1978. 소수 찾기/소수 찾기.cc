#include <iostream>
using namespace std;

int main() {

	int n, num;
	int count, r = 0;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		for (int j = 1; j <= num; j++)
		{
			if (num % j == 0) {
				count++;
			}
		}
		if (count == 2)
		{
			r++;
		}

		count = 0; //count 초기화

	}
	cout << r << endl;
}