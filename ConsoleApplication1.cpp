#include <iostream>
#include <cmath>
	using namespace std;

	int main() {

		int a,b,c,x,x2;
		cout << "Enter the value : " << endl;
		cin >> a;
		cout << "Enter the value : " << endl;
		cin >> b;
		cout << "Enter the value : " << endl;
		cin >> c;
		if ((pow(b, 2) - 4 * a * c == 0))
		{
			x = -b / 2 * a;
			cout << "There will be only one real situation" << endl;
			cout << " x = " << x << endl;
		}
		else if (((pow(b, 2) -( 4 * a * c > 0))))
		{
			x = ( - b + sqrt(pow(b, 2) - (4 * a * c))/(2*a));
			x2 = (-b - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a);
			cout << "There will be two real number " << endl;
			cout<<" x = "<< x <<endl;
			cout << " x2 = " << x2 << endl;
		}
		else
		{
			cout << "There is no real number";
		}
	}
