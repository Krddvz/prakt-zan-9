#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream fin("C:/Users/AURORA/OneDrive/ccc/tip_kr-2/input.txt");
    ofstream fout("C:/Users/AURORA/OneDrive/ccc/tip_kr-2/output.txt");
    if (!fin.is_open()) {
        cout << "Ошибка: не открылся input.txt" << endl;
        return 1;
    }
    if (!fout.is_open()) {
        cout << "Ошибка: не создался output.txt" << endl;
        return 1;
    }

    string s;
    getline(fin, s);

    string bad = "useragreement";

    for (char c : s) {
        if (bad.find(tolower(c)) == string::npos)
            fout << c;
    }

    fout.close();
    cout << "Задача 1: готово, результат в output.txt" << endl;
    return 0;
}