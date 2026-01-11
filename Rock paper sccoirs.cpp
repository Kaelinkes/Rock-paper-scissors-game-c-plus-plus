#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string outcome(string human,string ai);
string covertnum(int choice);

int main(){
    char continuewithgame = 'Y';
    do{
        cout<<"Rock, Paper, Scissors!"<<endl;
        cout<<"1.Rock \n"<<"2.Paper \n"<<"3.Scissors \n";
        
        srand(time(0));
        int ai_num = rand() % 3 + 1,human_num;
        string ai = covertnum(ai_num);
        
        cout<<"Enter your choice(1-3): ";
        cin>>human_num;
        string human = covertnum(human_num);

        cout<<"You picked "<<human<<endl;
        cout<<"Computer picked "<<ai<<endl;
        cout<<outcome(human,ai)<<endl;
        
        
        cout<<"Play again? (Y/n) ";
        cin>>continuewithgame;

    } while (continuewithgame != 'n');
    
}

string outcome(string human,string ai){
   
   string aiWin = "Computer wins",HumWin = "You win";   
   if(human == ai){
    return "Draw";
   }else{
   
   if(human == "Rock"){
        if (ai == "Paper"){
            return aiWin;
        }else{
            return HumWin;
        }

    } else if(human == "Paper"){

        if(ai == "Scissors"){
            return aiWin;
        }else{
            return HumWin;
        }

    } else if(human =="Scissors"){

        if(ai == "Rock"){
            return aiWin;
        }else{
            return HumWin;
        }
    } 
    }  
}
string covertnum(int choice){
    string text;

    switch (choice){
    case 1:
        text = "Rock";
        break;
    case 2: 
        text = "Paper";
        break;
    case 3:
        text ="Scissors";
        break;
    }

    return text;  
}