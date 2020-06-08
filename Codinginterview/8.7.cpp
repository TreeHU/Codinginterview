#include <iostream>
#include <string>
using namespace std;




void permutation(string st, string prefix) {

	
	if (st.length() == 0) {
		
		cout << prefix << endl;
	}
	else {
		for (int i = 0; i < st.length(); i++) {
			string rem = st.substr(0, i) + st.substr(i + 1);
			permutation(rem, prefix + st.at(i));
		}
	}

}







int main() {
	string st = "hello";
	cout << st.substr(0, 0) << endl;
	permutation(st, "");


	return 0;
}