#include "commander.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <windows.h>

int COMMANDER::run(char command[]) {
    if (strcmp(command, "exit") == 0) {
        exit(0);
    }
    else {
        if (system(command) == 0) {
            return GOOD;
        }
        else {
            return BAD;
        }
    }
}

void COMMANDER::readFile(char fname[], char* buffer) {
    std::ifstream file(fname);
    file >> buffer;
    file.close();
}

void COMMANDER::setConsoleColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

