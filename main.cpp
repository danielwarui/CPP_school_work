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
      float average = 0;
      vector<Student> ListOfAllStudents;
     // display the original size of vec
     
     cout << "vector size = " << grades.size() << endl;


     // display extended size of vec
      cout << endl;
      cout << "extended vector size = " << grades.size() << endl;


     // access 5 values from the vector
      cout << endl;
      cout << "print values initialised to zero from the float vector" << endl;
      
      showAllVectorElements(grades);

      // Adding 100 to each vector element
      cout << endl;
      cout << "print elements of vectors once 100 is added to each vector " << endl;
      cout << endl;
      showAllVectorElements(modElements(grades));

      //multiplying vector elements with 15
       cout << "print elements of vector once 15 is multiplied to each element " << endl;
      cout << endl;
      showAllVectorElements(modElementsMultiply(modElements(grades)));

      printVector(grades);

grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"emily","chepalungu",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Ashley", "Bailey",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mia", "Madelyn",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alexis", "Angela",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sarah", "Kennedy",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Grace", "Danielle",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Natalie", "Melissa",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Chloe", "Jacqueline",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alyssa", "Zoey",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Brianna", "Diana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Ella", "Catherine",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Anna", "Eva",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Taylor", "Briana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Lauren", "Sophie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Hailey", "Charlotte",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kayla", "Breanna",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Victoria", "Valerie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Addison", "Amy",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jasmine", "Naomi",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Savannah", "Lydia",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Julia", "Erin",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jessica", "Daniela",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Lily", "Shelby",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sydney", "Rylee",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Morgan", "Serenity",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Destiny", "Amber",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Katherine", "Ruby",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Lillian", "Peyton",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alexa", "Miranda",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Alexandra", "Sierra",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kaitlyn", "Ashlyn",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kaylee", "Kate",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Nevaeh", "Kathryn",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Brooke", "Ana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Makayla", "Skylar",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Maria", "Kylee",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Allison", "Alexandria",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Rachel", "Kendall",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Angelina", "Daisy",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gabriella", "Lilly",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jennifer", "Liliana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Avery", "Summer",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mackenzie", "Lucy",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Zoe", "Mikayla",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sofia", "Jazmin",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Riley", "Reagan",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Maya", "Christina",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kimberly", "Sadie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Andrea", "Angel",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Megan", "Margaret",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Katelyn", "Reese",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Faith", "Juliana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gabrielle", "Payton",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Trinity", "Alexia",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Evelyn", "Alicia",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Kylie", "Mckenzie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Brooklyn", "Alana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Leah", "Giselle",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Audrey", "Genesis",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Stephanie", "Cheyenne",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Madeline", "Alondra",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Sara", "Laura",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jocelyn", "Karen",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Nicole", "Jillian",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Haley", "Ellie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Arianna", "Mariana",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Paige", "Sienna",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Ariana", "Jordyn",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Vanessa", "Camila",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Michelle", "Adrianna",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mary", "Bella",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mariah", "Jasmin",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Amelia", "Bianca",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Isabelle", "Kiara",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Melanie", "Kelsey",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Claire", "Lindsey",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Isabel", "Elena",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jenna", "Nadia",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Caroline", "Maggie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Aaliyah", "Dakota",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Valeria", "Courtney",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jada", "Chelsea",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Aubrey", "Delaney",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Natalia", "Julianna",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Autumn", "Kyra",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Rebecca", "Sabrina",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jordan", "Makenzie",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gianna", "Hope",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jayla", "Cassidy",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Amanda", "Caitlyn",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Layla", "Crystal",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Mya", "Ariel",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gracie", "Jayden",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Marissa", "Kyla",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Molly", "Abby",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Adriana", "Angelica",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Katie", "Annabelle",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Leslie", "Karla",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Keira", "Caitlin",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Gabriela", "Tiffany",average);
grades = randomizingMarks(grades);
average = averageGrade(grades);
ListOfAllStudents = addStudenttoStudentList(ListOfAllStudents,grades,"Jade", "Veronica",average);
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


  /*



  */
  void showAllVectorElements(vector<float> vecToShow){
  int i;
    for(i = 0; i < vecToShow.size(); i++){
        
        cout << "value of vec [" << i << "] = " << vecToShow[i] << endl;
     }

  }


  /*

  ADD ALL VECTOR ELEMENTS WITH 100

  */
//method that picks a vector and adds 100 to each element
  vector<float> modElements(vector<float> vecToMod){
  int i;
  for(i = 0; i < vecToMod.size(); i++){
      vecToMod[i] += 100;
  }
  return vecToMod;
  }

  /*

  MULTIPLY ALL VECTOR ELEMENTS WITH 15

  */
  //method that picks a vector and multiply *15 to each element
  vector<float> modElementsMultiply(vector<float> vecToMod){
  int i;
  for(i = 0; i < vecToMod.size(); i++){
      vecToMod[i] *= 15;
  }
  return vecToMod;
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


  /*

  ADDING STUDENT TO THE MARK LIST

  */
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

  /*

PRINTS MARK LIST

  */
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

  /*

RANDOM GENERATOR FOR VECTOR OF TYPE FLOAT WITH 10 VALUES

  */
   vector<float> randomizingMarks(vector<float> vecToRandomize){
  int i;
  for(i = 0; i < vecToRandomize.size(); i++){
      vecToRandomize[i] = rand() % 100;
  }

  return vecToRandomize;
  }


  /*

  AVERAGE

  */
  float averageGrade(vector<float> vecToFindAverage){
    float sum = 0.0;
    
int i;

for(i = 0; i < vecToFindAverage.size(); i++){
  sum += vecToFindAverage[i];
} 
   return sum/vecToFindAverage.size();
  }





