class Solution1 {
public:
    bool validUtf8(vector<int>& data) {
        for (int i = 0 ; i < data.size() ; i++){
            if (data[i] < 0b10000000) continue;
            else{
                int bytes = 0, current_value = data[i];
                for (int j = 7 ; j >= 1 ; j --){
                    if (current_value >= pow(2, j)) bytes++;
                    else break;
                    current_value = current_value - pow(2, j);
                }
                if (bytes == 1) return false;
                for (int j = i + 1 ; j < i + bytes ; j ++){
                    if (data[j] > 0b10111111 || data[j] < 0b10000000) return false;
                }
                i = i + bytes - 1;
            }
        }
        return true;
    }
};

class Solution2 {
public:
    bool validUtf8(vector<int>& data) {
        int count = 0;
        for (int i = 0 ; i < data.size() ; i ++){
            if (count == 0){
                if ((data[i] >> 5) == 0b110) count = 1;
                else if ((data[i] >> 4) == 0b1110) count = 2;
                else if ((data[i] >> 3) == 0b11110) count = 3;
                else if (data[i] >> 7 == 1) return false;
            }
            else {
                if ((data[i] >> 6) != 0b10) return false;
                count --;
            }
        }
        return count == 0;
    }
};
