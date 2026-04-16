#include <iostream>
using namespace std;

int element[10];
int npanjang;
int x;

void input()
{
    while (true)
    {
        cout << "masukkan anyaknya element pada array (maksimal 10):";
        cin >> npanjang;

        if (npanjang <= 10)
        { 
            break;
        } 
        else
        {
            cout << "\n[!] Maaf, jumlah element maksimal adalah 10. Silakan coba lagi.\n\n";
        }

    }
}
cout << "\n==============================\n";
cout << "Masukkan elemen array:\n";
cout << "==============================\n";

for (int i = 0; i < npanjang; i++)
{
    cout << "Element ke-" << i + 1 << ": ";
    cin >> element[i];
}

void bubbleSortArray ()
