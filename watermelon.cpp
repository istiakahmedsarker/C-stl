#include<bits/stdc++.h>
using namespace std;

string getEven(int wom){
    // int halfKilo = wom /2;
    if(wom % 2 == 0 && wom >2 ){
        return "Yes";
    }else{
        // halfKilo++;
        // int anotherKilo = wom - halfKilo;
        return "No";
    }
}
int main()
{
        int wom;
        cin >> wom ;

        string ans = getEven(wom);
        cout << ans << endl;

    return 0;
}