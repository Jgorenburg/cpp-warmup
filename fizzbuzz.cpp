// Name:
// Date:

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
   int X, Y, N;
   cin >> X;
   cin >> Y;
   cin >> N;

   // Your code here
   
   try {
	   if (N >= 1) {
		   string out;

		   for (int i = 1; i <= N; i++) {
			   out = std::to_string(i);

			   if (remainder(i, X) == 0) {
				   out = "fizz";

				   if (remainder(i, Y) == 0) {
					   out = out + "buzz";
				   }

			   }
			   else if (remainder(i, Y) == 0) {
				   out = "buzz";
			   }
			   cout << out << endl;
		   }
	   }
	   else {
		   throw(N);
	   }
   }
   catch (int num){
	   cout << "error: N must be greater then or equal to 1" << endl;
	   cout << "N is " << num;
   }




}

