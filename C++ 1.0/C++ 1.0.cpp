#include <iostream>

#define VectorMinus(x, y, a, b) ((x - a) * (y - b))
#define VectorPlus(x, y, a, b) ((x + a) * (y + b))
#define VectorMultiply(x, y, a, b) ((x * a) * (y * b))
#define VectorDivide(x, y, a, b) ((x / a) * (y / b))

using namespace std;

int main() {
	cout << VectorMinus(4, 4, 4, 4) << endl;
	cout << VectorPlus(4, 4, 4, 4) << endl;
	cout << VectorMultiply(4, 4, 4, 4) << endl;
	cout << VectorDivide(4, 4, 4, 4) << endl;
}