#include<iostream>
#include<map>
using namespace std;
int main() {
    map<int,string> student;
    student[1] = "Jacqueline";
    student[2] = "Blake";
    
    student.insert(make_pair(3,"Denice"));
    student.insert(make_pair(4,"Blake"));

    student[5] = "Tony";
    student[5] = "Steven";
    for(int i =1;i<=student.size();i++) {
        cout << "Student[" << i << "]:" << student[i] << endl;
    }
    return 0;
}