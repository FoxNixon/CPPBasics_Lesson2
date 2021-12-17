// CPP_Bacics/GB_Lesson2

#include <iostream>
using namespace std;

int main(){

	// Task1 Variable init
	{
		short int word = 256;
		int dword = 32768;
		long long longer = 4'294'967'296;
		char byte = 255;
		bool flag = true;
		float pi = 3.14f;
		double trouble = 3.143030;
	}

	// Task2 enum
	{
		enum Symbol { Zero, Cross, Empty };


		// Task3 Array

		char field[3][3] = { Empty };
	}

	// Task4 Struct

	struct Player {
		char sName[64] = "Unknown";
		short int wScore = 0;
		bool bIsPlayerTurn = false;
	};
	struct Battlefield {
		Player player[2];
		enum Symbol { Zero = 79, Cross = 88, Empty = 0};
		char field[3][3] = { {Zero, Empty, Empty }, {Zero, Empty, Empty }, { Zero, Empty, Empty } };
		unsigned char GameStep;
		bool bIsGameStarted = true;

	} bf;

//	bf.player[0] = { "Valera", 0, false };
	cout << bf.player[0].sName << endl;
	cout << " " << bf.field[0][0] << " | " << bf.field[1][0] << " | " << bf.field[2][0] << endl;
	cout << " " << "---------" << endl;
	cout << " " << bf.field[0][1] << " | " << bf.field[1][1] << " | " << bf.field[2][1] << endl;
	cout << " " << "---------" << endl;
	cout << " " << bf.field[0][2] << " | " << bf.field[0][2] << " | " << bf.field[0][2] << endl;

	//Task5
	{

		struct MyVariant {

			union MyData {
				int dwInteger;
				float fFloat;
				char cChar;
			}myVarData;

			struct Flags {
				bool bIsInt		: 1;
				bool bIsFloat	: 2;
				bool bIsChar	: 3;
			}myVarFlags;
		};
	
		
	}

	return 0;
}