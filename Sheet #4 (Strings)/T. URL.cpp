#include<bits/stdc++.h>
using namespace std;

// str (0-102)
// = >> 48,57,70,85,95
// & >> 53,62,80,91 

// p1 53
// 2. pt 5
// 3. pt 10
// 4. pt 6

int main()
{
    string str,temp="",tp="";
    cin >> str;
    int n =str.size(),p1,p2,p3,p4;
    string t1,t2,t3,t4,t5;

    for(int i=0;i<n;i++){
        if(str[i]=='=' && str[i-1]=='e' && str[i-4]=='n' && str[i-5]=='r'&& str[i-8]=='u'){

            p1= str.find('&');
            // cout<<"p1 "<<p1<<endl;
            t1 = str.substr(i+1,p1-i-1);
        }
        else if(str[i]=='=' && str[i-1]=='d' && str[i-2]=='w' && str[i-3]=='p'){
            temp = str.substr(i,(n-1)-p1);
            int pt = temp.find('&');
            // cout<<"2. pt "<<pt<<endl;
            t2 = str.substr(i+1,pt-1);
        }
        else if(str[i]=='=' && str[i-1]=='e' && str[i-2]=='l' && str[i-3]=='i'){

            temp = str.substr(i,(n-1)-p1);
            int pt = temp.find('&');
            // cout<<"3. pt "<<pt<<endl;
            t3 = str.substr(i+1,pt-1);
        }
        else if(str[i]=='=' && str[i-1]=='e' && str[i-2]=='l' && str[i-3]=='o'){
            temp = str.substr(i,(n-1)-p1);
            int pt = temp.find('&');
            // cout<<"4. pt "<<pt<<endl;
            t4 = str.substr(i+1,pt-1);
        }
        else if(str[i]=='=' && str[i-1]=='y' && str[i-2]=='e' && str[i-3]=='k'){
            t5 = str.substr(i+1,n);
        }
    }
    // we can not subtract strings even if we can add
    // like this one"ABC" - "BC" = "A"
    // cout<<endl;
    // cout<<endl;

    cout<< "username: "<<t1<<endl;
    cout<< "pwd: "<<t2<<endl;
    cout<< "profile: "<<t3<<endl;
    cout<< "role: "<<t4<<endl;
    cout<< "key: " <<t5<<endl;

    return 0;

}


// 2nd solution not mine
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string url ;
//     cin >> url;

//     bool start = false;
//     for (int i = 0; i < url.size(); i++)
//     {
//         if ((url[i] == '?' || url[i] == '&') && !start)
//         {
//             start = true;
//             continue;
//         }

//         if (start)
//         {
//             if (url[i] != '=' && url[i] != '&')
//             {
//                 cout << url[i];
//             }
//             else if (url[i] == '=')
//             {
//                 cout << ": ";
//             }
//             else if (url[i] == '&')
//             {
//                 cout << endl;
//             }
//         }
//     }
// }
