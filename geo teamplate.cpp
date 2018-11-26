double: input lf and output f
#give 3 points and give u the center fo the circle
void func(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double midx1=(x1+x2)/2;
    double midy1=(y1+y2)/2;
    double midx2=(x2+x3)/2;
    double midy2=(y3+y2)/2;
    double tan1=(x2-x1)/(-y2+y1);
    double tan2=(x3-x2)/(-y3+y2);
    double x,y;// (y-midy1)=tan1*(x-midx1); // (y-midy2)=tan2*(x-midx2);
    x=((-midy1+midy2)+tan1*midx1-tan2*midx2)/(tan1-tan2);
    y=midy1+tan1*(x-midx1);
    double r=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    r=sqrt(r);
    cout<<x<<" "<<y<<" "<<r<<endl;
    }
//the polygon's area 
Area=1/2*abs((x0*y1-x1*y0)+(x1*y2-x2*y1)...+(xn*yn-1-xn-1*yn)+(xn*y0-x0*yn))
 //orientation check
 ll func(ll x1,ll y1,ll x2,ll y2,ll x,ll y)
{
    return (x2-x1)*(y-y1) - (y2-y1)*(x-x1);
} 
//pick's theorem
area=(boundary_point)/2+inner_point-1
// number of integer points between two points in 2d grid
 GCD(abs(x1 - x2), abs(y1 - y2))
//area when u know three point of triangle
double func(ll x1,ll y1,ll x2,ll y2,ll x3,ll y3)
{
    return abs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2.0;
}
