#include <iostream>
#include "Header.h"
#include <string>

using namespace std;
using namespace Godzilla;

int main()
{
    string text = readText();
    short EncryptionKey = readValidatePositive("Please Enter the Encryption Key!");
    string text_AFter_Encryption;
    string text_AFter_Decryption;

    text_AFter_Encryption = EncryptText(text, EncryptionKey);
    text_AFter_Decryption = decryptText(text_AFter_Encryption, EncryptionKey);

    cout << "text before encryption is " << text << endl;
    cout << "text after encryption is " << text_AFter_Encryption << endl;
    cout << "text after decryption is " << text_AFter_Decryption << endl;
    // system("pause");
    return 0;
}