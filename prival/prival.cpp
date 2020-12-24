#include <iostream>

using namespace std;

int main()
{
	double t1, v1;
	cout << "Enter time and velocity 1" << endl;
	cin >> t1 >> v1;
	double t2, v2;
	cout << "Enter time and velocity 2" << endl;
	cin >> t2 >> v2;
	double t3, v3;
	cout << "Enter time and velocity 3" << endl;
	cin >> t3 >> v3;
	double sum = (t1 * v1 + t2 * v2 + t3 * v3) / 2;
	double s1 = t1 * v1;
	double s2 = t2 * v2;
	double s3 = t3 * v3;
	if (sum <= s1) {
		cout << sum / v1 << " hours" << endl;
	}
	else if (sum <= s2 + s1) {
		cout << t1 + (sum - s1) / v2 << " hours" << endl;
	}
	else if (sum <= s3 + s2 + s1) {
		cout << t2 + t1 + (sum - s1 - s2) / v3 << " hours" << endl;
	}
	system("pause");
}