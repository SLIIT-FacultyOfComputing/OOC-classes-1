#include <iostream>
#include <cstring>
using namespace std;

class Item
{
  private:
   int itemCode;
   char name[20];
   float price;
  public:
   void setItemDetails(int code,char iname[]);
   void setPrice(float p);
   int getItemcode();
   float getPrice();
};
class Book{
   private:
    int bookID;
    char name[20];
    char author[20];
   public:
    void setBookDetails(int ID, char bname[], char aname[]);
    int getBookID();   
};
void Book::setBookDetails(int ID, char bname[], char aname[])
{
  bookID=ID;
  strcpy(name,bname);
  strcpy(author,aname);
}
int Book::getBookID()
{
  return bookID;
}
void Item::setItemDetails(int code,char iname[])
{
  code=itemCode;
  strcpy(name,iname);
}
void Item::setPrice(float p)
{
  price=p;
}
int Item::getItemcode()
{
  return itemCode;
}
float Item::getPrice()
{
  return price;
}

int main()
{
  Item it1;
  Book book1;
  int itemCode1,bookID;
  char author[20];
  char bookname[20];
  char name[20];
  float price;

  cout<<"Enter itemCode";
  cin>>itemCode1;
  cout<<"Enter name";
  cin>>name;
  cout<<"Enter price";
  cin>>price;

  it1.setItemDetails(itemCode1,name);
  it1.setPrice(price);

  cout<<"Item code is:"<<it1.getItemcode()<<endl;
  cout<<"Item price is:"<<it1.getPrice()<<endl;

  cout<<"Enter BookID";
  cin>>bookID;
  cout<<"Enter Bookname";
  cin>>bookname;
  cout<<"Enter Author";
  cin>>author;

  book1.setBookDetails(bookID,bookname,author);

  cout<<"BookID is"<<book1.getBookID()<<endl;
  cout<<"Bookname is"<<book1.getBookName()<<endl;
  
  return 0;
}
