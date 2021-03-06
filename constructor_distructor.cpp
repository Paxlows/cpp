#include<iostream>

class Car{
    public:

    Car(){
        std::cout<<"Default constructor:"<<"\n";
        std::cout<<"--------------------"<<"\n";
        std::cout<<"Name: Audi\n";
        std::cout<<"Price: 120000\n";
        std::cout<<"Type of Fuel: Diesel\n\n";
    }
    Car(std::string car_name,int car_prize,std::string fuel_type){
        std::cout<<"Parematerized Constructor:"<<"\n";
        std::cout<<"-------------------------"<<"\n";
        std::cout<<"Name of the Car: "<<car_name<<"\n";
        std::cout<<"Prize of the Car: "<<car_prize<<"\n";
        std::cout<<"Type of the fuel: "<<fuel_type<<"\n\n";
    }
    Car(Car &obj){
        std::cout<<"Copy constructor:"<<"\n";
        std::cout<<"-----------------"<<"\n";
        std::cout<<"Name of Car: "<<obj.a<<"\n";
        std::cout<<"Prize of the car: "<<obj.car_prize<<"\n";
        std::cout<<"Type of the fuel: "<<obj.fuel_type<<"\n\n";
    }    
    ~Car(){
        std::cout<<"Destructor:"<<"\n";
    }
};

int main(){
    Car a;
    Car a1("mustang",250000,"Petrol");
    Car a2(a);
}