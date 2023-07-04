#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int score = 0;

    for (int i = 0; i < str.size(); i++)
    {
        switch (str[i])
        {
        case 'V':
            score += 5;
            break;
        case 'W':
            score += 2;
            break;
        case 'X':
            if (i != str.size() - 1)
            {
                i++;
            }
            break;
        case 'Y':
            if (i != str.size() - 1)
            {
                str.push_back(str[i + 1]);
                i++;
            }
            break;
        case 'Z':
            if (i != str.size() - 1)
            {
                if (str[i + 1] == 'V')
                {
                    score /= 5;
                    i++;
                }
                else if (str[i + 1] == 'W')
                {
                    score /= 2;
                    i++;
                }
            }
            break;
        }
    }

    cout << score <<endl;
}
//  Here string element are not removed to skip that value increase i value (i++)
// exmpale
// VYWZW
// I=0 >> V >> SCORE = 5 >> VYWZW
// I=1 >> Y >> SCORE = 5 >> I++ >> I=2 >> PUSH_BACK W >> VYWZWW
// I=3 >> Z >> SCORE = (INT) 5/2 = 2 (next consecutive character W)>> REMOVE 'W'>>VYWZW
// I=4 >> W >> SCORE = 2+2 = 4 
// 
