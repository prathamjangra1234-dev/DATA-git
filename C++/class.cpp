#include <iostream>
using namespace std;

class CARS{
    private:   //private data
        int car_number;
    public:    //public data
        string car_model;
        string car_brand;
            void details(){  //SHOWN DETAILS PROVIDED IN MAIN
                cout << "Car Model:" << car_model <<endl;
                cout << "Car Brand:" << car_brand <<endl;
        }
};

int main() {
    CARS fortuner;  //ANY CAR NAME 
    fortuner.car_brand = "TOYATA";    //BRAND
    fortuner.car_model = "LEGENDER";   //MODEL
    fortuner.details();

    return 0;
}