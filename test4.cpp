#include <iostream>
#include <string>
using namespace std;

class Car{
    protected:
    string _model;
    int _year;
    public:
    Car(string model, int year): _model(model),_year(year){}
    Car():Car("",0){}
};
class SportCar : public Car{
    private:
    int _top_speed;
    public:
    SportCar(string model, int year, int top_speed):Car(model,year),_top_speed(top_speed){}
    SportCar():SportCar("",0,0){}
    int get_top_speed(){return _top_speed;}
};

int main(){
    Car* a_car = new SportCar("BMW", 2007, 250);
    cout << a_car->get_top_speed()<<endl;
    return 0;
}