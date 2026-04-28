#include<iostream>
using namespace std;

class Question
{
public:
    string ques;
    string op1, op2, op3, op4;
    int correct;

    void setQuestion(string q, string a, string b, string c, string d, int ans)
    {
        ques = q;
        op1 = a;
        op2 = b;
        op3 = c;
        op4 = d;
        correct = ans;
    }

    int askQuestion()
    {
        int choice;
        cout << "\n" << ques << endl;
        cout << "1. " << op1 << endl;
        cout << "2. " << op2 << endl;
        cout << "3. " << op3 << endl;
        cout << "4. " << op4 << endl;

        cin >> choice;

        if(choice == correct)
        {
            cout << "Correct\n";
            return 1;
        }
        else
        {
            cout << "Wrong\n";
            return 0;
        }
    }
};

int main()
{
    int score = 0;

    Question q1, q2, q3, q4, q5, q6, q7, q8;

    q1.setQuestion("Who developed C++?", "Dennis", "Bjarne", "James", "George", 2);
    q2.setQuestion("Output operator?", ">>", "<<", "==", "=", 2);
    q3.setQuestion("File extension?", ".c", ".cpp", ".txt", ".java", 2);
    q4.setQuestion("Keyword for class?", "class", "struct", "define", "obj", 1);
    q5.setQuestion("Input function?", "cout", "cin", "print", "scan", 2);
    q6.setQuestion("Loop with fixed count?", "for", "while", "do", "switch", 1);
    q7.setQuestion("Decimal data type?", "int", "char", "float", "bool", 3);
    q8.setQuestion("One name many forms?", "inherit", "encap", "poly", "abs", 3);

    score += q1.askQuestion();
    score += q2.askQuestion();
    score += q3.askQuestion();
    score += q4.askQuestion();
    score += q5.askQuestion();
    score += q6.askQuestion();
    score += q7.askQuestion();
    score += q8.askQuestion();

    cout << "\nFinal Score = " << score << "/8" << endl;

    return 0;
}
