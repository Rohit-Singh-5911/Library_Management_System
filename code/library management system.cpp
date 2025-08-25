#include<iostream>
#include<conio.h>

using namespace std;
class library
{
    private:
        struct Node
        {
            int id;
            string name,author,publisher;
            Node *next_add;
        };

    public:
       Node *head =NULL;
        void menu();
        void owner();
        void user();
        void insert();
        int search(int,int);
        void update(int);
        int del(int);
        void sort();
        void show();
};
    void library::menu()
    {
        int choice;
        string pass="";
        while(1)
        {
            system("cls");
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n 1. Library Manager's Menu";
            cout<<"\n\n 2. Student Library Menu";
            cout<<"\n\n 3. Exit";
            cout<<"\n\n Enter Your Choice :";
            cin>>choice;
            switch(choice)
            {
                case 1:
                   owner();
                    break;
                case 2:
                    user();
                    break;
                case 3:
                    exit(0);
                default:
                    cout<<"\n\n Invalid Choice...Please Try Again.....";
            }
            getch();
        }
    }
    void library::user()
    {
        int t_id=0;
        string b_name,author,publisher;
        while(1)
        {
            system("cls");
            int choice;
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n 1. All Books available";
            cout<<"\n\n 2. Search a book is present or not";
            cout<<"\n\n 3. Issue Book";
            cout<<"\n\n 4. Return book";
            cout<<"\n\n 5. Previous menu";
            cout<<"\n\n 6. Exit";
            cout<<"\n\n Enter Your Choice :";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    show();
                    break;
                case 2:
                    system("cls");
                    int choice;
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n Book ID : ";
                    cin>>t_id;
                    cout<<"\n\n Book Name: ";
                    cin>>b_name;
                    cout<<"\n\n Author name: ";
                    cin>>author;
                    cout<<"\n\n Publisher Name: ";
                    cin>>publisher;
                    if(search(t_id,1)!=0)
                    {
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                        cout<<"\n\nBook  exists";
                    }
                    else
                    {

                    cout<<"\n\nBook does not exists";
                    }
                    break;

                case 3:
                    system("cls");

                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n Book ID : ";
                    cin>>t_id;
                    cout<<"\n\n Book Name: ";
                    cin>>b_name;
                    cout<<"\n\n Author name: ";
                    cin>>author;
                    cout<<"\n\n Publisher Name: ";
                    cin>>publisher;
                    if(del(t_id)!=0)
                    {
                        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tBook issued....";
                    }
                    else
                    {
                        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tBook  doesnt exists.......";
                    }
                    break;
                case 4:
                    insert();
                    break;
                case 5:
                    menu();
                    break;
                case 6:
                    exit(0);
                default:
                    cout<<"\n\n Invalid Choice...Please Try Again.....";
            }
            getch();
        }
    }
    void library::owner()
 {
     int t_id=0;
     string b_name,author,publisher;
        while(1)
        {
            system("cls");
            int choice;
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n 1. Insert New Book";
            cout<<"\n\n 2. Search Book Record";
            cout<<"\n\n 3. Update Book Record";
            cout<<"\n\n 4. Delete Book Record";
            cout<<"\n\n 5. Show all Books Available";
            cout<<"\n\n 6. Previous menu";
            cout<<"\n\n 7. Exit";
            cout<<"\n\n Enter Your Choice :";
            cin>>choice;
            switch(choice)
            {
                case 1:
                    insert();
                    break;
                case 2:
                    system("cls");
                    int choice;
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n Book ID : ";
                    cin>>t_id;
                    cout<<"\n\n Book Name: ";
                    cin>>b_name;
                    cout<<"\n\n Author name: ";
                    cin>>author;
                    cout<<"\n\n Publisher Name: ";
                    cin>>publisher;
                    if(search(t_id,1)!=0)
                    {
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\nBook  exists";
                    }
                    else
                    {


                        cout<<"\n\n\nBook  does not exist";
                    }
                    break;
                case 3:
                    system("cls");
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n Book ID : ";
                    cin>>t_id;
                    cout<<"\n\n Book Name: ";
                    cin>>b_name;
                    cout<<"\n\n Author name: ";
                    cin>>author;
                    cout<<"\n\n Publisher Name: ";
                    cin>>publisher;
                    if(search(t_id,1)!=0)
                    {
                        update(t_id);
                    }
                    else
                    {
                        cout<<"\n\n\nBook id doesnt exists";
                    }
                    break;
                case 4:
                    system("cls");
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n Book ID : ";
                    cin>>t_id;
                    cout<<"\n\n Book Name: ";
                    cin>>b_name;
                    cout<<"\n\n Author name: ";
                    cin>>author;
                    cout<<"\n\n Publisher Name: ";
                    cin>>publisher;
                    if(del(t_id)==0)
                    {
                        cout<<"\n\nBook not found";
                    }
                    else
                        cout<<"\n\n Delete book Successfully.....";
                    break;
                case 5:
                    sort();
                    show();
                    break;
                case 6:
                    menu();
                case 7:
                    exit(0);
                    break;
                default:
                    cout<<"\n\n Invalid Choice...Please Try Again.....";
            }
            getch();
        }
 }
 void library::insert()
 {
     system("cls");
     int choice;
     cout<<"\n\n\t\t\t====================================================";
     cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
     cout<<"\n\n\t\t\t====================================================";
     Node*new_node = new Node;
     while(1)
     {
         cout<<"\n\n Book ID : ";
         cin>>new_node -> id;
         cout<<"\n\n Name : ";
         cin>>new_node -> name;
         cout<<"\n\n Author Name : ";
         cin>>new_node -> author;
         cout<<"\n\n Publisher Name: ";
         cin>>new_node -> publisher;
         new_node -> next_add = NULL;

             if(search(new_node->id,0)==0)

                break;

     }

     if(head== NULL)
     {
        head = new_node;

     }
     else
     {
        Node *ptr =head;
        while(ptr -> next_add != NULL)
        {
            ptr = ptr -> next_add;
        }
         ptr -> next_add = new_node;

     }

     sort();
      cout<<"\n\n\n\n\n\n\t\t\tNew Book Inserted and Sorted Successfully.......";

    }
    int library::search(int t_id,int f)
    {
        system("cls");
        int found=0;
        int choice;
        cout<<"\n\n\t\t\t====================================================";
        cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
        cout<<"\n\n\t\t\t====================================================";
        if(head!=NULL)
        {
            Node *ptr = head;
            while(ptr != NULL)
            {
                if(t_id == ptr -> id)
                {
                    system("cls");
                    int choice;
                    if(f==0)
                    {

                        cout<<"\n\n\t\t\t====================================================";
                        cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                        cout<<"\n\n\t\t\t====================================================";
                        cout<<"\n\n Book ID: "<<ptr->id;
                        cout<<"\n\n Book Name: "<<ptr->name;
                        cout<<"\n\n Author Name: "<<ptr->author;
                        cout<<"\n\n Publisher Name: "<<ptr->publisher;
                    }
                    found++;
                }
                ptr = ptr->next_add;
            }
        }
        return found;
    }
    void library::update(int t_id)
    {
        Node *ptr = head;
            while(ptr != NULL)
            {
                if(t_id == ptr -> id)
                {
                    system("cls");
                    int choice;
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
                    cout<<"\n\n\t\t\t====================================================";
                    cout<<"\n\n Book ID: ";
                    cin>>ptr->id;
                    cout<<"\n\n Book Name: ";
                    cin>>ptr->name;
                    cout<<"\n\n Author Name: ";
                    cin>>ptr->author;
                    cout<<"\n\n Publisher Name: ";
                    cin>>ptr->publisher;
                    cout<<"\n\n\t\t\tUpdate Book Successfully.......";
                    break;
                }
                ptr = ptr->next_add;
            }
    }


    int library::del(int t_id)
    {
        system("cls");
        int found=0;
        int choice;
        cout<<"\n\n\t\t\t====================================================";
        cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
        cout<<"\n\n\t\t\t====================================================";
        if(head!=NULL)
        {
            if(t_id == head -> id)
            {
                Node *ptr = head;
                head = head -> next_add;
                delete ptr;
                found++;
            }
            else
            {
                Node *pre = head;
                Node *ptr = head;
                while(ptr != NULL)
                {
                    if(t_id == ptr -> id)
                    {
                        pre -> next_add = ptr -> next_add;
                        delete ptr;
                        found++;
                        break;
                    }
                    pre = ptr;
                    ptr = ptr -> next_add;
                }
            }
        }
        return found;
    }
    void library::sort()
    {

        if(head==NULL)
        {
            system("cls");
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
            cout<<"\n\n\t\t\t====================================================";
            cout<<"\n\n Inventory Empty.......";
            getch();
            menu();
        }
        int count=0,t_id;
        string t_name,t_author,t_publisher;
        Node*ptr = head;
        while(ptr!= NULL)
        {
            count++;
            ptr=ptr->next_add;
        }
        for(int i=1;i<=count;i++)
        {
            Node *ptr = head;
            for(int j=1;j<count;j++)
            {
                if(ptr -> id > ptr -> next_add -> id)
                {
                    // Save data into temporary variables
                    t_id = ptr -> id;
                    t_name = ptr -> name;
                    t_publisher = ptr-> author;
                    t_author = ptr -> publisher;
                    // Save data into Current Node
                    ptr -> id = ptr -> next_add ->id;
                    ptr -> name = ptr -> next_add ->name;
                    ptr -> author = ptr -> next_add ->author;
                    ptr -> publisher = ptr -> next_add ->publisher;
                    // Save data into Next Node
                    ptr -> next_add ->id = t_id;
                    ptr -> next_add ->name = t_name;
                    ptr -> next_add ->author = t_author;
                     ptr -> next_add ->publisher = t_publisher;

                }
                ptr = ptr-> next_add;
            }
        }
    }
    void library::show()
    {
        system("cls");
        cout<<"\n\n\t\t\t====================================================";
        cout<<"\n\n\t\t\t=====LIBRARY MANAGEMENT SYSTEM======================";
        cout<<"\n\n\t\t\t====================================================";
            Node *ptr = head;
            if(ptr==NULL)
            {
                cout<<"\n\n\n\n\t\tInventory Empty";
            }
            while(ptr != NULL)
            {
                cout<<"\n\n Book ID: "<<ptr->id;
                cout<<"\n\n Book Name: "<<ptr->name;
                cout<<"\n\n Author Name: "<<ptr->author;
                cout<<"\n\n Publisher Name: "<<ptr->publisher;
                cout<<"\n\n\n ===============================";

                ptr = ptr->next_add;
            }


        }



int main()
{

    library obj;
    obj.menu();
    return 0;
}
