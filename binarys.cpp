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
{
    int pass = 1;
    do
    {
        for (int j = 0; j < npanjang - pass; j++)
        {
            if (element[j] > element[j + 1])
            {
                int temp = element[j];
                element[j] = element[j + 1];
                element[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= npanjang - 1);
}

void display()
{
    cout << "\n==============================\n";
    cout << "Elemen array setelah diurutkan:\n";
    cout << "==============================\n";

    for (int j = 0; j < npanjang; j++)
    {
        cout << element[j];
        if (j < npanjang - 1)
        {
            cout << " -> ";
        }
    }
cout << endl;
}

void binarysearch()
{
    char ulang;
    do
    {
        cout << "\n=============================\n";
        cout << "     Pencarian Binary Search \n";
        cout << "=============================\n";

        cout << "Masukkan element yang ingin dicari: ";
        cin >> x;

        int low = 0;
        int high = npanjang - 1;

        do
        {
            int mid = (low + high) /2;

            if (element[mid] == x)
            {
                cout << "\n[✅] Elemen " << x << " ditemukan pada index " << mid << ".\n";
                return;
            }
                
            if (x < element[mid])
            {
                high = mid - 1;
            }
            
            if (x > element[mid])
            {
                low = mid + 1;
            }

        } while (low <= high);
            

