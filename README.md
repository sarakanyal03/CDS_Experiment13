#  EXPERIMENT 13
# AIM
To study and implement constructor overloading
# THEORY
In C++, a method known as constructor overloading enables a class to have multiple constructors, each with a unique set of parameters. Because of this, objects of the class can be initialized differently based on the kind and quantity of arguments handed in when creating the object. <BR>
* Rules for Constructor Overloading: <BR>
  * The quantity and kind of parameters used by the constructors must vary.
  * The parameter types cannot be the same in the same order for them.
  * It is possible to call the constructors explicitly or implicitly.
* Syntax :
```
class ClassName {
    public:
        // Default constructor
        ClassName() {
            // Code for default constructor
        }

        // Parameterized constructor with one parameter
        ClassName(int x) {
            // Code for constructor with one integer parameter
        }

        // Parameterized constructor with two parameters
        ClassName(int x, int y) {
            // Code for constructor with two integer parameters
        }

        // Parameterized constructor with a different data type
        ClassName(double z) {
            // Code for constructor with one double parameter
        }
};
```
# CODE & OUTPUT
* CODE A:
```
//SARA KANYAL
//23070123115
#include <iostream>
using namespace std;
class Room {
    private:
    double length;
    double breadth;
    public :
    // 1. constructor with no arguents
    Room(){
        length=6.9;
        breadth=4.2;
    }
    // 2. Constructors with two arguements
    Room(double l,double b){
        length=l;
        breadth=b;
    }
    // 3. Constructor with one argument 
    Room(double len){
        length=len;
        breadth=7.2;
    }
    double calculateArea(){
        return length*breadth ;
    }
};
int main (){
    Room room1,room2(8.2,6.6), room3(8.2);
    cout<<"when no argument is passed: "<< endl;
    cout<<"Area of room = " << room1.calculateArea()<<endl;
    cout<<"\n when (8.2,6.6) is passed: "<< endl;
    cout<<"Area of room = " << room2.calculateArea()<<endl;
    cout<<"\n when breadth is fixed to 7.2 and (8.2)is passed: "<< endl;
    cout<<"Area of room = " << room3.calculateArea()<<endl;
    return 0;

}
```
  OUTPUT A:
  ![13A](https://github.com/sarakanyal03/CDS_Experiment13/blob/main/13A.png)
* CODE B :
```
//SARA KANYAL
//23070123115
#include <iostream>
using namespace std;
class Fetch {
int num;
public:
Fetch(){
    num=3;
    //cout<<num<<endl;
}
Fetch(int x){
    num=x;
    //cout<<x<<endl;
}
Fetch(const Fetch& b){
    num=b.num;
}
void disp(){
    cout<<num<<endl;
}
};
int main(){
Fetch f1,f2(6),f3(f1);
f1.disp();
f2.disp();
f3.disp();
}
```
  OUTPUT B :
  ![13A](https://github.com/sarakanyal03/CDS_Experiment13/blob/main/13B.png)

# CONCLUSION 

The following is a  summary of constructor overloading in C++ : <BR>

* Flexibility: Constructor overloading offers flexibility by enabling the coexistence of several constructors with various parameter sets.
* Enhanced Code Readability: It improves code readability by allowing class objects to be initialized in a variety of ways, contingent on the circumstance.
* Effective Resource Management: By offering suitable initialization logic based on the arguments supplied, overload constructors enable effective resource management.
* Supports Default Values: When fewer parameters are required, constructor overloading makes it easier to use by supporting the provision of default arguments.
* Error prevention: Lowers the possibility of errors by guaranteeing that an object is consistently initialized correctly before usage, taking into account various input conditions.
* Improved Maintainability: Constructor overloading makes code more ordered and less messy by eliminating the need for several named initialization functions.
* Extensibility: By simply accepting additional parameters without altering the current code, overload constructors lay the groundwork for future additions.
