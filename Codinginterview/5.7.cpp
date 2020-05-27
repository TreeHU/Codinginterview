#include<iostream>
#include<bitset>
using namespace std;












int changeBit(int a) {
	if (a == -1 || a == 0) {
		return 0;
	}
	//cout << bitset<32>(a) << endl;
	for (int i = 0; i < sizeof(int) * 8; i += 2) {
		cout << "i:"<< i << endl;
		int temp_first = (a & 1);
		int temp_second = ((a >> 1) & 1);
		cout << bitset<32>(a) << endl;
		cout << "temp_f:" << temp_first << ";; temp_s:" << temp_second << endl;
		if (temp_first != temp_second) {
			a = a | (temp_first << (i + 1));
			a = a | (temp_second << i);

			//a = temp_first ? (a | (temp_first << (i + 1)) ) : 

		}
		

	}
	return a;
}



int changeBit1(int a) {
	if (a == -1 || a == 0) {
		return a;
	}
	cout << bitset<32>(a) << endl;
	int even = a & 0xAAAAAAAA;
	int odd = a  & 0x55555555;

	even >>= 1;
	odd <<= 1;




	cout << bitset<32>(even | odd)  << endl;
	return even | odd ;

}


int main() {

	int a = 10;
	changeBit1(10);




	return 0;
}