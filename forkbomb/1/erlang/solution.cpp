#include <iostream>
#include <string>
int main() {
    std::string str = "yhqlylglkdfnhulfl";
    for (auto& elem : str) {
        std::cout << char(elem - 3);
    }
    std::cout << '\n';
    return 0;
}
// видим в скрипте языка erlang, что используется обычный шифр Цезаря с числом 3, соответственно пишем простенькую программу на С++, которая дешифрует данную строку
