// Prob#1_PrintString
/*
#include <iostream>
using namespace std;

int main() {
    cout << "Sykrit";

    return 0;
}
*/

// Prob#2_Input
/*
#include <iostream>
using namespace std;

int main() {
    string name;

    cout << "Enter Your Name: ";
    cin >> name;
    cout << "Your Name: " << name;

    return 0;
}
*/

// Prob#3_DevNumber
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "# Dev_Number #\n";
    cout << "Enter Number: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << num << " is Even.";
    }
    else {
        cout << num << " is ODD.";
    }

    return 0;
}
*/

// Prob#4_HireADriver1
/*
#include <iostream>
using namespace std;

int main() {
    int age;
    bool driverLicence;

    cout << "Enter Your Age: ";
    cin >> age;
    cout << "Do You Have Licence: ";
    cin >> driverLicence;

    if (age > 21 && driverLicence == true) {
        cout << "Hired";
    }
    else {
        cout << "Reject";
    }

    return 0;
}
*/

// Prob#5_HireADriver2
/*
#include <iostream>
using namespace std;

int main() {
    int Age;
    bool driverLicence;
    bool recommand;

    cout << "Enter You Age: ";
    cin >> Age;
    cout << "Do You Have Licence Drive? ";
    cin >> driverLicence;
    cout << "Are You Recommanded? ";
    cin >> recommand;

    if (Age > 21 && driverLicence == true) {
        cout << "Hired";
    } else if (recommand == true) {
        cout << "Hired";
    } else {
        cout << "Reject";
    }

    return 0;
}
*/

// Prob#6_FullName
/*
#include <iostream>
using namespace std;

int main() {
    string fName;
    string lName;

    cout << "Enter your First Name: ";
    cin >> fName;
    cout << "Enter your Last Name:";
    cin >> lName;
    cout << "Full Name: " << fName + " " + lName;

    return 0;
}
*/

// Prob#7_HalfNumber
/*
#include <iostream>
using namespace std;

int main()
{
    float num;
    
    cout << "# Half_Number #\n";
    cout << "Enter Number: ";
    cin >> num;
    float halfNum = num / 2;
    cout << "The Half " << num << " is: " << halfNum;

    return 0;
}
*/

//Prob#8_PassFail
/*
#include <iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter your Mark: ";
    cin >> mark;

    if (mark >= 50) {
        cout << "Pass!";
    }
    else {
        cout << "Fail!";
    }

    return 0;
}
*/

//Prob#9_SumOf3Numbers
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "# Sum_Of_3_Numbers #\n";
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;
    cout << num1 + num2 + num3;

    return 0;
}
*/

//Prob#10_AverageOf3Marks
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "# Average_Of_3_Marks #\n";
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Enter Number 3: ";
    cin >> num3;
    cout << (num1 + num2 + num3) / 3;

    return 0;
}
*/

//Prob#11_PassFail
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter Mark 1: ";
    cin >> num1;
    cout << "Enter Mark 2: ";
    cin >> num2;
    cout << "Enter Mark 3: ";
    cin >> num3;

    int rzlt = num1 + num2 + num3;

    if (rzlt >= 50) {
        cout << "Pass!";
    } else {
        cout << "Fail!";
    }

    return 0;
}
*/

//Prob#12_MaxOf2Numbers
/*
#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cout << "Num 1: ";
    cin >> num1;
    cout << "Num 2: ";
    cin >> num2;

    if (num1 > num2) {
        cout << num1;
    }
    else {
        cout << num2;
    }

    return 0;
}
*/

//Prob#13_MaxOf3Numbers
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Num 1: ";
    cin >> num1;
    cout << "Num 2: ";
    cin >> num2;
    cout << "Num 3: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << num1;
    }
    else if (num2 > num3) {
        cout << num2;
    }
    else {
        cout << num3;
    }

    return 0;
}
*/

//Prob#14_SwapNumbers
/*
#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cout << "# Swap_Numbers #\n";
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "----------------\n";
    cout << "Your INPUT\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "THE OUTPUT\n";
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl; 

    return 0;
}
*/

