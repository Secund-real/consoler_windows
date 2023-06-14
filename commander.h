#ifndef COMMANDER_H
#define COMMANDER_H

#define GOOD 0
#define BAD 1

#define BUFF 256

class COMMANDER {
public:
    char command[BUFF];

    int run(char command[]);
    void readFile(char fname[], char* buffer);
    void setConsoleColor(int color);
};

#endif // COMMANDER_H

