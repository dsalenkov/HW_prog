#include <iostream>

#include <conio.h>

using namespace std;

int main()

{

double A, B, C, p, At;

int N = 10, i;

cout << "A, B, C, p\n";

cin >> A >> B >> C >> p;

At=A;

i=1;

while (At>=C && i<=N)

{

At=At-B*(1 - (1 - i)/10);

At = At*(1 - p / 100);

i=i+1;

}

if (At<C)

{

i=i-1;

cout<<"i="<<i;

}

else

cout<<"Time is over"<<endl;

_getch();

}
