/*Write a program create employee class with members variable as EmpId,Name of Employee and
Salary. For 10 Employees
Print list of all employees.
Print list of employee who got heights salary.
*/


#include<iostream>
using namespace std;

//create class
class Employee{
	//attributes
	private:
		int empId;
		string nameOfEmployee;
		float salary;
		
	//methods
	public:
		void getInfo(){
			cout<<"\nEnter employee Id : ";
			cin>>empId;
			cout<<"\nEnter Employee name :";
			cin>>nameOfEmployee;
			cout<<"\nSalary of Employee : ";
			cin>>salary;
		}
		void display(){
				cout<<"\nEmployee Id : "<<empId;
			cout<<"\n Employee name :"<<nameOfEmployee;
			cout<<"\nSalary of Employee : "<<salary;
		}
		int highestSal(){
			int max=0;
			if(salary>max){
				max=salary;
			}
		return max;
		//	cout<<"\nMaximum Salary is : "<<max;
}
};
//static int::empId=0;
int main(){
	Employee mayu,anu;
	float highestSalary=0;
mayu.getInfo();
anu.getInfo();
mayu.display();
anu.display();
if(anu.highestSal()>mayu.highestSal()){
	highestSalary=anu.highestSal();
	cout<<"\nMaximum salary : "<<highestSalary;
}
else{

cout<<"\nMaximum salary : "<<highestSalary;
}
/*	Employee mayu[10];
int mayu[10];
	int n;
cout<<"Enter number of ewmployees info : ";
cin>>n;

/*Employee mayu,anu;
mayu.getInfo();
anu.getInfo();
mayu.display();
anu.display();
//mayu.highestSal();


anu.highestSal();
	//cout<<"Maximum Salary is : "<<max;
//	highestsal();
int max=0;
for(int i=0;i<n;i++){
	cin>>mayu[i];
}
/*
for(int i=0;i<n;i++){
	if(mayu[i]>max){
		max=mayu[i];
	}
	cout<<"Max salary : "<<max;
}
mayu[10].getInfo();
mayu[10].highestSal();
*/
}/*
output:
Enter employee Id : 1

Enter Employee name :Mayuri

Salary of Employee : 20000

Enter employee Id : 2

Enter Employee name :ananya

Salary of Employee : 30000

Employee Id : 1
 Employee name :Mayuri
Salary of Employee : 20000
Employee Id : 2
 Employee name :ananya
Salary of Employee : 30000

Maximum Salary is : 30000
*/