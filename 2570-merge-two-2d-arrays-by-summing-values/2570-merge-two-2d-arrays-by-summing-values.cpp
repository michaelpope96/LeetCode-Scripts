class Solution {
public:
    std::vector<std::vector<int>>
    mergeArrays(std::vector<std::vector<int>>& nums1,
                std::vector<std::vector<int>>& nums2) {
        std::vector<std::vector<int>> answer;
        auto itr1 = nums1.begin();
        auto itr2 = nums2.begin();

        while (itr1 != nums1.end() || itr2 != nums2.end()) {
            if (itr1 == nums1.end()) {
                answer.push_back(
                    std::vector<int>{itr2->at(0), itr2->at(1)});
                    ++itr2;
            } else if (itr2 == nums2.end()) {
                answer.push_back(
                    std::vector<int>{itr1->at(0), itr1->at(1)});
                    ++itr1;
            } else if (itr1->at(0) == itr2->at(0)) {
                answer.push_back(
                    std::vector<int>{itr1->at(0), itr1->at(1) + itr2->at(1)});
                ++itr1;
                ++itr2;
            } else if (itr1->at(0) < itr2->at(0)) {
                answer.push_back(std::vector<int>{itr1->at(0), itr1->at(1)});
                ++itr1;
            } else {
                answer.push_back(std::vector<int>{itr2->at(0), itr2->at(1)});
                ++itr2;
            }
        }

        return answer;
    }
};