//Prob#15_ReactangleArea
/*
#include <iostream>
using namespace std;

int main() {
    int hiegth;
    int widgth;

    cout << "# Reactangle_Area #\n";
    cout << "Enter Hieght: ";
    cin >> hiegth;
    cout << "Enter Widgth: ";
    cin >> widgth;
    int recArea = hiegth * widgth;
    cout << "Area: " << recArea;

    return 0;
}
*/

//Prob#16_ReactangelAreaThroughDiagonalAndSideArea
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int aNum, bNum;

    cout << "Enter A Value: ";
    cin >> aNum;
    cout << "Enter B Value: ";
    cin >> bNum;

    int area = aNum * sqrt(aNum * aNum - bNum * bNum);

    cout << "Area: " << area;

    return 0;
}
*/

//Prob#17_TriangleArea
/*
#include <iostream>
using namespace std;

int main() {
    int abr;
    int hit;

    cout << "# Triangle_Area #\n";
    cout << "Enter F.Number: ";
    cin >> abr;
    cout << "Enter H.Number: ";
    cin >> hit;
    int areaTrngl = (abr / 2) * hit;
    cout << "Area: " << areaTrngl;

    return 0;
}
*/

//Prob#18_CircleArea
/*
#include <iostream>
using namespace std;

int main() {
    float Round;

    cout << "Entrer Value: ";
    cin >> Round;

    float area = 3.14 * (Round * Round);

    cout << "Area: " << area;

    return 0;
}
*/

//Prob#19_CircleAreaAndThroughDiameter
/*
#include <iostream>
using namespace std;

int main() {
    float diameter;

    cout << "# Circle_Area_and_Through_Diameter #\n";
    cout << "Enter Diameter: ";
    cin >> diameter;
    float areaCrcl = (3.14 * diameter * diameter) / 4;
    cout << "Area: " << areaCrcl;

    return 0;
}
*/

//Prob#20_InscribedInASquare
/*
#include <iostream>
using namespace std;

int main() {
    float theA;

    cout << "# Inscribed_In_A_Square #\n";
    cout << "Enter A Number: ";
    cin >> theA;
    float areaASqr = (3.14 * (theA * theA)) / 4;
    cout << "Area: " << areaASqr;

    return 0;
}
*/

//Prob#21_CircleAreaAlongTheCircumference
/*
#include <iostream>
using namespace std;

int main() {
    float theLong;

    cout << "# Circle_Area_Along_The_Circumference #\n";
    cout << "Enter Lounge: ";
    cin >> theLong;
    float areaLong = (theLong * theLong) / (4 * 3.14);
    cout << "Area: " << areaLong;

    return 0;
}
*/

//Prob#22_CircleAreaInscribedInAnIsoscelesTriangle
/*
#include <iostream>
using namespace std;

int main() {
    float theA;
    float theB;

    cout << "# Circle_Area_Inscribed_In_An_Isosceles_Triangle #\n";
    cout << "Enter Number One: ";
    cin >> theA;
    cout << "Enter Number Two: ";
    cin >> theB;
    float areaCrInSt = (3.14 * theB * theB / 4) * ((2 * theA - theB) / (2 * theA * theB));
    cout << "Area: " << areaCrInSt;

    return 0;
}
*/

//Prob#23_CircleAreaCircleDescribedAroundAnArbitraryTriangle
/*
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float numA, numB, numC;

    cout << "Enter Num1: ";
    cin >> numA;
    cout << "Enter Num2: ";
    cin >> numB;
    cout << "Enter Num3: ";
    cin >> numC;

    float part = (numA + numB + numC) / 2;
    float Pi = 3.14;
    float calc = (numA * numB * numC) / (4 * sqrt(part * (part - numA) * (part - numB) * (part - numC)));
    float area = Pi * calc * calc;

    cout << "Area: " << area;

    return 0;
}
*/

