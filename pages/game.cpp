//Jeopardy
//This game will simulate a round of Jeopardy with 25 questions including two hidden daily doubles!
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <time.h>
#include <iomanip>

using namespace std;
int main(void)
{
	int bet, players, points, categories, ma = 0, wager, a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, repeat20 = 0;
	int g = 0, h = 0, i = 0, j = 0, k = 0;
	int repeat = 0, repeat1 = 0, repeat2 = 0, repeat3 = 0, repeat4 = 0;
	int repeat5 = 0, repeat6 = 0, repeat7 = 0, repeat8 = 0, repeat9 = 0, repeat10 = 0, repeat11 = 0, repeat12 = 0;
	float total = 0, daily=0;
	string answer,dummy;
	system("COLOR f1"); //adds color to background and text 
	cout << "Welcome to Jeopardy! " << endl; 
	////////////////////////////////////////////////
	//Pretext before game but must know!

	cout << "Please make sure to capitalize the first letter of every word in your answer!" << endl; 


	for (ma; ma < 26; ma++)
	{
		cout << "The categories are Science (1), History(2), Homonyms (3), Sports (4), Literature(5)" << endl;
		cout << "What category would you like to choose? " << endl;
		cin >> categories;
		cout << "How many points will it be for (100=1,200=2,300=3,400=4,500=5)" << endl;
		cin >> points;
		//////////////////////
		//if you select Science as category one will go to case structure containing the 5 questions for Science Category
		//for if you select categories as 1 
		if (categories == 1) 
		{
			switch (points)
			{
			case (1) :
			{
				if (a == 0){
					cout << "This is the symbol for Silver according to the periodic table? " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Ag")
					{
						cout << "Correct + 100 points " << endl;
						total += 100;

					}
					else
					{
						cout << "Incorrect - 100 points " << endl;
						total -= 100;

					}
					a++;
				
				}
				else{
					cout << "You already did this question. \n";
				
				}
				break;
			}
			case (2) :
			{
				if (b == 0)
				{
					cout << "This is where photosynthesis occurs in the plant cell  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Chloroplasts") || (answer == "Chloroplast"))
					{

						cout << "Correct + 200 points " << endl;
						total += 200;
					}
					else
					{
						cout << "Incorrect - 200 points " << endl;
						total -= 200;

					}
				
					b++;
				}
				else{
					cout << "You already did this question. \n";

				}
				break;
			}
			case (3) :
			{
				if (c == 0)
				{
					cout << "This is the heritable trait that gives you the advantage due to natural selection  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Adaptation")
					{

						cout << "Correct + 300 points " << endl;
						total += 300;
					}
					else
					{
						cout << "Incorrect - 300 points " << endl;
						total -= 300;
					}
					c++;
				
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (4) :
			{
				if (d == 0)
				{
					cout << "This is the amount of energy required to raise one gram of water one degree Celsisus?  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "One") || (answer == "1 Calorie"))
					{

						cout << "Correct + 400 points " << endl;
						total += 400;
					}
					else
					{
						cout << "Incorrect - 400 points " << endl;
						total -= 400;
					}

					d++;
				
				}
				else{
					cout << "You already did this question. \n";
					

				}
				break;
			}
			case (5) :
			{
				if (e == 0)
				{
					cout << "This is how many days it takes for the Moon to complete a full orbit " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "27") || (answer == "Twenty-Seven"))
					{

						cout << "Correct + 500 points " << endl;
						total += 500;
					}
					else
					{
						cout << "Incorrect - 500 points " << endl;
						total -= 500;
					}
					e++;
				
				}
				else{
					cout << "You already did this question. \n";
					

				}
				break;
			}
			default:
			{
				cout << "Please make a correct selection" << endl;
				break;
			}
			}
		}

		if (categories == 2)
		{
			switch (points)
			{
			case (1) :
			{
				if (f == 0)
				{
					cout << "This meeting in Philadelphia in 1787 met to discuss the weaknesses of the Articles of the Confederation";
					cout << " and would lay the groundwork for what important"; 
					cout << " document essential to the founding of the United States " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Constitution")
					{
						cout << "Correct + 100 points " << endl;
						total += 100;
					}
					else
					{
						cout << "Incorrect - 100 points " << endl;
						total -= 100;
					}

					f++;

				}
				else{
					cout << "You already did this question. \n";
				
				}
				break;
			}
			case (2) :
			{
				if (g == 0)
				{
					cout << "This Federalist served as the first Secretary of the Treasury and advanced policies";
					cout << " that favored the wealthy finance man and seaport merchants of the northeastern United States  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Alexander Hamilton")
					{

						cout << "Correct + 200 points " << endl;
						total += 200;
					}
					else
					{
						cout << "Incorrect - 200 points " << endl;
						total -= 200;
					}
					g++;
					
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (3) :
			{
				if (h == 0)
				{
					cout << "This man once said, My fellow Americans, ask not what your country can do for you";
					cout << ", ask what you can do for your country? " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "JFK") || (answer =="John F. Kennedy"))
					{

						cout << "Correct + 300 points " << endl;
						total += 300;
					}
					else
					{
						cout << "Incorrect - 300 points " << endl;
						total -= 300;
					}
					h++;
				
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (4) :
			{
				if (i == 0)
				{
					cout << "This man was known as the Nation of Islam's most effective minister until he broke from the group";
					cout << " in 1964 and formed his own group, the Organization of Afro-American Unity?  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Malcolm X") || (answer == "Malcolm x"))
					{

						cout << "Correct + 400 points " << endl;
						total += 400;
					}
					else
					{
						cout << "Incorrect - 400 points " << endl;
						total -= 400;
					}

					i++;
				
				}
				else{
					cout << "You already did this question. \n";
					

				}
				break;
			}
			case (5) :
			{
				if (repeat20 == 0)
				{
					cout << "Who coined the phrase, the Gilded Age" << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Mark Twain")
					{

						cout << "Correct + 500 points " << endl;
						total += 500;
					
					}
					else
					{
						cout << "Incorrect - 500 points " << endl;
						total -= 500;
						
					}
					repeat20++;
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
				}
			default:
			{
				cout << "Please make a correct selection" << endl;
				break;
			}
			}
		}
		if (categories == 3)
		{
			switch (points)
			{
			case (1) :
			{
				if (j == 0)
				{
					cout << "A single thing or the team that got the most points " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Won") || (answer == "One"))
					{
						cout << "Correct + 100 points " << endl;
						total += 100;

					}
					else
					{
						cout << "Incorrect - 100 points " << endl;
						total -= 100;

					}
					j++;
					
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (2) :
			{
				if (k == 0)
				{
					cout << "A twosome or fruit  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Pair") || (answer == "Pear"))
					{

						cout << "Correct + 200 points " << endl;
						total += 200;

					}
					else
					{
						cout << "Incorrect - 200 points " << endl;
						total -= 200;

					}

					k++;
				}
				else{
					cout << "You already did this question. \n";

				
				}
				break;
			}

			case (3) :
			{
				if (repeat == 0)
				{
					cout << "A musical group or something that is forbidden " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Band") || (answer == "Banned"))
					{

						cout << "Correct + 300 points " << endl;
						total += 300;
						
					}
					else
					{
						cout << "Incorrect - 300 points " << endl;
						total -= 300;
						
					}
					repeat++;
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (4) :
			{
				if (repeat1 == 0)
				{
					daily++;
					if (daily == 1)
					{
						cout << "Congrats you found the Daily Double!" << endl;
						do{
							cout << "You can only bet up to 1000" << endl; 
							cout << "How many points would you like to wager?" << endl;
							cin >> wager;
						} while ((wager >= 1000) && (total <= 0));
						
							cout << "A walkway or an island.  " << endl;
							getline(cin, dummy);
							getline(cin, answer);

							if ((answer == "Isle") || (answer == "Aisle"))
							{

								cout << "Correct + " << wager << " points " << endl;
								total += wager;
							
							}
							else
							{
								cout << "Incorrect - " << wager << " points " << endl;
								total -= wager;
							
							}
							repeat1++;
						
					}
				}
				else{
					cout << "You already did this question. \n";
				
				}
				break;
			}
			case (5) :
			{
				if (repeat2 == 0)
				{
					cout << "past tense of slays or	bog" << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Slew") || (answer == "Slough"))
					{

						cout << "Correct + 500 points " << endl;
						total += 500;
						
					}
					else
					{
						cout << "Incorrect - 500 points " << endl;
						total -= 500;
					
					}
					repeat2++;
				}
				else{
					cout << "You already did this question. \n";
					

				}
				break;
			}
			default:
			{
				cout << "Please make a correct selection" << endl;
				break;
			}

			}
		}

		if (categories == 4)
		{
			switch (points)
			{
			case (1) :
			{
				if (repeat3 == 0)
				{
					cout << "This man holds the record for the most homeruns in a single season" << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Barry Bonds")
					{
						cout << "Correct + 100 points " << endl;
						total += 100;
					
					}
					else
					{
						cout << "Incorrect - 100 points " << endl;
						total -= 100;
					
					}
					repeat3++;
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (2) :
			{
				if (repeat4 == 0)
				{
					cout << "This man holds the record for the longest hitting streak in baseball" << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if ((answer == "Joe DiMaggio") || (answer == "DiMaggio"))
					{

						cout << "Correct + 200 points " << endl;
						total += 200;
						
					}
					else
					{
						cout << "Incorrect - 200 points " << endl;
						total -= 200;
					
					}
					repeat4;
				}
				else{
					cout << "You already did this question. \n";
					
				}
				break;
			}
			case (3) :
			{
				if (repeat5 == 0)
				{
					cout << "This man holds the record for the most goals in the NHL  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Wayne Gretzky")
					{

						cout << "Correct + 300 points " << endl;
						total += 300;
					
					}
					else
					{
						cout << "Incorrect - 300 points " << endl;
						total -= 300;
					
					}
					repeat5++;
				}
				else{
					cout << "You already did this question. \n";
				
				}
				break;
			}


			case (4) :
			{
				if (repeat6 == 0)
				{
					cout << "This man won eight gold medals at the 2008 Summer Olympics  " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Michael Phelps")
					{

						cout << "Correct + 400 points " << endl;
						total += 400;
						
					}
					else
					{
						cout << "Incorrect - 400 points " << endl;
						total -= 400;
					
					}
					repeat6++;
				}
				else{
					cout << "You already did this question. \n";

				

				}
				break;
			}
			case (5) :
			{
				if (repeat7 == 0)
				{
					cout << "What country is Christiano Ronaldo from? " << endl;
					getline(cin, dummy);
					getline(cin, answer);
					if (answer == "Portugal")
					{

						cout << "Correct + 500 points " << endl;
						total += 500;
						
					}
					else
					{
						cout << "Incorrect - 500 points " << endl;
						total -= 500;
					
					}
					repeat7++;
				}
				else{
					cout << "You already did this question. \n";

			
				}
				break;
			}
			default:
			{
				cout << "Please make a correct selection" << endl;
				break;
			}
			}
			}
					 if (categories == 5)
					 {
						 switch (points)
						 {
						 case (1) :
						 {
							 if (repeat8 == 0)
							 {
								 cout << "This is the author of, Of Mice and Men" << endl;
								 getline(cin, dummy);
								 getline(cin, answer);
								 if (answer == "John Steinbeck")
								 {
									 cout << "Correct + 100 points " << endl;
									 total + 100;
								 }
								 else
								 {
									 cout << "Incorrect - 100 points " << endl;
									 total -= 100;
								 }

								 
								 repeat8++;
							 }
							 else{
								 cout << "You already did this question. \n";
								
							 }
							 break;
						 }
						 case (2) :
						 {
							 if (repeat9 == 0)
							 {
								 cout << "Hogwarts headmaster, he's considered by many to be the greastest wizard alive.  " << endl;
								 getline(cin, dummy);
								 getline(cin, answer);
								 if ((answer == "Professor Dumbledore") || (answer == "Dumbledore"))
								 {

									 cout << "Correct + 200 points " << endl;
									 total += 200;
								 }
								 else
								 {
									 cout << "Incorrect - 200 points " << endl;
									 total -= 200;
								 }

								
								 repeat9++;
							 }
							 else{
								 cout << "You already did this question. \n";
								
							 }
							 break;
						 }
						 case (3) :
						 {
							 if (repeat10 == 0)
							 {
								 cout << "This boy introduced in a 1902 book flew away from his mother when he was 7 days old  " << endl;
								 getline(cin, dummy);
								 getline(cin, answer);
								 if (answer == "Peter Pan")
								 {

									 cout << "Correct + 300 points " << endl;
									 total += 300;
								 }
								 else
								 {
									 cout << "Incorrect - 300 points " << endl;
									 total -= 300;
								 }

								
								 repeat10++;
							 }
							 else{
								 cout << "You already did this question. \n";
								
							 }
							 break;
						 }
						 case (4) :
						 {
							 if (repeat11 == 0)
							 {
								 cout << "Congrats you found the Daily Double!" << endl;
								 do{
									 cout << "You can only bet up to 1000" << endl;
									 cout << "How many points would you like to wager?" << endl;
									 cin >> wager;
								 } while ((wager >= 1000) && (total <= 0));
								 cout << "In 1930 this novelist became the 1st American to win the Nobel Prize for literature.   " << endl;
								 getline(cin, dummy);
								 getline(cin, answer);
								 if (answer == "Sinclair Lewis")
								 {

									 cout << "Correct + " << wager << " points " << endl;
									 total += wager;
								 }
								 else
								 {
									 cout << "Incorrect - " << wager << " points " << endl;
									 total -= wager;
								 }

								 repeat11++;
								
							 }
							 else{
								 cout << "You already did this question. \n";
								

							 }
							 break;
						 }
						 case (5) :
						 {
							 if (repeat12 == 0)
							 {
								 cout << "In the 16th century he wrote";
								 cout << "Whoever wishes to found a state must start with assuming that all men are bad"  << endl;
								 getline(cin, dummy);
								 getline(cin, answer);
								 if (answer == "Machiavelli")
								 {

									 cout << "Correct + 500 points " << endl;
									 total += 500;
								 }
								 else
								 {
									 cout << "Incorrect - 500 points " << endl;
									 total -= 500;
								 }

								
								 repeat12++;
							 }
							 else{
								 cout << "You already did this question. \n";
								

							 }
							 break;
						 }
						 default:
						 {
							 cout << "Please make a correct selection" << endl;
							 break;
						 }

						 }
						 }

						 }
							cout << "Congrats you got " << total << " points " << endl;
							return 0;
						 }

						 

