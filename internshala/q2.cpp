#include <iostream>
using namespace std;
class Caters
{
    string serviceCode;
    string service;
    int hatchback;
    int sedan;
    int suv;

public:
    void set(string s1, string s2, int a, int b, int c)
    {
        serviceCode = s1;
        service = s2;
        hatchback = a;
        sedan = b;
        suv = c;
    }
    void show()
    {
        cout << serviceCode << " " << service << " " << hatchback << " " << sedan << " " << suv << endl;
    }

    int getTotalCharge()
    {
    }
    // Caters get(){
    //     Caters temp =new Caters();
    //     temp.serviceCode= serviceCode;
    //     temp.service=service;
    //     temp.hatchback=hatchback;
    //     temp.sedan=sedan;
    //     temp.suv=suv;
    // }
};
int main()
{
    Caters c1, c2, c3, c4, c5;
    cout << "servicecode | service | Hatchback | sedan | suv" << endl;
    c1.set("BS01", "Basic Servicing", 2000, 4000, 5000);
    c2.set("EF01", "Engine Fixing", 5000, 8000, 10000);
    c3.set("CF01", "Clutch Fixing", 2000, 8000, 6000);
    c4.set("BF01", "Brake Fixing", 1000, 1500, 2500);
    c5.set("GF01", "Gear Fixing", 3000, 6000, 8000);
    c1.show();
    c2.show();
    c3.show();
    c4.show();
    c5.show();

    return 0;
}