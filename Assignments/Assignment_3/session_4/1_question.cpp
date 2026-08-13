#include<iostream>
using namespace std;

class Product {
    string productName;
    float price;
    float rating;

public:

    void pute() {
        cout<<"enter a Product name : ";
        cin>>productName;
        cout<<"enter a price : ";
        cin>>price;
        cout<<"Enter a rating : ";
        cin>>rating;
	}
    
    void displayInfo() {
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs. " << price << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};

int main() {
    Product p1;
	
	p1.pute();
    p1.displayInfo();

    return 0;
}
