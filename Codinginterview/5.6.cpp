#include <iostream>
#include <bitset>
using namespace std;




int forTranslate_a_b(int a, int b) {
	if (a == b) {
		return 0;
	}
	int count = 0;

	for (int i = 0; i < sizeof(int) * 8; i++) {


		if ((a & 1) != (b & 1)) {

			count++;
		}
		a >>= 1;
		b >>= 1;

	}

	return count;

}


int bitSwapRequired(int a, int b) {
	int count = 0;
	for (int c = a ^ b; c != 0; c >>= 1) {
		count += (c & 1);
	}
	return count;
}





int main() {

	int a = 29;
	int b = 15;


	cout << forTranslate_a_b(a, b) << endl;




	return forTranslate_a_b(a, b);
}