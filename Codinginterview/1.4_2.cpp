#include <iostream>
using namespace std;


//��� ������ ������ �ʿ䰡 ����
//� ���ڿ��� ȸ���� ������ �� �� Ư���� �����ΰ�
//�ؽ� ���̺� o(N)
//��Ʈ ���͸� ����ؼ� ������ ���� �� �ִ°�



int getCharIndex(char c) {
	int idx = -1;
	if (c >= 'a' && c <= 'z') {
		idx = c - 'a';
	}
	else if (c >= 'A' && c <= 'Z') {
		idx = c - 'A';
	}
	return idx;
}

void countFrequency(const string& str, int* frequency) {
	int idx;
	for (const char& c : str) {
		idx = getCharIndex(c);
		if (idx != -1) {
			++frequency[idx];
		}
	}
}

bool isPermurarionOfPallindrome1(const string & str) {
	int frequency[26] = { 0 };
	countFrequency(str, frequency);


	bool oddAppeared = false;
	for (int i = 0; i < 26; i++) {
		if (frequency[i] % 2 && oddAppeared) {
			return false;
		}
		else if (frequency[i] % 2 && !oddAppeared) {
			oddAppeared = true;
		}
	}
	return true;
}


bool isPermutationOfPallindrome2(const string& str) {
	int oddCount = 0;
	int frequency[26] = { 0 };
	int idx = 0;
	for (const char& c : str) {
		idx = getCharIndex(c);
		if (idx != -1) {
			++frequency[idx];
			if (frequency[idx] % 2) {
				++oddCount;
			}
			else {
				--oddCount;
			}
		}
	}
	return (oddCount <= 1);
}




int toggle(int bitVector, int index) {
	if (index < 0) {
		return bitVector;
	}
	int mask = 1 << index;
	if ((bitVector & mask) == 0) {
		bitVector |= mask;
	}
	else {
		bitVector &= ~mask;
	}
	return bitVector;
}

bool isExactlyOneBitSet(int bitVector) {
	return ((bitVector & (bitVector - 1)) == 0);
}

bool isPermutationOfPallindrome3(const string& str) {
	int bitVector = 0;
	int id = 0;
	for (const char& c : str) {
		id = getCharIndex(c); //���ĺ� 0 ~ 25������ ����
		bitVector = toggle(bitVector, id);
	}

	return (bitVector == 0 || isExactlyOneBitSet(bitVector));
}





int main() {
	//1. ������ ������ �о� ���̺� ���� 
	string str("Tact Coa");
	isPermurarionOfPallindrome1(str);





	return 0;
}