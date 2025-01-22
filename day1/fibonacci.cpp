#include <iostream>
using namespace std;
int main()
{
    int n,a=0,b=1,c=0;
    cout << "enter the no till u wnt the series";
    cin >> n;
    c=a+b;
    
    for (int i = 0; i < n; ++i)
    {
        cout<<a <<",";
        
        a=b;
        b=c;
        c=a+b;
    }

}