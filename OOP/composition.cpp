#include <iostream>
using namespace std;

//definition of the stereo class 
class Stereo{
private:
    string brand;
    float Hz;
public:
    Stereo();
    Stereo(string, float);
    void printStereo();
};


//definition of the automobile class
class Automobile{
private:
    string brand;
    int kilometers;
    float price;
    Stereo soundEquipment;

public:
    Automobile();
    Automobile(string, int, float, Stereo);
    void printData();
};

//definition of the stereo's methods
Stereo::Stereo(){
    brand = "no brand";
    Hz = 0;
}
Stereo::Stereo(string _brand, float _Hz){
    brand = _brand;
    Hz = _Hz;
}
void Stereo::printStereo(){
    cout << "the brand is: " << brand;
    cout << "The quantity of Hz is: " << Hz;
}

//definition of the Automobile's methods
Automobile::Automobile(){
    brand = "no brand";
    kilometers = 0;
    price = 0;
    soundEquipment = Stereo();
}
Automobile::Automobile(string _brand, int _kilometers, float _price, Stereo _soundEquipment){
    brand = _brand;
    kilometers = _kilometers;
    price = _price;
    soundEquipment = _soundEquipment;
}
void Automobile::printData(){
    cout << "-------SHOWING DATA-------" << endl;
    cout << "The brand of the automobile is: " << brand << endl;
    cout << "The amount of kilometers is: " << kilometers << endl;
    cout << "The price of the vehicle is: " << price << endl;
    cout << "The sound equioment is: " << endl;
    soundEquipment.printStereo();
}

int main(){
    //creating objects by the class Stereo
    Stereo stereo1("Bose", 250), Stereo2;

    //creating objects by the class Automobile
    Automobile auto1("Dodge Challenger", 40000, 200000, stereo1), auto2;

    //show the data of the first automobile
    auto1.printData();

    return 0;
}
