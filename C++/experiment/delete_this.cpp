#include <iostream>
#include <stack>
using namespace std;

class Employee{
    public:
        string EmpName;
        string EmpID;
        string EmpPos;
        string EmpSal;
        string EmpPh;
        string EmpMail;

        Employee(){
            cout << "Enter Employee Name: ";
            cin >> EmpName;
            cout << "Enter Employee ID: ";
            cin >> EmpID;
            cout << "Enter Employee Position: ";
            cin >> EmpPos;
            cout << "Enter Employee Salary: ";
            cin >> EmpSal;
            cout << "Enter Employee Phone Number: ";
            cin >> EmpPh;
            cout << "Enter Employee Email: ";
            cin >> EmpMail;
        }
};

class EmpStack{
    stack<Employee> stk;
    int tos;
    int size;

    public:
        EmpStack(int s){
            size = s;
            tos = -1;
        }

        void top(){
            cout << "Employee Name: " << stk.top().EmpName << endl;
            cout << "Employee ID: " << stk.top().EmpID << endl;
            cout << "Employee Position: " << stk.top().EmpPos << endl;
            cout << "Employee Salary: " << stk.top().EmpSal << endl;
            cout << "Employee Phone Number: " << stk.top().EmpPh << endl;
            cout << "Employee Email: " << stk.top().EmpMail << endl;
        }

        void append(Employee record){
            if(tos == size) cout << "Stack Overflow" << endl;
            else{
                tos += 1;
                stk.push(record);
            }
        }

        void pop(){
            if(stk.empty()) cout << "Stack Underflow" << endl;
            else{
                top();
                stk.pop();
                tos -= 1;
            }
        }

        bool isEmpty(){ return stk.empty() ? true : false; }
};

int main(){
    EmpStack EStk(5);

    int choice;
    while(true){
        cout << "1) Append Employee " << endl << "2) Pop Employee" << endl << "3) Display Top of Stack" << endl << "4) Check if stack is empty" << endl << "5) Exit" << endl << "Enter your choice: ";
        cin >> choice;

        if(choice == 1){
            cout << endl;
            Employee emp;
            EStk.append(emp);
        }

        else if(choice == 2){
            cout << endl;
            EStk.pop();
        }

        else if(choice == 3){
            cout << endl;
            EStk.top();
        }

        else if(choice == 4){
            cout << endl;
            if(EStk.isEmpty()) cout << "Stack empty" << endl;
            else cout << "Stack not empty" << endl;
        }

        else break;
    }

    return 0;
}