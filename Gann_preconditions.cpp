// Kori Gann
// October 15, 2015
//Lots of pass by refence functions

#include <iostream>
#include <cassert>
#include <string>

void swap(int& A, int& B);
void sort(int& numA, int& numB, int& numC);
void numDigits(int  valA, int& n); 
void computeSphere(double& a, double& v, double r);

using namespace std;
int main()
{
return 0;
}



// ********************************************************
void swap(int& A, int& B)
// Summary: Swaps two int values using pass by reference.
// Precondition: Two ints to be swapped are passed by main into the function; both ints are passed 
// by reference to hold the swap.
// Postcondition: The values are now swapped.
//
// ********************************************************
//
{

    int holder = A;
    A = B;
    B = holder;
    return;
}
    

// ********************************************************
void sort(int& numA, int& numB, int& numC)
// Summary: Sorts values by low to high.
// Precondition: Three ints less than 101 and greater than -1 to be sorted are passed by main into the function; all ints are passed 
// by reference to hold the ordered stuff.
// Postcondition: The values are now in order from least to high.
//
// ********************************************************
//

{
    int holder1;
    int holder2;
    int holder3;
    if (numA <= numB && numA <= numC)
    {
        holder1 = numA;
    }
    else if (numB <= numA && numB <= numC)
    {
        holder1 = numB;
    }
    else
    {
        holder1 = numC;
    }
    
    if (numA == holder1)
    {
        if (numB <= numC)
        {
            holder2 = numB;
        }
        else
        {
            holder2 = numC;
        }
    }

    if (numB == holder1)
    {
        if (numA <= numC)
        {
            holder2 = numA;
        }
        else
        {
            holder2 = numC;
        }
    }

    if (numC == holder1)
    {
        if (numB <= numA)
        {
            holder2 = numB;
        }
        else
        {
            holder2 = numA;
        }
    }

    if ((numA == holder1 || numA == holder2) && (numB == holder2 || numB == holder1))
    {
        holder3 = numC;
    }
    else if ((numC == holder1 || numC == holder2) && (numB == holder2 || numB == holder1))
    {
        holder3 = numA;
    }
    else
    {
        holder3 = numB;
    }

    numA = holder1;
    numB = holder2;
    numC = holder3;
    return;
    
}

// ********************************************************
void numDigits(int  valA, int& n)
// Summary: tells how many digits are in valA .
// Precondition: an int value between -10000 and 10000 is passed by main into the function; n int is passed 
// by reference to hold the digit value.
// Postcondition: The value tells how many digits were in on value.
//
// ********************************************************
//
{
    int count = 1;
    while (valA > 10 || valA < -10)
    {
        valA = valA / 10;
        count = count + 1;
    }
    n = count;
}


// ********************************************************
void computeSphere(double& a, double& v, double r)
// Summary: tells how many digits are in valA .
// Precondition: a double value between 0 and 10000 is passed by main into the function; v and a doubles are passed 
// by reference to hold the area and volume values.
// Postcondition: The value tells the volume and area of a sphere based on radius.
//
// ********************************************************
//
{
    a = (4 * 3.14) *(r * r);
    v = (1.3333 * 3.14) *(r * r * r);
    return;
}
    
    










