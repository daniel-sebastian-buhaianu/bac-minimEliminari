#include <iostream>
#include <fstream>
#define NMAX 100
using namespace std;
ifstream fin("numere.in");
int main()
{
    int n, i, v[NMAX+1], j;
    fin >> n;
    for (i = 0; i < n; i++) fin >> v[i];
    fin.close();
    for (i = 0; i < n-1; i++)
        if (v[i] == v[i+1])
        {
            for (j = i; j < n-1; j++) v[j] = v[j+1];
            n--, i--;
        }
    for (i = 0; i < n; i++) cout << v[i] << ' ';
    return 0;
}