//Prob#24_ValidateAgeBetween18and45
/*
#include <iostream>
using namespace std;

int main() {
    int Age;

    cout << "Enter your Age: ";
    cin >> Age;

    if (Age >= 18 && Age <= 45) {
        cout << "Valide Age!";
    }
    else {
        cout << "Invalide Age!";
    }

    return 0;
}
*/

//Prob#25_ReadUntilAgeBetween18and45__Do/While
/*
#include <iostream>
using namespace std;

int main() {
    int age;

    do {
        cout << "Enter your Age: ";
        cin >> age;

        if (age >= 18 && age <= 45) {
            cout << "Valide Age!\n";
        }
        else {
            cout << "Invalide Age!\n";
        }
    }

    while (!(age >= 18 && age <= 45));

    return 0;
}
*/

//Prob#26_PrintNumberFrom0ToN__For Loop
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Num: ";
    cin >> num;

    for (int i = 0; i <= num; i++) {
        cout << i << endl;
    }

    return 0;
}
*/

//Prob#27_PrintNumberFromNTo0
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Num: ";
    cin >> num;

    for (int i = num; i >= 0; i--) {
        cout << i << endl;
    }

    return 0;
}
*/

//Prob#28_SumOddNumberFrom1ToN
/*
#include <iostream>
using namespace std;

int main() {
    int num;
    
        cout << "Enter Num: ";
        cin >> num;

        int sum = 0;

        if (num % 2 != 0) {
            for (int i = 0; i <= num; i++) {
                sum += i;
            }
            cout << "Sum Of Odd Number: " << sum << endl;
    }
    return 0;
}
*/

//Prob#29_SumEvenNumberFrom1ToN
/*
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Num: ";
    cin >> num;

    int sum = 0;

    if (num % 2 == 0) {
        for (int i = 0; i <= num; i++) {
            sum += i;
        }
        cout << "Sum Of Even Number: " << sum << endl;
    }
    return 0;
}
*/

//Prob#30_FactorialOfN!
/*
#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Enter Num: ";
    cin >> num;

    int facto = 1;

    for (int i = 1; i <= num; i++) {
        facto *= i;
    }
    cout << "The Factorial is: " << facto << endl;
    
    return 0;
}
*/

//Prob#31_PowerOf2,3,4
/*
#include <iostream>
using namespace std;

int main() {
    float numOf;

    cout << "# Power_Of_2,3,4 #\n";
    cout << "Enter Number: ";
    cin >> numOf;
    float pOf_2 = numOf * numOf;
    float pOf_3 = numOf * numOf * numOf;
    float pOf_4 = numOf * numOf * numOf * numOf;
    cout << "- " << numOf << " Power of 2: " << pOf_2 << endl;
    cout << "- " << numOf << " Power of 3: " << pOf_3 << endl;
    cout << "- " << numOf << " Power of 4: " << pOf_4 << endl;

    return 0;
}
*/

//Prob#32_PowerNofM
/*
#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cout << "Enter Num 1: ";
    cin >> num1;
    cout << "Enter Power Of Num 2: ";
    cin >> num2;

    int pow = 1;

     if (num2 == 0) {
        cout << "Result: " << pow;
        return 0;
    } 

    for (int i = 1; i <= num2; i++) {
        pow *= num1;
    }
    cout << "Result: " << pow;

    return 0;
}
*/

//Prob#33_Grade/A,B,C,D,E,F
/*
#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Enter Your Grade: ";
    cin >> grade;

    if (grade >= 90) {
        cout << "A";
    }
    else if (grade >= 80) {
        cout << "B";
    }
    else if (grade >= 70) {
        cout << "C";
    }
    else if (grade >= 60) {
        cout << "D";
    }
    else if (grade >= 50) {
        cout << "E";
    }
    else {
        cout << "F";
    }

    return 0;
}
*/

//Prob#34_CommissionPercentage
/*
#include <iostream>
using namespace std;

int main() {
    float totalSales;
    float perCnt;

    cout << "Enter Total Sales: ";
    cin >> totalSales;

    if (totalSales >= 1000000) {
        perCnt = 0.01;
    }
    else if (totalSales >= 500000) {
        perCnt = 0.02;
    }
    else if (totalSales >= 100000) {
        perCnt = 0.03;
    }
    else if (totalSales >= 50000) {
        perCnt = 0.05;
    }
    else {
        perCnt = 0;
    }

    float ttlComsn = perCnt * totalSales;

    cout << "Your Commission: " << ttlComsn;

    return 0;
}
*/

