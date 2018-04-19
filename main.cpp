//Author: Pedro V Ojeda
#include <iostream>
#include <vector>

using namespace std;

//prototypes:
void fillWith(vector<int>& New, int);
void printVector(const vector<int>);
bool isPositive(int);

/////DO NOT TOUCH/////
int main()
{
        vector <int> projects;
        vector <int> quizzes;

        int numProjects;
        int numQuizzes;

        cout<<"\nHow many projects are there? ";
        cin>>numProjects;
        cout<<"\nHow many quizzes are there? ";
        cin>>numQuizzes;

        //only proceed if both numbers are positive
        if( isPositive(numProjects) && isPositive(numQuizzes) )
        {
                projects.resize(numProjects);
                quizzes.resize(numQuizzes);

                fillWith(projects, 90); // Fills the vector with all value 90s
                fillWith(quizzes, 80); // Fills the vector with all value 80s

                cout<<"\nProject Scores:\n";
                printVector(projects); // Prints vector with space after each cell
                cout<<"\n\nQuiz Scores:\n";
                printVector(quizzes); // Prints vector with space after each cell
        }
        else
        {
                cout<<"\nSorry, numbers must be bigger than 0.\n";
        }
        return 0;
}

//function definitions
void fillWith (vector<int> & New, int Nums)
{
        for(int i=0; i<New.size(); i++)
        {
                New[i] = Nums;
        }
        return;
}

void printVector(const vector<int> New1)
{
        for(int i=0; i<New1.size(); i++)
        {
                cout<<New1[i]<<" ";
        }
}

bool isPositive(int Num)
{
        if( Num>0)
        {
                return true;
        }
        else 
        {
                return false;
        }
}



