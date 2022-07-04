#include<iostream>
#include <string> 

using namespace std;

string myInput;
int state;
void console(const std::string & data){cout << data;}

int DFA(string &x)
{   state = 0;
    if(x.length() == 0 || x.length() == NULL || x.length() < 0){
        console(x+" is an invalid string");
    }
    else{
        for(char c : x){
            if(state == 0)
            {
                switch(c)
                {
                    case 'A':state = 1; continue;
                    case 'T':state = 0; continue;
                    case 'G':state = 2; continue;
                    case 'C':state = 2; continue;
                    default: state = 0;
                }
                return state;
            }
            if(state == 1)
            {
                switch(c)
                {
                    case 'A':state = 5; continue;
                    case 'T':state = 2; continue;
                    case 'G':state = 5; continue;
                    case 'C':state = 5; continue;
                    default: state = 0;
                }
                return state;
            }
            if(state == 2)
            {
                switch(c)
                {
                    case 'A':state = 3; continue;
                    case 'T':state = 2; continue;
                    case 'G':state = 2; continue;
                    case 'C':state = 2; continue;
                    default: state = 0;
                }
                return state;
            }
            if(state == 3)
            {
                switch(c)
                {
                    case 'A':state = 1; continue;
                    case 'T':state = 2; continue;
                    case 'G':state = 5; continue;
                    case 'C':state = 5; continue;
                    default: state = 0;
                }
                return state;
            }
            if(state == 4)
            {
                switch(c)
                {
                    case 'A':state = 4; continue;
                    case 'T':state = 4; continue;
                    case 'G':state = 4; continue;
                    case 'C':state = 4; continue;
                    default: state = 0;
                }
                return state;
            }
        }
    }
    return state;
}

string result(int y)
{  string output;
    if(y == 2 || y == 3){
        output = "The pattern "+myInput+" is valid";
    }else{
        output = "The pattern "+myInput+" is not valid";
    }
return output;
}

int main()
{
    cout<<"Enter something";
    cin>>myInput;
    cout << result(DFA(myInput));
    return 0;
}
