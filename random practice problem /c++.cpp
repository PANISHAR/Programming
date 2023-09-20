#include <iostream>
#include <vector>

std::string determineSeriesWinner(const std::vector<int>& matches) {
    int indiaWins = 0, englandWins = 0;

    for (int matchResult : matches) {
        if (matchResult == 1)
            indiaWins++;
        else if (matchResult == 2)
            englandWins++;
    }

    if (indiaWins > englandWins)
        return "INDIA";
    else if (englandWins > indiaWins)
        return "ENGLAND";
    else
        return "DRAW";
}

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        std::vector<int> matches(5);
        for (int j = 0; j < 5; j++) {
            std::cin >> matches[j];
        }

        std::string winner = determineSeriesWinner(matches);
        std::cout << winner << std::endl;
    }

    return 0;
}
