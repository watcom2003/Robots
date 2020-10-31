// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name, lastname;
    
    int score;
    public: 
    void setName(string n) {
        name = n;
    }
    void setScore(int s) {
        score = s;
    }
    void setLastname(string a) {
        lastname = a;
    }
    void setStudent(string n, string a, int s) {
        name = n; lastname = a; score = s;
    }
    void checkName() {
         cout << name << endl;
    }
    void checkLastname() {
        cout << lastname << endl;
    }
    void checkScore() {
         cout << score << endl;
    }
    void checkStudent() {
        cout << name << "\t\t" << lastname << "\t\t" << score << endl;
    }
};

int main() {
    Student student;
    student.setStudent("Thanchanok","Janpaengngoen", 10);
    student.checkStudent();
    
    student.setName("Rattanakorn");
    student.checkName();
    
    return 0;
}
