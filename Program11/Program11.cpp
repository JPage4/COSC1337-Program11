//***************************************************************
//
//  Developer:         Jessica Page
//
//  Program #:         Program #11
//
//  File Name:         Program11.cpp
//
//  Course:            COSC 1337 Programming Fundamentals II 
//
//  Due Date:          7/29/21
//
//  Instructor:        Prof. Fred Kumi 
//
//  Chapter:           Chapter 11
//
//  Description:
//     <An explanation of what the program is designed to do>
//
//***************************************************************

#include <iostream>
#include <iomanip>

using namespace std;

void developerInfo();

//***************************************************************
//
//  Function:     main
// 
//  Description:  The main function of the program
//
//  Parameters:   None
//
//  Returns:      Zero (0) 
//
//**************************************************************
int main()
{
    developerInfo();    // Do not delete this statement

    // Write your code here

    system("PAUSE");
    return 0;
}

//***************************************************************
//
//  Function:     developerInfo
// 
//  Description:  The developer's information
//
//  Parameters:   None
//
//  Returns:      N/A 
//
//**************************************************************
void developerInfo()
{
    cout << "Name:    Jessica Page" << endl;
    cout << "Course:  Programming Fundamentals II" << endl;
    cout << "Program: 11"
        << endl
        << endl;
} // End of developer
