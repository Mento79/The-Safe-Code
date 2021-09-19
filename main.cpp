#include <bits/stdc++.h>
#include <time.h>

using namespace std;

int main()
{

    cout << "The safe code!!!\n";
    cout << "The Game rules:-\n";
    cout << "1-The safe code consists of 4 digits \n";
    cout << "2-You have 10 tries to guess it \n";
    cout << "3-You have to enter 4 digits every try \n";
    cout << "4-if you have a correct digit but in wrong place you will get - \n";
    cout << "5-if you have a correct digit in its correct place you will get = \n";
    cout << "6-if there are no correct digit you get nothing \n";
    cout << "7-Find the code to win \n";
    cout << "Have Fun ;)\n";










    srand(time(0));
    int target;
    vector<int> tar,checktr(4,-1),checktar(4,-1),c(4,-1),tr;
    bool win=false;
    target=rand();
    while (target<1000||target>9999)
        target=rand();
    int x=target;
    while (x){
        tar.push_back(x%10);
        x/=10;
    }


    int tries = 10;
    int c1=0,c2=0,no=0;
    while (tries--){
        c1=0;
        c2=0;
        no=0;
        tr.clear();
        checktar.clear();
        checktar=c;
        checktr.clear();
        checktr=c;
        cin >> x;
        while (x<1000||x>9999){
            cout << "Wrong Input !! Enter 4 digits\n";
            cin >>x;
        }

        while (x){
            tr.push_back(x%10);
            x/=10;
        }
        for (int i=0;i<4;i++){
            if (tr[i]==tar[i]){
                c1++;
                checktar[i]=1;
                checktr[i]=1;
            }
        }
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                if (i!=j){
                    if (tr[i]==tar[j]&&checktr[i]==-1&&checktar[j]==-1){
                        c2++;
                        checktar[j]=1;
                        checktr[i]=1;
                    }
                }
            }
        }
        if (c1 ==4){
            win=true;
            break;
        }
        else {
            while (c1--){
                cout<<"=";
                no++;
            }
            while (c2--){
                cout<<"-";
                no++;
            }
            cout << "\n";
        }


    }

    if (win){
        cout << "\n\n\n\n\nYou Win!\nThe Number was " << target ;
    }
    else{
        cout << "\n\n\n\n\nYou Lose!\nThe Number was " << target ;
    }




    return 0;
}
