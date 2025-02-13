#include <iostream>
using namespace std;

int sum();
int diff();
void print();
int product();

int main() {
    char choice;
    do {
        print();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a': {
                int total = sum();
                cout << "The sum of num3 and num4 = " << total << endl;
                break;
            }
            case 'B':
            case 'b': {
                int result = diff();
                cout << "The difference of num1 to num2 = " << result << endl;
                break;
            }
            case 'C':
            case 'c': {
                int prod = product();
                cout << "The product of num5 and num6 = " << prod << endl;
                break;
            }
            case 'D':
            case 'd':
                cout << "Quitting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
    } while (choice != 'D' && choice != 'd');

    return 0;
}

int diff() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    return num1 - num2;
}

int sum() {
    int num3, num4;
    cout << "Enter two numbers: ";
    cin >> num3 >> num4;
    return num3 + num4;
}

int product() {
    int num5, num6;
    cout << "Enter two numbers: ";
    cin >> num5 >> num6;
    return num5 * num6;
}

void print() {
    cout << "[A] Sum" << endl;
    cout << "[B] Difference" << endl;
    cout << "[C] Product" << endl;
    cout << "[D] Quit" << endl;
}