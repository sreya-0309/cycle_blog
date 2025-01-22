#include <iostream>
using namespace std;
int main()
{
    int lp_yr;
    cout << "enter yr";
    cin >> lp_yr;
    if ((lp_yr%4==0&& lp_yr%100 !=0) || (lp_yr%400==0))
    {
       cout << "leap yr";
    }
    else{
        cout << " not a leap yr";
    }
}