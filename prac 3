/* write a program that prints the table indicating the number of occurences of each alphabet in a text entered as a command line arguments */
#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cerr << "Usage: " << argv[0] << " <text>" << endl;
        return 1;
    }
    int counts[26] = {0};
    for (int i = 1; i < argc; ++i) {
        for (int j = 0; j < strlen(argv[i]); ++j) {
            char c = argv[i][j];
            if (isalpha(c)) {
                c = tolower(c);
                counts[c - 'a']++;
            }
        }
    }

    // Print the counts of each alphabet
    cout << "Alphabet Counts:" << endl;
    for (int i = 0; i < 26; ++i) {
        cout << static_cast<char>('a' + i) << ": " << counts[i] << endl;
    }

    return 0;
}
