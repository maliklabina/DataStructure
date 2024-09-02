#include <cstring>
#include <iostream>
using namespace std;

struct student
{
    char student_name[20];
    float SGPA;
    int Roll_no;
};
int n;
class student_data
{
    private :
          struct student s1[15];        
     public :
         void viewdata()
        {
            cout<<"\n\n   Student Name        SGPA        Roll No.   \n-----------------------------------------------------\n";
            for (int i = 0; i < n; i++)
            {
                cout<<"    "<<i+1<<". "<<s1 [i].student_name ;
                cout<<"\t\t";
                cout<<s1[i].SGPA ;
                cout<<"\t\t";
                cout<<s1[i].Roll_no<<endl;
            }
        }

        void add()
        {       cout<<"\n Enter no. of Student details to be added (max 15) : ";
                cin>>n;
 		cout<<"\n Filling data such as Name,    SGPA,    Roll no.    			\n------------------------------------------------------";
                for ( int i =0; i <n; i++)
                {
                    cout<<"\n\n# Details of Student no. "<<i+1<<" - \n\n  Enter Name of Student : ";
                    cin>>s1[i].student_name;
                    cout<<"\n  Enter Student SGPA : ";
                    cin>>s1[i].SGPA;
                    cout<<"\n  Enter Student Roll no. : ";
                    cin>>s1[i].Roll_no;
                }
                cout<<"---------------- Addition Done Successfully ! ----------------";
                student_data :: viewdata();
        }
        void search_sgpa(float r)  //linear search on SGPA
        {
            cout<<"\n\n< Searching in SGPA using Linear Search...>\n-----------------------------------------------";
            int t = 0;
            for (int i = 0; i < n; i++)
            {
                if(s1[i].SGPA == r)
                {
                    cout<<"\n\n#"<<t<<" Details of Student with SGPA "<<s1[i].SGPA;
                    cout<<"\n\n Student     Name           SGPA           Roll_No.\n";  			  		 			    cout<<"    "<<i+1<<".       "<<s1[i].student_name;
                    cout<<"    \t   "<<s1[i].SGPA<<"   \t    "<<s1[i].Roll_no;
                    cout<<"\n--------------------------------------------------------------";
                    t++;
                    continue;
                }
            }
            if(t == 0)
            {
                cout<<"\n Student '"<<r<<"' not found or Input correct SGPA";
            }
        }

       
        void sort_names()  //insertion sort for sorting names
        {
            for (int k=n-1; k>0; k--)
            {  
                struct student temp = s1[k];
                int j = k-1;
                while (j >= 0 && strcmp(temp.student_name, s1[j].student_name) < 0)  
                {
                    s1[j+1] = s1[j];
                    j = j-1;
                }
                s1[j+1] = temp;
            }
        }

   void sort_SGPA(int l, int k)  //sorting SGPA using quick sorting
        {
            int r = k-1;
            if (l>=r) return;
            int i=l;
            int j=r+1;
            struct student prec;
            int p = s1[l].SGPA; //Select pivot element
            prec = s1[l]; //temporarily storing pivot record prec
            while(1)
            {
                do{ i++; } while (s1[i].SGPA < p  && i <= r);
                do{ j--; } while (s1[j].SGPA > p && j >= l);
                if(i >= j) break;
                struct student temp;
                temp = s1[j];
                s1[j] = s1[i];
                s1[i] = temp;
            }
            s1[l] = s1[j];
            s1[j] = prec;
            sort_SGPA(l,j-1); //left list
            sort_SGPA(j+1,r); //right list          
        }
              
 void sort_RollNo()  //sorting roll no. in ascending order using bubble sort
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n-1-i; j++)
                {
                    if((s1[j].Roll_no) > (s1[j+1].Roll_no)) //Swapping
                    {
                        struct student temp;
                        temp = s1[j];
                        s1[j] = s1[j+1];
                        s1[j+1] = temp;
                    }
                }
            }
            student_data :: viewdata();
        }

  void search_name()
        {
            cout<<"\n Enter student name to be searched : ";
            char search[10];
            cin>>search;
            cout<<"\n< Searching name using Binary Search...>";
            int lower = 0, upper, mid;
            upper = n - 1;
            mid = (lower + upper)/2;
            student_data :: sort_names();
            while (lower <= upper)
            {
                if(strcmp(s1[mid].student_name, search)<0)
                {
                    lower = mid + 1;
                }
                else if(strcmp(s1[mid].student_name, search)==0)
                {
                    cout<<"\n\n# Details of Student with name "<<s1[mid].student_name<<" -";
                    cout<<"\n\n Student        Name         SGPA        Roll\n    No.                                           No.\n--------------------------------------------------------------\n";
                    cout<<"    1.        "<<s1[mid].student_name;
                    cout<<"   \t  "<<s1[mid].SGPA<<"   \t  "<<s1[mid].Roll_no;
                    cout<<"\n--------------------------------------------------------------";
                    break;
                }
                else
                {
                    upper = mid - 1;
                    mid = (lower + upper)/2;
                }
            }
            if(lower > upper)
            {
                cout<<"\n Student '"<<search<<"' details not found or Input correct name";
            }
        }
};


int main()
{
    student_data std;
    float r;
    cout<<"--------------------------------------------------------------------\n\t\t----- SE IT Student Database -----\n--------------------------------------------------------------------\n";
    char stopApp;
    stopApp = 'Y';
    while(stopApp == 'Y')
    {
        cout<<"\n\nSelect action from following : \n";
        cout<<"\n1.ADD RECORDS\t2.SEARCH SGPA\t3.SORT NAME \t4.SORT SGPA(Toppers)\t5.SORT ROLL NO.\t 6. SEARCH NAME\t7. EXIT\n";
        cout<<"Enter choice (1/2/3/4/5/6/7): ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
                std.add();
                break;
            case 2:
                cout<<"\n Enter Student SGPA to be searched : ";
                cin>>r;
                std.search_sgpa(r);
                break;
            case 3:
                cout<<"\n< Sorting name alphabetically using Insertion Sort...>";
                std.sort_names();
                std.viewdata();
                break;
            case 4:
                cout<<"\n< Sorting top 10 SGPA using Quick Sort...>";
                std.sort_SGPA(0, 10);
                std.viewdata();
                break;
            case 5:
                cout<<"\n< Sorting Roll No. wise using Bubble Sort...>";
                std.sort_RollNo();
                break;
            case 6:
                std.search_name();
                break;
            case 7:
                cout<<" >Exited successful<\n --| END OF CODE |--";
                return 0;
            default :
                cout<<"\n Invalid choice !";
        }
        cout<<"\n\nDo you want to continue (Y/N) ? : ";
        cin>>stopApp;
        if (stopApp == 'N' | 'n')
        {
            cout<<" ----------------| END OF CODE |----------------\n";
        }
    }
    return 0;
}
