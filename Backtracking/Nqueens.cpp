#include <bits/stdc++.h>
using namespace std;

int n;
bool is_attacked(int x, int y, bool board[n][n])
{
    // if queen is in any cell in xth row
    for(int j=0;j<n;j++)
    {
        if(board[x][j])
        return true;
    }
    
    // if queen is in any cell in yth column
    for(int i=0;i<n;i++)
    {
        if(board[i][y])
        return true;
    }
    
    //checking for diagonals
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            if(((i+j == x+y)&& board[i][j]) || ((i-j == x-y)&& board[i][j])
            return true;
        }
    }
    return false;
}

bool NQueens(bool board[n][n],int y)
{
    if(y>=n)
    return true;
    for(int i=0; i<n; i++)
    {
        if(!is_attacked(i,y,board))  
        {
            board[i][y]=true;
            if(NQueens(board,y+1))
            return true;
            board[i][y]= false;
        }
    }
    return false;    
}




int main() {

	cin>>n;
	bool board[n][n]= {false};
	if(NQueens(board,0))
	{
	    cout<<"NQueens solution is found with "<<n<<" queens"<<endl;
	}
	else
	{
	    cout<<"No possible NQueens solution with "<<n<<" queens"<<endl;
	}
	
	return 0;
}
