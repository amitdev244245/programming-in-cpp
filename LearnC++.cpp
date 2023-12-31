#include <iostream>
using namespace std;

/*----------------------------------------------------------------------------------
#0. Basic Code Syntax of C++.
----------------------------------------------------------------------------------*/
// #include <iostream>
// using namespace std;
// int main(){
//     //code here
//     return 0;
// }

/*----------------------------------------------------------------------------------
#1. Write a program that takes an input of age and prints if you are adult or not.
----------------------------------------------------------------------------------*/

// int main()
// {
//     int age;
//     cin >> age;
//     if (age >= 18)
//     {
//         cout << "Adult";
//     }
//     else
//     {
//         cout << "Not Adult";
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#2. Write a program that takes marks as input and prints the corresponding grades.
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
----------------------------------------------------------------------------------*/

// int main()
// {
//     int marks;
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "F";
//     }
//     else if (marks <= 44)
//     {
//         cout << "E";
//     }
//     else if (marks <= 49)
//     {
//         cout << "D";
//     }
//     else if (marks <= 59)
//     {
//         cout << "C";
//     }
//     else if (marks <= 79)
//     {
//         cout << "B";
//     }
//     else if (marks <= 100)
//     {
//         cout << "A";
//     }
//     else
//     {
//         cout << "Wrong marks entered!";
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#3. Write a program that takes an input of age and prints their eligibility for job.
a. If age < 18,
   print-> not eligible for job
b. If age >= 18 and age<=54,
   print-> eligible for job
c. If age >= 55 and age<=57,
   print-> eligible for job, but retirement soon
d. If age > 57,
   print-> retirement time
----------------------------------------------------------------------------------*/

// int main()
// {
//     int age;
//     cin >> age;
//     if (age < 18)
//     {
//         cout << "Sorry, You are not eligible for job!" << endl;
//     }
//     else if (age >= 18 && age <= 57)
//     {
//         cout << "Congrats, You are eligible for job!";
//         if (age >= 55)
//         {
//             cout << ", but retirement soon!" << endl;
//         }
//     }
//     else
//     {
//         cout << "Retirement Time!" << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#4. Write a program that takes the day number and prints the corresponding day.
for 1: print Monday,
for 2: print Tuesday,
and so on...
for 7: print Sunday
----------------------------------------------------------------------------------*/

// int main()
// {
//     int dayCount;
//     cin >> dayCount;
//     switch (dayCount)
//     {
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Invalid day number!";
//     }
// }

/*----------------------------------------------------------------------------------
#5. Write a program that takes multiple inputs that should be stored in an array.
----------------------------------------------------------------------------------*/

// int main()
// {
//     int arr[5];

//     // method 1:
//     // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     // cout << arr[4];

//     // method 2 - using for loop:
//     // for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
//     // {
//     //     cin >> arr[i];
//     //     cout << "arr[" << i << "] is: " << arr[i] << endl;
//     // }

//     // method 3 - using for-each loop:
//     // for (int i : arr)
//     // {
//     //     cin >> i;
//     //     cout << i << endl;
//     // }
//     // return 0;
// }

