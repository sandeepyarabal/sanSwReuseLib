#include <iostream>

using namespace std;
typedef enum
{
    HOT,
    COLD,
    MEDIUM,

} whether_state_enum;

whether_state_enum whether_state;

void wheather( )
{
   
    
    switch (whether_state)
    {
        default:
        case HOT:
            whether_state = COLD;
            cout<<"whether_state ="<< whether_state<<'\n';
            
        break;

        case COLD:
 
            whether_state = MEDIUM;
            cout<<"whether_state ="<< whether_state<<'\n';
        
        break;

             case MEDIUM:
             whether_state = HOT;
             cout<<"whether_state ="<< whether_state<<'\n';
       
        break;

    }

}
int main()
{
    whether_state = MEDIUM;
    while(1)
    {       
        wheather();    
    }
    cout<<"Hello World";

    return 0;
}
