#include <bits/stdc++.h>
using namespace std;

class car{
    public:
        string name;
        int price;
        string country;
};

int main()
{
    //Enter your Code...
    car c1;
    c1.name = "BMW";
    c1.price = 3200000;
    c1.country = "Germany";

    cout << "My Car name is: " << c1.name << endl;
    cout << "The price of the " << c1.name << " is: " << c1.price << endl;
    cout << "It is been manufactured in : " << c1.country << endl;
 
    return 0;
}