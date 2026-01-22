#include <bits/stdc++.h>
using namespace std;
string generateOTPKey(size_t length) { string key;
key.reserve(length);
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<int> dist(0, 255);
for (size_t i = 0; i < length; i++) 
{
    key.push_back(static_cast<char>(dist(gen)));
} 
return key; 
    
}

  int main() {
    string plaintext;
    cin >> plaintext;

    string key = generateOTPKey(plaintext.size());
    int len=plaintext.size();
    vector<int> ciphertext(len);
    vector<int> decrypted(len);

   
    for (int i = 0; i < len; i++) {
        ciphertext[i] =
            (unsigned char)plaintext[i] ^ (unsigned char)key[i];
    }

  
    for (int i = 0; i < len; i++) {
        decrypted[i] =
            ciphertext[i] ^ (unsigned char)key[i];
    }

    string decryptedText;
    for (int x : decrypted) {
        decryptedText.push_back((char)x);
    }

    if (decryptedText == plaintext) {
        cout << "DECRYPTION SUCCESSFUL. THE MESSAGE WAS " << decryptedText << endl;
    }

    return 0;
}
