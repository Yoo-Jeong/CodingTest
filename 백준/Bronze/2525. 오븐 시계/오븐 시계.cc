using namespace std;
#include <iostream>


int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int sum = B + C;

	if (sum >= 60)
	{
		A += (sum / 60) % 24;
		B = (sum % 60);
		if (A >= 24) {
			A -= 24;
		}
	}
	else
	{
		B = sum;
	}

	cout << A << " " << B;

}