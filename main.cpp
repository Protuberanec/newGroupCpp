//#include <QCoreApplication>

#include <iostream>
#include <stdio.h>

int a = 0x09;

int main(int argc, char *argv[])
{

    unsigned char bitsVar = 0;
    unsigned char bitsVar1 = 0x80;

    bitsVar = 3 << 3;

    bitsVar = 0x80 >> 2;


    for (int i = 0; i < 8;) {
        bitsVar = 1 << i;
        std::cout << (unsigned int)bitsVar << "\t----\t" << (unsigned int)bitsVar1<< std::endl;
        bitsVar1 = bitsVar1 >> 1;

        i++;
    }




    return 0;
//    QCoreApplication a(argc, argv);

//    return a.exec();
}
