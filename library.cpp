#include <iostream>
#include "library.h" 
#include <ctime>
using namespace std;

//Lists a menu of options for the user
void menu() {
  int answer;    //Stores the user's input
  cout << "\nYou have 4 Options to choose from\n";
  cout << "1) Explore the Mushroom Kingdom\n";
  cout << "2) Meet the Princess.\n";
  cout << "3) Meet the Residents.\n";
  cout << "4) Try the Power-Ups.\n";
  cout << "5) Go back to New York.\n";
  cin >> answer;
  if (answer == 1) { //If the user wants to explore the Mushroom 
                    //Kingdom
    explore(answer); //Call the explore function
  } else if (answer == 2) { //If the user wants to meet the princess
    meet_princess(answer);  //Call the meet_princess function
  } else if (answer == 3) {  //If the user wants to meet the Toad
                              //Residents
    meet_residents(answer);  //Call the meet_residents function
  } else if (answer == 4) {  //If the uwer wants to try Power-Ups
    try_power_ups(answer);  //Call the try_power_ups function
  } else {  //If the user wants to exit the program
    cout << "Come back next time.";
  }
} //end of function

//The user gets to choose which area of the Mushroom Kingdom to explore
void explore(int answer) {
  int answer2;  //Stores the user's answer to the upcoming question
  cout << "\nWhich area would you like to explore?\n";
  cout << "1) Princess Peach's Castle\n";
  cout << "2) Toad Town\n";
  cout << "3) Toad House\n";
  cin >> answer2;
  if (answer2 == 1) {  //If the user wants to go to Princess Peach's
                      //castle
    peaches_castle(answer2);  //Call the peaches_castle function
  } else if (answer2 == 2) {  //If the user wants to go to Toad Town
    toad_town(answer2);  //Call the toad_town function
  } else if (answer2 == 3) {  //If the user wants to go to the Toad 
                              //House
    toad_house(answer2);  //Call the toad_house function
  }
}

//The user meets Princess Peach
void meet_princess(int answer) {
  string yes_or_no;  //Stores "Yes" or "No" from the user
  cout << "\nMeet Princess Peach, the ruler of the Mushroom Kingdom. Strong, quick-witted, funny and kind-hearted, she is the brave and benevolent protector of the Toads.\n";
  cout << "She unfortunately falls into Bowser's clutches, sometimes. Right now, she's okay.\n\n";
  cout << "Is there anything else you want to do?\n";
  do {
  cin >> yes_or_no;
  if (yes_or_no == "Yes" || yes_or_no == "yes") {
      menu();  //Call the menu function
  } else if (yes_or_no == "No" || yes_or_no == "no") {
    cout << "Thank you for visiting the Mushroom Kingdom.";
  } else { //If the user doesn't say "Yes" or "No"
    cout << "That is not a proper option. Try again.\n";
  }

  } while (yes_or_no != "No" && yes_or_no != "no" && yes_or_no != "Yes" && yes_or_no != "yes"); //end of do-while
  
} //end of function

//The user explores Princess Peach's Castle
void peaches_castle(int answer2) {
  string yes_or_no; //Stores a "Yes" or "No" from the user
  cout << "\nWow, Peach's Castle has so many paintings. Word on the street is if you get too close to the paintings, you will be sucked into the worlds depicted in them\n\n";
  cout << "There is also Princess Peach's throne. Thing is, she can't be seen anywhere.\n\n";
  cout << "Is there anything else you want to do?\n";
  do {
  cin >> yes_or_no;
  if (yes_or_no == "Yes" || yes_or_no == "yes") {
    menu(); //Call the menu function  
  } else if (yes_or_no == "No" || yes_or_no == "no") {
    cout << "Thank you for visiting the Mushroom Kingdom.\n";
  } else { //If the user did not say "Yes" or "No"
    cout << "That is not a proper option. Try again.\n";
    }
  } while (yes_or_no != "No" && yes_or_no != "no" && yes_or_no != "Yes" && yes_or_no != "yes"); //end of do-while
} //end of function

//The user explores Toad Town
void toad_town(int answer2) {
  string yes_or_no; //Answer to the first of two questions
  string second_answer; //Answer to the second question
  cout << "\nWelcome to Toad Town. Here you will see the residents of the Mushroom Kingdom going out and about, going to where they need to go. There are a wide variety of places here, including the Crazy Cap store, in which you can purchase caps with either regular gold coins, or with regional coins.\n\n";
  cout << "In the center of Toad Town is a beautiful fountain. You will also find plants and vegetables being grown around this area.\n\n";
  cout << "The residents here are as happy as they can be. Do you want to meet them?\n";
  do {
  cin >> yes_or_no;
  if (yes_or_no == "Yes" || yes_or_no == "yes") {
    int(yes_or_no); //Turn yes_or_no into an int value
    meet_residents(yes_or_no); //Call the meet_residents function
  } else if (yes_or_no == "No" || yes_or_no == "no") {
    cout << "Would you like to do something else instead?\n";
    do {
    cin >> second_answer;
    if (second_answer == "Yes" || second_answer == "yes") {
      menu(); //Call the menu function
    } else if (second_answer == "No" || second_answer == "no") {
      cout << "Thank you for visitng the Mushroom Kingdom.";
    } else { //If the user did not say "Yes" or "No"
      cout << "That is not a proper option. Try again.\n";
      }
  } while (second_answer != "Yes" && second_answer != "yes" && second_answer != "No" && second_answer != "no");
  } else { //If the user did not answer "Yes" or "No" for the first 
            //question
    cout << "That is not a proper option. Try again.\n";
    }

  } while (yes_or_no != "Yes" && yes_or_no != "yes" && yes_or_no != "No" && yes_or_no != "no");

} //end of function

