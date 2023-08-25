
        vector<int>ans;


        int m = matrix.size();
        int n = matrix[0].size();
        int total = m*n;


        int startrow=0;
        int endingcol=n-1;
        int endingrow =m-1;
        int startcol=0;

   int count = 0;
        while(count < total)
        {
            //starting row
            for(int i=startcol;i<=endingcol && count<total;i++)
            {
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;

            //ending col

            for(int i=startrow;i<=endingrow && count<total;i++)
            {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
         endingcol--;

            //ending row


            for(int i=endingcol;i>=startcol && count<total;i--)
            {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }

           endingrow--;
            //staring col

           
            for(int i=endingrow;i>=startrow && count<total;i--)
            {
                ans.push_back(matrix[i][startcol]);
                count++;
            }
           
           startcol++;
        }
        return ans;
