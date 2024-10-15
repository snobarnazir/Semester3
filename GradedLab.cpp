#include "GradedLab.h"
Student::Student(){

		name = "Null";
		rollnumber = 0;
		numberofquizes = 0;
		markobtained = 0;
		totalmarks = 0;
	}
	
	
void Student::setter1(char *name2){
		name = name2;
     }
char *Student::getter(){
		return name;
	}

void Student::setter2(int rollnumber2){
		rollnumber = rollnumber2;
	}
int Student:: getter2(){
		return rollnumber;
	}
void Student:: setter3(int numberofquizes2){
		numberofquizes = numberofquizes2;
	}
int Student:: getter3(){
		return numberofquizes;
	}
void Student::setter4(int *markobtained2){
		markobtained = markobtained2;
	}
int *Student::getter4(){
		return markobtained;
	}
void Student::setter5(int totalmarks2){
		totalmarks = totalmarks2;
	}
int Student::getter5(){
		return totalmarks;
	}
 Student::Student(char *name2, int rollnumber2, int numberofquizes2, int *markobtained2, int totalmarks2){

		name = name2;
		rollnumber = rollnumber2;
		numberofquizes = numberofquizes2;
		markobtained = markobtained2;
		totalmarks = totalmarks2;
	}
	
void Student::getinputfromuser(){

		cout << "Enter the name :" << endl;
		cin.getline(name, 29);
		cout << "Enter the age = " << endl;
		cin >> rollnumber;
		cout << "Enter the number of quizes " << endl;
		cin >> numberofquizes;
		markobtained = new int[numberofquizes];
	

	}
void Student::inputmarks(){
		cout << "Enter the marks for each quize " << endl;
		int j = 1;
		for (int i = 0; i < numberofquizes; i++){
			cout << "Quize " << j << endl;
			cin >> markobtained[i];
			j++;

		}
		for (int i = 0; i < numberofquizes; i++){

			totalmarks = totalmarks + markobtained[i];


		}
	}

void Student::display(){
		cout << "Name " << name << endl;
		cout << "rollnumber " << rollnumber << endl;
		cout << "numberofquizes " << numberofquizes << endl;
		cout << "Markobtained in Quizes. " << endl;
		
		int j = 1;
		for (int i = 0; i < numberofquizes; i++){
			cout << "Quize marks: " << j<<endl ;
			cout << markobtained[i] << endl;
			j++;

		}
		cout<<"totalmarks = "<<totalmarks<<endl;

}



int main(){
	char name[30];
	int rollnumber;
	int numberofquizes=1;
	int *markobtained;
	int totalmarks=0;
	cout << "Student 1" << endl;

	for (int i = 0; i < 3; i++){
		Student myobt(name, rollnumber, numberofquizes, markobtained, totalmarks);
    	myobt.getinputfromuser();
		myobt.inputmarks();
		myobt.display();
		cin.ignore();

	}
	
	

    system("pause");
	return 0;
}
