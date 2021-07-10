#include <iostream>
#include <string>
using namespace std;

string hoten;
int toan;
int van;
float dtb;

int main()
{
    cout << "Nhap ho ten:";
    getline(cin, hoten);
    cout << "Nhap diem toan:";
    cin >> toan;
    cout << "Nhap diem van:";
    cin >> van;
    dtb = (float)(toan + van)/2;
    cout << "\n Ho ten: " << hoten;
    cout << "Diem toan: " << toan;
    cout << "Diem van: " << van;
    cout << "Diem trung binh: " << dtb;
    return 1;
}