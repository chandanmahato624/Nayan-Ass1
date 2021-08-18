#include<iostream>
using namespace std;

class Student {
public:
   int roll;
   char sname[100];
   char cname[100];

   void input() {
       cout << "Enter Your Roll Number:";
       cin>>roll;
       cin.get();

       cout << "Enter Your Name:";
       cin.getline(sname, 100);

       cout << "Enter College Name:";
       cin.getline(cname, 100);
   }
};
class College : public Student {
public:

   void display() {
       cout << "Your Roll is :" << roll;
       cout << "\nYour Name is :" << sname;
       cout << "\nCollege Name is :" << cname;
   }
};
int main() {

   College obj;
   obj.input();
   obj.display();

   return 0;
}