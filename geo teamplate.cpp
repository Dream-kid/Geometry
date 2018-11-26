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

// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
struct Point
{ double x,y; };
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