//Prob#35_PiggyBankCalculator
/*
#include <iostream>
using namespace std;

int main() {
    float pennies;
    float nickels;
    float dimes;
    float quarters;
    float dollars;

    cout << "# Piggy_Bank_Calculator #\n";
    cout << "Enter Pennies: ";
    cin >> pennies;
    cout << "Enter Nickels: ";
    cin >> nickels;
    cout << "Enter Dimes: ";
    cin >> dimes;
    cout << "Enter Quarters: ";
    cin >> quarters;
    cout << "Enter Dollars: ";
    cin >> dollars;
    float totalPennies = pennies * 1 + nickels * 5 + dimes * 10 + quarters * 25 + dollars * 100;
    float totalDollarts = totalPennies / 100;
    cout << "Total Pennies: " << totalPennies << endl;
    cout << "Total Dollarts: " << totalDollarts;

    return 0;
}
*/

//Prob#36_SimpleCalculator
/*
#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char opr;

    cout << "Enter Num1: ";
    cin >> num1;
    cout << "Operator? ";
    cin >> opr;
    cout << "Enter Num2: ";
    cin >> num2;

    if (opr == '+') {
        cout << "Result : " << num1 + num2;
    }
    else if (opr == '-') {
        cout << "Result : " << num1 - num2;
    }
    else if (opr == '*') {
        cout << "Result : " << num1 * num2;
    }
    else if (opr == '/') {
        cout << "Result : " << num1 / num2;
    }
    else {
        cout << "Wrong Operation";
    }

    return 0;
}
*/

//Prob#37_SumUntil-99
/*
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    do {
    cout << "[-99] * Enter Num: ";
    cin >> num;
    if (num == -99) {
        cout << "Result : " << sum;
    }
    else {
        sum += num;
    }
    } while (num != -99);

    return 0;
}
*/

//Prob#38_IsPrimeNumber
/*
////Solve_1////
#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Enter Num: ";
        cin >> num;
        if (num > 0) {
            int cntr = 2;
            if (num <= cntr) {
                cout << "Is Prime";
            }
            else if (num % cntr == 0) {
                cout << "Not Prime";
            }
            else if (cntr == num - 1) {
                cout << "Is Prime";
            }
            else {
                cntr += 1;
            }
        }
        else {
            cout << "Number Must Be > 0\n";
        }
    } while (num == 0);

    return 0;
}
*/

/*
////Solve_2////

#include <iostream>
using namespace std;

int main() {
    int num;
    int cntr = 2;

    do {
        cout << "Enter Number: ";
        cin >> num;

        if (num > 0) {
            int mtr = round(num / 2);
        } else {
            cout << "Number Must Be > 0";
    }
        if (num <= cntr) {
            cout << "Is Prime";
        }
        else {
            cntr += 1;
        }
        if (num % cntr = 0) {
            cout << "Not Prime";
        }
    } while (num < 0);

    return 0;
}
*/

//Prob#39_PayRemainder
/*
#include <iostream>
using namespace std;

int main() {
    float totalBill, cashPaid;

    cout << "# Pay_Remainder #\n";
    cout << "Enter Total Bill: ";
    cin >> totalBill;
    cout << "Enter Cash Paid: ";
    cin >> cashPaid;
    float remainder = cashPaid - totalBill;
    cout << "Remainder: " << remainder;

    return 0;
}
*/

//Prob#40_ServiceFeeAndSalesTax
/*
#include <iostream>
using namespace std;

int main() {
    float billValue;

    cout << "# Service_Fee_and_Sales_Tax #\n";
    cout << "Enter Bill Value: ";
    cin >> billValue;
    float totalBill = billValue * 1.1;
    float totalBill_X = totalBill * 1.16;
    cout << "Total Bill: " << totalBill_X;

    return 0;
}
*/

