class Solution {
public:
    string convertDateToBinary(string date) {
        string years = date.substr(0,4);
        string month = date.substr(5,2);
        string naal = date.substr(8,2);
        int s1 = stoi(years);
        int s2 = stoi(month);
        int s3 = stoi(naal);
    
        string y = binary(s1);
        string m= binary(s2);
        string d = binary(s3);
        string res;

        return y + "-" + m + "-" + d;
    }
    string binary(int n)
    {
        string binary;
        if(n==0)
        {
            return "";
        }
        while(n>0)
        {
            
            binary = to_string(n%2) + binary;
            n = n/2;

        }
        cout<<binary<<endl;
        return binary;
    }
};
