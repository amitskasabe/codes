#include<iostream>
int gun(int name , bool mag)
{
    
    switch(name)
    {
        
        
    }
    int amos = 30;
    if(mag == true)
    {
        // amso = 40;
        amos = amos + 10;
    }
    return amos--;
}

int main()
{
    gun(1 , false);
    return 0;
}