/*----------------------------------------------------------------------------------
#6. Pattern Programs
#6.1 Write a program on Rectangular Star Pattern

Example 1:
Input: N = 3
Output:
* * *
* * *
* * *

Example 2:
Input: N = 6
Output:
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
* * * * * *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.2 Write a program on Right-Angled Triangle Pattern

Input Format: N = 3
Result:
*
* *
* * *

Input Format: N = 6
Result:
*
* *
* * *
* * * *
* * * * *
* * * * * *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.3 Write a program on Right-Angled Number Pyramid
Input Format: N = 3
Result:
1
1 2
1 2 3
Input Format: N = 6
Result:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4 5 6
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.4 Write a program on Right-Angled Number Pyramid – II

Input Format: N = 3
Result:
1
2 2
3 3 3

Input Format: N = 6
Result:
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.5 Write a program on Inverted Right Pyramid

Input Format: N = 3
Result:
* * *
* *
*

Input Format: N = 6
Result:
* * * * * *
* * * * *
* * * *
* * *
* *
*
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = n; j >= i; j--)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.6 Write a program on Inverted Numbered Right Pyramid

Input Format: N = 3
Result:
1 2 3
1 2
1

Input Format: N = 6
Result:
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.7 Write a program on Star Pyramid

Input Format: N = 3
Result:
  *
 ***
*****
Input Format: N = 6
Result:
     *
    ***
   *****
  *******
 *********
***********
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int j = 1; j < 2 * i; j++)
//         {
//             cout << "*";
//         }
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.8 Write a program on Inverted Star Pyramid

Input Format: N = 3
Result:
*****
 ***
  *
Input Format: N = 6
Result:
***********
 *********
  *******
   *****
    ***
     *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
//     {
//       cout << "*";
//     }
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.9 Write a program on Diamond Star Pattern

Input Format: N = 3
Result:
  *
 ***
*****
*****
 ***
  *
Input Format: N = 6
Result:
     *
    ***
   *****
  *******
 *********
***********
***********
 *********
  *******
   *****
    ***
     *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= n - i; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 1; j < 2 * i; j++)
//     {
//       cout << "*";
//     }
//     for (int j = 1; j <= n - i; j++)
//     {
//       cout << " ";
//     }
//     cout << endl;
//   }

//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     for (int j = 0; j < (2 * n) - (2 * i + 1); j++)
//     {
//       cout << "*";
//     }
//     for (int j = 0; j < i; j++)
//     {
//       cout << " ";
//     }
//     cout << endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.10 Write a program on Half Diamond Star Pattern

Input Format: N = 3
Result:
  *
  **
  ***
  **
  *
Input Format: N = 6
Result:
     *
     **
     ***
     ****
     *****
     ******
     *****
     ****
     ***
     **
     *
----------------------------------------------------------------------------------*/

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   for(int i = 1; i < n*2; i++){
//     int stars = i;
//     if(i>n) stars=n*2-i;
//     for(int j=1; j<=stars; j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.11 Write a program on Binary Number Triangle Pattern

Input Format: N = 3
Result:
1
01
101

Input Format: N = 6
Result:
1
01
101
0101
10101
010101
----------------------------------------------------------------------------------*/

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin>>n;
//   int start=-1;
//   for(int i=0; i<n; i++){
//     if(i%2==0)  start=1;
//     else start=0;
//     for(int j=0; j<=i; j++){
//       cout<<start;
//       start=1-start;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.12 Write a program on Number Crown Pattern

Input Format: N = 3
Result:
1    1
12  21
123321

Input Format: N = 6
Result:
1          1
12        21
123      321
1234    4321
12345  54321
123456654321
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int spaces = 2 * (n - 1);
//   for (int i = 1; i <= n; i++)
//   {
//     for (int j = 1; j <= i; j++)
//     {
//       cout << j;
//     }

//     for (int j = 1; j <= spaces; j++)
//     {
//       cout << " ";
//     }

//     for (int j = i; j >= 1; j--)
//     {
//       cout << j;
//     }
//     cout << endl;
//     spaces -= 2;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.13 Write a program on Increasing Number Triangle Pattern

Input Format: N = 3
Result:
1
2 3
4 5 6

Input Format: N = 6
Result:
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
16  17  18  19  20  21
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;
//   int num=1;
//   for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//       cout<<num<<" ";
//       num++;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.14 Write a program on Increasing Letter Triangle Pattern

Input Format: N = 3
Result:
A
A B
A B C

Input Format: N = 6
Result:
A
A B
A B C
A B C D
A B C D E
A B C D E F
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (char j = 'A'; j <= 'A' + i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.15 Write a program on Reverse Letter Triangle Pattern

Input Format: N = 3
Result:
A B C
A B
A

Input Format: N = 6
Result:
A B C D E F
A B C D E
A B C D
A B C
A B
A
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (char j = 'A'; j <= 'A' + (n-i-1); j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.16 Write a program on Alpha-Ramp Pattern

Input Format: N = 3
Result:
A
B B
C C C

Input Format: N = 6
Result:
A
B B
C C C
D D D D
E E E E E
F F F F F F
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char print = 'A' + i;
//         for (int j = 0; j <= i; j++)
//         {
//             cout << print << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.17 Write a program on Alpha-Hill Pattern

Input Format: N = 3
Result:
  A
 ABA
ABCBA


Input Format: N = 6
Result:
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             cout << " ";
//         }

//         char ch = 'A';
//         int mid = (i * 2 + 1) / 2;

//         for (int j = 1; j <= 2 * i + 1; j++)
//         {
//             cout << ch;
//             if (j <= mid) ch++;
//             else ch--;
//         }

//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.18 Write a program on Alpha-Triangle Pattern

Input Format: N = 3
Result:
C
B C
A B C

Input Format: N = 6
Result:
F
E F
D E F
C D E F
B C D E F
A B C D E F
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         char ch = 'A' + n - 1;
//         for (char j = ch - i; j <= ch; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*----------------------------------------------------------------------------------
#6.19 Write a program on Symmetric-Void Pattern

Input Format: N = 3
Result:
******
**  **
*    *
*    *
**  **
******

Input Format: N = 6
Result:
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// void stars(int i, int n)
// {
//   for (int j = 1; j <= i; j++)
//   {
//     cout << "*";
//   }
// }

// void spaces(int i, int n)
// {
//   for (int j = 1; j <= n - i; j++)
//   {
//     cout << "  ";
//   }
// }

// int main()
// {
//   int n;
//   cin >> n;

//   for (int i = n; i >= 1; i--)
//   {
//     stars(i, n);
//     spaces(i, n);
//     stars(i, n);
//     cout << endl;
//   }

//   for (int i = 1; i <= n; i++)
//   {
//     stars(i, n);
//     spaces(i, n);
//     stars(i, n);
//     cout << endl;
//   }

//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.20 Write a program on Symmetric-Butterfly Pattern

Input Format: N = 3
Result:
*    *
**  **
******
**  **
*    *


Input Format: N = 6
Result:
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// void stars(int i, int n)
// {
//   for (int j = 1; j <= i; j++)
//   {
//     cout << "*";
//   }
// }

// void spaces(int i, int n)
// {
//   for (int j = 1; j <= n - i; j++)
//   {
//     cout << "  ";
//   }
// }

// int main()
// {
//   int n;
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     stars(i, n);
//     spaces(i, n);
//     stars(i, n);
//     cout << endl;
//   }

//   for (int i = n - 1; i >= 1; i--)
//   {
//     stars(i, n);
//     spaces(i, n);
//     stars(i, n);
//     cout << endl;
//   }

//   return 0;
// }

/*----------------------------------------------------------------------------------
#6.21 Write a program on Hollow Rectangle Pattern

Input Format: N = 3
Result:
***
* *
***

Input Format: N = 6
Result:
******
*    *
*    *
*    *
*    *
******
----------------------------------------------------------------------------------*/

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n;
//   cin >> n;

//   for (int i = 1; i <= n; i++)
//   {
//     for(int j=1; j<=n; j++){
//       if(i==1 || j==1 || i==n || j==n) cout<<"*";
//       else cout<<" ";
//     }
//     cout << endl;
//   }

//   return 0;
// }