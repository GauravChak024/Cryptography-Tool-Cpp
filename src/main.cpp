#include <iostream>
#include <string>
#include "../include/Encryption.h"
#include "../include/Hashing.h"
#include "../include/Utils.h"

using namespace std;

void showMainMenu();
void showEncryptionMenu();
void showHashingMenu();

int main() {
    char choice;

    while (true) {
        showMainMenu();
        cin >> choice;

        if (choice == '1') {
            showEncryptionMenu();
        } else if (choice == '2') {
            showHashingMenu();
        } else if (choice == 'q') {
            break;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

void showMainMenu() {
    cout << "Main Menu:" << endl;
    cout << "1. Encryption/Decryption" << endl;
    cout << "2. Hashing" << endl;
    cout << "q. Quit" << endl;
    cout << "Enter your choice: ";
}

void showEncryptionMenu() {
    char choice;
    string input, outputFileName;

    cout << "Encryption/Decryption Menu:" << endl;
    cout << "1. Encrypt a message" << endl;
    cout << "2. Encrypt a file" << endl;
    cout << "3. Decrypt a message" << endl;
    cout << "4. Decrypt a file" << endl;
    cout << "b. Back to Main Menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == '1' || choice == '3') {
        cout << "Enter the message: ";
        getline(cin, input);
        if (choice == '1') {
            cout << "Encrypted message: " << encrypt(input, 5) << endl;
        } else {
            cout << "Decrypted message: " << decrypt(input, 5) << endl;
        }
    } else if (choice == '2' || choice == '4') {
        cout << "Enter the file name: ";
        getline(cin, input);
        string fileContent = readFile(input);
        if (fileContent.empty()) {
            cout << "File not found." << endl;
            return;
        }
        cout << "Enter the output file name: ";
        getline(cin, outputFileName);
        if (choice == '2') {
            writeFile(outputFileName, encrypt(fileContent, 5));
            cout << "Encrypted content written to " << outputFileName << endl;
        } else {
            writeFile(outputFileName, decrypt(fileContent, 5));
            cout << "Decrypted content written to " << outputFileName << endl;
        }
    } else if (choice == 'b') {
        return;
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }
}

void showHashingMenu() {
    char choice;
    string input, outputFileName;

    cout << "Hashing Menu:" << endl;
    cout << "1. Hash a message" << endl;
    cout << "2. Hash a file" << endl;
    cout << "b. Back to Main Menu" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();

    if (choice == '1') {
        cout << "Enter the message: ";
        getline(cin, input);
        cout << "Hash: " << generateHash(input) << endl;
    } else if (choice == '2') {
        cout << "Enter the file name: ";
        getline(cin, input);
        string fileContent = readFile(input);
        if (fileContent.empty()) {
            cout << "File not found." << endl;
            return;
        }
        cout << "Hash: " << generateHash(fileContent) << endl;
    } else if (choice == 'b') {
        return;
    } else {
        cout << "Invalid choice. Please try again." << endl;
    }
}
