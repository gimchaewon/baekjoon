#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> scores(N);

    // 세준이의 현재 성적 입력
    for (int i = 0; i < N; ++i) {
        cin >> scores[i];
    }

    // 최댓값 찾기
    int M = 0;
    for (int i = 0; i < N; ++i) {
        if (scores[i] > M) {
            M = scores[i];
        }
    }

    double sum = 0;

    // 새로운 점수 계산 및 합 구하기
    for (int i = 0; i < N; ++i) {
        sum += (double)scores[i] / M * 100;
    }

    // 평균 출력
    cout << fixed;  // 소수점 아래 자리수 고정
    cout.precision(2);  // 소수점 아래 2자리까지 출력
    cout << sum / N << endl;

    return 0;
}
