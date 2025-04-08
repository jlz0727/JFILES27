#include <iostream>
#include <string>
using namespace std;

class SariSari {
private:
    string name;
    string id;
    double price;
    int shelfLife;
    int pieces;

public:
    void setData(string n, string i, double p, int s, int pcs) {
        name = n;
        id = i;
        price = p;
        shelfLife = s;
        pieces = pcs;
    }

    string getName() const {
        return name;
    }

    string getId() const {
        return id;
    }

    double getPrice() const {
        return price;
    }

    int getShelfLife() const {
        return shelfLife;
    }

    int getPieces() const {
        return pieces;
    }

    void orderProduct(int quantity) {
        if (quantity <= pieces) {
            double totalPrice = price * quantity;
            cout << "Ordered " << quantity << " pieces of " << name
                 << " for a total of " << totalPrice << " pesos." << endl;
        } else {
            cout << "Sorry, only " << pieces << " pieces of " << name << " available." << endl;
        }
    }
};

void selectionSort(SariSari* products[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (products[j]->getShelfLife() < products[minIndex]->getShelfLife()) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(products[i], products[minIndex]);
        }
    }
}

class Stack {
private:
    string stackArray[8];
    int top;

public:
    Stack() : top(0) {}

    void push(string id) {
        if (top < 8) {
            stackArray[top++] = id;
        }
    }

    void display() const {
        cout << "------------------------------------\n";
        cout << "Product IDs in stack SABI NI SIR!!!:" << endl;
        for (int i = top - 1; i >= 0; i--) {
            cout << stackArray[i] << endl;
        }
    }
};

int main() {
    SariSari name1, name2, name3, name4, name5, name6, name7, name8;
    name1.setData("mangoes", "10245", 20, 60, 100);
    name2.setData("apple", "20255", 15, 38, 50);
    name3.setData("C2_red", "30356", 30, 360, 200);
    name4.setData("bukopie", "12347", 40, 120, 150);
    name5.setData("magic_sarap", "77878", 10, 520, 1000);
    name6.setData("C2_green", "10255", 25, 360, 300);
    name7.setData("boy_bawang", "12032", 18, 400, 140);
    name8.setData("banana", "11234", 7, 24, 30);

    SariSari* products[8] = {&name1, &name2, &name3, &name4, &name5, &name6, &name7, &name8};

    selectionSort(products, 8);

    cout << "----------------------------------------------------------------------\n";
    cout << "Products sorted by shelf life (ASCENDING ORDER DAW DAPAT SABI NI SIR):" << endl;
    for (int i = 0; i < 8; ++i) {
        cout << products[i]->getName() << " (Shelf Life: " << products[i]->getShelfLife() << ")" << endl;
    }

    Stack idStack;
    for (int i = 0; i < 8; ++i) {
        idStack.push(products[i]->getId());
    }

    idStack.display();

    string input;
    int quantity;

    cout << "--------------------------------------------------\n";
    cout << "Enter the name or ID of the product NI BOSS JOLO: ";
    cin >> input;

    cout << "Enter the quantity ng TINDA NI BOSS JOLO: ";
    cin >> quantity;
    cout << "--------------------------------------------------\n";
    
    for (int i = 0; i < 8; ++i) {
        if (products[i]->getName() == input || products[i]->getId() == input) {
            products[i]->orderProduct(quantity);
            return 0;
        }
    }

    cout << "Product not found TOL, SORRY!." << endl;

    return 0;
}