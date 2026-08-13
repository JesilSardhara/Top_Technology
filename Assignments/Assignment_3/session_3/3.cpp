#include <iostream>
using namespace std;

class Movie {
    string name;
    int year;

public:

    
    Movie(string n, int y) {
        name = n;
        year = y;
    }

    
    Movie(Movie &m) {
        name = m.name;
        year = m.year;
    }

    void display() {
        cout << name << endl;
        cout << year << endl;
    }
};

int main() {

    Movie m1("KGF", 2022);

    Movie m2(m1);

    cout << "Original:" << endl;
    m1.display();

    cout << "Copy:" << endl;
    m2.display();

    return 0;
}