//Prob#41_WeeksAndDays
/*
#include <iostream>
using namespace std;

int main() {
    int hours;

    cout << "Enter Num Hours: ";
    cin >> hours;

    int days = hours / 24;
    int weeks = days / 7;

    cout << "Weeks: " << weeks << endl;
    cout << "Days: " << days << endl;

    return 0;
}
*/

//Prob#42_TaskDurationInSeconds
/*
#include <iostream>
using namespace std;

int main() {
    int numOfDays;
    int numOfHours;
    int numOfMinuts;
    int numOfSeconds;

    cout << "# Task_Duration_In_Seconds #\n";
    cout << "Enter Numbers of Days: ";
    cin >> numOfDays;
    cout << "Enter Numbers of Hours: ";
    cin >> numOfHours;
    cout << "Enter Numbers of Minuts: ";
    cin >> numOfMinuts;
    cout << "Enter Numbers of Seconds:";
    cin >> numOfSeconds;
    int totalSeconds = (numOfDays * 24 * 60 * 60) + (numOfHours * 60 * 60) + (numOfMinuts * 60) + numOfSeconds;
    cout << "Total Seconds: " << totalSeconds;

    return 0;
}
*/

//Prob#43_SecondsToDays,Hours,Minutes,Seconds
/*
#include <iostream>
using namespace std;

int main() {
    int totalSeconds;

    cout << "# Seconds_To_Days,Hours,Minutes,Seconds #\n";
    cout << "Enter Total Seconds: ";
    cin >> totalSeconds;
    int SecPerDay = 24 * 60 * 60;
    int SecPerHour = 60 * 60;
    int SecPerMinute = 60;
    int numOfDays = floor(totalSeconds / SecPerDay);
    int remainder_1 = totalSeconds % SecPerDay;
    int numOfHours = floor(remainder_1 / SecPerHour);
    int remainder_2 = remainder_1 % SecPerDay;
    int numOfMinutes = floor(remainder_2 / SecPerMinute);
    int remainder_3 = remainder_2 % SecPerMinute;
    int numOfSeconds = remainder_3;
    cout << numOfDays << ":" << numOfHours << ":" << numOfMinutes << ":" << numOfSeconds;

    return 0;
}
*/

//Prob#44_DayOfWeek
/*
#include <iostream>
using namespace std;

int main() {
    int day;

    cout << "Enter Day Num: ";
    cin >> day;

    if (day == 1) {
        cout << "It's Mon";
    }
    else if (day == 2) {
        cout << "Tue";
    }
    else if (day == 3) {
        cout << "Wed";
    }
    else if (day == 4) {
        cout << "Thu";
    }
    else if (day == 5) {
        cout << "Fri";
    }
    else if (day == 6) {
        cout << "Sat";
    }
    else if (day == 7) {
        cout << "Sun";
    }
    return 0;
}
*/

//Prob#45_MonthOfYear
/*
#include <iostream>
using namespace std;

int main() {
    int month;

    do {
        cout << "Enter Num Month: ";
        cin >> month;

        if (month >= 1 && month <= 12) {
            if (month == 1) {
                cout << "Jan";
            }
            else if (month == 2) {
                cout << "Feb";
            }
            else if (month == 3) {
                cout << "Mar";
            }
            else if (month == 4) {
                cout << "Apr";
            }
            else if (month == 5) {
                cout << "May";
            }
            else if (month == 6) {
                cout << "Jun";
            }
            else if (month == 7) {
                cout << "Jul";
            }
            else if (month == 8) {
                cout << "Aug";
            }
            else if (month == 9) {
                cout << "Sep";
            }
            else if (month == 10) {
                cout << "Oct";
            }
            else if (month == 11) {
                cout << "Nov";
            }
            else if (month == 12) {
                cout << "Dec";
            }
        }
        else {
            cout << "Wrong Month\n";
        }
    }

    while (!(month >= 1 && month <= 12));

    return 0;
}
*/

