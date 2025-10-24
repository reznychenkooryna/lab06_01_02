#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArray(int r[], int i, int n, int a, int b)
{
    if (i >= n) return;
    r[i] = a + rand() % (b - a + 1);
    fillArray(r, i + 1, n, a, b);
}

void printArray(int r[], int i, int n)
{
    if (i >= n)
    {
        cout << endl;
        return;
    }
    cout << setw(4) << r[i];
    printArray(r, i + 1, n);
}

void processArray(int r[], int i, int n, int& s, int& k)
{
    if (i >= n) return;

    if (!(r[i] % 2 != 0 || i % 7 == 0))
    {
        s += r[i];
        k++;
        r[i] = 0;
    }

    processArray(r, i + 1, n, s, k);
}

int main()
{
    srand(time(0));

    const int n = 26;
    int r[n];
    int s = 0;
    int k = 0;

    fillArray(r, 0, n, 3, 92);

    cout << "Initial array:" << endl;
    printArray(r, 0, n);

    processArray(r, 0, n, s, k);

    cout << endl << "Number of elements: " << k << endl;
    cout << "Sum of elements: " << s << endl;

    cout << endl << "Array after replacement:" << endl;
    printArray(r, 0, n);

    return 0;
}