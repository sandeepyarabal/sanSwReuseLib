#include <iostream>

using namespace std;

typedef enum
{
    stopped,
    started
} State;

struct DigitalStopWatch
{
    /* Let a variable hold the state of our object. */
    State state;
    
};

void startWatch(struct DigitalStopWatch &instance)
{
    switch (instance.state) {
    case started:
        cout << "already started do nothing!\n";
        cout << "current state!\n" << instance.state;
        break;
    case stopped:
        instance.state = started;
        cout << "again started!\n"<< instance.state;
        break;
    default:
       
        break;
    }
}
void stopWatch(struct DigitalStopWatch* instance)
{
    switch (instance->state) {
    case started:
        instance->state = stopped;
        cout << "again started!\n" << instance->state;
        break;
    case stopped:
        /* Already stopped -> do nothing. */
        break;
    default:
       
        break;
    }
}
int main()
{
    DigitalStopWatch Ds;
    Ds.state = stopped;

    DigitalStopWatch* Dp;
    Dp = &Ds;

    startWatch(Ds);
    stopWatch(Dp);
	cout << "Hello World!\n";
}

