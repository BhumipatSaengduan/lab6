#include <iostream>

using namespace std;

int main() {
	string text1, text2, text;
	int N, count = 0;

	cout << "Enter the first text: ";
	cin >> text1;
	cout << "Enter the second text: ";
	cin >> text2;
	cout << "Enter N: ";
	cin >> N;

	text = "";
	while (count < N) {
		if (count % 2 == 0) {
			text += text1 + " ";
		}
		else {
			text += text2 + " ";
		}
		count++;
	}

	cout << text;

	return 0;
}