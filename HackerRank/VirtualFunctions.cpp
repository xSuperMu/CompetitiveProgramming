// Problem ID:    virtual-functions
// Problem Name:  Virtual Functions
// Problem Link:  https://www.hackerrank.com/challenges/virtual-functions/problem
class Person{

protected:
    string name;
    int age;
    static int pro_id;
    static int stu_id;
public:
    Person(){
    }
    virtual void getdata(){};
    virtual void putdata(){};
};


class Professor : public Person {

public:
    int pr_id;
    Professor(){
    ++pro_id;
    pr_id = pro_id;
    }
    Professor(const Professor&){
    ++pro_id;
    }
    ~Professor(){
    --pro_id;
    }
    void getdata(){
    cin >> name;
    cin >> age;
    cin >> publications;
    }
    void putdata(){
        cout << name << " " << age << " " << publications << " " << pr_id << endl;
    }
private:
    int publications=0;
};


class Student : public Person{
public:
    int st_id;
    Student(){
    ++stu_id;
    st_id = stu_id;
    }

    Student(const Student&){
    ++stu_id;
    }
    ~Student(){
    --stu_id;
    }
    void getdata(){
    cin >> name;
    cin >> age;

    for(int i = 0; i < 6; i++){
        cin >> marks[i];
        total_marks += marks[i];
        }

    }
    void putdata(){
        cout << name << " " << age << " " << total_marks << " " << st_id << endl;
    }

private:
    int marks[6],total_marks=0;
};

int Person::stu_id=0;
int Person::pro_id=0;
