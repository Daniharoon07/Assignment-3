#include "pch.h"
#include "CppUnitTest.h"

extern "C" char rock_paper_scissors(char player1, char player2);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(PLAYER1_ROCK_PLAYER2_SCISSORS_FAILED)
		{ //writing failed test using player1 input as "ROCK" and player2 input "PAPER", with expected result as "PAPER". Test should fail as no source code is 
			
			char player1[8] =  "ROCK";
			char player2[8] =  "PAPER";
			char Result[8] = "PAPER";
			Assert::IsTrue("PAPER"== Result);
		}


		TEST_METHOD(PLAYER1_ROCK_PLAYER2_SCISSORS_SUCCEDED)
		{ //writing Succeded test using player1 input as "ROCK" and player2 input "PAPER", with expected result as "PAPER"

			char player1[8] = "ROCK";
			char player2[8] = "PAPER";
			rock_paper_scissors(player1[8], player2[8]);
			const char Result[8] = "PAPER";
			Assert::IsTrue("PAPER" == Result);
		}





	
	
		
	}; 
}
