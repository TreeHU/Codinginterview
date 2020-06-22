#include<iostream>
#include <map>
#include<algorithm>
using namespace std;





//C++에서는 배열을 함수로 전달할 때 배열의 길이를 같이 전달해야함



int main(void) {
	map<string, string> mymap;
	map<string, string>::iterator it;
	
	string wordArr[100] = { "cat", "dog", "tac", "god", "act" };
	string st[2] = { "st1","st2" };
	mymap[wordArr[0]].append(st[0]);

	cout << mymap.find("cat")->second << endl;

	return 0;
}