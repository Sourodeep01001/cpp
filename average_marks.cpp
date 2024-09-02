#include<iostream>

using namespace std;
int main()
{
    cout << "Enter Numbers:" << endl;
    int phy=0, che=0, math=0;
    cout << "Enter Physics number:"<< endl;
    cin >> phy;
    cout << "Enter Chemistry number:"<< endl;
    cin >> che;
    cout << "Enter Math number:"<< endl;
    cin >> math;

    float avg =(phy+ che+ math)/3.0;
    cout << "Average number is:" << endl << avg;
  return 0;
}