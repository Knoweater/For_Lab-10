#include "pch.h"
using namespace System;
using namespace System::Text;
int main(array<System::String ^> ^args)
{
    Console::OutputEncoding = Encoding::UTF8;
    bool cut = false;
    Console::Write("Введіть рядок: ");
    String^ line = Console::ReadLine();

    Console::Write("Введіть початок: ");
    String^ start = Console::ReadLine();

    Console::Write("Введіть кінець: ");
    String^ end = Console::ReadLine();

    for (int y = 0; y < line->Length; y++) {
        if (line[y] == Convert::ToChar(end)) {
            for (int i = 0; i < line->Length; i++) {
                if (line[i] == Convert::ToChar(start)) {
                    Console::Write("Ваша вирізка: ");
                    for (; i < line->Length; i++) {
                        Console::Write(line[i]);
                        if (line[i] == Convert::ToChar(end)) {
                            cut = true;
                            break;
                        }
                    }
                }
                else if (i == line->Length - 1 && cut == false) {
                    Console::WriteLine("Початок вирізки не було знайдено");
                    break;
                }
            }
            break;
        }
        else if (y == line->Length - 1) {
            Console::WriteLine("Умови для вирізки не здійснені");
            break;
        }
    }
    return 0;
}
/*int package = 10; double weight = 2.50;
 Console::WriteLine(L"Наявні {0} пакетів вагою {1:F2} кг", package, weight);
 Console::Write(L"Введіть ціле число:");
 int value = Int32::Parse(Console::ReadLine());
 Console::WriteLine(L"Ви ввели {0}", value);*/
















