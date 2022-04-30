#include <iostream>

using namespace std;

struct Vector {
    int sz; // the number of elements
    double* elem;   // pointer to elements
};

void vector_init(Vector& v, int s) {
    v.elem = new double[s]; // allocate an array of s doubles
    v.sz = s;
}

double read_and_sum(int s) {
    Vector v;
    vector_init(v,s);   // allocate s elements for v
    for (int i=0; i!=s; ++i) {
        cout << "Type in a number" << endl;
        cin >> v.elem[i];
    }
        
    double sum = 0;
    for (int i=0; i!=s; ++i)
        sum+=v.elem[i];
    return sum;
}

int main() {
    double sum = read_and_sum(5);
    cout << "The sum is : " << sum << endl;
    return(0);
}