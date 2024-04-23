/******************************************************************************

  write a program to define a class to store marks of students and following functions in it.
  1. constructor function to intitialize marks with zero.
  2. function to increment marks.
  3. function to return marks.
  create two object in main.
  increment the first object in marks 3 times and
  second object marks 2 times.



*******************************************************************************/

#include<iostream.h>
#include<conio.h>

class student
{
    private:

    int marks;

    public:

    student() // constructor to initialize marks with zero//
    {
	marks=0;
    }

     void inmarks() // function to increment count value//
     {
	 marks++;
    }
int getmarks() // function to return marks//

{
 return marks;
}
};
 void main ()

 {
     student stud1, stud2; // creating object and call constructor//

     cout<<"\n stud1=" << stud1.getmarks();
     cout<<"\n stud2=" << stud2.getmarks();

    stud1.inmarks();
    stud1.inmarks();
    stud1.inmarks();

    stud2.inmarks();
    stud2.inmarks();
    cout<<"\n marks after increment \n";
    cout<<"\n stud1=" << stud1.getmarks();
    cout<<"\n stud2=" << stud2.getmarks();
    getch();
 }
