#include "pch.h"

using namespace System;
using namespace System::Text;

int main(array<System::String ^> ^args)
{
    Console::OutputEncoding = Encoding::UTF8;
    
    /*array<int>^ data = gcnew array < int> (100);
    for (int i = 0; i < data->Length; i++) {
        data[i] = i;
        Console::WriteLine(data[i]);
    }*/
    /*array<int, 2>^ data2 = gcnew array<int, 2>(5, 5);
    for (int rows = 0; rows < 5; rows++) {
        for (int colms = 0; colms < 5; colms++) {
            data2[rows, colms] = colms;
            Console::WriteLine(data2[rows, colms]);
        }
    }*/

    Console::Write("Введіть кількість генераторів: ");
    int Generators = Convert::ToInt32(Console::ReadLine());
    Random^ rand = gcnew Random();

    array<int>^ P = gcnew array<int>(Generators);
    array<int>^ M = gcnew array<int>(Generators);
    array<int>^ buffer = gcnew array<int>(Generators);


    for (int i = 0; i < Generators; i++) {
        P[i] = rand->Next(1, 50);
        M[i] = rand->Next(1, 50);
        buffer[i] = P[i] / M[i];


        Console::WriteLine("Потужність генератора #{1}: {0}", P[i], i + 1);
        Console::WriteLine("Маса генератора #{1}: {0} \n", M[i], i + 1);


        Console::WriteLine("Питома потужність генератора #{1}: {0} \n\n", buffer[i], i + 1);
        
    }

    return 0;
}
