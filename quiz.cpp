#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question
{
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;

    int Correct_Answer;
    int Question_Score;

public:
    void setValues(string, string, string, string, string, int, int);
    void askQuestion();
};

int main()
{

    cout << "* * * * * * * * * * * * * * * * * * *" << endl;
    cout << "*Quiz system project" << endl;
    cout << "Project By Varun Kulkarni" << endl;
    cout << "* * * * * * * * * * * * * * * * * * *" << endl;

    cout << "Press Enter to start the quiz .. " << endl;
    cin.get();

    string Name;
    int Age;

    cout << "What is your name?" << endl;
    cin >> Name;
    cout << endl;
    cout << "How old are you?" << endl;
    cin >> Age;
    cout << endl;
    string Respond;
    cout << "Are you ready to take the quiz " << Name << "? Yes/no" << endl;
    cin >> Respond;
    if (Respond == "yes")
    {
        cout << endl;
        cout << "ok, goodluck!" << endl;
    }
    else {
        cout << "ok, goodbye!" << endl;
        return 0;
    }

    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;


    q1.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q2.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q3.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q4.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q5.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q6.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q7.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q8.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q9.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q10.setValues("Question here ....",
        "possible answer 1",
        "possible answer 2",
        "possible answer 3",
        "possible answer 4",
        3, // The position of the correct answe
        10); // The answer value in points

    q1.askQuestion();

    q2.askQuestion();

    q3.askQuestion();

    q4.askQuestion();

    q5.askQuestion();

    q6.askQuestion();

    q7.askQuestion();

    q8.askQuestion();

    q9.askQuestion();

    q10.askQuestion();

    cout << "Your Total Score is " << Total << "out of 100" << endl;

    if (Total >= 70)
    {
        cout << "Great you passed the quiz!" << endl;
        cout << "&&&&&&&&&&&&" << endl;
        cout << "& Congrats &" << endl;
        cout << "&&&&&&&&&&&&" << endl;
    }

    else {

        cout << "Oh no! you failed the quiz." << endl;
        cout << "better luck next time" << endl;
    }
    return 0;
}

void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}

void Question::askQuestion()
{
    cout << endl;
    cout << Question_Text << endl;
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "What is your answer?(using corresponding numnber)" << endl;
    cin >> Guess;
    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great! You are correct" << endl;
        Total = Total + Question_Score;
        cout << "Score: " << Question_Score << " Out of " << Question_Score << "!" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "oh no! You are wrong." << endl;
        cout << "Score: 0" << " out of " << Question_Score << "!" << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
    }

}