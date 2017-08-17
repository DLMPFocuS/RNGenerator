#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;
//UPDATES :
	/*Changelog Version v1.2
	New in Version v1.2 :
	#  Added random letter generation in options, TRY IT OUT!!
	# Updated Colors, There is still bug that doesn't let you use colors while in NEW Text mode.
	# A few fixes to known issues.
	# New Versions coming soon!
	*/
	//=========================================================
	/*Changelog v1.5
	New in Version v1.5 :
	# Added new function - random number and letter generation, TRY IT OUTTT!!!
	# Code was a little bit optimized
	# Code has a lot of new notes and fixed issues after non-released version
	# Fixes to a few unknown compiling errors.
	# FIXED ONE OF THE BIGGEST BUGS, COLORS NOT WORKING,
	# ITS NOW FIXED AND WORKS ON BRAND NEW MODE!!!
	# Matrix like text!
	# New versions and LETTER GALLERY coming soon!
	*/
	//=========================================================
	/*Changelog v1.15.0
	New in Version v1.15.0 :
	# Added alphabetic character gallery!!!
	# Added console color changer in OPTIONS!!!
	# Added clarity to input in game!!!
	# Added a ton of comments and fixed a few of them.
	# Added console title
	# Gallery system overhaul!!!
	# MATRIX color is now Default console color.
	# Color conversion from indexes to Readable text
	# Fixes to grammar issues.
	# New versions and secret features coming soon!!!
	*/


	void Clear(){
		system("cls");
	}

