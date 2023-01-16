//DESCRIPTION   : This file consists of function declarations used in various functions
// This is header file
#include <iostream>
#include <vector>
#include <string>
#include <list>

#define NAME 20
#define DEPT 10
#define CONTNO 15
#define PROID 3
#define HOUR 3
#define PNAME 20

using namespace std;

int employee();
int project();
int emp_salary_list();
int query();
int payreport();
int emp_with_3_proj_report();
int addemp();
int editemp();
int delemp();
int viewemp();
int addproj();
int editproj();
int delproj();
int viewproj();
int view_emp_record();

typedef struct employee_details
{
	int employee_id;
	char employee_name[NAME];
	char department[DEPT];
	double basic_salary;
	char contact_number[CONTNO];
	int project_id[PROID];
	int no_hrs[HOUR];
	int pr_count;
	double incentive;
	double epfdeduct;
	double income_deduct;
	double total_salary;
}empdetail;

// CLASS NAME  : EMPLOYEE
// DESCRIPTION : This is the base class and consists of various variable
               // initializations used in the employee function
              

class EMPLOYEE
{
	
	public:
		EMPLOYEE()
		{
			int emp_id=100;
			double salary= 0;
		}
		void getdata();
	protected:
		int emp_id;
		char emp_name[NAME];
		char dept[DEPT];
		double salary;
		char contact[CONTNO];
};

 // CLASS NAME  : EMPLOYEE_PROJECT
 
 // DESCRIPTION : This is the derived class and inheriting from the base class EMPLOYEE
               // and  consists of various variable initializations used in the project function		 

class EMPLOYEE_PROJECT:public EMPLOYEE
{

	public:
		EMPLOYEE_PROJECT()
		{
			project_counter=0;
		}
	protected:
		int pr_no_prid[PROID];
		int pr_no_hrs[HOUR];
		int project_counter;
};

// CLASS NAME  : SALARY
 
 // DESCRIPTION : This is the multi level derived class and inheriting from the  class EMPLOYEE_PROJECT 
               // and  consists of various variable initializations used in the employee function
		 

class SALARY: public EMPLOYEE_PROJECT
{
	
	public:
		SALARY()
		{
			double epf=0;
			double income_tax=0;
			double fi_salary=0;
		}
		void calc_fi_salary();
		void add_employee();
		void view1();
		void view_employee();
		void editdata();
		void deldata();
		void salary_view();
		void view_emp_record();
		void emp_list_with_3_projects();
		void employee_file_to_list();
		void list_to_employee_file();
	protected:
		double pr_bonus;
		double epf;
		double income_tax;
		double fi_salary;
};


 // CLASS NAME  : PROJECT

 // DESCRIPTION : This is the base class and consists of various variable
               //  initializations used in the project function
 
typedef struct temporary data
{
	char project_name[PNAME];
	int t_members;
	int project_id;
}tmp;

class PROJECT
{

	public:
		int team_mem;
		int pr_id;
		void getdata();
		void view();
		void edit();
		void del_project();
		void project_query();
		void project_file_to_list();
		void list_to_project_file();
	protected:
		char pr_name[PNAME];
};

list <SALARY> empsal_list;// Salary list Declaration
SALARY obj;
list <PROJECT> pr_list;
PROJECT pr_obj;

#endif
