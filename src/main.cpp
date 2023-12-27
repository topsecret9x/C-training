#include <iostream>
#include <sstream>
using namespace std;

class Student {
    private:
        int age;
        string last_name;
        string first_name;
        int standard;
    public:
        void set_Data(int age, int standard, string first_name, string last_name) {
            this->age = age;
            this->standard = standard;
            this->first_name = first_name;
            this->last_name = last_name;
        }
        void show_Data() {
            cout << "Ten nhan vien la: " << this->first_name << this->last_name <<"\n";
            cout << "Tuoi nhan vien la: " << this->age <<"\n";
            cout << "Standard: " << this->standard <<"\n";
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cout << "Nhap ho nhan vien: ";
    cin >> first_name;

    cout << "Nhap ten nhan vien: ";
    cin >> last_name;

    cout << "Nhap tuoi nhan vien: ";
    cin >> age;

    cout << "Nhap loai nhan vien: ";
    cin >> standard;
    
    Student st1;
    st1.set_Data(age, standard, first_name, first_name);
    
    st1.show_Data();
    
    system("pause");
    return 0;
}