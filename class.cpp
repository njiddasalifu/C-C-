#include<iostream>
using namespace std;
class myClass { //class
	public: //access specifier
	void myMethod();
};
void myClass::myMethod(){
	cout<<"Hello Salif whatsu?";
}
	int main(){
		myClass myObj; // create oject of my class
		myObj.myMethod();
		return 0;
	}