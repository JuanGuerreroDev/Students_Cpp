#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<vector>

void createStudent();
void averageStudents();
void showInformationStudent();

using namespace std;

struct Students {
	string name;
	int age;
	double note;
};

vector<Students> students;

int main(){
	int option;
	do {
		cout<<"\t Menu \n 1 - Ingresar Estudiantes. \n 2 - Ver promedio de la nota de los estudiantes. \n 3 - Ver la informacion de todos los estudiantes. \n 4 - Salir del programa."<<endl;
		cout<<"\n Seleccione una opcion: ";
		cin>>option;
		switch(option) {
			case 1:
				createStudent();
				break;
			case 2:
				averageStudents();
				break;
			case 3: 
				showInformationStudent();
				break;
			case 4:
				cout<<"Hasta luego";
				break;
			default:
				cout<<"Ingrese una opcion valida"<<endl;
		}	
	} while(option != 4);
	return 0;
}

void createStudent() {
    Students student;
	cout<<"Ingrese el nombre del estudiante: ";
	cin>>student.name;
	
	cout<<"Ingrese la edad del estudiante";
	cin>>student.age;
	
	cout<<"Ingrese la nota del estudiante";
	cin>>student.note;

    students.push_back(student);
}

void averageStudents() {
    double average = 0;
    for(int i = 0; i < students.size(); i++) {
        average += students[i].note;
    }
    average = average / students.size();
    cout<<"El promedio de las notas de los estudiantes es: "<<average<<endl;
}

void showInformationStudent() {
    for(int i = 0; i < students.size(); i++) {
        cout<<"\nNombre: "<<students[i].name<<endl;
        cout<<"Edad: "<<students[i].age<<endl;
        cout<<"Nota: "<<students[i].note<<endl;
    }
}
