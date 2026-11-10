#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    ifstream fin("C:/Users/AURORA/OneDrive/ccc/tip_kr-2/input3.txt");
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

    for (int i = 0; i < (int)s.size(); i++) {
        if (isdigit(s[i])) {
            int num = 0;
            while (i < (int)s.size() && isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
                i++;
            }
            i--;
            string bin = "";
            if (num == 0) bin = "0";
            while (num > 0) {
                bin = char('0' + num % 2) + bin;
                num /= 2;
            }
            fout << bin;
        } else {
            fout << s[i];
        }
    }
    fout.close();
    cout << "Задача 3: готово, результат в output.txt" << endl;
    return 0;
}