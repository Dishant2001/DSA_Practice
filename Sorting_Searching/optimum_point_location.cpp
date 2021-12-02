//Minimum Sum of distances of points from given line
//Ternary Search
//Sum of distances of points from point on line is a Unimodal function
//Unimodal function is neither strictly increasing nor strictly decreasing
//Hence, Ternary search is implemented, since Sum of distances of points forms a parabola
/*
\                  /
 \                /
  \              /
   \            /
    `          `
     `       `
       ` . `
*/

#include<bits/stdc++.h>
#define INF 1e6
#define sq(x) ((x)*(x))
using namespace std;

typedef struct point{
 int x,y;
 point(){}
 point(int x,int y)
    :x(x)
    ,y(y)
    {
    }
}point;

typedef struct line{
    int a,b,c;
    line(int a,int b,int c)
        :a(a)
        ,b(b)
        ,c(c)
        {
        }
}line;

double computeDist(point p1,double x,double y)
{
    return sqrt(sq(x-p1.x)+sq(y-p1.y));
}

double ordinate(double x,line L)
{
    return ((double)(L.c-L.a*x))/L.b;
}

double distSum(point p[],int n,double x,line l)
{
    double sum=0;
    for(int i=0;i<n;++i)
        sum+=computeDist(p[i],x,ordinate(x,l));
    return sum;
}


double optimizedLocation(point p[],line l,int n)
{
    double low=-INF,high=INF;
    //Ternary search
    while((high-low)>1e-6)
    {
        double one_third=low+(high-low)/3;
        double two_third=high-(high-low)/3;
        double dist1=distSum(p,n,one_third,l);
        double dist2=distSum(p,n,two_third,l);
        if(dist1<dist2)
            high=two_third;
        else
            low=one_third;
    }
    return distSum(p,n,low,l);
}

int main()
{
    line l(1,-1,3);
    point p[]={{-3,-2},{-1,0},{-1,2},{1,2},{3,4}};
    cout<<optimizedLocation(p,l,5);
    return 0;
}
