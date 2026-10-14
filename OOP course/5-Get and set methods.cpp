#include <iostream>
using namespace std;
class Employee
{
private:
  float Allowances;
  float Deductions;
  string EmployeeName;
  float mainSalary;
public:
  // Get and Set for Allowances
  void SetAllowances(float allowance)
  {
    Allowances += allowance;
  }
  float GetAllowances()
  {
    return Allowances + 200;
  }
  // Get and Set for Deduction
  void SetDeductions(float deductions)
  {
    Deductions += deductions;
  }
  float GetDeductions()
  {
    if (Deductions - 50 < 0)
      return 0;
    else
      return Deductions - 50;
  }
  // Get and Set for EmployeeName
  void SetEmployeeName(string name)
  {
    EmployeeName = name;
  }
  string GetEmployeeName()
  {
    return EmployeeName;
  }
  // Get and Set for mainSalary
  void SetMainSalary(float newSalary)
  {
    if (newSalary == 0 || newSalary > 10000)
      return;
    mainSalary = newSalary;
  }
  float GetMainSalary()
  {
    return mainSalary;
  }

  float CalculateSalary()
  {
    return (mainSalary + GetAllowances()) - GetDeductions();
  }
};

int main()
{
  cout << "Private and Public in classes\n";
  Employee employee[2];
  string names[2] = {"Fady", "Shady"};
  for (int i = 0; i < 2; i++)
  {
    employee[i].SetEmployeeName(names[i]);
    employee[i].SetMainSalary((i + 1) * 1000);
    employee[i].SetAllowances(200);
    employee[i].SetDeductions(50);
    cout << employee[i].GetEmployeeName() << endl;
    cout << "net salary: " << employee[i].CalculateSalary() << endl;
    cout << "**********\n";
  }
}