#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream f1("C:/Users/AURORA/OneDrive/ccc/tip_kr-2/input1.txt");
    ifstream f2("C:/Users/AURORA/OneDrive/ccc/tip_kr-2/input2.txt");
    ofstream fout("C:/Users/AURORA/OneDrive/ccc/tip_kr-2/output.txt");

    if (!f1.is_open()) {
        cout << "Ошибка: не открылся input1.txt" << endl;
        return 1;
    }
    if (!f2.is_open()) {
        cout << "Ошибка: не открылся input2.txt" << endl;
        return 1;
    }
    if (!fout.is_open()) {
        cout << "Ошибка: не создался output.txt" << endl;
        return 1;
    }

    string X, Y;
    f1 >> X;
    f2 >> Y;

    fout << (X.find(Y) != string::npos ? "yes" : "no");

    fout.close();
    cout << "Задача 2: готово, результат в output.txt" << endl;
    return 0;
}