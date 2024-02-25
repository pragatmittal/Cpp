#include <iostream>
#include <cstring> // for strlen
using namespace std;

int main() {
    const int maxLength = 1000; // Maximum length of the sentence
    char sentence[maxLength];

    // Input a sentence
    cout << "Enter a sentence: ";
    cin.getline(sentence, maxLength);

    // Variables to store information about the largest word
    int maxLengthWordStart = 0;
    int maxLengthWordLength = 0;
    int currentWordStart = 0;
    int currentWordLength = 0;

    // Iterate through each character in the sentence
    for (int i = 0; i <= strlen(sentence); ++i) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            // Found the end of a word or the end of the sentence
            if (currentWordLength > maxLengthWordLength) {
                // Update information about the largest word
                maxLengthWordStart = currentWordStart;
                maxLengthWordLength = currentWordLength;
            }

            // Reset current word information for the next word
            currentWordStart = i + 1;
            currentWordLength = 0;
        } else {
            // Increment the length of the current word
            currentWordLength++;
        }
    }

    // Output the largest word
    cout << "The largest word in the sentence is: ";
    for (int i = maxLengthWordStart; i < maxLengthWordStart + maxLengthWordLength; ++i) {
        cout << sentence[i];
    }
    cout << endl;

    return 0;
}
