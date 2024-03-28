#include <iostream>

bool accept()
{
    std::cout << "Do you want to proceed (y or n)? \n"; // write question
    
    char answer = 0;
    std::cin >> answer;

    if(answer == 'y')
    {
        return true;
    }

    return false;
}

bool accept2()
{
    std::cout << "Do you want to proceed (y or n)? \n"; // write question

    char answer = 0;
    std::cin >> answer;

    switch(answer){
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            std::cout<<"I'll take that for a no. \n";
            return false;
    }
}

bool accept3()
{
    int tries = 1;
    while(tries < 4){
        std::cout << "Do you want to proceed (y or n)? \n"; // write question

        char answer = 0;
        std::cin >> answer;

        switch(answer){
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                std::cout<<"Sorry, I don't understand that. \n";
                ++tries; // increment
        }
    }
    std::cout<<"I'll take that for a no. \n";
    return false;
    
    // The while-statement executes until its condition becomes false.
}

int main(){



    return 0;
}