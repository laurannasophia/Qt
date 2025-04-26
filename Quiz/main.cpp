/* Ohjelma kysyy vastaajalta viisi kysymysta, jonka jälkeen se kertoo
 * oliko vastaus oikein vai väärin, ja tulostaa seuraavan kysymyksen.
 * Oikeasta vastauksesta ohjelma lisää vastaajalle pisteen, ja lopuksi
 * ohjelma tulostaa kokonaispistemäärän.
 *
 * The program asks five questions, after which it tells you if the
 * answer was correct or not, and prints the next question.
 * If the answer was right, a point is added to the player and in the
 * end the program prints the total score.*/

#include <iostream>
#include <fstream>

using namespace std;

int points;

class question {
private:
    char v;

public:
    string quest;
    string answer1;
    string answer2;
    string answer3;
    char tru;
    void values();
    void questions();
};

class quest2 : public question {
public:
    void values(string ask, string a1, string a2, string a3, char right) // create base for questions
    {
        quest = ask;
        answer1 = a1;
        answer2 = a2;
        answer3 = a3;
        tru = right;
    }
};

void question::questions() // base for printing questions and counting points
{
    cout << quest << endl;
    cout << "a " << answer1 << endl;
    cout << "b " << answer2 << endl;
    cout << "c " << answer3 << endl;

    cin >> v;

    if (v == tru) {
        cout << "You are right! \n" << endl;
        points += 1;
    }
    else
    {
        cout << "You are wrong.\n" << endl;
    }
}

void get_questions() // Holds the questions
{
    quest2 q1; // name the questions
    quest2 q2;
    quest2 q3;
    quest2 q4;
    quest2 q5;

    q1.values("1 + 1 = ?", "1", "2", "3", 'b');              // Input the questions
    q2.values("4 + 5 = ?", "7", "8", "9", 'c');
    q3.values("What does the cat say?", "Woof", "Meow", "Moo", 'b');
    q4.values("In what temperature (C) does water freeze?", "0", "5", "10", 'a');
    q5.values("How many cents is in a euro?", "5", "10", "100", 'c');

    q1.questions(); // call the questions and answers and add them together
    q2.questions();
    q3.questions();
    q4.questions();
    q5.questions();

}

int main()
{
    cout << "The program asks you five questions and tells you how many points you earned. \n" << endl;

    get_questions();                 // call questions

    cout << "You got " << points << " points." << endl;

    ofstream file("points.txt"); //saves points to a file
    file << points;

    file.close();

    return 0;
}
