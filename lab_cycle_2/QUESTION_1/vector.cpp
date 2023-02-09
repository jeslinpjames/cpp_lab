#include<iostream>
using namespace std;
class vector
{
    private:
        int x,y;    
    public:
    bool operator==(vector &a);
    bool vector::operator!=(vector &a);
    bool vector::operator<(vector &a);   
    bool vector::operator<=(vector &a);
};
bool vector::operator==(vector &a)
{
    if(a.x==x)&&(a.y==y)
    return true;
    else 
    return false;
}
bool vector::operator!=(vector &a)
{
    if(a.x!=x)||(a.y!=y)
    return true;
    else 
    return false;
}
bool vector::operator<(vector &a)
{
    if(a.x>x)&&(a.y>y)
    return true;
    else
    return false;
}
bool vector::operator<=(vector &a)
{
    if(a.x>=x)&&(a.y>=y)
    return true;
    else
    return false;
}
