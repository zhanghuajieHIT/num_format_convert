#ifndef NUM_FORMAT_CONVERT_H
#define NUM_FORMAT_CONVERT_H

#include <iostream>
#include <string>
using namespace std;

enum numFormat
{
    BIN = 2,
    OCTAL = 8,
    DECIMAL = 10,
    HEX = 16,
};

class numFormatConvert
{
private:
    string binNum;
    string destNum;
    list<string>numFormat = {"2","8","10","16"};

private:
    unsigned int formatJudge(string srcNum);//判断属于什么进制数
    void changeToBin(string srcNum);//转为二进制
    string binToDecimal(string srcNum);//二进制转十进制
    string binToOctal(string srcNum);//二进制转八进制
    string binToHex(string srcNum);//二进制转十六进制
    string decimalToBin(string srcNum);
    string octalToBin(string srcNum);
    string hexToBin(string srcNum);

public:
    void formatConvert(string srcFormat, string srcNum, string destFormat);
};

#endif // NUM_FORMAT_CONVERT_H
