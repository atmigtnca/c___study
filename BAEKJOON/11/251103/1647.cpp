#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // "서" 모양
    vector<string> seo = {"■■■■■■■■■■", "    ││    ", "■■■■■■■■■■",
                          "││        ", "■■■■■■■■■■"};

    // "종" 모양
    vector<string> jong = {"■■■■■■■■■■", "   ││     ", "■■■■■■■■■■",
                           "  ││   ││ ", "■■■■■■■■■■"};

    // "호" 모양
    vector<string> ho = {"■■■■■■■■■■", "││     ││ ", "■■■■■■■■■■", "││     ││ ",
                         "■■■■■■■■■■"};

    // 각 글자 줄마다 출력
    for (int i = 0; i < seo.size(); i++)
    {
        cout << seo[i] << "   " << jong[i] << "   " << ho[i] << '\n';
    }

    return 0;
}