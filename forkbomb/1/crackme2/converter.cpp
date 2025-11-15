#include <iostream>
#include <string>
using namespace std;
int main() {
    string str = "464c41477b32653135356238376435383234653835656634313039346165633761383364637d";
    char buffer[512];
    for (int i = 0; i < str.length(); i += 2) {
        string hexByte = str.substr(i, 2);
        char value = stoi(hexByte, nullptr, 16);
        cout << value;
    }
    cout << '\n';
    return 0;
}
