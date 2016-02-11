#include <iostream>
#include <vector
#include <ModVector.h>

using namespace std;
int max(int num1, int num2);
void showAllVectorElements(vector<int> vec);
void printVector(vector<int> vec);
vector<int> modElements(vector<int> vecToMod);
vector<int> modElementsMultiply(vector<int> vecToMod);
vector<int> addVectors(vector<int> a, vector<int> b);
ModVector myClass;

int main()
{
   // create a vector to store int
   int i;
vector<int> vec;
   // display the original size of vec
   cout << "vector size = " << vec.size() << endl;

   // push 5 values into the vector
   for(i = 0; i < 9; i++){
      vec.push_back(0);
   }

   // display extended size of vec
   cout << "extended vector size = " << vec.size() << endl;


   // access 5 values from the vector
    showAllVectorElements(vec);


    vec = modElements(vec);

    showAllVectorElements(vec);

    showAllVectorElements(modElementsMultiply(modElements(vec)));

    printVector(vec);
   // use iterator to access the values
   /*vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }*/

   return 0;
}
//method that picks a vector and adds 100 to each element
vector<int> modElements(vector<int> vecToMod){
int i;
for(i = 0; i < vecToMod.size(); i++){
    vecToMod[i] += 100;
}
return vecToMod;
}
//method that picks a vector and multiply *15 to each element
vector<int> modElementsMultiply(vector<int> vecToMod){
int i;
for(i = 0; i < vecToMod.size(); i++){
    vecToMod[i] *= 15;
}
return vecToMod;
}

vector<int> addVectors(vector<int> a, vector<int> b){


}

void showAllVectorElements(vector<int> vecToShow){
int i;
  for(i = 0; i < vecToShow.size(); i++){
      cout << "value of vec [" << i << "] = " << vecToShow[i] << endl;
   }

}


void  printVector(vector<int> vecToShow){
int i;
        cout << "(";
        cout << vecToShow[0] ;

  for(i = 1; i < vecToShow.size(); i++){
      cout << ", " << vecToShow[i] ;
   }
   cout << " )";

}



