#include <iostream>

class b;

using namespace std;

int main()
{
    float a,b,x,y,z,c,d,e,f,g,h;
    cin >> a >> b >> x >> y;

            if (x<0 and y>0) {
                c=(a*x);
                        d=(b*y);
                                z=c-d;
    } else if (x>=0 and y<=0) {
                e=(a*x*x);
                        f=(b*y);
                     z=e-f;
            } else {
                g=(a*x);
                        h=(b*y*y);
                z=g+h;
            }

    cout<< z;
    return 0;

}
