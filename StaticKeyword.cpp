/*#include <iostream>
using namespace std;
class Student{
	
 private:
  static int n;
    
  
 public:
       Student(){
                   n++;
               }
      void show(){
                 cout<<"You Have Created= "<<n<<" objects"<<endl;
               }

};
int Student::n=0; 

int main(){
         
          Student x,y,z;
          x.show();
          Student g;
          x.show();

         
         return 0;
}

*/
#include <iostream>
using namespace std;
class Student{
 private:
            static int r;
            int rollNo;
            int marks;
            char name[50];
 public:
           Student(){
               r++;
               rollNo=r;
                  }

           void setStudentDetails(){
                 cout<<"Enter Name:";
                 cin>>name;
                 cout<<"Enter Marks:";
                 cin>>marks;
                 }

          void showStudentDetails() {
               cout<<"Roll No:"<<rollNo<<endl;
               cout<<"Student Name:"<<name<<endl;
               cout<<"Student Marks:"<<marks<<endl;
                   }
};

int Student::r=0;
 
int main(){
               Student s1,s2,s3;
               s1.setStudentDetails();
               s2.setStudentDetails();
               s3.setStudentDetails();
               s1.showStudentDetails();
               s2.showStudentDetails();
               s3.showStudentDetails();
               return 0;
}

