#include <iostream>
#include <string>
using namespace std;

////////////////////////////////////////// task1 //////////////////////////////////////////////
class Pen 
{
    public:
    string color;
    int inkLevel;
    void printStatus()
    {
        cout << " color of the pen is: " << color << " with ink level " << inkLevel << endl;
    }
};
////////////////////////////////////////// task3 //////////////////////////////////////////////


void area(int side)
{
    int area = side * side;
    cout << " Area of the square with side : " << side << " is = " << area << endl;
}

////////////////////////////////////////// task3 //////////////////////////////////////////////


void area(int length, int width)
{
    int area = length * width;
    cout << " Area of the rectangle with length : " << length << " and width " << width << " is = " << area << endl;
}
////////////////////////////////////////// task4 //////////////////////////////////////////////


class Clock 
{
    public:
    string hour;
    string minute;
    void showTime()
    {
        cout <<  " time is " <<  hour << ":" << minute << endl;
    }
};
////////////////////////////////////////// task5 //////////////////////////////////////////////


void increase (int x)
{
    x = x + 10; 
}
////////////////////////////////////////// task6 //////////////////////////////////////////////


void multiply(int *a, int *b)
{
    int multiply = (*a) * (*b);
    cout << " multiply of the two numbers is " << endl << multiply << endl;
}

////////////////////////////////////////// task7 //////////////////////////////////////////////


void convertToFahrenheit(float &temp)
{
    float F_temp;
    F_temp = temp * 9/5 +32;
    
    cout << " the fahernheit temp is: " << F_temp << endl;
}
////////////////////////////////////////// task8 //////////////////////////////////////////////


string join(string s1, string s2)
{
    return s1 + s1;
}
////////////////////////////////////////// task8 //////////////////////////////////////////////


string join(string s1, int s2)
{
    return s1 + to_string(s2);
}
////////////////////////////////////////// task9 //////////////////////////////////////////////

   
class Box
{
    public:
    long length;
    long width;
    long height;
    long boxVolume()
    {
        return length * width * height;
    }
};
////////////////////////////////////////// task10 //////////////////////////////////////////////


void swap(string &x_str, string &y_str)
{
   string temp_str;
   temp_str = x_str;
   x_str = y_str;
   y_str = temp_str; 
}
////////////////////////////////////////// task11 //////////////////////////////////////////////


int add(int match1, int match2)
{
    return match1 + match2;
}
////////////////////////////////////////// task11 //////////////////////////////////////////////


int add(int match3, int match4, int match5)
{
    return match3 + match4 + match5;
}
////////////////////////////////////////// task11 //////////////////////////////////////////////


double add(double match6, double match7)
{
    return match6 + match7;
}
////////////////////////////////////////// task13 //////////////////////////////////////////////


class MultipleTypes
{
    public:
    int num_13; 
    string str_13;
    void display(int num_13){
        cout << "the number display by overloading a method is:" << num_13 << endl;
    }
    void display(string str_13){
        cout << "the string display " << str_13 << endl;
    }

};
////////////////////////////////////////// task1 //////////////////////////////////////////////



int main()
{

cout << "======================================1.Define and Use a Pen Class=========================================" << endl;
    //task1
    Pen myPen;
    myPen.color = "blue";
    myPen.inkLevel = 90;
    myPen.printStatus();

cout << "====================================== 2.Reference Variable Behavior ======================================" << endl;

    //task2
    int speed = 80;
    int &limit = speed;
    limit = 100;
    cout << "speed is: " << speed << endl;
    cout << "limit is: " << limit <<  endl;

cout << "================================== 3.Function Overloading (Area Calculation) =============================" << endl;
    //task3
    area(20);
    area(30, 10);

cout << "====================================== 4.Class with Default Values ========================================" << endl;
    //task4
    Clock Clock_Now;
    Clock_Now.hour = "12";
    Clock_Now.minute = "00";
    Clock_Now.showTime();

cout << "=============================================== 5.Call by Value Demo ======================================" << endl;
    //task5
    int a = 10;
    cout << " variable 'a' before increase function execuation = " << a << endl;
    increase (a);
    cout << " variable 'a' after increase function execuation = " << a << endl;

cout << "===================================== 6.Call by Pointer (Multiply Two Numbers) ==============================" << endl;
    //task6
    int p1, p2;
    cout << " please enter the first number: " << endl;
    cin >> p1;
    cout << " please enter the second number:" << endl;
    cin >> p2;
    multiply(&p1, &p2);

cout << "================================== 7.Call by Reference (Celsius to Fahrenheit) ================================" << endl;
    //task7
    float c_temp;
    cout << " please enter the celsius temp: " << endl;
    cin >> c_temp;
    convertToFahrenheit(c_temp);

cout << "==================================== 8.Function Overloading (Concatenate) ======================================" << endl;
    //task8
    string t1, t2;
 
    cout << "two string concatenation:" << endl;

    cout << " please enter first string: " << endl;
    cin >> t1;

    cout << " please enter second string: " << endl;
    cin >> t2;    

    string result = join(t1,t2);
    cout << "The full string is : "<< endl<< result << endl;

    //
    string s; int n;
    cout << "string and number concatenation:" << endl;
    cout << " please enter a string: " << endl;
    cin >> s;

    cout << " please enter a number: " << endl;
    cin >> n;    

    string full = join(s,n);
    cout << "The full string is : "<< endl<< full << endl;

cout << "====================================== 9.Class Box with Volume Method =====================================" << endl;
    //task9
    Box magicBox ;
    magicBox.length = 10;
    magicBox.width = 20;
    magicBox.height = 30;
    long my_box_vol = magicBox.boxVolume();
    cout << " The volume of my box is: " << my_box_vol << endl;

    
cout << "====================================== 10.Swapping Strings Using References ===============================" << endl;
    //task10
    string str_a, str_b;
    str_a = "Hi";
    str_b = "Bye";
    cout << " str_a before swapping is: " << str_a << endl;
    cout << " str_b before swapping is: " << str_b << endl;
    swap(str_a, str_b);
    cout << " str_a after swapping is: " << str_a << endl;
    cout << " str_b after swapping is: " << str_b << endl;

cout << "=============================== 11.Function Signature Mismatch (Deliberate Failure) ===========================" << endl;
    //task11
    cout << "function signature matching" << endl;
    cout << " add integer result = " << add(5, 6) << endl;
    cout << " add double result = " << add(5.5, 6.5) << endl;

cout << "====================================== 12.Reference to an Array Element ========================================" << endl;    
    //task12
    int scores[5] = {10, 20, 30, 40, 50};
    int &ref = scores[2];
    ref = 100;

    cout << "the modified array is : ";
    for (int i =0; i<5; i++)
    {
        cout << scores[i] << ", " ;
    }
    cout << endl;

cout << "====================================== 13.Overload display() for Multiple Types ==================================" << endl;
    //task13
    MultipleTypes myPrinting;
        myPrinting.display(15);
        myPrinting.display("by overloading a method");

    return 0;

}