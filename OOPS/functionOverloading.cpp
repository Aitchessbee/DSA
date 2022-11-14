#include <iostream>
using namespace std;

class A {
   public:
    void sayHello(string name) { 
        cout << "Hello " << name << endl; 
    }

    void sayHello(string name, int age) { 
        cout << "Hello " << name << " " << age << endl; 
    }
};

int main() {
    A obj;
    obj.sayHello("harry");
    return 0;
}