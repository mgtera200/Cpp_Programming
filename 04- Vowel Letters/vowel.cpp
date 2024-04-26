#include <iostream>

bool isVowel(char a) {
    const char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    for (char vowel : vowels) {
        if (a == vowel) {
            return true;
        }
    }
    return false;
}

int main() {
    char input;
    std::cout << "Enter a character: ";
    std::cin >> input;

    if (isVowel(input)) {
        std::cout << "The character you entered is a vowel." << std::endl;
    } else {
        std::cout << "The character you entered is not a vowel." << std::endl;
    }

    return 0;
}
