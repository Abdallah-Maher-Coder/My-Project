#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////
class Ticket
{
public:
string type;
double price;

Ticket(){
    type = "Regular";
    price = 100.0;
}

void showDetails(){
    cout << " The ticket title is : " << type << " with price is : " << price << " L.E." << endl;
}

};
///////////////////////////////////////////////////////////////////////////////////////////////////
class Date
{
    int day,month,year;
    public:
    void setDate(int day, int month, int year){
        this->day = day;
        this->month = month;
        this->year = year;
    }
    void printDate(){
        cout << "The Date Now is the day  : " << this->day << " of the month : " << this->month << " in the year : " << this->year << endl;
    }


};

class Animal{
    string species;
    int lifespan;
    public:
    Animal(){
        species = " Unknown ";
        lifespan= 0;
    }
    Animal(string species, int lifespan){
        this->species = species;
        this->lifespan = lifespan;
    }
    void animalPrint(){
        cout << "Animal species is : " << this->species << " and it's lifespan is : " << this->lifespan << " years" << endl;
    }
};
///////////////////////////////////////////////////////////////////////////////////////////////////
class Safe{
    int pinCode = 0;
    bool isSet = false;
    public:
    void setPin(int p){
        if (p>=1000 && p<=9999)
        {
            pinCode = p;
            cout << " pin code is correct "  << endl;
            isSet = true;
        }
        else
        {
          cout << " pin code is incorrect "  << endl;
          isSet =false;
        }  
        }

    int getPin(){
        if (isSet = true){
        cout << " pin code is : " << pinCode << endl;
        return pinCode;
        }
        else{
        cout << " pin code must contain 4 digits" << endl;
        return 0;
    }
    }
};





///////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    Ticket myTicket;
    myTicket.showDetails();

    Date dateNow;
    dateNow.setDate(15,2,2026);
    dateNow.printDate();

    Animal test;
    test.animalPrint();
    Animal cat("cats", 9);
    cat.animalPrint();

    Safe myPinCode1;
    myPinCode1.getPin();

    Safe myPinCode2;
    myPinCode2.setPin(1234);
    myPinCode2.getPin();

    Safe myPinCode3;
    myPinCode3.setPin(123);
    myPinCode3.getPin();

    return 0;

}