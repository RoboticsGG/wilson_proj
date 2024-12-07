#include <iostream>

class MyClass {
    public:
        int myNum1;
        int myNum2;
        std::string myString;

        void myMethod(){
            myPrivate();
            std::cout << "Hello World!" << "\n";
            std::cout << resultNum << "\n";
        }

    private:
        int resultNum;
        void myPrivate(){
            std::cout << "Private" << "\n";
            resultNum = myNum1 + myNum2;
        }
};

int main(){
    MyClass myObj;

    myObj.myNum1 = 15;
    myObj.myNum2 = 20;
    myObj.myString = "Some Text";

    myObj.myMethod();

    std::cout << myObj.myNum1 << "\n";
    return 0;
}
