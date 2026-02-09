#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "Введите строку s = ";
    string s;
    getline(cin, s);

    while (s.empty()) {
        cout << "Ошибка ввода" << endl;
        cout << "Попробуйте заново" << endl;
        cout << "Введите строку s = ";
        getline(cin, s);
    }
    int otv = 0;
    int c = s.size();
    for (int i = 0; i < c; i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*') {
            otv += 1;
        }
    }
    cout << "Количество символов, присутствующих в строке - " << s << endl << "Равна = " << otv << endl;
    return 0;
}