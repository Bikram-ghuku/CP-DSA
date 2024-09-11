#include<bits/stdc++.h>

using namespace std;

typedef struct{
    int cost;
    int pages;
} Book;

#define MAX_SIZE 10010

int dp[1001][100001];

void solver(Book books[], int n, int x){

    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= x; j++){
            dp[i][j] = 0;
        }
    }

    for(int nos = 1; nos <= n; nos++){
        for(int cs = 0; cs <= x; cs++){
            if(books[nos - 1].cost > cs){
                dp[nos][cs] = dp[nos - 1][cs];
            }else{
                dp[nos][cs] = max(dp[nos - 1][cs - books[nos - 1].cost] + books[nos - 1].pages, dp[nos - 1][cs]);
            }
        }
    }

    cout<<dp[n][x];
}

int main(){
    int n, x;
    cin>>n>>x;
    int prices[n], pages[n];
    for(int i = 0; i < n; i++) cin>>prices[i];
    for(int i = 0; i < n; i++) cin>>pages[i];

    memset(dp, -1, sizeof(dp));

    Book books[n];
    for(int i = 0; i < n; i++){
        books[i].pages = pages[i];
        books[i].cost = prices[i];
    }

    solver(books, n, x);

    return 0;
}