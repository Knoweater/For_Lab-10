#include "pch.h"

using namespace System;
using namespace System::Text;

int main(array<System::String^>^ args)
{
     Console::OutputEncoding = Encoding::UTF8;

     Random^ rand = gcnew Random();

     /*Console::Write("Введіть кількість рядків: ");
     int rows = Convert::ToInt32(Console::ReadLine());

     Console::Write("Введіть кількість стовпців: ");
     int colms = Convert::ToInt32(Console::ReadLine());

     array<int, 2>^ Mas = gcnew array<int, 2>(rows, colms);

     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < colms; j++) {
             Mas[i, j] = rand->Next(0, 30);
             Console::Write("{0} ", Mas[i, j]);
         }
         Console::WriteLine();
     }
     for (int i = 0; i < rows; i++) {
         array<int, 2>^ temp = gcnew array<int, 2>(rows, colms);
         int sum_row1 = 0;
         int sum_row2 = 0;
         for (int j = 0; j < colms; j++) {
             sum_row1 += Mas[i, j];
             sum_row2 += Mas[i + 1, j];
         }
         if (sum_row1 < sum_row2) {
             temp[i, 0] = Mas[i, 0];
             Mas[i, 0] = Mas[i + 1, 0];
             Mas[i + 1, 0] = temp[i, 0];

         }
     }
     for (int i = 0; i < rows; i++) {
         for (int j = 0; j < colms; j++) {
             Console::Write("{0} ", Mas[i, j]);
         }
         Console::WriteLine();
     }*/


    int N, M;
    Console::Write("Введіть кількість рядків N: ");
    N = Int32::Parse(Console::ReadLine());

    Console::Write("Введіть кількість стовпців M: ");
    M = Int32::Parse(Console::ReadLine());

    // Ініціалізація матриці
    
    array<int, 2>^ A = gcnew array<int, 2>(N, M);

    Console::WriteLine("Введіть елементи матриці:");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            A[i, j] = rand->Next(0, 30);
            Console::Write("{0} ", A[i, j]);
        }
        Console::WriteLine();
    }

    // Масив для зберігання сум рядків
    int rowSums[100] = { 0 };

    // Обчислення сум кожного рядка
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            rowSums[i] += A[i, j];
        }
    }

    // Сортування рядків за зменшенням суми
    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (rowSums[i] < rowSums[j]) {
                // Обмін сум рядків
                int tempSum = rowSums[i];
                rowSums[i] = rowSums[j];
                rowSums[j] = tempSum;

                // Обмін рядків матриці
                for (int k = 0; k < M; ++k) {
                    int temp = A[i, k];
                    A[i, k] = A[j, k];
                    A[j, k] = temp;
                }
            }
        }
    }

    // Виведення відсортованої матриці
    Console::WriteLine("Відсортована матриця:");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            Console::Write(A[i, j] + " ");
        }
        Console::WriteLine();
    }

    return 0;
}

