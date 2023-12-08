//
//  employee.hpp
//  Lab07_PC
//
//  Created by Pedro Calderon on 12/6/23.
#include <string>
#include <iostream>
using namespace std;

class Employee{
private:
string name;
int number;
string hiredDate;
public:
    
    //Setters
    inline void setName(string Name){
        name = Name;
    }
    inline void setNumber(int Number){
        number = Number;
    }
    inline void sethiredDate(string HiredDate){
        hiredDate = HiredDate;
    }
    
    //Getters
    inline string getName(){
        return name;
    }
    inline int getNumber(){
        return number;
    }
    inline string gethiredDate(){
        return hiredDate;
    }
    
    inline void printAll(){
        cout << "Name: " << name << " Number: " << number << " hiredDate: " << hiredDate;
    }
    
    //Constructor
    Employee();
    Employee(string Name, int Number, string HiredDate);
    friend class ProductionWorker;
};

class ProductionWorker:Employee{
private:
    int shiftTime;
    string TimeDay;
    double hourlyPay;
    public:
    
    inline void setshiftTime(int ShiftTime){
        switch(ShiftTime){
            case 1:
                shiftTime = ShiftTime;
                TimeDay = "Day";
                break;
            case 2:
                shiftTime = ShiftTime;
                TimeDay = "Night";
                break;
        }
        shiftTime = ShiftTime;
    }
    inline void sethourlyPay(double HourlyPay){
        hourlyPay = HourlyPay;
    }
    
    inline int getshiftTime(){
        return shiftTime;
    }
    inline double gethourlyPay(){
        return hourlyPay;
    }
    void overload printAll(){
        cout << shiftTime << " " << hourlyPay;
    }
    ProductionWorker();
    ProductionWorker(string Name, int Number, string HiredDate, int ShiftTime, double HourlyPay);
};

class shiftSupervisor: Employee {
private:
    double bonus;
    double annualSalary;
public:
    inline void setBonus(double Bonus){
        bonus = Bonus;
    }
    inline void setSalary(double AnnualSalary){
        annualSalary = AnnualSalary;
    }
    inline double getBonus(){
        return bonus;
    }
    inline double getSalary(){
        return annualSalary;
    }
    
    shiftSupervisor();
};

class TeamLeader:ProductionWorker{
private:
    double monthlyBonus;
    int requiredTrainingHours, attendedTrainingHours;
public:
    inline void setBonus(double bonus){
        monthlyBonus = bonus;
    }
    inline void setTraining(int training){
        requiredTrainingHours = training;
    }
   inline void setFinishedTraining(int training){
        attendedTrainingHours = training;
    }
    
    inline double getBonus(){
        return monthlyBonus;
    }
    inline int getTrainingRequired(){
        return requiredTrainingHours;
    }
    inline int getTrainingFinished(){
        return attendedTrainingHours;
    }
    
    TeamLeader();
};



