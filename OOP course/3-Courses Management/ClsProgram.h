#pragma once
#include <iostream>
#include "ClsStudent.h"
#include "ClsCourse.h"
#include "ClsDisplayMessage.h"
using namespace std;
class ClsProgram
{
public:
#pragma region Global Arrays
  ClsStudent Students[100];
  ClsCourse Courses[100];
#pragma endregion

#pragma region Methods
  void StartProgram()
  {
    int nUserChoice = 0;
    while (nUserChoice < 3)
    {
      ClsDisplayMessage::DisplayMainMenu();
      cin >> nUserChoice;
      switch (nUserChoice)
      {
      case 1:
        Student();
        break;
      case 2:
        Course();
        break;
      case 3:
        return;
      default:
        break;
      }
    }
  }
  void Student()
  {
    ClsDisplayMessage::DisplayStudentMenu();
    int nUserChoice;
    cin >> nUserChoice;
    ClsStudent student;
    ClsCourse course;
    string name;
    string nAnyKey = "";
    int studentId;
    int courseId;
    switch (nUserChoice)
    {
    case 1: // Display
      student.DisplayStudents(Students);
      ClsDisplayMessage::DisplayMessage("for home page press any key");
      cin >> nAnyKey;
      break;
    case 2: // Add
      cout << "Please enter student name\n";
      cin >> name;
      student.Add(name, Students);
      break;
    case 3: // Edit
      cout << "Please enter student id\n";
      cin >> studentId;
      cout << "Please enter student name\n";
      cin >> name;
      student.Edit(studentId, name, Students);
      break;
    case 4: // Delete
      cout << "Please enter student id\n";
      cin >> studentId;
      student.Delete(studentId, Students);
      break;
    case 5: // Enroll student to a course
      student.DisplayStudents(Students);
      cout << "Choose a student from the list above and enter his/her ID\n";
      cin >> studentId;
      course.DisplayCourses(Courses);
      cout << "Choose a course from the list above and enter its ID\n";
      cin >> courseId;
      Enroll(studentId, courseId, 100); // Grade is hard coded for now
      break;
    case 6: // Search for a student and display his/her courses
      cout << "Please enter student id\n";
      cin >> studentId;
      SearchStudentId(studentId);
      break;
    default:
      break;
    }
  }
  void Course()
  {
    ClsDisplayMessage::DisplayCourseMenu();
    int nUserChoice;
    cin >> nUserChoice;
    ClsCourse Course;
    string name;
    string nAnyKey = "";
    int courseId;
    switch (nUserChoice)
    {
    case 1: // Display
      Course.DisplayCourses(Courses);
      ClsDisplayMessage::DisplayMessage("for main menu press any key\n");
      cin >> nAnyKey;
      break;
    case 2: // Add
      cout << "Please enter course name\n";
      cin >> name;
      Course.Add(name, Courses);
      break;
    case 3: // Edit
      cout << "Please enter course id\n";
      cin >> courseId;
      cout << "Please enter course name\n";
      cin >> name;
      Course.Edit(courseId, name, Courses);
      break;
    case 4: // Delete
      cout << "Please enter course id\n";
      cin >> courseId;
      Course.Delete(courseId, Courses);
      break;
    case 5: // Search for a course and Display enrolled students
      cout << "Please enter course id\n";
      cin >> courseId;
      SearchCourseId(courseId);
    default:
      break;
    }
  }

  // TODO : Done
  void Enroll(int studentId, int courseId, float Grade)
  {
    ClsStudent student;
    ClsCourse course;
    int student_i = student.FindIndex(studentId, Students);
    int course_i = course.FindIndex(courseId, Courses);

    Students[student_i].SetCourse_grade(courseId, Grade);
    Courses[course_i].SetStudent_grade(studentId, Grade);
  }
  void SearchStudentId(int studentId)
  {
    // find student
    ClsStudent student;
    int student_i = student.FindIndex(studentId, Students);
    if (student_i == -1)
      return;
    // ask and display his/her courses
    string anyKey = "";
    cout << "Enter [Y/y] to show courses and grade of " << Students[student_i].GetName() << endl;
    cin >> anyKey;
    if (tolower(anyKey[0]) == 'y')
    {
      ClsCourse course;
      int index;
      for (int i = 0; i < 100; i++)
      {
        Course_Grade Course_grade = Students[student_i].GetCourse_grade(i);
        if (Course_grade.Grade == 0)
          continue;;
        index = course.FindIndex(Course_grade.CourseId, Courses);
        if (Courses[index].GetName() == "")
          continue;
        cout << "Course: " << Courses[index].GetName() << " Grade: " << Course_grade.Grade << endl;
      }
    }
  }
  void SearchCourseId(int courseId)
  {
    // find course
    ClsCourse course;
    int course_i = course.FindIndex(courseId, Courses);
    if (course_i == -1)
      return;
    // ask and display its students
    string anyKey = "";
    cout << "Enter [Y/y] to show students and grade of " << Courses[course_i].GetName() << endl;
    cin >> anyKey;
    if (tolower(anyKey[0]) == 'y')
    {
      ClsStudent student;
      int index;
      for (int i = 0; i < 100; i++)
      {
        Student_Grade Student_grade = Courses[course_i].GetStudent_grade(i);
        if (Student_grade.Grade == 0)
          continue;
        index = student.FindIndex(Student_grade.StudentId, Students);
        if (Students[index].GetName() == "")
          continue;
        cout << "Student: " << Students[index].GetName() << " Grade: " << Student_grade.Grade << endl;
      }
    }
  }
#pragma endregion
};