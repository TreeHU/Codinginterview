#include <iostream>
using namespace std;




string change2_st(double num) {
	string ans = " 0.";
	int cnt = 0;
	

	while (1) {
		if (ans.size() > 32) {
			return "ERROR";
		}
		num *= 2;
		cout << num << endl;
		if (num > 1) {
			ans.append("1");
			num -= 1;
		}
		else {
			if (num == 1) {
				ans.append("1");
				return ans;
			}
			else {
				ans.append("0");
			}
		}
	}
}

string updateChange2_st(double num) {
	if (num <= 0 || num >= 1) {
		return "ERROR";
	}

	string ans = ".";
	while (num > 0) {
		if (ans.size() > 32) {
			return "ERROR";
		}
		num = num * 2;
		if (num >= 1) {
			ans.append("1");
			num -= 1;
		}
		else {
			ans.append("0");

		}
	}
}

string printBinary(double num) {
	if (num >= 1 || num <= 0) {
		return "ERROR";
	}

	string binary = "";
	binary.append(".");
	while (num > 0) {
		if (binary.length() >= 32) {
			return "ERROR";
		}
		double r = num * 2;
		if (r >= 1) {
			binary.append("1");
			num = r - 1;
		}
		else {
			binary.append("0");
			num = r;
		}
	}
	return binary;

}














int main() {

	cout << change2_st(0.625) << endl;

	cout << printBinary(0.625) << endl;

}