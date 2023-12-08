//
//  employee.cpp
//  Lab07_PC
#include <iostream>
#include "employee.hpp"
using namespace std;

    //Constructor
    Employee::Employee(){}
    
    //Constructor Overload
    Employee::Employee(string Name,int Number, string HiredDate){
        name = Name;
        number = Number;
        hiredDate = HiredDate;
    }
    
    //Constructor
    ProductionWorker::ProductionWorker(){}
    
    //Constructor Overload
    ProductionWorker::ProductionWorker(string Name,int Number, string HiredDate, int ShiftTime, double HourlyPay){
        name = Name;
        number = Number;
        hiredDate = HiredDate;
        shiftTime = ShiftTime;
        hourlyPay = HourlyPay;
    }

    //Constructor
    shiftSupervisor::shiftSupervisor(){}
    
    //Constructor Overload

    //Constructor
    TeamLeader::TeamLeader(){}

    //Constructor Overload
