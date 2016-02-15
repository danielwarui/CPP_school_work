  #include <iostream>
  #include <vector>
  #include <time.h> 

  using namespace std;

/*
Author                Daniel Warui
Registration Number   P15/1565/2015
Date                  9 - 15 th February 2016
Object oriented programming 
Prof:                 Oboko Robert
*/
  void showAllVectorElements(vector<float> vec);
  //void printVector(vector<float> vec);
  
  vector<float> modElements(vector<float> vecToMod);
  vector<float> modElementsMultiply(vector<float> vecToMod);
  vector<float> addVectors(vector<float> a, vector<float> b);
  void printVector(vector<float> vecToShow);
  vector<float> randomizingMarks(vector<float> vecToRandomize);
  float averageGrade(vector<float> vecToFindAverage);

//Object Student
  class Student{
  private:
  string RegNo, Surname, Othernames;
float average;
  vector<float> marks;
  public:
      string getRegNo() { return RegNo; }
      void setRegNo(string regNumber) { RegNo = regNumber; }

       string getSurname() { return Surname; }
      void setSurname(string surname) { Surname = surname; }

       string getOthernames() { return Othernames; }
      void setOthernames(string othernames) { Othernames = othernames; }

       float getAverage() { return average; }
      void setAverage(float AverToSet) { average = AverToSet; }

      vector<float> getMarks() { return marks; }
      void setMarks(vector<float> inputMarks){ marks = inputMarks;}

  };
  vector<Student> addStudenttoStudentList(vector<Student> mylist, vector<float> studentMarks, string surname, string othernames, float average);
  void printMarksScreen(vector<Student> studentList);

  int main()
  {
     // create a vector to store int
     int i;
      vector<float> grades(10, 0);
      vector<Student> ListOfAllStudents;
     // display the original size of vec
     cout << "vector size = " << grades.size() << endl;

     // push 5 values into the vector
     /*for(i = 0; i < 9; i++){
        vec.push_back(0);
     }*/

     // display extended size of vec
     cout << "extended vector size = " << grades.size() << endl;


     // access 5 values from the vector
      showAllVectorElements(grades);


    //  showAllVectorElements(vec);

    // showAllVectorElements(modElementsMultiply(modElements(vec)));
    // printVector(vec);

      grades = randomizingMarks(grades);
 ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"emily","chepalungu",averageGrade(grades));
    grades = randomizingMarks(grades);
      ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Ashley", "Bailey",averageGrade(grades));
      grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mia", "Madelyn",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alexis", "Angela",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sarah", "Kennedy",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Grace", "Danielle",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Natalie", "Melissa",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Chloe", "Jacqueline",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alyssa", "Zoey",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Brianna", "Diana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Ella", "Catherine",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Anna", "Eva",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Taylor", "Briana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Lauren", "Sophie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Hailey", "Charlotte",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kayla", "Breanna",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Victoria", "Valerie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Addison", "Amy",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jasmine", "Naomi",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Savannah", "Lydia",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Julia", "Erin",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jessica", "Daniela",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Lily", "Shelby",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sydney", "Rylee",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Morgan", "Serenity",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Destiny", "Amber",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Katherine", "Ruby",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Lillian", "Peyton",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alexa", "Miranda",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alexandra", "Sierra",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kaitlyn", "Ashlyn",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kaylee", "Kate",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Nevaeh", "Kathryn",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Brooke", "Ana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Makayla", "Skylar",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Maria", "Kylee",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Allison", "Alexandria",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Rachel", "Kendall",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Angelina", "Daisy",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gabriella", "Lilly",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jennifer", "Liliana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Avery", "Summer",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mackenzie", "Lucy",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Zoe", "Mikayla",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sofia", "Jazmin",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Riley", "Reagan",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Maya", "Christina",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kimberly", "Sadie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Andrea", "Angel",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Megan", "Margaret",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Katelyn", "Reese",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Faith", "Juliana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gabrielle", "Payton",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Trinity", "Alexia",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Evelyn", "Alicia",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kylie", "Mckenzie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Brooklyn", "Alana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Leah", "Giselle",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Audrey", "Genesis",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Stephanie", "Cheyenne",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Madeline", "Alondra",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sara", "Laura",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jocelyn", "Karen",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Nicole", "Jillian",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Haley", "Ellie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Arianna", "Mariana",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Paige", "Sienna",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Ariana", "Jordyn",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Vanessa", "Camila",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Michelle", "Adrianna",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mary", "Bella",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mariah", "Jasmin",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Amelia", "Bianca",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Isabelle", "Kiara",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Melanie", "Kelsey",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Claire", "Lindsey",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Isabel", "Elena",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jenna", "Nadia",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Caroline", "Maggie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Aaliyah", "Dakota",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Valeria", "Courtney",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jada", "Chelsea",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Aubrey", "Delaney",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Natalia", "Julianna",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Autumn", "Kyra",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Rebecca", "Sabrina",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jordan", "Makenzie",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gianna", "Hope",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jayla", "Cassidy",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Amanda", "Caitlyn",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Layla", "Crystal",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mya", "Ariel",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gracie", "Jayden",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Marissa", "Kyla",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Molly", "Abby",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Adriana", "Angelica",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Katie", "Annabelle",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Leslie", "Karla",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Keira", "Caitlin",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gabriela", "Tiffany",averageGrade(grades));
