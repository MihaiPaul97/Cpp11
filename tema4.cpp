#include <iostream>
#include <algorithm>
#include <vector>
#include <memory>
#include <utility>
using namespace std;
//shared_ptr care sa adminsitreze o clasa si\sau structura;
typedef struct pr{
    int a;
    string b="";
}pr;

class T{
    private:
        int age;
        string name="";
    public:
        T(int a,string b){
            this->age=a;
            this->name=b;
        }

        void setAge(int a){
            this->age=a;
        }
        void setName(string nume){
            this->name=nume;
        }
        int getAge(){
            return age;
        }
        string getName(){
            return name;
        }
};
int main()
{
    //STRUCTURA
    pr* p1=new pr;
    p1->a=213;
    p1->b="Nokia C++11 tema 4";
    cout<<p1->a<<endl;
    cout<<p1->b<<endl;

    cout<<endl;
    std::shared_ptr<pr> sh (p1);//flagship code
    if (sh.get()==p1)
        std::cout << "sh and p1 pointeaza la aceeasi locatie\n";
    cout<<endl;
    cout<<sh.get()->a<<endl; //flagship code
    sh.get()->a=2;
    cout<<sh.get()->a<<endl;
    cout<<p1->a<<endl;
    cout<<endl;
    cout<<sh.get()->b<<endl; //flagship code
    sh.get()->b="ana are mere";
    cout<<sh.get()->b<<endl;
    cout<<p1->b<<endl;
    cout<<endl;

    //CLASA
    T *p2=new T(21,"Mihai");
    std::shared_ptr<T> sh1 (p2);//flagship code
    if (sh1.get()==p2)
        std::cout << "sh1 and p1 pointeaza la aceeasi locatie\n";
    cout<<sh1.get()->getAge()<<endl; //flagship code
    sh1.get()->setAge(19);
    cout<<sh1.get()->getAge()<<endl;
    cout<<p2->getAge()<<endl;
    cout<<endl;
    cout<<sh1.get()->getName()<<endl; //flagship code
    sh1.get()->setName("Florin");
    cout<<sh1.get()->getName()<<endl;
    cout<<p2->getName()<<endl;

    return 0;
}
