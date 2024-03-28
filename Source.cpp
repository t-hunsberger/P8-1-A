#include <iostream>
#include <string>

using namespace std;

int countVowel(string str) {
	int count = 0;
	for (char c : str) {
		c = tolower(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			count++;
		}
	}
	return count;
}

int main() {
	string input;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q") break;
		int numVowels = countVowel(input);
		cout << "Vowel count: " << numVowels << endl;
	}
	return 0;
}