grades = randomizingMarks(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jade", "Veronica",averageGrade(grades));
grades = randomizingMarks(grades);

      printMarksScreen(ListOfAllStudents);


    //  printMarksScreen();

     // use iterator to access the values
     /*vector<float>::iterator v = vec.begin();
     while( v != vec.end()) {
        cout << "value of v = " << *v << endl;
        v++;
     }*/

     return 0;
  }
  //method that picks a vector and adds 100 to each element
  /*vector<float> modElements(vector<float> vecToMod){
  int i;
  for(i = 0; i < vecToMod.size(); i++){
      vecToMod[i] += 100;
  }
  return vecToMod;
  }*/


  //method that picks a vector and multiply *15 to each element
  /*vector<float> modElementsMultiply(vector<float> vecToMod){
  int i;
  for(i = 0; i < vecToMod.size(); i++){
      vecToMod[i] *= 15;
  }
  return vecToMod;
  }*/

// adding two vectors
  vector<float> addVectors(vector<float> a, vector<float> b){
  vector<float> result(10,0);
  int i;

  for(i = 0; i < 10; i++){
  result[i] = a[i] + b [i];
  }

  return result;
  }


  //method that picks a vector and adds 100 to each element
  vector<float> modElements(vector<float> vecToMod){
  int i;
  for(i = 0; i < vecToMod.size(); i++){
      vecToMod[i] += 100;
  }
  return vecToMod;
  }
  //method that picks a vector and multiply *15 to each element
  vector<float> modElementsMultiply(vector<float> vecToMod){
  int i;
  for(i = 0; i < vecToMod.size(); i++){
      vecToMod[i] *= 15;
  }
  return vecToMod;
  }
  void showAllVectorElements(vector<float> vecToShow){
  int i;
    for(i = 0; i < vecToShow.size(); i++){
        cout << "value of vec [" << i << "] = " << vecToShow[i] << endl;
     }

  }


  void printVector(vector<float> vecToShow){
  int i;
          cout << "(";
          cout << vecToShow[0] ;

    for(i = 1; i < vecToShow.size(); i++){
        cout << ", " << vecToShow[i] ;
     }
     cout << " )";

  }


  vector<Student> addStudenttoStudentList(vector<Student> mylist, vector<float> studentMarks, string surname, string othernames, float average){
  
  Student student;
  studentMarks = randomizingMarks(studentMarks);
  student.setMarks(studentMarks);
  student.setSurname(surname);
  student.setOthernames(othernames);
  student.setAverage(average);
  // student.setRegNo("153");

  mylist.push_back(student);

  return mylist;
  }

  void printMarksScreen(vector<Student> studentList){
int i;
   cout << endl << "Surname" << "  Othernames" <<  "  Marks"  << endl; 

for(i = 0; i < studentList.size() ; i++){

    cout << endl << studentList[i].getSurname() << "  " << studentList[i].getOthernames();
    printVector(studentList[i].getMarks());
    cout << "  "<< studentList[i].getAverage();
    cout << endl;

    //<< " ," student. "<<"vector<float> marks" << "averagre" << "grade" << endl;
  }
  }
   vector<float> randomizingMarks(vector<float> vecToRandomize){
  int i;
  for(i = 0; i < vecToRandomize.size(); i++){
      vecToRandomize[i] = rand() % 100;
  }

  return vecToRandomize;
  }

  float averageGrade(vector<float> vecToFindAverage){
    float sum = 0.0;
    float average = 0.0;
int i;
for(i = 0; i < vecToFindAverage.size(); i++){
sum += vecToFindAverage[i];
} 
   average = sum/ 10;
 
    return average;
  }





