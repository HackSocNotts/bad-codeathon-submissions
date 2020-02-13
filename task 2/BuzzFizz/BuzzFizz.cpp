// BuzzFizz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>


int check(int value) {
                                    bool c = true;
    int o = value;
    while (c) {
                                        if (o == 0) {
                                            return o;
                                        }
                                        else if (o < 0) {
                                            return o;
                                        }
                                        else {
            o = o - 3;
        }
    }
}

int check1(int value) {
    bool c = true;
							int o = value;
    while (c) {
if (o == 0) {
    return o;
}
                                else if (o < 0) {
                                    return o;
                                }
else {
o = o - 5;
}
    }
}


int main()
{
    std::cout << "UwU";
        
								int i                       =  3;





    int y    = 5;
    std::cout << "\n";
    int     x = 1;
            int result = 0;
    int square = 0,
        c = 0, q = 0;


    for (int l = 0; l < 100; l++) {
        if (check1(l) == result && check(l) == square) {
            std::cout << "fizzbuzz UwU \n";
            for (int n = 0; n < 5 ^ 25; n++) {
                                          std::cout << " UwU ";
                                            }
      for (int n = 0; n < 12; n++) {
                                                                            std::cout << "\n";
                                                 }
        }
        else {
                                            if (check1(l) == c) {
                                                std::cout << "fizz\n";
                                            }
if (check(l) == q) {
																										std::cout << "buzz\n";
}
        }
    }
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
