#include <iostream>
#include <student.h>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int selection =0;
    vector<Student>studentList;
    string name;
    int age;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
        {
            cout<<"What is the students name?"<<endl;// Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            cin>>name;
            cout<<"How old is the student?"<<endl;
            cin>>age;
            // Lisää uusi student StudentList vektoriin.
            studentList.emplace_back(name,age);
            break;
        }
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            break;

        case 2:
           sort(studentList.begin(),studentList.end(),[](Student& a, Student& b)
                 // Järjestä StudentList vektorin Student oliot nimen mukaan
                 // algoritmikirjaston sort funktion avulla
                 {
                     return a.getName() < b.getName();
                 });

            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            sort(studentList.begin(),studentList.end(),[](Student& a, Student& b)
                 {
                     return a.getAge() < b.getAge();
                 });

            for(auto& student:studentList)
            {
                student.printStudentInfo();
            }
            break;

        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout<<"Which student's info are you looking for?"<<endl;
            cin>>name;

            auto it = find_if(studentList.begin(), studentList.end(),[name](Student olio){return olio.getName()==name;});
                if(it!=studentList.end())
                 {
                    cout<<"Student "<<name<<" is on the list of students"<<endl;
                    it->printStudentInfo();
                 }
                 else
                 {
                    cout<<"Student could not be found"<<endl;
                 }
            break;
        }

    default:
        cout<< "Wrong selection, stopping..."<<endl;
        break;
    }
}while(selection < 5);

return 0;
}
