#pragma once
#include <iostream>
#include "ClsDisplayMessage.h"
using namespace std;
struct Student_Grade
{
  int StudentId = 0;
  float Grade = 0;
};
class ClsCourse
{
private:
  int Id = 0;
  string Name = "";
  string InstructorName;
  Student_Grade Student_grade[100];
#pragma region Methods
  void UpdateArrayIndexes(int startIndex, ClsCourse Courses[100])
  {
    for (int i = startIndex + 1; i < 100; i++)
    {
      if (Courses[i].Name == "")
      {
        ClsCourse emptyCourse;
        Courses[i - 1] = emptyCourse;
        break;
      }
      Courses[i - 1] = Courses[i];
    }
  }
#pragma endregion
public:
  int GetId()
  {
    return Id;
  }
  void SetId(int id)
  {
    Id = id;
  }

  string GetName()
  {
    return Name;
  }
  void SetName(string name)
  {
    Name = name;
  }

  string GetInstructorName()
  {
    return InstructorName;
  }
  void SetInstructorName(string instructorName)
  {
    InstructorName = instructorName;
  }

  Student_Grade GetStudent_grade(int i)
  {
    return Student_grade[i];
  }

  void SetStudent_grade(int studentId, float studentGrade)
  {
    for (int i = 0; i < 100; i++)
    {
      if (Student_grade[i].StudentId == 0)
      {
        Student_grade[i].StudentId = studentId;
        Student_grade[i].Grade = studentGrade;
        break;
      }
    }
  }
#pragma region Business Logic
  int FindIndex(int id, ClsCourse Courses[100])
  {
    for (int i = 0; i < 100; i++)
    {
      if (id == Courses[i].Id)
        return i;
      if (Courses[i].Name == "")
        break;
    }
    return -1;
  }

  void Add(string name, ClsCourse Courses[100])
  {
    int newId = 1;
    for (int i = 0; i < 100; i++)
    {
      if (Courses[i].Name == "")
      {
        if (i != 0)
          newId = Courses[i - 1].Id + 1;
        Courses[i].Name = name;
        Courses[i].Id = newId;
        return;
      }
    }
  }
  void Edit(int courseId, string name, ClsCourse Courses[100])
  {
    int index = FindIndex(courseId, Courses);
    if (index != -1)
    {
      Courses[index].Name = name;
    }
  }
  void Delete(int courseId, ClsCourse Courses[100])
  {
    int index = FindIndex(courseId, Courses);
    if (index != -1)
    {
      ClsCourse emptyCourse;
      Courses[index] = emptyCourse;
      UpdateArrayIndexes(index, Courses);
    }
  }
  void DisplayCourses(ClsCourse Courses[100])
  {
    ClsDisplayMessage::WriteLine();
    for (int i = 0; i < 100; i++)
    {
      if (Courses[i].Name == "")
        break;

      ClsDisplayMessage::DisplayMessage("Course Id: " + to_string(Courses[i].Id) + " Course name: " + Courses[i].Name);
    }
    ClsDisplayMessage::DisplayMessage("Courses Ended");
    ClsDisplayMessage::WriteLine();
  }
#pragma endregion
};