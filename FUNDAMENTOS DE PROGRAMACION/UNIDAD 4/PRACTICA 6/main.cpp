// PRACTIA 6 UNIDAD 4
// DIEGO CÁRDENAS
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        cout << i << endl;
    }
    return 0;
}
