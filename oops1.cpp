#include <iostream>
#include <cstring>
using namespace std;
class Villian
{
    public:
    int health;
    char motive;
    char *name;

    Villian()
    {
        cout<<"CC called"<<endl;
        name = new char[100];
    } //Constructor. This will die if another big constructor is called.
    // Hence we use Destructor.

    Villian(int health, char motive)
    {
        cout<<"Location of Villian: "<< this << endl;
        this -> health = health;
        this -> motive = motive;
        name = new char[100];


    } //Parameterised constructor

    Villian(Villian& temp)
    { //Pass by value will not work here.

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this -> name = ch; //This is deep copy means will make another copy while creating child class.

        cout << "Class Copied" << endl;
        this -> health = temp.health;
        this -> motive = temp.motive;
//        this -> name = temp.name; //Shallow Copy
    }//Copy Constructor

    void print()
    {
        cout << this-> name << endl;
        cout << this-> health << endl;
        cout << this-> motive << endl;
        cout << endl << endl;
    }

    int geth()
    {
        return health;
    }
    void setName(char name[])
    {
        strcpy(this -> name, name);
    }
};

int main() 
{
    Villian mahesh; //Using default constructor because we cannot put name if used other.
    mahesh.health = 10;
    mahesh.motive = 'C';
//    Villian mahesh(100,'C');
//    mahesh.motive = 'A';

    char name[] = "Mahesh";
    mahesh.setName(name);

//    cout << "Health is: " << mahesh.health << endl;
//    cout << "Motive is: " << mahesh.motive << endl;
    mahesh.print();
     //Dynamic allocation
    Villian * dalla = new Villian(90,'B');
//    dalla -> health = 90;
//    dalla -> motive = 'B';
    char dname[] = "Dalla";
    dalla ->setName(dname);
    dalla -> print();

//    Villian modi(990,'E');
    Villian modi;
    modi.health = 990;
    modi.motive = 'E';
    char mname[] = "Pardhan Mantri";
    modi.setName(mname);
    modi.print();

    Villian rahul(modi); //Will copy another class properties.
    char rname[] = "Pappu";
    rahul.setName(rname);
    rahul.print(); //This will shallow copy only, means storing the address, will change the memory part as well
    modi.print();

    return 0;
}