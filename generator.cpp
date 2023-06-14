#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>
#include <windows.h>

using namespace std;

int len = 0;

char sym[] = "0123456789!@#$&_qwertyuiopasdfghjklzxcvbnmMNBVCXZLKJHGFDSAPOIUYTREWQ";
int stl = 0;
char* pwd;

int main() {
    srand(time(NULL));
    stl = strlen(sym);
    cout << "Password Generator !!!" << endl;
    Sleep(1000);
    system("color 6");
    Sleep(1000);
    system("color 3");

    cout << "Enter length of symbols: ";
    cin >> len;
    cout << "\n\n";
    system("color 9");
    
    pwd = new char[len + 1]; 
    pwd[len] = '\0'; 

    for (int i = 0; i < len; i++) {
        pwd[i] = sym[rand() % stl];
    }

    cout << "Your generated password: " << pwd << endl;

    delete[] pwd;

    cin.ignore();
    cin.get();

    return 0;
}

