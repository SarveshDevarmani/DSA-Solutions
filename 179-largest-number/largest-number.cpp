class Solution {

static bool compare(string a, string b) {
        string sum1 = a + b;
        string sum2 = b + a;

        return sum1 > sum2;

}

public:

    string largestNumber(vector<int>& nums) {
    int n = nums.size();
    int a, b;
    vector<string> numbers;

    for(int i=0; i<n; i++) {
        string s = to_string(nums[i]);
        numbers.push_back(s);
    }

    sort(numbers.begin(), numbers.end(), compare);
    
    if(numbers[0] == "0") {
        return "0";
    }

    string answer = "";

    for(int i=0; i<n; i++) {
        answer += numbers[i];
    }
    return answer;
    }
};