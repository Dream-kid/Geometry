y=mx + b;
for a certain x we get max y

1. mi > mi+1, and all queries are for minimum. add1 + query1 + bad1 
2. mi > mi+1, and all queries are for maximum. add2 + query2 + bad2
3. mi < mi+1, and all queries are for minimum. add2 + query1 + bad2
4. mi < mi+1, and all queries are for maximum. add1 + query2 + bad1


vector<ll>b,m;
bool bad1(ll f1, ll f2, ll f3)
{
     //(f1 ∩ f3) < (f1 ∩ f2) remove f2 
    // lower hull
    return 1.0 * (b[f3] - b[f1]) * (m[f1] - m[f2]) <=
           1.0 * (b[f2] - b[f1]) * (m[f1] - m[f3]);
}
//for type 1 and type 4
void add1(long long m_, long long b_) {
    m.push_back(m_);
    b.push_back(b_); // push in CHT
    ll sz = m.size();
    // notice that f1 from discussion is in position sz - 3
    // f2 is in sz - 2, new line is in sz - 1
    while(sz >= 3 && bad1(sz - 3, sz - 2, sz - 1))
    {
        m.erase(m.end() - 2); // remove f2's m
        b.erase(b.end() - 2); // remove f2's b
        sz--; // size is decreased by 1
    } // we remove f2's while we can
}

bool bad2(ll f1, ll f2, ll f3)
{
    //(f1 ∩ f3) > (f1 ∩ f2) remove f2 
    //upper hull
    return 1.0 * (b[f3] - b[f1]) * (m[f1] - m[f2]) >=
           1.0 * (b[f2] - b[f1]) * (m[f1] - m[f3]);  
}

//for type 2 and type 3
void add2(long long m_, long long b_) 
{
    m.push_back(m_);
    b.push_back(b_); // push in CHT
    ll sz = m.size();
    // notice that f1 from discussion is in position sz - 3
    // f2 is in sz - 2, new line is in sz - 1
    while(sz >= 3 && bad2(sz - 3, sz - 2, sz - 1))
    {
        m.erase(m.end() - 2); // remove f2's m
        b.erase(b.end() - 2); // remove f2's b
        sz--; // size is decreased by 1
    } // we remove f2's while we can
}
ll f(ll i, ll x)
{
    return m[i] * x + b[i];
}
//ternary search
//for type 1 and type 3 
//for minimum
ll query1(ll x)
{
    ll  lo = 0, hi = m.size() - 1;
    ll ans = -1e18;
    while(lo <= hi)
    {
        ll mid1 = lo +(- lo + hi) / 3;
        ll mid2 = hi - (-lo + hi) / 3;
        ll y1 = f(mid1, x), y2 = f(mid2, x);
        if(y1 <= y2)
            ans = y1, hi = mid2 - 1;
        else
            ans = y2, lo = mid1 + 1;
    }
    return ans;
}
//for type 2 and type 4
//for maximum
ll query2(ll x)
{
    ll  lo = 0, hi = m.size() - 1;
    ll ans = -1e18;
    while(lo <= hi)
    {
        ll mid1 = lo +(- lo + hi) / 3;
        ll mid2 = hi - (-lo + hi) / 3;
        ll y1 = f(mid1, x), y2 = f(mid2, x);
        if(y1 >= y2)
            ans = y1, hi = mid2 - 1;
        else
            ans = y2, lo = mid1 + 1;
    }
    return ans;
}
