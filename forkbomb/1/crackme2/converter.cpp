// #include <stdio.h>
// #include <string.h>

// int check(char *input_str)
// {
//   int i; // [esp+0h] [ebp-208h]
//   char *buffer; // [esp+4h] [ebp-204h]
//   char str[512]; // [esp+8h] [ebp-200h] BYREF

//   memset(str, 0, sizeof(str));
//   buffer = str;
//   for ( i = 0; input_str[i]; ++i )
//   {
//     sprintf(buffer, "%02x", input_str[i]);
//     buffer += 2;
//   }
//   return strcmp(
//            "464c41477b32653135356238376435383234653835656634313039346165633761383364637d",
//            str);
// }

// int main(int argc, const char **argv, const char **envp)
// {
//   const char *output_str;
//   char input_str[256] = "input_str";
//   printf("Enter your flag: ");
//   input_str[strlen(input_str) - 1] = 0;
//   if ( check(input_str) )
//     output_str = "[-] You lose!\n";                      // "[-] You lose!\n"
//   else
//     output_str = "[+] You win!\n";                       // "[+] You win!\n"
//   printf(output_str);
//   return 0;
// }


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