//Prob#46_PrintLettersFromAtoZ
/*
#include <iostream>
using namespace std;

int main() {
    for (int i = 'A'; i <= 'Z'; i++) {
        cout << "Char: " << i << endl;
    }
    return 0;
}
*/

//Prob#47_LoanInstalmentMonths
/*
#include <iostream>
using namespace std;

int main() {
    float loanAmount;
    float monthlyInstallment;

    cout << "# Loan_Instalment_Months #\n";
    cout << "Enter Loan Amount: ";
    cin >> loanAmount;
    cout << "Enter Monthly Installment: ";
    cin >> monthlyInstallment;
    float totalMonths = loanAmount / monthlyInstallment;
    cout << "Total Months: " << totalMonths << " Months.";

    return 0;
}
*/

//Prob#48_MonthlyLoanInstallment
/*
#include <iostream>
using namespace std;

int main() {
    float loanAmount, howManyMonths;

    cout << "# Monthly_Loan_Installment #\n";
    cout << "Enter Loan Amount: ";
    cin >> loanAmount;
    cout << "Enter How Many Months: ";
    cin >> howManyMonths;
    float monthlyInstallment = loanAmount / howManyMonths;
    cout << "Monthly Installment: " << monthlyInstallment;

    return 0;
}
*/

//Prob#49_ATM_PIN
/*
#include <iostream>
using namespace std;

int main() {
    int pin;
    
    do {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == 1234) {
            int balance = 7500;
            cout << "Your Balance: " << balance;
        }
        else {
            cout << "Wrong PIN\n";
        }
    } while (!(pin == 1234));
    return 0;
}
*/

//Prob#50_ATM_PIN_3Times
/*
#include <iostream>
using namespace std;

int main() {
    int pin;
    int fcnt = 0;

    do {
        cout << "Enter PIN: ";
        cin >> pin;

        if (pin == 1234) {
            int balance = 7500;
            cout << "Your Balance: " << balance;
        }
        else {
            cout << "Wrong PIN\n";
        }
        fcnt += 1;
        if (fcnt == 3) {
            cout << "Card Locked\n";
            break;
        }
    } while (!(pin == 1234));
    return 0;
}
*/


//18/19/20 use ceil func
//21/22 use floor func
//23/31/32/42/43 use round func


