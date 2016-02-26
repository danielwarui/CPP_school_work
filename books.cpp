#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


class Books{
protected:
    string author;
    float price;
    string title;
    string publisher;
    int stockPosition;
public:
    // void storeBook(Books book);
    
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
    
    void storeBook(Books book){
        ofstream write;
        write.open("qwertyuiop.txt", ios::app);
        if(!write){
            cerr << "error while trying to write to file!" << endl;
        }
        // write << book.getAuthor() << endl;
    }
    vector<Books> sampleBooks(){
        //we want to create ten books
        string authorList[] = {"Jerry Joel","Derrick Inyangala", "Paul Mwai","Jane Ngoiri","Nimrod Taabu", "Toils Makabu", "Johnstone Kamau","Barbara Kimenye", "Ellen Sue", "Linda Mutende"};
        
        vector<Books> bookList;
        
        Books * books = new Books[10];
        
        books[0].bookSetter(authorList[0],"first author","first Publisher",1.0,32);
        books[1].bookSetter(authorList[1],"second author","second Publisher",1.0,32);
        books[2].bookSetter(authorList[2],"third author","third Publisher",1.0,32);
        books[3].bookSetter(authorList[3],"fourth author","fourth Publisher",1.0,32);
        books[4].bookSetter(authorList[4],"fifth author","fifth Publisher",1.0,32);
        books[5].bookSetter(authorList[5],"sixth author","sixth Publisher",1.0,32);
        books[6].bookSetter(authorList[6],"seven author","seven Publisher",1.0,32);
        books[7].bookSetter(authorList[7],"eightth author","eightth Publisher",1.0,32);
        books[8].bookSetter(authorList[8],"ninth author","ninth Publisher",1.0,32);
        books[9].bookSetter(authorList[9],"tenth author","tenth Publisher",1.0,32);
        
        int i;
        for (i = 0; i < 10; i++){
            bookList.push_back(books[i]);
            cout << books[i].getTitle() << endl;
        }
        return bookList;
        
    }
    
    
    
};
string findBook(vector<Books> listBooks, string title);

int main(){
    string myTake = "y";
    string authorSearch;
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
        cout << "Enter (1) for search and (2) to update specific book" << endl << endl;
        cin >> programState;
        switch(programState){
            case 1:
                cout << programState << endl;
                cout << "Please enter the author of the book you want to search for..." << endl;
                cin >>  authorSearch;
                authorSearch = findBook(listOfBooks, authorSearch);
                cout << authorSearch;
                break;
                
            case 2:
                cout << programState << endl;
                break;
        }
        
        
        cout << "press (y) if you want to continue." << endl << " Press any other key to exit program" << endl;
        cin >> myTake;
        
    }
    
    
    
};

string findBook(vector<Books> listBooks,string author){
    Books specificBookSearched;
    string test;
    int i;
    
    for(i = 0; i < listBooks.size(); i++){
        if(listBooks[i].getAuthor().find(author) != string::npos){
            specificBookSearched = listBooks[i];
            test = specificBookSearched.getTitle();
            break;
        }
        else{
            test = "book not found";
        }
    }
    
    
    
    return test;
    
}

