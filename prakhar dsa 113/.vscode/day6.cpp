#include<iostream>
#include<string>
using namespace std;
//oops concept
class Teacher{

private:
    double salary;
public:

  string name ;
  string subject;
  string dept ;

//non parameterised constructor
Teacher(){
    cout<<"Hi! ia am non parameterised constructor "<<"\n";
}
//parameterised constructor
Teacher(string n,string d,string s,double sal){
    name=n;dept=d;subject=s;salary=sal;
}

// void changedept(string newdept){
//     dept=newdept;
// }

string  getinfo(){
cout<<name <<"\n";
cout<<dept<<"\n";
cout<<subject<<"\n";
cout<<salary;
    
}
//setter
void setsalary(double s){
    salary=s;
    }
//getter
   double getsalary(){
    return salary;
}
};

int main(){

// t1.name="prakhar";
// t1.subject="computer";
// t1.dept="CS";
// t1.setsalary(25000);
// cout<<t1.getsalary()<<"\n";
Teacher t1("rohan","IT","java",15000);
t1.getinfo();
return 0;
};










