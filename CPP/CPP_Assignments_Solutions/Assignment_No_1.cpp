#include <iostream>
#include <string>
using namespace std;


int main()
{

    cout << "======================================( easy level )======================================" << endl;


    cout << "====================== Task1 Personal Details Input ======================" << endl;
        string first_name;
        int age;
        char grade;

        cout << "enter your first name: " << endl;
        cin >> first_name;
        cout << "enter your age: " << endl;
        cin >> age;
        cout << "enter your grade: " << endl;
        cin >> grade;

        cout << " My first name is: " << first_name << " and I am " << age << " years old" << " and my grade is: " << grade << endl;


    cout << "====================== Task2 Variable Memory Size ======================" << endl;
        float f_Task2 = 12.5;
        bool b_Task2 = true;
        
        cout << "size of char variable in memory is : " << sizeof(grade) << "bytes" << endl;
        cout << "size of int variable in memory is  : " << sizeof(age) << "bytes" << endl;
        cout << "size of float variable in memory is: " << sizeof(f_Task2) << "bytes" << endl;
        cout << "size of bool variable in memory is : " << sizeof(b_Task2) << "bytes" << endl;


    cout << "====================== Task3 Array Intialization & Display ======================" << endl;
        int task3[4] = {100, 200, 300, 400};

        for (int i = 0; i < 4; i++)
        {
            cout << "the element with index no." << i << " is: " << task3[i] << endl;
        }


    cout << "====================== Task4 boolean logic display ======================" << endl;
        
        bool isActive = false;

        cout << "the value of false boolean variable is: " << isActive;

        cout << endl;

        isActive = true;

        cout << "the value of true boolean variable is: " << isActive << endl;



    cout << "====================== Task5 string concatenation ======================" << endl;
        string city; 
        string country;

        cout << "please enter your city:";
        cin >> city;

        cout << "please enter your country:";
        cin >> country;

        cout << "The full location is: " << city  + ", " << country << endl;


    cout << "====================== Task6 floating point precision ======================" << endl;
        float f_task6 = 3.14159265359;
        double d_task6 = 3.14159265359;
        
        cout << "float variable precision of the number 3.14159265359  is: " << f_task6;
        cout << ", but the double variable precision for the same number is: " << d_task6;
        cout << endl;




    cout << "======================================( medium level )======================================" << endl;

    cout << "====================== Task8 dynamic memory allocation(C style) ======================" << endl;
        int *task8 = (int*)malloc(sizeof(int));

        if (task8 == NULL)
        {
            printf("memory allocation failed");
            return 1;
        }

        printf("please enter the value of the integer :");
        scanf("%d", task8);

        printf("value stored is: %d\n", *task8);

        free(task8);



    cout << "====================== Task9 dynamic memory allocation(C++ style) ======================" << endl;
        int *task9 = new(int);

        cout << "please enter the value of the integer: ";
        cin >> *task9;

        if (task9 == NULL)
        {
            cout << "memory allocation failed";
            return 1;
        }
        cout << "value stored is: " << *task9 << endl;

        delete task9;


    cout << "====================== Task10 dynamic array with user input ======================" << endl;
        int n10;
        
        cout << "please enter the no. of elements :";
        cin >> n10;

        int *task10 = new int[n10];

        for (int i = 0; i < n10; i++)
        {
            cout << "enter the element of the array with index number "<< i << " is:";
            cin >> *(task10+i);
        }

        cout << "[" ;
        for (int i = 0; i < n10; i++)
        {
            cout << *(task10+i) << ", ";
        }
        cout << "]" << endl;

        delete task10;

    cout << "====================== Task11 array address arithmetic ======================" << endl;

        int task11_arr[5] = {100, 200, 300, 400, 500};
        cout << task11_arr[2];
        cout << endl;
        cout << *(task11_arr+2);
        cout << endl;


    cout << "====================== Task12 memory check before allocation ======================" << endl;

        int *task12 = new int();
        if (task12 == NULL){
            cout << "memory allocation failed" << endl;
            return 1;
        }
        *task12 = 50;
        cout << "the value of *task12 is:" << *task12 << endl;

        delete task12;


    cout << "====================== Task13  string array of names ======================" << endl;

        string arr[3];
        for (int i = 0; i<3; i++)
        {
            cout << "please enter name no. " << i+1 << " :";
            cin >> arr[i];
            cout << endl;
        }

        cout << "names in reverse order: " << endl;
        for (int i = 2; i >= 0; i--) 
        {
            cout << arr[i] << endl;
        }



    return 0;
}