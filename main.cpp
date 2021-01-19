class Solution {
public:
    bool detectCapitalUse(string word) {
        bool ret = true;
        int testCase = 0;
        
        if (isupper(word[0])) {
            testCase = 2;
            
            if (isupper(word[1])) {
                testCase = 1;
            }
        }
        else {
            testCase = 3;
        }

        for (int i = 1; i < word.size(); ++i) {
            bool isUp = isupper(word[i]);
            bool isValid = true;
            

            switch (testCase) {
                case 1:
                {        
                    ret = isUp ? true : false;
                    if (!isUp) {
                        isValid = false;
                    }
                }
                break;
                case 2:
                {
                    ret = isUp ? false : true;
                    if (isUp) {
                        isValid = false;
                    }                        
                }
                break;
                case 3:
                {
                    ret = isUp ? false : true;
                    if (isUp) {
                        isValid = false;
                    }                        
                }
                break;                    
            }
            if (!isValid) {
                break;
            }
        }
        return ret;
    }
};
