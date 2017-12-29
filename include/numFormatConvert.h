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
    unsigned int formatJudge(string srcNum);//�ж�����ʲô������
    void changeToBin(string srcNum);//תΪ������
    string binToDecimal(string srcNum);//������תʮ����
    string binToOctal(string srcNum);//������ת�˽���
    string binToHex(string srcNum);//������תʮ������
    string decimalToBin(string srcNum);
    string octalToBin(string srcNum);
    string hexToBin(string srcNum);

public:
    void formatConvert(string srcFormat, string srcNum, string destFormat);
};

#endif // NUM_FORMAT_CONVERT_H
