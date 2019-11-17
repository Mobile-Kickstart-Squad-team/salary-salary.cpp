#include<iostream>
#include<sstream>

using namespace std;

class Payslip{

    private:
        double salary;
        int ot; 
        char salarygrade;
        double tax;
        double otpay;
        double sss =500.00;
        double pagibig =200.00;
        double philhealth =100.00;
        double fixedvalues = sss+pagibig+philhealth;
        double grosspay;
        double netpay;
        double withholdingtax;

    public:

        Payslip(double salary, int ot, float tax)
        {
        tax=tax;
        ot=ot;
        salary=salary;
        }
     
        void setsalary(double salary)
        {
        this->salary=salary;
        }
                    
        void setot(int ot)
        {
        this->ot = ot;
        }
        int getotpay()
        {   
        otpay=salary*0.001*ot;
        return otpay;
        }
  
        void settax(double tax)
        {
        this->tax=tax;
        }

        double getgross()
        {  
        grosspay = salary +otpay; 
        return grosspay;
        }

        double getnet()
        { 
        netpay=grosspay-withholdingtax-fixedvalues;  
        return netpay;
        }

        double getwitholdingtax()
        {
         withholdingtax = grosspay*tax;

        return withholdingtax;
         }
};


