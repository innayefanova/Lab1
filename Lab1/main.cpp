//
//  email: innayefanova@icloud.com
//  Lab1
//
//  Created by Inna Yefanova on 2/22/23.
//

// This program collects input from user:
// amount of quarters, dimes, nickles and pennies.
// Once the variables are announced and input is collected,
// the program calculates total amount of money of the user.

#include <iostream>
using namespace std;

int main()
{
   // Stating the author of the program
   cout << "Solution provided by Inna Yefanova.\n";
   // Announcing variables and collecting input from user
   int quarters;
   cout << "Please enter amount of quarters: ";
   cin >> quarters;
   int dimes;
   cout << "Please enter amount of dimes: ";
   cin >> dimes;
   int nickles;
   cout << "Please enter amount of nickles: ";
   cin >> nickles;
   int pennies;
   cout << "Please enter amount of pennies: ";
   cin >> pennies;

   // Calculating total amount of money
   double total;
   total = quarters * 0.25 + dimes * 0.1 + nickles * 0.05 + pennies * 0.01;

   // Output collected infromation and calculation results
   cout << "The total value of " << quarters << " quarters, ";
   cout << dimes << " dimes, ";
   cout << nickles << " nickles and ";
   cout << pennies << " pennies is ";
   cout <<"$" << total << endl;

   return 0;

   // Testrun of the program:
   // Solution provided by Inna Yefanova.
   // Please enter amount of quarters: 3
   // Please enter amount of dimes: 0
   // Please enter amount of nickles: 5
   // Please enter amount of pennies: 23
   // The total value of 3 quarters, 0 dimes, 5 nickles and 23 pennies is $1.23
   // Program ended with exit code: 0
}
