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
    void checkName() {
         cout << name << endl;
    }
    void checkScore() {
         cout << score << endl;
    }
};

int main() {
    Student student;
    student.setName("Thanchanok");
    student.setScore(10);
    student.checkName();
    student.checkScore();
    
    student.setName("Rattanakorn");
    student.checkName();
    
    return 0;
}
