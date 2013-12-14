// source: http://www.possibility.com/Cpp/const.html

int  x = 4;        // a normal variable that can be modified
x = 10;            // legal

const int x = 2;   // const var can be initialized, not modified thereafter
x = 10;            // error - cannot modify const variable


const int x;      // constant int
x = 2;            // illegal - can't modify x

const int* pX;    // changeable pointer to constant int
*pX = 3;          // illegal -  can't use pX to modify an int
pX = &someOtherIntVar;      // legal - pX can point somewhere else

int* const pY;              // constant pointer to changeable int
*pY = 4;                    // legal - can use pY to modify an int
pY = &someOtherIntVar;      // illegal - can't make pY point anywhere else

const int* const pZ;        // const pointer to const int
*pZ = 5;                    // illegal - can't use pZ to modify an int
pZ = &someOtherIntVar;      // illegal - can't make pZ point anywhere else



int y;
const int* pConstY = &y;  // legal - but can't use pConstY to modify y
int* pMutableY = &y;      // legal - can use pMutableY to modify y
*pMutableY = 42;



const int x;             // x cannot be modified

const int* pX = &x;      // pX is the address of a const int
                         // and can't be used to change an int

*pX = 4;                 // illegal - can't use pX to change an int

int* pInt;       // address of normal int
pInt = pX;       // illegal - cannot convert from const int* to int*




int *pInt;   // address of a normal int
pInt = &x;   // illegal - cannot convert from const int* to int*




int x = 37;
int y = 8;

double quotient = x / y;   // classic mistake, result is rounded to an int
cout << quotient;          // prints " 4.000000" 
double quotient = (double)x/y;   // cast result as double so it's not rounded
cout << quotient;          // prints "4.625000"




const int x = 4;           // x is const, it can't be modified
const int* pX = &x;        // you can't modify x through the pX pointer

cout << x << endl;         // prints "4"

int* pX2 = (int *)pX;      // explicitly cast pX as an int*
*pX2 = 3;                  // result is undefined

cout << x << endl;        // who knows what it prints?
