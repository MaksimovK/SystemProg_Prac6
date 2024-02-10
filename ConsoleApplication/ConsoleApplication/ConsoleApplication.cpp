#include <iostream>
#include <sstream>
#include <algorithm>
#include <list>

using namespace std;

int main() {
    system("chcp 1251");
    setlocale(LC_ALL, "ru");
    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    list<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    words.sort();

    for (const auto& w : words) {
        cout << w << ' ';
    }

    return 0;
}
