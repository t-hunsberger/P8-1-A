#include <iostream>
#include <string>

using namespace std;

int countCharacter(string str) {
	int count = 0;
	for (char c : str) {
		count++;
	}
	return count;
}

int main() {
	string testString1 = "Hello, World!";
	string testString2 = "This is a test string.";

	cout << "Number of characters in testString1; " << countCharacter(testString1) << endl;
	cout << "Number of characters in testString2; " << countCharacter(testString2) << endl;

	return 0;
}