#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>


using namespace std;

struct Employee
{
	int empId;
	string name;
	double basicSalary;
	double pf;
	double hlthIns;
	string email; 

};

void readFile(vector <Employee>& v_emp);
void printMenu();
void doTask(vector <Employee>& v_emp, int option);

void readFile(vector <Employee>& v_emp)
{
	ifstream fin ("doc.txt");
	if (!fin)
	{
		cout << "Unable to open database file doc.txt" <<endl
			<< "Mkae sure that the file exists" << endl;
		exit(1);
	}
	string line;
	int recNo = 0 ;
	while(!fin.eof())
	{
		std::getline(fin, line);
		recNo ++;
	//	cout << recNo << "-" << line << endl;
		istringstream iss(line);

		string strEmpId;
		string strName;
		string strBasicSalary;
		string strPf;
		string strhlthIns;
		string strEmail;

		std::getline(iss, strEmpId, ',');
		std::getline(iss, strName, ',');
		std::getline(iss, strBasicSalary, ',');
		std::getline(iss, strPf, ',');
		std::getline(iss, strhlthIns, ',');
		std::getline(iss, strEmail, ',');

		Employee temp;

		temp.empId = atoi(strEmpId.c_str());
		temp.name = strName;
		temp.basicSalary = atof(strBasicSalary.c_str());
		temp.pf = atof(strPf.c_str());
		temp.hlthIns = atof(strhlthIns.c_str());
		temp.email = strEmail;

		v_emp.push_back(temp);

	}

	fin.close();
}

void doTask(vector <Employee>& v_emp, int option)
{
	switch(option)
	{
		case 1: cout << "add employee chosen" << endl;
			break;
		case 2: cout << "print employee chosen" << endl;
			break;
		case 3: cout << "search employee chosen" << endl;
			break;
		case 4: cout << "delete employee chosen" << endl;
			break;
		case 5: cout << "save employee chose" << endl;
			break;
		default:
			cout << "Invalid Option, OPtion are from  1 - 6 only:" << endl;

	}
}

void printMenu()
{
	cout << "1. Add Employee" << endl;
	cout << "2. Print Employee Report" << endl;
	cout << "3. Search Employee" << endl;
	cout << "4. Delete Employee" << endl;
	cout << "5. Save" << endl;
	cout << "6. Exit" << endl;
}

int main()
{
	vector <Employee> v_emp;
	readFile(v_emp);
	//cout << "Total " << v_emp.size() << " records from the file " <<endl;
	printMenu();

	bool quit = false;
	while(!quit)
	{
		cout << "Input your option" <<endl;
		int option;
		cin >> option;
		if (option == 6)
		{
			cout << "\nExiting .....\n\tbye!" << endl;
			quit = true;
		}
		else
		{
			doTask(v_emp, option);
		}
	}
	return 0;
}
