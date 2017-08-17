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
	//=========================================================
	/*Changelog v1.30.0
	# Added whole lot of SHITTTTTTTTTTTTTTTTT!
	# CODE CLEANED THE FK  UP
	# SPACING MODE, generates spaces randomly and sht
	# New features soon!
	*/


	void Clear(){
		system("cls");
	}

	void convertToColor(int currentColor, string &convertedColor){
		switch(currentColor){
				case 0: convertedColor = "Black";break;
				case 1: convertedColor = "Blue";break;
				case 2: convertedColor = "Green";break;
				case 3: convertedColor = "Cyan";break;
				case 4: convertedColor = "Red";break;
				case 5: convertedColor = "Magenta";break;
				case 6: convertedColor = "Brown";break;
				case 7: convertedColor = "Light Gray";break;
				case 8: convertedColor = "Dark Gray";break;
				case 9: convertedColor = "Light Blue";break;
				case 10: convertedColor = "Light Green";break;
				case 11: convertedColor = "Light Cyan";break;
				case 12: convertedColor = "Light Red";break;
				case 13: convertedColor = "Light Magenta";break;
				case 14: convertedColor = "Yellow";break;
				case 15: convertedColor = "White";break;
			}
	}

	//DISPLAY START SCREEN AS SOON AS THE GAME LAUNCHES
	void displayStartscreen(){
	    cout << "   RANDOM NUMBER GENERATOR GAME by DLMP FocuS` - Version 1.30.0" << endl;
		cout << endl;
		cout << "   You should always go to Options after First launching the game!" << endl;
		cout << endl;
		//Press ANY button
		cout << "   Press any button and <ENTER> to Start the Game!" << endl;
	}

	//DISPLAY MENU SCREEN AFTER START SCREEN
	void displayMainscreen()
	{
		cout << "   1. START the Generator!!!" << endl;
		cout << endl;
		cout << "   2. Go to Random Number and Character Gallery" << endl;
		cout << endl;
		cout << "   3. Options" << endl;
		cout << endl;
		cout << "   4. QUIT THE GAME" << endl;
		cout << endl;
		cout << "   >> ";
	}

	//GALLERY ADDS NUMBERS
	void addGivenNum(int rand1, int &zero, int &one,int &two, int &three, int &four, int &five, int &six, int &seven, int &eight, int &nine){
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

	//GALLERY REMOVES DUPLICATES (NEEDED*)
	void removeGivenNum(int rand1, int &zero, int &one,int &two, int &three, int &four, int &five, int &six, int &seven, int &eight, int &nine){
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
	}

	//DISPLAYS COLORS SELECTION SCREEN
	void displayColors(){
		cout << "   PICK A COLOR : (DEFAULT IS 'LIGHT GREEN')" << endl;
		cout << "   0. Black " << endl;
		cout << "   1. Blue " << endl;
		cout << "   2. Green " << endl;
		cout << "   3. Cyan " << endl;
		cout << "   4. Red " << endl;
		cout << "   5. Magenta " << endl;
		cout << "   6. Brown " << endl;
		cout << "   7. Light Gray " << endl;
		cout << "   8. Dark Gray " << endl;
		cout << "   9. Light Blue " << endl;
		cout << "   10. Light Green " << endl;
		cout << "   11. Light Cyan" << endl;
		cout << "   12. Light Red " << endl;
		cout << "   13. Light Magenta " << endl;
		cout << "   14. Yellow " << endl;
		cout << "   15. White" << endl;
		cout << endl;
		cout << "   >> ";
	}

	void displayGallery(){
		cout << "    NUMBERS AND ALPHABETIC CHARACTERS GALLERY : " << endl;
			cout << endl;
			cout << "   1. Show amount of numbers Generated!" << endl;
			cout << "   2. Show amount of alphabetic characters Generated!" << endl;
			cout << endl;
			cout << "   3. Go Back..." << endl;
			cout << endl;
			cout << "   >> ";
	}

	void displayNumsGenerated(int allnums, int zero, int one,int two, int three, int four, int five, int six, int seven, int eight, int nine){
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
	}

	void displayEndScreen(){
		cout << endl;
        cout << "   SEE YOU LATER!!!" << endl;
		cout << "   ===================" << endl;
		cout << endl;
		cout << "   GAME ENDED SUCCESSFULLY!" << endl;
		cout << endl;
	}

	//MODE SECTION ON/OFF SWITCHES
	void setTextMode(bool &texting){
		if (texting == true){texting = false;}
        else if (texting == false){texting = true;}
	}
	void setMixingMode(bool &mixing, bool &texting){
		if (mixing == true){mixing = false;}
        else if (mixing == false){mixing = true; texting = false;}
	}
	void setSpacingMode(bool &spacingOn){
		if(spacingOn == true){ spacingOn = false;}
		else if(spacingOn == false){ spacingOn = true;}
	}
	void setColorMode(bool &colorson){
		if(colorson == true){colorson = false;}
		else if(colorson == false){colorson = true;}
	}
	void displayWidthScreen(){
		cout << endl;
		cout << "   Enter new Width : " << endl;
		cout << endl;
		cout << "   >> ";
	}
	void displayHeightScreen(){
		cout << endl;
		cout << "   Enter new Height : " << endl;
		cout << endl;
		cout << "   >> ";
	}


	/* MAIN PROGRAM HERE!!! */
int main()
{
	//Set Console Title.
	SetConsoleTitle("RNG Generator Game by DLMP FocuS` v1.30.0");

    //Variables
    //Ints:
    int rand1;
    int rand2;
	int spaceRand;
    int width = 119;
    int height = 120;
    int goback = 0;
    int mainscreen;
    int options;
	//Gallery (Nums)
    int zero,one,two,three,four,five,six,seven,eight,nine;

	//Console color(Default color)
	int defaultColor = 10;
	int currentColor = defaultColor;
	//Here goes default color name
	string convertedColor = "Light Green";

    //Strings
    string mixon;
    string start;
    string onoff;
    string offon;
	string spaceon;

    //Booleans
    bool mixing = false;
    bool texting = false;
    bool galleryon = false;
    bool generation = false;
    bool optionson = false;
    bool running;
    bool colorson = false;
	bool spacingOn = false;

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
	displayStartscreen();
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
    displayMainscreen();
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
						//Fixes black characters in black background
						if(rand1 != 0){
							SetConsoleTextAttribute(hConsole, rand1);
						}else{SetConsoleTextAttribute(hConsole, rand1+rand2);}
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
					addGivenNum(rand1,zero,one,two,three,four,five,six,seven,eight,nine);
                }
                /*
					Checking Generation Mode:
					Simple (INDEX - 1) : Puts out only numbers.
					Texting(Alphabet MODE) (INDEX - 2) : Puts out only alphabet characters.
					NEW Mixing (INDEX - 3) : Puts out numbers and alphabet characters.
                */
                if(texting == false && mixing == false){
					if(spacingOn == true){
						spaceRand = rand() % 2;
						switch(spaceRand){
							case 0:
							cout << " ";
							//FOR GALLERY (Removes numbers, because they are duplicated)
							removeGivenNum(rand1,zero,one,two,three,four,five,six,seven,eight,nine);
							break;
							case 1: cout << rand1;break;
						}
					}else{cout << rand1;}
					}
                else if (texting == true){
					if(spacingOn == true){
						spaceRand = rand() % 2;
						switch(spaceRand){
							case 0: cout << " ";break;
							case 1:
							cout << x;
							for(int i = 0; i < sizeof(alphabet); i++){
								if(x == alphabet[i]){
									alpha[i] += 1;
								}
							}
						break;
						}
					}else{
					cout << x;
					for(int i = 0; i < sizeof(alphabet); i++){
							if(x == alphabet[i]){
								alpha[i] += 1;
							}
						}
					}
				}

                else if (mixing == true && texting == false){
                    switch(rand2){
						case 0:
							if(spacingOn == true){
								spaceRand = rand() % 2;
								switch(spaceRand){
									case 0:
									cout << " ";
									//FOR GALLERY (Removes numbers, because they are duplicated)
									removeGivenNum(rand1,zero,one,two,three,four,five,six,seven,eight,nine);
									break;
									case 1: cout << rand1;break;
								}
							}else{cout << rand1;}
							break;
						case 1:
						if(spacingOn == true){
							spaceRand = rand() % 2;
							switch(spaceRand){
								case 0: cout << " ";break;
								case 1:
								cout << x;
								for(int i = 0; i < sizeof(alphabet); i++){
									if(x == alphabet[i]){
										alpha[i] += 1;
									}
								}
						break;
						}
					}else{
						cout << x;
						for(int i = 0; i < sizeof(alphabet); i++){
							if(x == alphabet[i]){
								alpha[i] += 1;
							}
						}
						removeGivenNum(rand1,zero,one,two,three,four,five,six,seven,eight,nine);
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
			//Display Gallery
			displayGallery();
			cin >> galleryMode;

			if(galleryMode == 1){
				Clear();
				//PRINT ALL THE NUMBERS
				displayNumsGenerated(allnums,zero,one,two,three,four,five,six,seven,eight,nine);
				cin >> anykey;
				//galleryMode = 0;
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
				//galleryMode = 0;
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
			//Spacing Mode
			if(spacingOn == true){ spaceon = "On";}
			else if(spacingOn == false){ spaceon = "Off";}
        //OPTIONS TAB
        Clear();
        cout << "   OPTIONS :" << endl;
		cout << endl;
        cout << "   NOTE : Some features might not work when turned on at the same time!" << endl;
        cout << endl;
        cout << "   1. Height : " << height << endl;
        cout << "   2. Width : " << width << " || Default is '119'!"<< endl;
        cout << "   3. Colors : " << onoff << endl;
        cout << "   4. Text instead of numbers : " << offon << endl;
        cout << "   5. Text with numbers : " << mixon << endl;
		cout << "   6. Console color : " << convertedColor << endl;
		cout << "   7. Spacing : " << spaceon << endl;
		cout << endl;
        cout << "   9. Back..." << endl;
		cout << endl;
		cout <<  "   >> ";
        cin >> options;

        //HEIGHT TAB
        if (options == 1){
            Clear();
            displayHeightScreen();
            cin >> height;
            }
        //WIDTH TAB
        if (options == 2){
            Clear();
			displayWidthScreen();
            cin >> width;
        }
        //COLOR MODE TAB
        if (options == 3){
            Clear();
			//When pressed changes mode
			setColorMode(colorson);
        }
        //TEXT MODE TAB
        if (options == 4){
            Clear();
			//When pressed changes mode
            setTextMode(texting);
        }
        //MIXING MODE TAB
        if (options == 5){
            Clear();
			//When pressed changes mode
            setMixingMode(mixing, texting);
        }
		//CONSOLE COLOR TAB
		if (options == 6){
			Clear();

			/*DISPLAY COLORS
			0. Black
			1. Blue
			2. Green
			3. Cyan
			4. Red
			5. Magenta
			6. Brown
			7. Light Gray
			8. Dark Gray
			9. Light Blue
			10. Light Green
			11. Light Cyan
			12. Light Red
			13. Light Magenta
			14. Yellow
			15. White
			END OF COMMENT
			*/
			displayColors();

			cin >> currentColor;
			//Defaults to 'Light Green' if user inputs higher OR lower index
			if (currentColor > 15 || currentColor < 0){
				currentColor = defaultColor;
			}
			//Converts from INDEX to NAME
			convertToColor(currentColor,convertedColor);
			//Sets color to chosen one
			SetConsoleTextAttribute(hConsole, currentColor);
		}

		//SPACING OPTIONS TAB
		if(options == 7){
			Clear();
			setSpacingMode(spacingOn);
		}

        //EXIT OPTIONS TAB
        if (options == 9){ optionson = false; Clear();}

        }//OPTIONS END.

    //END THE GAME
    if (mainscreen == 4){
		displayEndScreen();
        running = false;
        }
    }
        return 0;
}
