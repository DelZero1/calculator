#include <iostream>

using namespace std;

 
 /* ----------     Zbrajanje i oduzimanje ----------- */
double zbrajanje (int a, int b)
{
    int rezultat = a + b;  
    cout << "Rezultat je " << rezultat << endl;

    return 0;  

}
double oduzimanje (int a, int b)
{
    int rezultat = a - b;  
    cout << "Rezultat je " << rezultat << endl;

    return 0;  

}
/* ----------     KRAJ   ----------- */


int main()
{
    int odabir;
    cout << "Odaberite operaciju 1 ili 2 (Zbrajanje ili oduzimanje)" << endl;
    cin >> odabir;
    if (odabir == 1)
    {
        int a;
        int b;
        cout << "Unesite dva broja" << endl;
        cin >> a;
        cin >> b;
        zbrajanje(a, b);
    }
    else if (odabir == 2)
    {
        int a;
        int b;
        cout << "Unesite dva broja" << endl;
        cin >> a;
        cin >> b;
        oduzimanje(a, b);
    }
    else 
    {
        cout << "krivi unos" << endl;

    }
  
  return 0;
}

