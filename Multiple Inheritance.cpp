//Name : Prathyush Nimmagadda
//PRN : 24070123064
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Vehicle {
public:
    string brand = "Ford";
    void showColor() {
        cout << "Color: Red\n";
    }
};
class Engine {
public:
    int horsepower = 450;
    void showType() {
        cout << "Engine Type: V8\n";
    }
};
class Car : public Vehicle,public Engine {
public:
    string model = "Mustang";
    int year = 2024;
};
int main(){
    Car myCar;
    cout<<"Brand: "<<myCar.brand<<endl;
    cout<<"Model: "<<myCar.model<<endl;
    cout<<"Year: " << myCar.year<<endl;
    cout<<"Horsepower: "<<myCar.horsepower<<endl;
    myCar.showColor();
    myCar.showType();
    return 0;
}
