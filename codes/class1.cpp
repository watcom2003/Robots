// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    string name;
    int score;
    public: 
    void setName(string n) {
        name = n;
    }
    void setScore(int s) {
        score = s;
    }
    void setStudent(string n, int s) {
        name = n;  score = s;
    }
    void checkName() {
         cout << name << endl;
    }
    void checkScore() {
         cout << score << endl;
    }
    void checkStudent() {
        cout << name << "\t\t" << score << endl;
    }
};

int main() {
    Student student;
    student.setStudent("Thanchanok", 10);
    student.checkStudent();
    
    student.setName("Rattanakorn");
    student.checkName();
    
    return 0;
}
