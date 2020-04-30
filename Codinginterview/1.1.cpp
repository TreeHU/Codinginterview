#include <iostream>
#include <string>
using namespace std;





bool main() {


	string st = "ccddjj";
	int cnt = 0;


	for (int i = 0; i < st.length(); i++) {
		for (int j = i+1; j < st.length(); j++) {
		
			if( st[i] - st[j] ==0){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	
	if (cnt) {
		return false;
	}

	return true;

}