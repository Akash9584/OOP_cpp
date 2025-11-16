#include<iostream>
using namespace std;
class Library{
    public:
        string Library_Name;
        string Book_Title;
        string Book_Author;
        string Issued_Book;
        string Member_ID;
        string Member_Name;
        int Available_copies;
    Library (){

    }
    Library (string t){
        Book_Title = t;
    }
    Library (string A, string I_B){
        Book_Author = A;
        Issued_Book = I_B;
    }    
    Library (string M_I, string M_N, int c){
        Member_ID = M_I;
        Member_Name = M_N;
        Available_copies = c;
    }
    Library(string LB,string BT,string BA,string IB,string MI,string MN, int AC){
        Library_Name = LB;
        Book_Title = BT;
        Book_Author  = BA;
        Issued_Book = IB;
        Member_ID = MI;
        Member_Name = MN;
        Available_copies = AC;
    }
};
void print(Library Book){
    cout<<"Library Name: "<<Book.Library_Name<<endl;
    cout<<"Book Title: "<<Book.Book_Title<<endl;
    cout<<"Book Author: "<<Book.Book_Author<<endl;
    cout<<"Issued Book: "<<Book.Issued_Book<<endl;
    cout<<"Member ID: "<<Book.Member_ID<<endl;
    cout<<"Member's Name: "<<Book.Member_Name<<endl;
    cout<<"Availables books copies: "<<Book.Available_copies<<endl<<endl;

}
int main(){
    Library Book1("RD shrama Maths book");
    Book1.Library_Name = "TIT Central Library";
    Book1.Book_Author = "RD shrama";
    Book1.Issued_Book = "Maths";
    Book1.Member_ID = "2415AL5421";
    Book1.Member_Name = "Akash Kushwaha";
    Book1.Available_copies = 542;
    print(Book1);

    Library Book2("RD Shrama chemistry", "Chemistry");
    Book2.Library_Name = "OCT Centeral Library ";
    Book2.Book_Title = "Chemistry Book";
    Book2.Member_ID = "215788AL3264";
    Book2.Member_Name = "Ankit Tiwari";
    Book2.Available_copies = 545;
    print(Book2);

    Library Book3 ("57946AL541", "Akash diwedi",568);
    Book3.Library_Name = "LNCT Central Library";
    Book3.Book_Title = "Navbodh Physics";
    Book3.Book_Author = "Navbodh publication";
    Book3.Issued_Book = "Physics ";
    print(Book3);

    Library Book4("TIT-E Central LIbrary", "RD Shrama M-2", "RD Shrama", "M-2", "124578AL657", "Gaurav Kushwaha",451);
    print(Book4);
    Library Book5 = Book4;          // Ise ye bhi likha ja skata hai --- Book5(Book4);
    Book5.Library_Name = "TIT Science";
    print(Book5);
    return 0;
}
