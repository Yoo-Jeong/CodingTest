#include <iostream>
using namespace std;

int main() {

	int base, labor, cost; //고정비용, 가변비용, 판매금액

	int point; //손익분기점

	cin >> base >> labor >> cost;

	if (labor >= cost) {
		cout << "-1";
	}
	else {
		point = base / (cost - labor) + 1;
		cout << point;
	}
}