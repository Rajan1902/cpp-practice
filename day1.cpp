// Day 1 coding Statement: Write a program to identify if the character is a vowel or consonant.

// Description of the program: 


// Take an input character from the user and check whether the given input is a vowel or consonant.

#include <iostream>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c=='A'|| c=='a'|| c=='E'|| c=='e'|| c=='I'|| c=='i'|| c=='O'|| c=='o'|| c=='U'|| c=='u'){
        cout<<"Vovel";
    }
    else if (c=='B'|| c=='b'|| c=='C'|| c=='c'|| c=='D'|| c=='d'|| c=='F'|| c=='f'|| c=='G'|| c=='g' || c=='H'|| c=='h'|| c=='J'|| c=='j'|| c=='K'|| c=='k'|| c=='L'|| c=='l'|| c=='M'|| c=='m' || c=='N'|| c=='n'|| c=='P'|| c=='p'|| c=='Q'|| c=='q'|| c=='R'|| c=='r'|| c=='S'|| c=='s' || c=='T'|| c=='t'|| c=='V'|| c=='v'|| c=='W'|| c=='w'|| c=='X'|| c=='x'|| c=='Y'|| c=='y' || c == 'z'){
        cout<<"Consonent";
    }
    else
    {
        cout<<"Invalid Input";
    }
    
    return 0;
}
