double: input lf and output f
long double:take input in double and type cast into long double and output f
#define pi acos(-1)
#give 3 points and it give u the center fo the circle
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
// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
struct Point
{ 
    double x,y;
};
bool onSegment(Point p, Point q, Point r)
{
  if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))return true;
    return false;
}
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -(q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}
bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
    if (o1 != o2 && o3 != o4) return true;
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    return false;
}
//Rotating_calipers
double cross(const point &a, const point &b, const point &c)
{
    return (b.first - a.first) * (c.second - a.second) -
           (b.second - a.second) * (c.first - a.first) ;
}
double Rotating_calipers()
{
        v=convexHull(v);
        double ans=0;
        for(int i=0; i<v.size()-1; i++)
        {
            int x=i+1;
            for(int j=i+1; j<v.size(); j++)
            {
                while(fabs(cross(v[i],v[j],v[x]))<fabs(cross(v[i],v[j],v[x+1])))
                {
                    x=x+1;
                    x%=v.size();
                }
                ans=max(ans,fabs(cross(v[i],v[j],v[x])));
            }
        }
        double temp=ans;
        temp/=2;
        printf("%.2f\n",temp);   
}
//area for intersection of two circle
// long double a=r1;
// long double b=r2;
//  long double c=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
//ignore c sqrt
void func(long double a,long double b,long double c)
{
    if(c>(a+b)*(a+b))//two circle outside
    {
        cout<<0<<endl;
        return;
    }
    if(c<=fabs(a-b)*fabs(a-b))//one circle is fully inside another
    {
        long double ans=min(b,a);
        ans*=ans;
        ans*=pi;
        cout<<fixed<<setprecision(10)<<ans<<endl;
        return;
    }
    c=sqrt(c);
    long double g,h;
    long double temp1=-a*a+b*b+c*c;
    temp1/=2.0;
    temp1/=b;
    temp1/=c;
    g=acos(temp1);
    long double temp2=-b*b+a*a+c*c;
    temp2/=2.0;
    temp2/=a;
    temp2/=c;
    h=acos(temp2);
    g*=2.0;
    h*=2.0;
    //area of a segment by a chord in the circle
    //here g and h is in radian
    long double ans=a*a*(h-sin(h))+b*b*(g-sin(g));
    ans/=2.0;
    cout<<fixed<<setprecision(10)<<ans<<endl;
    return;
}