//______________________HOME-WORK
/*
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "# Relational Operators #\n";
    cout << "Please enter the first number A? ";
    cin >> num1;
    cout << "Please enter the second number B? ";
    cin >> num2;

    cout << num1 << " == " << num2 << " is: " << (num1 == num2) << endl;
    cout << num1 << " != " << num2 << " is: " << (num1 != num2) << endl;
    cout << num1 << "  > " << num2 << " is: " << (num1 > num2) << endl;
    cout << num1 << " <  " << num2 << " is: " << (num1 < num2) << endl;
    cout << num1 << " >= " << num2 << " is: " << (num1 >= num2) << endl;
    cout << num1 << " <= " << num2 << " is: " << (num1 <= num2) << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    bool xk_0_1 = 12 >= 12;
    bool xk_0_2 = !(12 >= 12);
    bool xk_0_3 = 1 && 1;
    bool xk_0_4 = (7 == 7) && (7 > 5);
    cout << "# Logical_Operations_1 #\n";
    cout << xk_0_1 << " | " << xk_0_2 << " | " << xk_0_3 << " | " << xk_0_4 << endl;

    bool xk_1_1 = 12 > 7;
    bool xk_1_2 = !(12 < 7);
    bool xk_1_3 = true && 0;
    bool xk_1_4 = (7 == 7) && (7 < 5);
    cout << xk_1_1 << " | " << xk_1_2 << " | " << xk_1_3 << " | " << xk_1_4 << endl;

    bool xk_2_1 = 8 < 6;
    bool xk_2_2 = !(8 < 6);
    bool xk_2_3 = 0 || 1;
    bool xk_2_4 = (7 == 7) || (7 < 5);
    cout << xk_2_1 << " | " << xk_2_2 << " | " << xk_2_3 << " | " << xk_2_4 << endl;

    bool xk_3_1 = 8 == 8;
    bool xk_3_2 = !(8 == 8);
    bool xk_3_3 = 0 || 0;
    bool xk_3_4 = (7 < 7) || (7 > 5);
    cout << xk_3_1 << " | " << xk_3_2 << " | " << xk_3_3 << " | " << xk_3_4 << endl;

    bool xk_4_1 = 12 <= 12;
    bool xk_4_2 = !(12 <= 12);
    bool xk_4_3 = !0;
    bool xk_4_4 = !(7 == 7) && (7 > 5);
    cout << xk_4_1 << " | " << xk_4_2 << " | " << xk_4_3 << " | " << xk_4_4 << endl;

    bool xk_5_1 = 7 == 5;
    bool xk_5_2 = !(7 == 5);
    bool xk_5_3 = !(1 || 0);
    bool xk_5_4 = (7 == 7) && !(7 < 5);
    cout << xk_5_1 << " | " << xk_5_2 << " | " << xk_5_3 << " | " << xk_5_4 << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
    cout << "# Logical_Operations_2 #\n";
    bool slv_1 = (5 > 6 && 7 == 7) || (1 || 0);
    cout << slv_1 << endl;

    bool slv_2 = !(5 > 6 && 7 == 7) || (1 || 0);
    cout << slv_2 << endl;

    bool slv_3 = !(5 > 6 && 7 == 7) || !(1 || 0);
    cout << slv_3 << endl;

    bool slv_4 = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << slv_4 << endl;

    bool slv_5 = ((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true;
    cout << slv_5 << endl;

    bool slv_6 = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true;
    cout << slv_6 << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

struct stOwnerAdd {
    string address;
    string country;
};

struct stPcOwner {
    string nameOwnr;
    int phone;
    stOwnerAdd Wher;
};

struct stPc {
    string name;
    string os;
    int storage;
    stPcOwner Owner;
};

int main() {
    cout << "# Stracturs #\n";
    stPc Pc_1, Pc_2;

    Pc_1.name = "HP";
    Pc_1.os = "Linux";
    Pc_1.storage = 512;
    Pc_1.Owner.nameOwnr = "SykRit";
    Pc_1.Owner.phone = 404;
    Pc_1.Owner.Wher.address = "ba3abak zok lfil";
    Pc_1.Owner.Wher.country = "USA";

    Pc_2.name = "ASUS";
    Pc_2.os = "Windows";
    Pc_2.storage = 1024;
    Pc_2.Owner.nameOwnr = "Abbass";
    Pc_2.Owner.phone = 15683299;
    Pc_2.Owner.Wher.address = "rue nassr lfath etg. 5 no. 30";
    Pc_2.Owner.Wher.country = "Canada";

    cout << "Device: " << Pc_1.name << endl;
    cout << "OS: " << Pc_1.os << endl;
    cout << "Storage: " << Pc_1.storage << endl;
    cout << "Owner Name: " << Pc_1.Owner.nameOwnr << endl;
    cout << "Owner Phone: " << Pc_1.Owner.phone << endl;
    cout << "Address :" << Pc_1.Owner.Wher.address << endl;
    cout << "Country: " << Pc_1.Owner.Wher.country << endl;
    cout << endl;
    cout << "Device: " << Pc_2.name << endl;
    cout << "OS: " << Pc_2.os << endl;
    cout << "Storage: " << Pc_2.storage << endl;
    cout << "Owner Name: " << Pc_2.Owner.nameOwnr << endl;
    cout << "Owner Phone: " << Pc_2.Owner.phone << endl;
    cout << "Address :" << Pc_2.Owner.Wher.address << endl;
    cout << "Country: " << Pc_2.Owner.Wher.country << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

enum enType {Human=101, Robot=404, Alian=666};
enum enTask {Sleep, Eat, Drink, Work, Dance};
enum enOption {Server, Admin, Visitor};
enum enColor {Black, Gray, White, Red, Green, Yellow, Purpule};

int main() {
    cout << "# Enum #\n";

    enType Type;
    enTask Task;
    enOption Option;
    enColor Color;

    Type = enType::Alian;
    Task = enTask::Work;
    Option = enOption::Admin;
    Color = enColor::Black;

    cout << Type << endl;
    cout << Task << endl;
    cout << Option << endl;
    cout << Color << endl;

    return 0;
}
*/

