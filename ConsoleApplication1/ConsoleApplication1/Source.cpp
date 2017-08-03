
#include "stdafx.h"

using namespace std;

int sumOfNumber() {

	int a;
	string b;
	int sum = 0;
	int temp = 0;
	cin >> a >> b;
	char arr[100];
	strcpy(arr, b.c_str());

	for (int i = 0; i < a - 1; i++) {
		temp = arr[i];
		sum += temp;
	}
	cout << sum - 48 * (a - 1) << endl;



	return 0;

}


int dateOf2017() {
	int month[] = { 0,31,28,31,30,31,30,31,31,30,31,30 };
	int m, d, mod;
	int sum = 0;
	cin >> m >> d;
	for (int i = 0; i < m; i++) {
		sum += month[i];
	}
	mod = (sum + d) % 7;
	switch (mod) {
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	case 0:
		cout << "SUN";
		break;
	}
	return 0;
}
int conSum(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + conSum(n - 1);
	}
}

int lowLimit, highLimit, step;
int printTempConverter() {

	cout << "Please give in a lower limit, limit >= 0:";
	cin >> lowLimit;
	while (lowLimit >= 0) {
		cout << "Invalid input: lower lomit should greater or equal than 0";
		cin >> lowLimit;
	}

	cout << "Please give in a higher limit, " << lowLimit << " > Limit <= 50000: ";
	cin >> highLimit;
	while (highLimit <= 50000 && highLimit>lowLimit) {
		cout << "Invalid input: higher limit should greater or equal than lower limit and less than 50000";
		cin >> highLimit;
	}

	cout << "Please give in a step, 0 < step <= 10: ";
	cin >> step;
	while (step>0 && step <= 10) {
		cout << "Invalid input: step ";
		cin >> step;
	}

	return 0;
}
