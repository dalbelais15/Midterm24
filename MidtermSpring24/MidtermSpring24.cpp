// MidtermSpring24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "EmployeeInfo.h"
#include "Manages.h"
#include <string>
#include "Department.h"'
#include "Project.h"
#include "Dependant.h"
#include "EmpWorkDept.h"


using namespace std;



void printMenu();

int main() {

    float age;
    float CURYEAR = 2024;
   

    bool runProgram = true;
    string menuChoice;
    do {
        printMenu();
        cin >> menuChoice;
        int choice = stoi(menuChoice);

        switch (choice) {
        case 1: {
            EmployeeInfo e;
            cout << "================================================" << endl;
            cout << "            New Employee Information            " << endl;
            cout << "================================================" << endl;
            
            string n1, n2;
            cout << "Enter employee first name" << endl;
            cin >> n1;
            cout << "Enter employee second name" << endl;
            cin >> n2;
            e.setName(n1, n2);

            float bd;
            cout << "Enter employee Birthdate" << endl;
            cin >> bd;
            e.setBirth(bd);

            float ssn;
            cout << "Enter employee SSN" << endl;
            cin >> ssn;
            e.setSocial(ssn);

            string dep;
            cout << "Enter the department the employee works in" << endl;
            cin >> dep;
            e.setDepartment(dep);

           
            age = CURYEAR - bd;

            cout << "================================================" << endl;
            cout << "Name: " << e.getName() << endl;
            cout << "Age: " << age << endl; 
            cout << "Social Security No: " << e.getSocial() << endl;
            cout << "Department: " << e.getDepartment() << endl;
            cout << "================================================" << endl;
            break;
        }
        case 2: {
            Department d;
            cout << "================================================" << endl;
            cout << "                Department                      " << endl;
            cout << "================================================" << endl;
            
            string depName;
            d.setDepName(depName);
            string depNum;        
            d.setDepNo(depNum);
            string depLocation;
            d.setDepLocation(depLocation);

            string dManager;
            d.setDepManager(dManager);
            string em1;
            d.setDepEmployee1(em1);
            string em2;
            d.setDepEmployee2(em2);
            string em3;
            d.setDepEmployee3(em3);
            string em4;
            d.setDepEmployee4(em4);


            cout << "================================================" << endl;
            cout << "Department Name: " << d.getDepName() << endl;
            cout << "Number of Employees: " << d.getDepNo() << endl;
            cout << "Department Location: " << d.getDepLocation() << endl;
            cout << "\n Employees: " << endl;
            cout << "Manager: " << d.getDepManager() << endl;
            cout << "Employee 1: " << d.getDepEmployee1() << endl;
            cout << "Employee 2: " << d.getDepEmployee2() << endl;
            cout << "Employee 3: " << d.getDepEmployee3() << endl;
            cout << "Employee 4: " << d.getDepEmployee4() << endl;
            cout << "================================================" << endl;


            break;
            
            
        }
        case 3: {
            Project p;
            cout << "================================================" << endl;
            cout << "                  Project                       " << endl;
            cout << "================================================" << endl;
            
            string pName;
            p.setcurrentProject(pName);
            string addemp;
            p.setaddEmpP(addemp);

            cout << "Project: " << p.getcurrentProject() << endl;
            cout << "New Employee Name: " << p.getaddEmpP() << endl;


            break;
        }
        case 4: {
            Manages m;
            cout << "================================================" << endl;
            cout << "                   Manages                      " << endl;
            cout << "================================================" << endl;
            m.setsDate(2021.0);
            cout << "Start Date: " << m.getDate() << endl;
            break;

            
        }
        case 5: {
            Dependant x;
            cout << "================================================" << endl;
            cout << "                Dependant                      " << endl;
            cout << "================================================" << endl;

            string dpName;
            x.setDEPName(dpName);
            float dpBday{};
            x.setDEPBday(dpBday);
            string dpSex;
            x.setDEPSex(dpSex);
            string dpRelation;
            x.setDEPRel(dpRelation);


            cout << "Dependant Name: " << x.getDEPName() << endl;
            cout << "Dependant Relationship: " << x.getDEPRel() << endl;
            cout << "Dependant Sex: " << x.getDEPSex() << endl;
            cout << "BDAY: " << x.getDEPBday() << endl;



       
            break;
        }
        case 6: {
            EmpWorkDept w;
            Dependant x;
            cout << "================================================" << endl;
            cout << "                EMP WORK DEPT                   " << endl;
            cout << "================================================" << endl;


            string newEmpadd;
            string newDepartment;
           
            w.setDepName(newDepartment);

            cout << "Name of employee entering the department and SSN: " << endl;
            cin >> newEmpadd;


            cout << "This is what you have added: " << endl;
            cout << newEmpadd << " Is now on the team with:" << endl;
            cout << w.getDepEmployee1() << endl;
            cout << "Is now part of the " << w.getDepName() << "department." << endl;

            break;
        }
        case 7: {

            break;
        }
        default:
            cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
            break;
        }
    } while (runProgram);

    return 0;

        

    }




    void printMenu() {
        string menuPrompt = "";
        menuPrompt += "-------------------------------------\n";
        menuPrompt += "1: Employee Info\n";
        menuPrompt += "2: Department\n";
        menuPrompt += "3: Project \n";
        menuPrompt += "4: Manages\n";
        menuPrompt += "5: Dependant\n";
        menuPrompt += "6: Employee Work Department\n";
        menuPrompt += "7: Department Control Project\n";
        menuPrompt += "-------------------------------------\n";
        menuPrompt += "Enter your choice: ";
        cout << menuPrompt << endl;
    };
