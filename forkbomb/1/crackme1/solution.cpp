#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

string decode_file(const string& filename) {
    ifstream file(filename, ios::binary);
    if (!file.is_open()) {
        cerr << "Cannot open file: " << filename << endl;
        return "";
    }
    
    vector<unsigned char> encoded_data;
    file.seekg(0, ios::end);
    encoded_data.resize(file.tellg());
    file.seekg(0, ios::beg);
    file.read(reinterpret_cast<char*>(encoded_data.data()), encoded_data.size());
    file.close();
    
    string result;
    int current_key = 127;
    
    for (size_t i = 0; i < encoded_data.size(); ++i) {
        char original_char = encoded_data[i] ^ current_key;
        result += original_char;
        current_key ^= original_char;
    }
    
    return result;
}

int main() {
    string decoded = decode_file("encoded_flag");
    cout << decoded << endl;
    
    return 0;
}