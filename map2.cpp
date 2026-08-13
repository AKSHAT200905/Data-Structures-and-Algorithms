#include<iostream>
#include<map>
using namespace std;
int main() {
    map <int,string> student;
    student[1] = "Jacqueline";
    student[2] = "Blake";
    student[3] = "Denice";
    student[4] = "Steven";
    map <int,string> :: iterator iter;
    for(iter = student.begin(); iter != student.end();iter++) {
        cout << iter -> first << " - " << iter -> second << endl;
    }
    return 0;
}