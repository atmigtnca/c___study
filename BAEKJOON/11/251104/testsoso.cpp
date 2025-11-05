#include <cmath>
#include <iostream>
using namespace std;

const int N = 120;
bool is_prime[N + 1];

int main()
{
    for (int i = 1; i <= N; i++)
        is_prime[i] = true;  // 처음에는 모두 true로 초기화
    is_prime[1] = false;     // 1은 소수가 아니므로

    // 에라토스테네스의 체 알고리즘
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (!is_prime[i]) continue;
        for (int j = 2; i * j <= N; j++) is_prime[i * j] = false;
    }

    // for (int i = 1; i <= N; i++)
    // {
    //     cout << i << ": " << is_prime[i] << '\n';
    // }

    int N;
    cin >> N;
    if (is_prime[N] == true)
    {
        cout << "소수입니다." << '\n';
    }
    else
    {
        cout << "소수가아닙니다." << '\n';
    }

    return 0;
}
