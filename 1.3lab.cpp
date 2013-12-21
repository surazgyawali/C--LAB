#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    int *roll, *age;
    char *name[15];
    cout<<"How many Student data to enter?"<<endl;
    cin>>n;
    roll= new int[n];
    age = new int[n];
    name[15]=new char[n];
    cout<<"Enter data"<<endl;
    for (int i=0;i<n;i++){
            cout<<"Enter roll number of student"<<endl;
    cin>>roll[i];
    cout<<"Enter name of student"<<endl;
    cin>>name[i];
    cout<<"Enter age of student"<<endl;
    cin>>age[i];

    }
    for(int i=0;i<n;i++){

    cout << left << setw(8) << "S.N";
    cout << left << setw(15) << "Roll Number";
    cout << left << setw(12) << "Name";
    cout << left << setw(3) << "Age";
    cout << endl;
    cout << left << setw(8) <<i+1;
    cout << left <<setw(15) << roll[i];
    cout << left <<setw(12) << name[i];
    cout <<left<<setw(8) << age[i]<<endl;


    }
    return 1;

}
