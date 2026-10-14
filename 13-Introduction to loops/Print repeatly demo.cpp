#include <iostream>
int main()
{
    //number of steps
    //condition
    //seed
    int count = 0;
    while(count<5)
    {
        //+=  ,  -=  ,  *=  ,  /=  (count++ means count = count + 1)
        std::cout << "loop1\n";
        //count = count + 1;
        //count += 1;
        count++;
    }
    int count2 = 5;
    while (count2 > 0)
    {
        std::cout << "loop2\n";
        count2 = count2 - 1;
    }
    char LoopStoper = 's';
    while (LoopStoper != 'K')
    {
        std::cout << "loop3\n";
        std::cin >> LoopStoper;
    }
}
