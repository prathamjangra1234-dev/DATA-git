#include <iostream>
using namespace std;

class school {
    private: 
        int roll_no;
        string name;
    public:
        school(string name,int roll_no) {
            set_details(name,roll_no);
            cout << "Student via " << name << " and roll number " << roll_no << " is Created." << endl;
        }

        void set_details(string name, int roll_no) {
            this->name = name;
            this->roll_no = roll_no;
        }

        void introduce() const {
            cout << "Helloooooo dosto!MY NAME IS " << name << " and my roll number is " << roll_no << endl;
        }
};

int main() {
    school student1("Pratham Jangra",27);
    school student2("Harshit Khanna",12);
    school student3("Nishu",22);

    student1.introduce();
    student2.introduce();
    student3.introduce();
    
    return 0;
}