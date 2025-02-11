#include<iostream>
using namespace std;

int main()
{
    int num[10], search, index;
    bool flag = false;

    // INPUT FOR ARRAY
    for(int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> num[i];
    }

    // SEQUENTIAL SEARCH
    cout << "Enter value to search: ";
    cin >> search;
    for(int i = 0; i < 10; i++) {
        if (search == num[i]) {
            index = i;
            flag = true;
            break;
        }
    }
}