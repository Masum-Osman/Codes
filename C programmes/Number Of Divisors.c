int finddivisor(int n)
{
    i n t i , ans=1, count=1;
3 whil e (n%2==0)
4 f
5 n/=2;
6 count++;
7 g
8 ans∗=count ;
9 f o r ( i =3; i ∗ i<=n ; i+=2)
10 f
11 count=1;
12 whil e (n%i==0)
13 f
14 n/= i ;
15 count++;
16 g
17 ans∗=count ;
18 g
19 i f (n>1)
20 f
21 ans ∗=2;
}
 return ans;

}
