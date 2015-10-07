#include <iostream>
#include <cstring>

using namespace std;

char str[1032];

int main() {
	cin >> str;

	for(int i=0; i<strlen(str)/2; ++i) {
		char temp;
		temp = str[i];
		str[i] = str[strlen(str)-i-1];
		str[strlen(str)-i-1] = temp;
	}

	cout << str;
}