class OrderedStream {
public:
    int lastInsertedIdx;
    int storedValueSize;
    std::vector<string> storedValues;

    OrderedStream(int n) {
        lastInsertedIdx = 0;
        storedValueSize = n;
        storedValues = std::vector<string>(n, "");
    }

    std::vector<std::string> insert(int idKey, const std::string& value) {
        storedValues[idKey - 1] = value;

        auto first = storedValues.begin() + lastInsertedIdx;

        while (lastInsertedIdx < (storedValueSize) && !storedValues[lastInsertedIdx].empty()) {
            ++lastInsertedIdx;
        }

        auto last = storedValues.begin() + lastInsertedIdx; // End index is 0-based, so +1 for the range
        // constructor's exclusive end

        std::vector<string> sub_vector(first, last);
        return sub_vector;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */