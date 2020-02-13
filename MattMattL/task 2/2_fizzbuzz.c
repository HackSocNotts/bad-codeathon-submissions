// Code by Matt L
// ezyml3@nottsingham.ac.uk

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_SIZE_OF_EVERY_ARR 10000000 // (communism???)

char* getUserInputAsString()
{
	char *arrTakeKeyboardInputFromTheUser;

	printf("N = ");

	arrTakeKeyboardInputFromTheUser = (char*)malloc(MAX_SIZE_OF_EVERY_ARR * sizeof(char));

	scanf("%s", arrTakeKeyboardInputFromTheUser);

	return arrTakeKeyboardInputFromTheUser;
}

int convertUserInputToInt(char* arr)
{
	int userInputInInt = 0, countDigit = 0;
	int iterationIndex1 = 0, iterationIndex2 = 0;

	// count #digits
	while(1)
	{
		if(arr[iterationIndex1] == 0)
			break;
		else if(arr[iterationIndex1] != 0)
			countDigit++;
		else
			continue;

		iterationIndex1++;
	}

	printf("[test] # of chars = %d\n", iterationIndex1);

	// cast Char values into Int
	while(1)
	{
		if(arr[iterationIndex2] == 0) { break; }
		else if(arr[iterationIndex2] == 'a') { printf("[error] N cannot contain a\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'b') { printf("[error] N cannot contin b\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'c') { printf("[error] N cannot contain c\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'd') { printf("[error] N cannot contain d\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'e') { printf("[error] N cannot contain e\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'f') { printf("[error] N cannot contain f\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'g') { printf("[error] N cannot contan g\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'h') { printf("[error] N cannot contain h\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'i') { printf("[error] N cannot contain i\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'j') { printf("[error] N cannot contain j\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'k') { printf("[error] N cannot contain k\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'l') { printf("[error] N cannot conanin l\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'm') { printf("[error] N cannot contain m\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'n') { printf("[error] N cannot contain n\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'o') { printf("[error] N cannot contnin o\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'p') { printf("[error] N cannot contain p\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'q') { printf("[error] N cannot contain q\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'r') { printf("[error] N cannot contani r\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 's') { printf("[error] N cannot contain s\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 't') { printf("[error] N cannot contain t\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'u') { printf("[error] N cannot contsain u\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'v') { printf("[error] N cannot contain v\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'w') { printf("[error] N cannot contani w\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'x') { printf("[error] N cannot contain x\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'y') { printf("[error] N cannot contain y\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == 'z') { printf("[error] N cannot contain z\n"); iterationIndex2++; continue; }
		else if(arr[iterationIndex2] == '0') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '1') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '2') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '3') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '4') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '5') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '6') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '7') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '8') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }
		else if(arr[iterationIndex2] == '9') { userInputInInt += pow(10, iterationIndex1 - iterationIndex2 - 1) * (arr[iterationIndex2] -= '0'); }

		iterationIndex2++;
	}

	printf("[test] userIn in Int = %d\n", userInputInInt);

	return userInputInInt;
}

int checkIfMultipleOfThree(int numIn)
{
	return ((!(numIn % 3)) == 1)? 1 : 0;
}

int checkIfMultipleOfFive(int numIn)
{
	return (numIn % 5)? 0 : 1;
}

void printString(char str[])
{
	for(int i=0; ; i++)
	{
		if(str[i] == 0)
			break;

		printf("%c", str[i]);
	}
}

void printInt(int numToPrint)
{
	printf("%d", numToPrint);
}

void iterateToPrintUptoNthResult(int max_iteration)
{
	for(int iterator=1; iterator<=max_iteration; iterator++)
	{
		if(checkIfMultipleOfThree(iterator) & checkIfMultipleOfFive(iterator))
		{
			printString("FizzBuzz");
			printString(", ");
		}
		else if(checkIfMultipleOfThree(iterator))
		{
			printString("Fizz");
			printString(", ");
		}
		else if(checkIfMultipleOfFive(iterator))
		{
			printString("Buzz");
			printString(", ");
		}
		else
		{
			printInt(iterator);
			printString(", ");
		}
	}
}


int main()
{
	// do everything
	iterateToPrintUptoNthResult(convertUserInputToInt(getUserInputAsString()));
	
	return 0;
}




