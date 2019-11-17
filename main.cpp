 #include<iostream>
 #include"payslip.h"
  
  using namespace std;
 
 int main(){

    char name[100];
    double salary;
    int ot;
    string paygrade;
    double tax ;
    

    Payslip emp(salary,ot,tax);
    cout<<"\n";

    cout << "Enter Employee Name  : ";
    cin.get(name,100);
    cin.ignore();
    cout<< "Enter Basic Salary   : ";
    cin >>salary;
    cout<< "Enter overtime hours : ";
    cin >>ot;

    do {
   
        if (salary < 10000)
    {
      cout<<"\n Salary is too low";
     return EXIT_FAILURE;
          
    }
    else if((salary>=10000 )||(salary <15000 ))
    {
      paygrade = "A";
      tax = 0.1;
    }

    else if((salary >=15000)||(salary < 20000))
    {
      paygrade ="B";
      tax = 0.1;
    } 

    else if((salary >=20000)||(salary < 25000))
    {
      paygrade = "A";
      tax = 0.15;
    }
    else if((salary >=25000)||(salary < 30000))
      paygrade = "B";
      tax = 0.15;

    if((salary >=30000)||(salary< 35000))
    {
      paygrade = "A";
      tax = 0.2;
    }
    else if((salary >= 35000) ||(salary < 40000))
    {
      paygrade= "B";
      tax= 0.2;
    }
    else if((salary >=40000) || (salary < 45000))
    {
      paygrade = "A";
      tax = 0.25;
    }
    else if((salary >=45000)||(salary < 50000))
    {
      paygrade = "B";
      tax = 0.25;
    }
    else if((salary >=50000)||(salary <55000))
    {
      paygrade = "A";
      tax = 0.3;
    }

    else if((salary >=55000))
    {
      paygrade = "B";
      tax = 0.3;
    }


    emp.setsalary(salary);
    emp.setot(ot);
    emp.settax(tax);
   
      
   cout << "\n\n";
   cout.precision(2); //Sets the 2 decimal palces
   cout<<"Employee Name  	 :  " << name<<endl;
   cout<<"Basic Salary     :  " << "Php "<<fixed<< salary<<endl; 
   cout<<"Pay Grade	 :  " << paygrade <<endl;        
   cout<<"No. of OT Hours	 :  "  << ot<<endl;              
   cout<<"OT Pay	         :  " <<"Php "<<fixed<< emp.getotpay()<<endl;   
   cout<<"Gross Pay	 :  " << "Php "<<fixed<<emp.getgross()<<endl;   
   cout<<"Withholding Tax  :  " << "Php "<< emp.getwitholdingtax()<<endl;             
   cout<<"Net Pay		 :  "<< "Php "<<fixed<< emp.getnet()<<endl;     
   
    }while (ot < 1);
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

    } 