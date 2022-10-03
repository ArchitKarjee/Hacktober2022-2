#include<iostream>
using namespace std;
int main()
{
    float km, m,cen;
	cout << "\n\n Convert centimeter into meter and kilometer :\n";
	cout << "--------------------------------------------------\n";	
    cout << " Input the distance in centimeter : ";
    cin >> cen;
	m = (cent/100); 
	km = (cent/100000);
	cout << " The distance in meter is: "<< m << endl;
	cout << " The distance in kilometer is: "<< km << endl;	
	cout << endl;
    return 0;
}
