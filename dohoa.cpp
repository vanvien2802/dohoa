

#include <iostream>
#include <Windows.h>
using namespace std;


// Xét màu chữ
void SetColor(int text_color) 
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code =text_color;
    SetConsoleTextAttribute(hStdout, color_code);
}
// Xét màu nền
void TextColor(int backgound_color)
{
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    int color_code = backgound_color * 16;
    SetConsoleTextAttribute(hStdout, color_code);
}

int main()
{
    system("cls"); // Xóa màn hình
    for (int i=0; i<16; i++)
    {
        SetColor(i);
        cout << "hello";
    }
    cout << endl;
    for (int i=0; i<16; i++)
    {
        TextColor(i);
        cout << "Hello";
    }
    return 0;
}