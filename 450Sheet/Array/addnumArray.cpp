   string calc_Sum(int A[], int N, int B[], int M)
    {
        string res;
        
        int carry = 0;
        
        int i = N - 1;
        int j = M - 1;
        
        while(i >= 0 and j >= 0)
        {
            int sum = A[i] + B[j] + carry;
            
            res += (sum % 10) + '0';
            carry = sum / 10;
            
            i--;
            j--;
        }
        
        while(i >= 0)
        {
            int sum = A[i] + carry;
            
            res += (sum % 10) + '0';
            carry = sum / 10;
            
            i--;
        }
        
        while(j >= 0)
        {
            int sum = B[j] + carry;
            
            res += (sum % 10) + '0';
            carry = sum / 10;
            
            j--;
        }
        
        if(carry)
        {
            res += carry + '0';
        }
        
        reverse(res.begin(), res.end());
        
        int curr = 0;
        while(curr < res.size() and res[curr] == '0')
        {
            curr++;
        }
        
        return res.substr(curr);
    }
