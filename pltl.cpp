#include <string.h>
#include <iostream>
using namespace std;

class Student{
   public:
    string name;
    int id;
    int *grades; //integer pointer
};

//Part 1
// Function prototype for inputting
void inputStudent(Student* stuPtr, int num);
// TODO: Function prototype for printing
void printStudentInfo(Student* stuPtr, int num);

// Main function
int main(){
  // Part 1
  // instantitating a Student object
  Student stu;
  // defining a pointer for the Student object
  Student *studentPtr = &stu;

  // NOTE: you could send studentPtr OR &stu
  // inputtung from the keyboard into the instance
  int desiredNum;
  cout << "How many grades would you like to enter?" << endl;
  cin >> desiredNum;
  inputStudent(&stu, desiredNum);
  // TODO: print the object
  printStudentInfo(studentPtr, desiredNum);
  

  return 0;
}
// end of main

//TODO: Function defintions//
// Part 1
void inputStudent(Student *stuPtr, int num){
  //takes in and sets student's name and age
  cout << endl << "Student's (first) name: ";
  cin >> stuPtr->name;
  cout << endl << "Student's ID: ";
  cin >> stuPtr->id;
  //takes in and sets student's grades
  stuPtr-> grades = new int[num];
  for(int i = 0; i < num; i++){
    cout << endl << "Grade " << i + 1 << ": ";
    cin >> stuPtr->grades[i];
  }
}

void printStudentInfo(Student* stuPtr, int num){
  cout << endl << "Student Info" << endl;
  cout << endl << "Name: " << stuPtr->name;
  cout << endl << "ID: " << stuPtr->id << endl;
  for(int i = 0; i < num; i++){
    cout << "Grade " << i + 1 << ": " << stuPtr->grades[i] << endl;
  }
};