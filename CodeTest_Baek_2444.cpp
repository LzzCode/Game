#include <iostream>
using namespace std;
/*
문제
예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.

입력
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

출력
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.

예제 입력 1 
5

예제 출력 1 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/

/*

    1~n까지 반복. 
    시작은 별 1개 +2

    int star = 1;
    for(){

        for(int i =1; i<5;){
            for(int i=0; i<star; i++){ cout << *<<endl;}
            star +=2;  
        }

    }



*/

int main()
{
    int n;
    int star = 1;

        cin>>n;
        int blank = n-1; 
        
        
        for(int i =0; i<n;i++){
            for(int k=0; k<blank; k++){cout << " ";}
            blank--;
            for(int j=0; j<star; j++){ cout <<"*";}
            cout<<endl;
            star = star+2;  
        }
        
        
        star-=4;
        blank=0;
        
        
        for(int i=1; i<n; i++){
            for(int k=-1;k<blank;k++){cout<<" ";}
            blank++;
            for(int j=0; j<star; j++){cout<<"*";}
            cout<<endl;
            star-=2;
        }
        
        
            return 0; 

    }