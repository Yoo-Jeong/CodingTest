using namespace std;
#include <iostream>


int main() {

	int a, b, c;
	int reward = 0;

	scanf("%d%d%d", &a, &b, &c);


	if (a == b && a == c) {

		reward = 10000 + a * 1000;

	}
	else if (a == b || a == c) {
		reward = 1000 + a * 100;
	}
	else if (b == c) {
		reward = 1000 + b * 100;
	}
	else {
		reward = max(max(a, b), c) * 100;
	}

	printf("%d", reward);

}