int main()
{
	//Set Console Title.
	SetConsoleTitle("RNG Generator Game by DLMP FocuS` v1.15.0");

    //Variables
    //Ints:
    int rand1;
    int rand2;
    int width = 119;
    int height = 120;
    int goback = 0;
    int mainscreen;
    int options;
	//Gallery (Nums)
    int zero,one,two,three,four,five,six,seven,eight,nine;

	//Console color
	int currentColor = 2;
	string convertedColor = "Green";

    //Strings
    string mixon;
    string start;
    string onoff;
    string offon;

    //Booleans
    bool mixing = false;
    bool texting = false;
    bool galleryon = false;
    bool generation = false;
    bool optionson = false;
    bool running;
    bool colorson = false;

    //Arrays
    char alphabet[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char x;

    //Handles
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    //Values for Gallery (Nums)
    zero = 0;
    one = 0;
    two = 0;
    three = 0;
    four = 0;
    five = 0;
    six = 0;
    seven = 0;
    eight = 0;
    nine = 0;

	//Values for Gallery (Alphabet)
	int alpha[sizeof(alphabet)];
	for(int i = 0; i < sizeof(alphabet); i++){
        alpha[i] = 0;
	}

    //Program Starts HERE.
    //TITLE
    SetConsoleTextAttribute(hConsole, currentColor);
    cout << "   RANDOM NUMBER GENERATOR GAME" << endl;
    cout << endl;
    cout << "   Version 1.15.0\n" << endl;
    cout << "   You should always go to Options after First launching the game!" << endl;
    //Press ANY button
    cout << "   Press any button and <ENTER> to Start the Game!" << endl;
    cin >> start;

    //Clean screen for Menus & Open Menu
    Clear();
    if (start != ""){
        cout << "   GAME STARTED SUCCESSFULLY!" << endl;
    }else{return 0;}
    running = true;
    //GAME STARTED!!!
    Clear();

    //MainSCREEN Loop.
    while (running == true){
    Clear();
    SetConsoleTextAttribute(hConsole, currentColor);
    //Display Available things that player can do.
    cout << "   1. Generate Random Numbers." << endl;
    cout << "   2. Go to Random Number and Character Gallery..." << endl;
    cout << "   3. Options." << endl;
    cout << "   4. QUIT THE GAME." << endl;
	cout << endl;
	cout << "   >> ";
    cin >> mainscreen;

    //RNGenerator Opening Check
    if (mainscreen == 1){generation = true;}
    //RNGENERATOR
    while(generation == true){
        Clear();
        cout << "   Generating Random Numbers..."<< endl;
        //Random Generation
        for (int i=0; i < height; i++){
            for (int p=0; p < width; p++) {
                //Console colors for characters
					if (colorson == true){
						//Sets to random colors (rand1)
						SetConsoleTextAttribute(hConsole, rand1);
						}else {
						//Leaves default color(Currently Green(2))
						SetConsoleTextAttribute(hConsole, currentColor);
						}
                //Random characters(Numbers & Alphabet)
                if(texting == false && mixing == false){
					//Create Random(0 to 9)
					rand1 = rand() % 10;
                }
                else if (texting == true && mixing == false){
                    x = alphabet[rand() % 26];
					//Create Random(0 to 9)
                    rand1 = rand() % 10;
                }else if (mixing == true && texting == false){
					//Create Random(0 to 9)
                    rand1 = rand() % 10;
					//Take Random Char from alphabet
                    x = alphabet[rand() % sizeof(alphabet)];
					//Create Random(0 to 1)
                    rand2 = rand() % 2;
                    }
                //FOR GALLERY
                if(texting == false){
					switch(rand1){
						case 0 : zero++; break;
						case 1 : one++; break;
						case 2 : two++; break;
						case 3 : three++; break;
						case 4 : four++; break;
						case 5 : five++; break;
						case 6 : six++; break;
						case 7 : seven++; break;
						case 8 : eight++; break;
						case 9 : nine++; break;
					}
                }
                /*
					Checking Generation Mode:
					Simple (INDEX - 1) : Puts out only numbers.
					Texting(Alphabet MODE) (INDEX - 2) : Puts out only alphabet characters.
					NEW Mixing (INDEX - 3) : Puts out numbers and alphabet characters.
                */
                if(texting == false && mixing == false){cout << rand1;}
                else if (texting == true){
					cout << x;
					for(int i = 0; i < sizeof(alphabet); i++){
							if(x == alphabet[i]){
								alpha[i] += 1;
							}
						}
					}
                else if (mixing == true && texting == false){
                    switch(rand2){
						case 0:
							cout << rand1;
							break;
						case 1:
							cout << x;
						//FOR GALLERY (Removes numbers, because they are duplicated)
						switch(rand1){
							case 0 : zero--; break;
							case 1 : one--; break;
							case 2 : two--; break;
							case 3 : three--; break;
							case 4 : four--; break;
							case 5 : five--; break;
							case 6 : six--; break;
							case 7 : seven--; break;
							case 8 : eight--; break;
							case 9 : nine--; break;
						}
						for(int i = 0; i < sizeof(alphabet); i++){
							if(x == alphabet[i]){
								alpha[i] += 1;
							}
						}
							break;
                    }
                }
            }
            cout << endl;
        }

        //After Generation ask to Quit or to Repeat.
        SetConsoleTextAttribute(hConsole,currentColor);
        cout << endl;
        cout << "   Generation ended!" << endl;
        cout << endl;
        cout << "WANT TO GO BACK? 1 - Yes, 2 - No." << endl;
        cin >> goback;
		//If Yes(1) DON'T Generate!
        if(goback == 1){
            generation = false;
        }else if(goback == 2){
            cout << "	Repeating..." << endl;
        }
    }//END OF GENERATION


    //Gallery Opening Check
    if (mainscreen == 2){galleryon = true;}
	int galleryMode;
	char anykey;
	//Adds all numbers
		int allnums = zero + one + two + three + four + five + six + seven + eight + nine;
	//Adds all alphabetic keys
		int allalphas = 0;
		for (int i = 0; i < sizeof(alphabet); i++){
			allalphas += alpha[i];
		}
    //GALLERY
    while (galleryon == true){
            Clear();
			cout << "    NUMBERS AND ALPHABETIC CHARACTERS GALLERY : " << endl;
			cout << endl;
			cout << "   1. Show amount of numbers Generated!" << endl;
			cout << "   2. Show amount of alphabetic characters Generated!" << endl;
			cout << endl;
			cout << "   3. Go Back..." << endl;
			cout << endl;
			cout << "   >> ";
			cin >> galleryMode;

			if(galleryMode == 1){
				Clear();
				//PRINT ALL THE NUMBERS
				cout << "   AMOUNT OF NUMBERS YOU HAVE GENERATED : "<< allnums << endl;
				cout << endl;
				cout << "   You have generated 0 : " << zero << " time/s"<< endl;
				cout << "   You have generated 1 : " << one << " time/s"<< endl;
				cout << "   You have generated 2 : " << two << " time/s"<< endl;
				cout << "   You have generated 3 : " << three << " time/s"<< endl;
				cout << "   You have generated 4 : " << four << " time/s"<< endl;
				cout << "   You have generated 5 : " << five << " time/s"<< endl;
				cout << "   You have generated 6 : " << six << " time/s"<< endl;
				cout << "   You have generated 7 : " << seven << " time/s"<< endl;
				cout << "   You have generated 8 : " << eight << " time/s"<< endl;
				cout << "   You have generated 9 : " << nine << " time/s"<< endl;
				cout << endl;
				cout << "   Go back? (Press Any Key...)" << endl;
				cin >> anykey;
				galleryMode = 0;
			}else if(galleryMode == 2){
				Clear();
				//PRINT ALL THE ALPHABET CHARACTERS
				cout << "   AMOUNT OF ALPHABETIC CHARACTERS GENERATED : " << allalphas << endl;
				for(int i = 0; i < sizeof(alphabet); i++){
					cout << "   You have generated '" << alphabet[i] << "' : " << alpha[i] << " time/s" << endl;
				}
				cout << endl;
				cout << "   Go back? (Press Any Key...)" << endl;
				cin  >> anykey;
				galleryMode = 0;
			}
        cout << endl;

        if (galleryMode == 3){galleryon = false;}
    }

    //Option Opening Check.
    if (mainscreen == 3){
        optionson = true;
    }
    //OPTIONS
    while (optionson == true){
            //Just naming strings for options
			//COLOR Mode
            if(colorson == true){ onoff = "On";}
            else if (colorson == false) { onoff = "Off";}
			//Text Only Mode
            if(texting == true){ offon = "On";}
            else if (texting == false) { offon = "Off";}
			//Text + Numbers Mode
            if(mixing == true){ mixon = "On";}
            else if (mixing == false) { mixon = "Off";}
        //OPTIONS TAB
        Clear();
        cout << "OPTIONS :\n" << endl;
        cout << "Note: Some features might not work when turned on at the same time!" << endl;
        cout << endl;
        cout << "   1. Height : " << height << endl;
        cout << "   2. Width : " << width << endl;
        cout << "   3. Colors : " << onoff << endl;
        cout << "   4. Text instead of numbers : " << offon << endl;
        cout << "   5. Text with numbers : " << mixon << endl;
		cout << "   6. Console color : " << convertedColor << endl;
        cout << "   9. Back..." << endl;
		cout << endl;
		cout <<  "   >> ";
        cin >> options;
        //HEIGHT TAB
        if (options == 1){
            Clear();
            cout << "   Enter new Height : " << endl;
			cout << endl;
			cout << "   >> ";
            cin >> height;
            }
        //WIDTH TAB
        if (options == 2){
            Clear();
            cout << "   Enter new Width : " << endl;
			cout << endl;
			cout << "   >> ";
            cin >> width;
        }
        //COLOR MODE TAB
        if (options == 3){
            Clear();
			if(colorson == true){colorson = false;}
			else if(colorson == false){colorson = true;}
        }
        //TEXT MODE TAB
        if (options == 4){
            Clear();
            if (texting == true){texting = false;}
            else if (texting == false){texting = true;}
        }
        //MIXING MODE TAB
        if (options == 5){
            Clear();
            if (mixing == true){mixing = false;}
            else if (mixing == false){mixing = true; texting = false;}
        }
		//CONSOLE COLOR TAB
		if (options == 6){
			Clear();
			cout << "   PICK A COLOR FOR CONSOLE : (DEFAULT IS 'GREEN')" << endl;
			cout << "   0  => BLACK " << endl;
			cout << "   1  => BLUE " << endl;
			cout << "   2  => GREEN " << endl;
			cout << "   3  => CYAN " << endl;
			cout << "   4  => RED " << endl;
			cout << "   5  => MAGENTA " << endl;
			cout << "   6  => BROWN " << endl;
			cout << "   7  => LIGHTGRAY " << endl;
			cout << "   8  => DARKGRAY " << endl;
			cout << "   9  => LIGHTBLUE " << endl;
			cout << "   10 => LIGHTGREEN " << endl;
			cout << "   11 => LIGHTCYAN" << endl;
			cout << "   12  => LIGHTRED " << endl;
			cout << "   13  => LIGHTMAGENTA " << endl;
			cout << "   14  => YELLOW " << endl;
			cout << "   15  => WHITE" << endl;
			cout << endl;
			cout << "   >> ";
			cin >> currentColor;
			//Defaults to 'Green' if user inputs higher index
			if (currentColor > 15){
				currentColor = 2;
			}
			switch(currentColor){
				case 0: convertedColor = "Black";break;
				case 1: convertedColor = "Blue";break;
				case 2: convertedColor = "Green";break;
				case 3: convertedColor = "Cyan";break;
				case 4: convertedColor = "Red";break;
				case 5: convertedColor = "Magenta";break;
				case 6: convertedColor = "Brown";break;
				case 7: convertedColor = "Light gray";break;
				case 8: convertedColor = "Dark gray";break;
				case 9: convertedColor = "Light blue";break;
				case 10: convertedColor = "Light green";break;
				case 11: convertedColor = "Light cyan";break;
				case 12: convertedColor = "Light red";break;
				case 13: convertedColor = "Light magenta";break;
				case 14: convertedColor = "Yellow";break;
				case 15: convertedColor = "White";break;
			}
			SetConsoleTextAttribute(hConsole, currentColor);
		}

        //EXIT OPTIONS TAB
        if (options == 9){
            optionson = false;
            Clear();
        }
        }//OPTIONS END.

    //END GAME
    if (mainscreen == 4){
        cout << "   QUITTING THE GAME..." << endl;
        running = false;
        }
    }
        return 0;
}
