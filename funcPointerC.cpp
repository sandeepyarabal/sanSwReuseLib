
#include <iostream>

using namespace std;
enum NodeType { NODE_A, NODE_B, NODE_C };

int getNodeType()
{
    return NODE_A;
}
void nodeA()
{
    cout << "NODE_A";
}
void nodeB()
{
    cout << "NODE_B";
}
void nodeC()
{
    cout << "NODE_C";
}
void (*nodeFunctions[])() = { nodeA, nodeB, nodeC };
int main()
{
    switch (getNodeType())
    {
    case NODE_A:
        nodeA();     
        break;
            
    case NODE_B:
        nodeB();
        break;

    case NODE_C:
        nodeC();
        break;
    }
    cout << "hello world";

    nodeFunctions[getNodeType()]();
    return 0;
}

