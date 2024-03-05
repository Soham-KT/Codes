#include <iostream>
using namespace std;

class staff
{
protected:
    string code_name;

public:
    void set_codename()
    {
        cout << "Enter code name: ";
        cin >> code_name;
    }

    void show_codename()
    {
        cout << "Staff: " << code_name << endl;
    }

    string codename()
    {
        return code_name;
    }
};

class teacher : public staff
{
protected:
    string subject_pub;

public:
    string t_name;
    void set_subpub()
    {
        cout << "Enter subject publication: ";
        cin >> subject_pub;
    }

    void show_subpub()
    {
        cout << "Staff: " << t_name << endl
             << "Subject publication: " << subject_pub << endl;
    }
};

class officer : public staff
{
protected:
    string grade;

public:
    string o_name;
    void set_grade()
    {
        cout << "Enter grade: ";
        cin >> grade;
    }

    void show_grade()
    {
        cout << "Staff: " << o_name << endl
             << "Grade: " << grade << endl;
    }
};

class typist : public staff
{
protected:
    string speed;

public:
    void set_speed()
    {
        cout << "Enter typing speed(regular/casual): ";
        cin >> speed;
    }

    void show_speed()
    {
        cout << "Speed: " << speed << endl;
    }

    string speed_()
    {
        return speed;
    }
};

class regular : public typist
{
public:
    string r_name;

    void show_speedreg()
    {
        cout << "Staff: " << r_name << endl
             << "Speed: regular" << endl;
    }
};

class casual : public typist
{
protected:
    int daily_wages;

public:
    string c_name;

    void enter_dw()
    {
        cout << "Enter daily wages: ";
        cin >> daily_wages;
    }
    void show_speed_cas()
    {
        cout << "Staff: " << c_name << endl
             << "Speed: casual" << endl
             << "Daily wages: " << daily_wages << endl;
    }
};

int main()
{
    staff s1;
    s1.set_codename();
    if (s1.codename() == "teacher")
    {
        teacher t1;
        t1.t_name = s1.codename();
        t1.set_subpub();
        t1.show_subpub();
    }

    else if (s1.codename() == "officer")
    {
        officer o1;
        o1.o_name = s1.codename();
        o1.set_grade();
        o1.show_grade();
    }

    else if (s1.codename() == "typist")
    {
        typist ty1;

        ty1.set_speed();

        if (ty1.speed_() == "regular")
        {
            regular r1;
            r1.r_name = s1.codename();
            r1.show_speedreg();
        }

        else if (ty1.speed_() == "casual")
        {
            casual c1;
            c1.c_name = s1.codename();
            c1.enter_dw();
            c1.show_speed_cas();
        }

        else
        {
            cout << "Invalid choice" << endl;
        }
    }

    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}