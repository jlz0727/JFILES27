#include <iostream>
#include <stdlib.h>
using namespace std;

int x[5], z, y, n, m, ctr, p;

int main()
{
    p = 5;
    ctr = 0;

    // INPUT FOR ARRAY
    for(z = 0; z < 5; z++)
    {
        cout << "Enter an integer: ";
        cin >> x[z];
    }

    cout << "You entered: " << endl;
    for(z = 0; z < 5; z++)
        cout << x[z] << endl;

    cout << endl << "Enter number to be deleted: ";
    cin >> n;

    // DELETION PROCESS
    for(z = 0; z < p; z++)
    {
        if(x[z] == n)
        {
            for(m = z; m < p - 1; m++)
            {
                x[m] = x[m + 1];
            }
            p = p - 1;
            z = z - 1;
            ctr++;
        }
    }

    // OUTPUT
    if(ctr == 0)
        cout << endl << n << " cannot be found" << endl;
    else
        cout << endl << n << " successfully deleted" << endl;

    cout << endl << "The list is: " << endl;
    for(z = 0; z < p; z++)
        cout << x[z] << endl;

    return 0;
}