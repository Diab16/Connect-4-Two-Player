#include <bits/stdc++.h>

using namespace std;
void in (char a[6][7],char r);
void shp(char a[6][7]) ;
bool win (char a[6][7]) ;
int main()
{
    char q[6][7] ;
    for (int i=0 ; i<6; i++)
    {
        for (int j=0 ; j<7; j++)
        {
            if (i%2==0)
            {
                if (j%2==0)
                    q[i][j] = '_' ;
                else
                    q[i][j] = '*' ;
            }
            else
            {
                if (j%2==0)
                    q[i][j] = '*' ;
                else
                    q[i][j] = '_' ;
            }
        }
    }
    char r ;
    for (int t=0 ; win(q) ; t++ )
    {
        if (t%2==0)
            r='b' ;
        else
            r='r' ;
        shp(q) ;
        in(q,r) ;
    }
    return 0 ;
}
void in (char a[6][7],char r)
{
    int c ;
    cout << "enter your choise : " ;
    cin >> c ;
    for (int i=0 ; i<6 ; i++ )
    {
        if (a[i][c-1]=='_'||a[i][c-1]=='*')
        {
            a[i][c-1]=r ;
            break ;
        }
    }
}
void shp(char a[6][7])
{
    system ("cls") ;
    //cout << "\t\t\t  7     6     5     4     3     2     1\n" ;
    cout << "\t\t\t  1     2     3     4     5     6     7\n" ;
    for(int m=5; m>=0; m--)
    {
        cout <<"\t\t\t" ;
        for(int b=0; b<=6; b++)
            cout << char(218) << char(196) << char(196)<< char(196)<< char(191) << " ";
        cout << endl <<"\t\t\t" ;
        for(int b=0; b<=6; b++)
        {
            cout<<char(179)<<" "  ;
            if (a[m][b]=='*'||a[m][b]=='_')
                cout << " " ;
            else
                cout << a[m][b] ;
            cout<<" "<<char(179)<< " ";
        }
        cout << endl <<"\t\t\t" ;
        for(int b=0; b<=6; b++)
            cout<<char(192)<<char(196)<< char(196)<< char(196)<<char(217)<<" ";
        cout <<endl ;

    }
}
bool win (char a[6][7])
{
    bool b=0 ;
    for (int i=0 ; i<5 ; i++)
    {
        for (int j=0 ; j<3 ; j++ )
        {
            if (a[i][j]==a[i][j+1] && a[i][j+1]==a[i][j+2] && a[i][j+2]==a[i][j+3])
            {
                shp(a) ;
                cout << endl << "THE " << a[i][j] << " WIN \n" ;
                system ("color e0 ") ;
                b=1 ;
                break ;
            }
        }
        if (b)
            break ;
    }
    if (b)
        return 0 ;
    for (int j=0 ; j<7 ; j++ )
    {
        for (int i=0 ; i<2 ; i++)
        {
            if (a[i][j]==a[i+1][j] && a[i+1][j]==a[i+2][j] && a[i+2][j]==a[i+3][j])
            {
                shp(a) ;
                cout << endl << "THE " << a[i][j] << " WIN \n" ;
                system ("color e0 ") ;
                b=1 ;
                break ;
            }
        }
        if (b)
            break ;
    }
    if (b)
        return 0 ;
    for (int i=0 ; i<2 ; i++ )
    {
        for (int j=0 ; j<3 ; j++ )
        {
            if (a[i][j]==a[i+1][j+1] && a[i+1][j+1]==a[i+2][j+2] && a[i+2][j+2]==a[i+3][j+3] && (a[i][j]!='_' && a[i][j]!='*'))
            {
                shp(a) ;
                cout << endl << "THE " << a[i][j] << " WIN \n" ;
                system ("color e0 ") ;
                b=1 ;
                break ;
            }
        }
        if (b)
            break ;
    }
    if (b)
        return 0 ;
    for (int i=0 ; i<2 ; i++ )
    {
        for (int j=6 ; j>2 ; j-- )
        {
            if (a[i][j]==a[i+1][j-1] && a[i+1][j-1]==a[i+2][j-2] && a[i+2][j-2]==a[i+3][j-3] && (a[i][j]!='_' && a[i][j]!='*'))
            {
                shp(a) ;
                cout << endl << "THE " << a[i][j] << " WIN \n" ;
                system ("color e0 ") ;
                b=1 ;
                break ;
            }
        }
        if (b)
            break ;
    }
}
