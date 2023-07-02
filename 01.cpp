#include<iostream>
using namespace std;
class Pen {
public:
	string FColor;
};
int main() {
	Pen pen;
	pen.FColor = "#FF0000";
	cout << "Color of pen is " << pen.FColor << endl;
	return 0;
}
