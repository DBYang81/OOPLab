#include "RandGen.h"

using namespace std;

int main() {
    string ans;
    do{
        vector<int> lotto(7);
        vector<int> vikingLotto(6);
        vector<int> euroJackpot(5);
        vector<int> numMatch;
        vector<int> matNum;
        int index1 = 0;
        int index2 = 0;

        ostream_iterator<int> out_it (cout," ");
        generate(lotto.begin(),lotto.end(),RandGen(1,40));
        cout<<"Lotto: ";
        copy(lotto.begin(),lotto.end(),out_it);

        cout << endl <<"Viking Lotto: ";
        generate(vikingLotto.begin(),vikingLotto.end(),RandGen(1,48));
        copy(vikingLotto.begin(),vikingLotto.end(),out_it);

        sort(lotto.begin(), lotto.end());
        sort(vikingLotto.begin(),vikingLotto.end());

        cout << endl << "Matching Numbers: "<< endl;
        set_intersection(lotto.begin(), lotto.end(), vikingLotto.begin(),vikingLotto.end(), back_inserter(numMatch));
        for_each(numMatch.begin(), numMatch.end(), [&index1] (int i){
            index1++;
            std::cout << "#" << index1 <<": "<< i << endl;
        });

        cout << "EuroJackpot: ";
        generate(euroJackpot.begin(),euroJackpot.end(),RandGen(1,50));
        copy(euroJackpot.begin(),euroJackpot.end(),out_it);

        sort(euroJackpot.begin(),euroJackpot.end());
        sort(numMatch.begin(),numMatch.end());

        cout << endl << "Matching Numbers in three set: " << endl;
        set_intersection(euroJackpot.begin(), euroJackpot.end(), numMatch.begin(), numMatch.end(), back_inserter(matNum));
        for_each(matNum.begin(),matNum.end(), [&index2] (int i){
            index2++;
            std::cout << "#" << index2 <<": "<< i << endl;
        });

        do{
            cout << endl << "Would you like to do it again? (yes/no)" <<endl;
            getline(cin, ans);
        }while(ans != "yes" && ans != "no");

        lotto.clear();
        vikingLotto.clear();
        euroJackpot.clear();

    }while(ans == "yes");

    return 0;
}
