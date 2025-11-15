#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "2I7VjH)Q3RkPK*Sm3R!aY8!1P:5T6YL-`N4U5M,;xB#v1D%24U";

    for (size_t i = 0; i < str.length(); i++) {
        if (str[i] == (str[i + 1] ^ 97)) {
            cout << str[i];
        }
    } 
    cout << '\n';
    return 0;
}
// разбираем скрипт на perl, видим что текущий элемент сравнивается с последующим, который поксорен с 97, соответственно копируем строку в свой скрипт и выводим те символы, 
// при которых у на выполняется равенство, т.е. строка "7H3K3Y15L4MBD4"
// ТАСКА РЕШЕНА
