#include <iostream>
#include <fstream>
#include <vector>
#include "classRow.h"
#include "libcsv-3.0.3/csv.h"
using namespace std;


class Books{
protected:
    string author;
    float price;
    string title;
    string publisher;
    int stockPosition;
public:
    //  void storeBook(Books book);
    // void readFile(string path);
    /*  void bookSetter();
     void stockSetter();
     void priceSetter();
     string getAuthor();
     float getPrice();
     string getTitle();
     string getPublisher();
     int getStockPosition();*/
    Books(string Author, string Title, string Publisher, float Price, int StockPosition){
        author = Author;
        title = Title;
        publisher = Publisher;
        price = Price;
        stockPosition = StockPosition;
        
    }
    Books(){
        
        
    }
    
    string getAuthor(){ return author;}
    string getTitle(){ return title;}
    string getPublisher(){ return publisher;}
    float getPrice(){ return price;}
    int getStockPosition(){ return stockPosition;}

    void buyBook(int quantity){
        stockPosition -= quantity;
    } 
    
    void bookSetter(string Author, string Title, string Publisher, float Price, int StockPosition){
        author = Author;
        title = Title;
        publisher = Publisher;
        price = Price;
        stockPosition = StockPosition;
        
    }
    void stockSetter(int StockPosition){
        stockPosition = StockPosition;
    }
    void priceSetter(float Price){
        price = Price;
    }
    void readFile(string path){
        vector<Books> bookList;
        
        Books * books = new Books[10];
        ifstream file(path);
        string value,x;
         while ( file.good() )
         {
         // seperate with comma delimiter
         getline ( file, value, ',' );
         cout << value << endl; 
         }

        
    }
    void storeBook(Books book){
        ofstream write;
        write.open("qwertyuiop.txt", ios::app);
        if(!write){
            cerr << "error while trying to write to file!" << endl;
        }
        // write << book.getAuthor() << endl;
    }
    vector<Books> sampleBooks(){
        //string Author, string Title, string Publisher, float Price, int StockPosition
        //we want to create ten books
        string authorList[] = {"Jerry Joel","Derrick Inyangala", "Paul Mwai","Jane Ngoiri","Nimrod Taabu", "Toils Makabu", "Johnstone Kamau","Barbara Kimenye", "Ellen Sue", "Linda Mutende"};
        string publisherList[] = {"Pearson","Penguin","McGraw","Wiley","Houghton","China","Egmont","Kadokawa","Groupe","Mondadori"};
        string titleList[] = {"To Kill a Mockingbird","Harry Potter and the Sorcerer's Stone" ,"1984","Pride and Prejudice","The Diary of a Young Girl","Animal Farm","The Hobbit","The Little Prince","The Great Gatsby","The Catcher in the Rye"};
        float priceList[] = {99.2,43,54.00,34.5,32.1,434.00,499.99,54,9.99,10.99};
        int stockPosition[] = {43,456,76,23,86,23,76,23,90,10};

        vector<Books> bookList;
        
        Books * books = new Books[10];
       int j;
       for (j = 0; j < 10; j++)
        books[j].bookSetter(authorList[j],titleList[j],publisherList[j],priceList[j],stockPosition[j]);
       
        
        int i;
        for (i = 0; i < 10; i++){
            bookList.push_back(books[i]);
        }
        return bookList;
        
    }
    
    
    
};
string findBook(vector<Books> listBooks, string title, string author);
int main(){
    string myTake = "y";
    string authorSearch, titleSearch;
    int programState;
    vector<Books> listOfBooks;
    Books exampleBooks;
    listOfBooks = exampleBooks.sampleBooks();
    int i;
    for(i = 0; i < 10; i++){
        exampleBooks.storeBook(listOfBooks[i]);
        cout << "hello world" << endl;
    }
    
    // Create a control system to start the book shop management system
    
    // cout << "Please press 1 continue and 0 to cancel";
    // give options the user can pick to run checks on the system
    
    // features include search ... specific book and update price
    cout << "Use the following controls to navigate through the system" << endl;
    cout << "1. SEARCH FOR BOOK >> 1" << endl ;
    cout << "2. UPDATE PRICE FOR SPECIFIC BOOK >> 2 " << endl;
    
    while(myTake == "y"){
        cout << "Enter (1) for search and (2) to update specific book price" << endl << endl;
        cin >> programState;
        switch(programState){
            case 1:
                cout << programState << endl;
                cout << "Please enter the author and the title for the book you want to search for..." << endl;
                cin >> authorSearch;
                cin >> titleSearch;
                authorSearch = findBook(listOfBooks, titleSearch, authorSearch);
                cout << authorSearch;
                break;
                
            case 2:
            int price;
            cout << "Enter the book you want to update and its update price";
            cin >> titleSearch;
            cin >> price;

             cout << "thank you your book has been updated";
                break;
        }
        
        
        cout << "press (y) if you want to continue." << endl << " Press any other key to exit program" << endl;
        cin >> myTake;
        
    }
    
    
    
};


string findBook(vector<Books> listBooks, string title,string author){
    Books specificBookSearched;
    string test;
    int i;
    
    for(i = 0; i < listBooks.size(); i++){
        if(listBooks[i].getAuthor().find(author) != string::npos){
            specificBookSearched = listBooks[i];
            test = specificBookSearched.getTitle() + "  " + specificBookSearched.getAuthor() + "  " + specificBookSearched.getPublisher();
            break;
        }
        else{
            test = "book not found";
        }
    }
    
    
    
    return test;
    
}

