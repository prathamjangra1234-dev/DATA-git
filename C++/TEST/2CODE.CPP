#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks;

public:
    // Setter functions
    void setName(string n) {
        name = n;
    }

    void setRollNo(int r) {
        rollNo = r;
    }
    void setMarks(float m) {
        marks = m;
    }
    string getName() {
        return name;
    }
    int getRollNo() {
        return rollNo;
    }
    float getMarks() {
        return marks;
    }
};

int main() {
    Student s;
    string name;
    int roll;
    float marks;

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Roll No: ";
    cin >> roll;

    cout << "Enter Marks: ";
    cin >> marks;

    // Using setters
    s.setName(name);
    s.setRollNo(roll);
    s.setMarks(marks);

    // Using getters to display
    cout << "\n--- Student Details ---\n";
    cout << "Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;
    cout << "Marks: " << s.getMarks() << endl;

    return 0;
}