/*
#include <iostream>
using namespace std;

enum enGender {Male, Female};
enum enPersonalityType {ENTP, INTP, ESPT, ENTJ, INTJ};
enum enVocation {Beach, Mountain, Forest};

struct stAvaliablity {
    bool Active;
};

struct stStyle {
    string Clothes;
    string Generation;

    stAvaliablity isActive;
};

struct stInfo {
    string Higth;
    string Poid;

    stStyle Style;
};

struct stPerson {
    string Name;
    string Age;
    string Status;

    stInfo Info;

    enGender Gender;
    enPersonalityType Personality;
    enVocation Vocation;
};

int main() {
    stPerson person1;

    person1.Name = "Khchla3a";
    person1.Age = "19";
    person1.Status = "Single";
    person1.Gender = enGender::Female;
    person1.Personality = enPersonalityType::ENTJ;
    person1.Vocation = enVocation::Beach;
    person1.Info.Higth = "170";
    person1.Info.Poid = "65";
    person1.Info.Style.Clothes = "Hip-Hop";
    person1.Info.Style.Generation = "1980";
    person1.Info.Style.isActive.Active = true;

    stPerson person2;

    person2.Name = "Abbass";
    person2.Age = "34";
    person2.Status = "Married";
    person2.Gender = enGender::Male;
    person2.Personality = enPersonalityType::ENTP;
    person2.Vocation = enVocation::Forest;
    person2.Info.Higth = "180";
    person2.Info.Poid = "86";
    person2.Info.Style.Clothes = "RAP";
    person2.Info.Style.Generation = "1999";
    person2.Info.Style.isActive.Active = false;

    cout << "Name: " << person1.Name << endl;
    cout << "Age: " << person1.Age << endl;
    cout << "Status: " << person1.Gender << endl;
    cout << "Personality: " << person1.Personality << endl;
    cout << "Vocation: " << person1.Vocation << endl;
    cout << "Higth: " << person1.Info.Higth << endl;
    cout << "Poid: " << person1.Info.Poid << endl;
    cout << "Clothes Style: " << person1.Info.Style.Clothes << endl;
    cout << "Generation: " << person1.Info.Style.Generation << endl;
    cout << "Avaliable: " << person1.Info.Style.isActive.Active << endl;
    cout << endl;
    cout << "Name: " << person2.Name << endl;
    cout << "Age: " << person2.Age << endl;
    cout << "Status: " << person2.Gender << endl;
    cout << "Personality: " << person2.Personality << endl;
    cout << "Vocation: " << person2.Vocation << endl;
    cout << "Higth: " << person2.Info.Higth << endl;
    cout << "Poid: " << person2.Info.Poid << endl;
    cout << "Clothes Style: " << person2.Info.Style.Clothes << endl;
    cout << "Generation: " << person2.Info.Style.Generation << endl;
    cout << "Avaliable: " << person2.Info.Style.isActive.Active << endl;

    return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "43.22";

    double toDouble = stod(str);
    float toFloat = stof(str);
    int toInt = stoi(str);

    cout << "String to Double: " << toDouble << endl;
    cout << "String to Float: " << toFloat << endl;
    cout << "String to Integer: " << toInt << endl;
    cout << endl;

    int num1 = 20;

    string toStr1 = to_string(num1);

    cout << "Intrger to String: " << toStr1 << endl;
    cout << endl;

    double num2 = 33.5;

    string toStr2 = to_string(num2);

    cout << "Double to String: " << toStr2 << endl;
    cout << endl;

    float num3 = 55.23;

    int num0;
    string toStr3 = to_string(num3);

    //num0 = num3;
    //num0 = (int)num3;
    num0 = int(num3);

    cout << "Float to String: " << toStr3 << endl;
    cout << "Float to Integer: " << num0 << endl;
    cout << endl;

    return 0;
}
*/