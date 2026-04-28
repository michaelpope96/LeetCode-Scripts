class Solution {
public:
    char findHexChar(const int& i) {
        switch (i) {
        case 35:
            return 'Z';
        case 34:
            return 'Y';
        case 33:
            return 'X';
        case 32:
            return 'W';
        case 31:
            return 'V';
        case 30:
            return 'U';
        case 29:
            return 'T';
        case 28:
            return 'S';
        case 27:
            return 'R';
        case 26:
            return 'Q';
        case 25:
            return 'P';
        case 24:
            return 'O';
        case 23:
            return 'N';
        case 22:
            return 'M';
        case 21:
            return 'L';
        case 20:
            return 'K';
        case 19:
            return 'J';
        case 18:
            return 'I';
        case 17:
            return 'H';
        case 16:
            return 'G';
        case 15:
            return 'F';
        case 14:
            return 'E';
        case 13:
            return 'D';
        case 12:
            return 'C';
        case 11:
            return 'B';
        case 10:
            return 'A';
        case 9:
            return '9';
        case 8:
            return '8';
        case 7:
            return '7';
        case 6:
            return '6';
        case 5:
            return '5';
        case 4:
            return '4';
        case 3:
            return '3';
        case 2:
            return '2';
        case 1:
            return '1';
        case 0:
            return '0';
        default:
            throw std::invalid_argument("Invalid hex character");
        }
    }

    std::string findHex(int n) {
        std::string answer;

        int highestBase = 0;
        for (auto i = 0; i < 12; ++i) {
            double tmp = std::pow(16, highestBase);
            if (n < tmp) {
                --highestBase;
                break;
            }
            ++highestBase;
        }

        double tmp = 0;
        for (auto exp = highestBase; exp >= 0; --exp) {
            for (auto val = 16; val >= 0; --val) {
                tmp = val * std::pow(16, exp);
                if (tmp <= n) {
                    n -= tmp;
                    answer += findHexChar(val);
                    break;
                }
            }
        }
        return answer;
    }

    std::string findHexTri(int n) {
        std::string answer;

        int highestBase = 0;
        for (auto i = 0; i < 12; ++i) {
            double tmp = std::pow(36, highestBase);
            if (n < tmp) {
                --highestBase;
                break;
            }
            ++highestBase;
        }

        double tmp = 0;
        for (auto exp = highestBase; exp >= 0; --exp) {
            for (auto val = 36; val >= 0; --val) {
                tmp = val * std::pow(36, exp);
                if (tmp <= n) {
                    n -= tmp;
                    answer += findHexChar(val);
                    break;
                }
            }
        }
        return answer;
    }

    std::string concatHex36(int n) {

        const std::string hexadecimal = findHex(n * n);
        const std::string hexatrigesimal = findHexTri(n * n * n);

        return hexadecimal + hexatrigesimal;
    }
};