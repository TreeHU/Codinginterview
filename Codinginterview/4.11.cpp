#include <iostream>
#include <vector>
using namespace std;







int main() {
	/*
	vector<string> arr;
	arr.push_back("ff");
	arr.push_back("dd");

	cout << arr.size() << endl;
	int i = 0;

	while (i == 5) {
		i++;
	}
	vector<int> checkword(arr.size(), -1);

	cout << checkword[0] << endl;
	*/
	vector<string> word;
	word.push_back("hello");
	word.push_back("kkkk");

	cout <<" word :"<< word[0] << endl;
	vector<vector<string> > arr(10);
	arr[0].push_back(word[0]);

	cout << " word :" << arr[0][1] << endl;

}