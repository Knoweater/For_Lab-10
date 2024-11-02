#include "pch.h"

using namespace System;
using namespace System::Text;
int main(array<System::String ^> ^args)
{
    Console::OutputEncoding = Encoding::UTF8;

    int NumOfWordsInPrefix = 0;
    Console::Write(L"Введіть слово: ");
    String^ S1 = Console::ReadLine();

    Console::Write("Введіть префікс: ");
    String^ S2 = Console::ReadLine();

    for (int i = 0; i < S1->Length; i++) {
        if (S1[i] == S2[i]) {
            NumOfWordsInPrefix += 1;
            if (NumOfWordsInPrefix == S2->Length) {
                Console::WriteLine("{0} є префіксом {1}", S2, S1);
                break;
            }
        }
        else {
            Console::WriteLine("{0} не є префіксом {1}", S2, S1);
            break;
        }
    }
    return 0;
}
