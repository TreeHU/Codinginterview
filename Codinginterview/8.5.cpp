#include <iostream>
#include <vector>
using namespace std;


int function(int a, int b) {
	cout << "debug" << endl;

	int count = 0;
	for (int i = 0; i < a; i++) {
		cout << "debug" << endl;
		for (int j = 0; j < b; j++) {
			count++;
		}
	}
	

	return count;
}



int main() {
	cout << function(5, 4) << endl;




	return 0;
}