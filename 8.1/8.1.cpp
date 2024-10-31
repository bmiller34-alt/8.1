#include <iostream>
#include <string>

using namespace std;

// Function to count the number of characters in a string
int countCharacter(string str) {
    return str.length();
}

int main() {
    // Test strings
    string test1 = "Hello, World!";
    string test2 = "Ada, Ohio";
    string test3 = "C++ Programming";

    // Output the number of characters in each test string
    cout << "Number of characters in \"" << test1 << "\": " << countCharacter(test1) << endl;
    cout << "Number of characters in \"" << test2 << "\": " << countCharacter(test2) << endl;
    cout << "Number of characters in \"" << test3 << "\": " << countCharacter(test3) << endl;

    return 0;
}