//The user explores a Toad House
void toad_house(int answer2) {
string yes_or_no;  //Answer to first Yes or No question
string yes_or_no2; //Answer to second Yes or No question
string answer;    //Answer to "Is there anything else you would like"
                  //to do?"
srand(time(NULL)); //Makes sure that a different number is always
                  //generated
cout << "\nWelcome to the Toad House. It sure is small, but there is the Toad who will give you a present. There's a Power-Up inside. Would you like to open the present?\n";
do {
cin >> yes_or_no;
if (yes_or_no == "Yes" || yes_or_no == "yes") {
  int number = rand() % 4 + 1;  //A random number is generated
  if (number == 1) {
    cout << "\nCongratulations, you received a Fire Flower.\n";
  } else if (number == 2) {
    cout << "\nCongratulations, you received a Boomerang Flower.\n";
  } else if (number == 3) {
    cout << "\nCongratulations, you received a Tanooki Leaf.\n";
  } else {
    cout << "\nCongratulations, you received a 1-Up Mushroom.\n";
  }
  cout << "Is there anything else you want to do?\n";
  do {
  cin >> answer;
  if (answer == "yes" || answer == "Yes") {
      menu(); //Call the menu function
  } else if (answer == "No" || answer == "no") {
    cout << "Thank you for visitng the Mushroom Kingdom.";
  } else { //If the user did not choose "Yes" or "No"
    cout << "That is not a proper option. Try again.";
  }
 
  } while (answer != "Yes" && answer != "yes" && answer != "No" && answer != "no");

} else if (yes_or_no == "No" || yes_or_no == "no") {
  cout << "Is there anything else you want to do?\n";
  do {
  cin >> yes_or_no2;
  if (yes_or_no2 == "Yes" || yes_or_no2 == "yes") {
      menu();
  } else if (yes_or_no2 == "No" || yes_or_no2 == "no") {
    cout << "Thank you for visiting the Mushroom Kingdom.\n";
  } else {
    cout << "That is not a proper option. Try again.\n";
  }
    
  } while (yes_or_no2 != "Yes" && yes_or_no2 != "yes" && yes_or_no2 != "No" && yes_or_no2 != "no");

} else {
  cout << "That is not a proper option. Try again.\n";
}

} while (yes_or_no != "Yes" && yes_or_no != "yes" && yes_or_no != "No" && yes_or_no != "no");
  
} //end of function

//The user meets the Toad residents
void meet_residents(int answer) {
  string yes_or_no;  //Answer to a Yes or No question
  cout << "\nMeet the residents of the Mushroom Kingdom, the Toads. They are small and adorable, but they can also get scared very easily. You can still strike up a conversation with a Toad if you come across one. Don't worry, they're friendly.\n\n";
cout << "Is there anything else you want to do?\n";
do {
cin >> yes_or_no;
if (yes_or_no == "Yes" || yes_or_no == "yes") {
    menu();
} else if (yes_or_no == "No" || yes_or_no == "no") {
  cout << "Thank you for visiting the Mushroom Kingdom\n";
} else {
  cout << "That is not a proper option. Try again.\n";
}

} while (yes_or_no != "Yes" && yes_or_no != "yes" && yes_or_no != "No" && yes_or_no != "no");

} //end of function

//The user gets to try a Power-Up
void try_power_ups(int answer) {
  int choice;  //Stores the user's input for the upcoming question
  string yes_or_no;  //Answer to first Yes or No question
  string yes_or_no2;  //Answer to second Yes or No question
  do {
  cout << "\nWhich Power-Up would you like to try?\n";
  cout << "1) 1-Up Mushroom\n";
  cout << "2) Fire Flower\n";
  cout << "3) Tanooki Leaf\n";
  cout << "4) Mega Mushroom\n";
  do {
  cin >> choice;
  if (choice == 1) {
    cout << "\nYou have decided to try out the 1-Up Mushroom. It allows you to grow to a bigger size.\n";
  } else if (choice == 2) {
    cout << "\nYou have decided to try out the Fire Flower. You get a change in costume and you are able to shoot fireballs out of your hands.\n";
  } else if (choice == 3) {
    cout << "\nYou have decided to try out the Tanooki Leaf. Here you will turn into Tanooki Mario, in which you will get a brown costume, complete with a tail, that allows you to swipe at enemies and even float and hover.\n";
  } else if (choice == 4) {
    cout << "\nYou have decided to try out the Mega Mushroom. This mushroom makes you enormous, and you are able to take down any enemies and bricks that are in your way.\n";
  } else {
    cout << "\nThat is not a proper option. Try again.\n";
  }
    
  } while (choice != 1 && choice != 2 && choice != 3 && choice != 4);
  
  cout << "Do you want to try another Power-Up?\n";
  cin >> yes_or_no;
  } while (yes_or_no == "Yes" || yes_or_no == "yes");

  cout << "Is there anything else you want to do?\n";
  do {
  cin >> yes_or_no2;
  if (yes_or_no2 == "Yes" || yes_or_no2 == "yes") {
      menu();
  } else if (yes_or_no2 == "No" || yes_or_no2 == "no") {
    cout << "Thank you for visiting the Mushroom Kingdom.";
  } else {
    cout << "That is not a proper option. Try again.\n";
  }
    
} while (yes_or_no2 != "Yes" && yes_or_no2 != "yes" && yes_or_no2 != "No" && yes_or_no2 != "no");
    
} //end of function