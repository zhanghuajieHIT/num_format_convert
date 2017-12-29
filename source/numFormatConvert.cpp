#include "numFormatConvert.h"

void numFormatConvert::formatConvert(string srcFormat, string srcNum, string destFormat)
{
    changeToBin(srcFormat, srcNum);
    switch (atoi(destFormat))
    {
    case BIN:
        destNum = binNum;
        cout<<"The dest number is: "<<destNum<<endl;
        break;
    case OCTAL:
        destNum = binToOctal(binNum);
        cout<<"The dest number is: "<<destNum<<endl;
        break;
    case DECIMAL:
        destNum = binToDecimal(binNum);
        cout<<"The dest number is: "<<destNum<<endl;
        break;
    case HEX:
        destNum = binToHex(binNum);
        cout<<"The dest number is: "<<destNum<<endl;
        break;
    default:
        cout<<"Can not change to the dest Format"<<endl;
    }
}

void numFormatConvert::changeToBin(string srcFormat, string srcNum)
{
    switch (atoi(srcFormat))
    {
    case BIN:
        binNum = srcNum;
        break;
    case OCTAL:
        binNum = octalToBin(srcNum);
        break;
    case DECIMAL:
        binNum = decimalToBin(srcNum);
        break;
    case HEX:
        binNum = hexToBin(srcNum);
        break;
    default:
        cout<<"Can not change to the BIN Format"<<endl;
        break;
    }

}

string numFormatConvert::dectimalToBin(string srcNum)
{
    if ("-" == srcNum.substr(0,1))//如果是负数
    {

    }
    else
    {

    }
}
