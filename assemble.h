#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#define RTYPE 0
#define ITYPE 1
#define JTYPE 2

struct RegFile
{
    bool isUsed[16];
    int Registers[16];
};

struct InsMem
{
    int *inputList;
    int instType;
    char imm[8];
};

// struct MUX
// {

// };

struct ALU
{
    bool isHalted;
};

struct DataMem
{
    int memUsed;
};

struct Adder
{
    int PC;
};

void int2hex16(char *, int);
int *ReadFile(FILE *fileptr, int count);
int hex2int(char *hex);