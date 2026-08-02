# LeetCode Problems Summary and Thought Process

## Problem: 0011-container-with-most-water
### Thought Process:
Uses a two-pointer approach (left and right). At each step, calculates the area and updates the maximum area found so far. Then, moves the pointer that points to the shorter line inward, as this is the only way to potentially find a larger area.

### Code:
```cpp
class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=height.size();
        int l=0,r=s-1;
        int area=0;
        for(int i=0;i<s;i++)
        {
            int ar=(std::min(height[l],height[r]))*(r-l);
            area=std::max(area,ar);
            if(height[l]<height[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return area;
    }
};
```

## Problem: 0033-search-in-rotated-sorted-array
### Thought Process:
Iterates through the entire array linearly to find the target element. Although a binary search would be O(log n), this code uses a simple O(n) linear search.

### Code:
```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            ans=i;
        }
        return ans;
    }
};
```

## Problem: 0048-rotate-image
### Thought Process:
Rotates an N x N matrix by 90 degrees clockwise by first transposing the matrix (swapping `matrix[i][j]` with `matrix[j][i]`), and then reversing each row.

### Code:
```cpp
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       int n=matrix.size();
       for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int a=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=a;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            int temp=matrix[i][j];
            matrix[i][j]=matrix[i][n-1-j];
            matrix[i][n-1-j]=temp;
        }
    }
}
};
```

## Problem: 0075-sort-colors
### Thought Process:
Sorts an array using a simple Bubble Sort algorithm with O(n^2) complexity, swapping adjacent elements if they are out of order. Note that optimal solutions typically use counting sort or Dutch National Flag algorithm.

### Code:
```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size()-1;j++)
            {
                if(nums[j]>nums[j+1])
                {
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
    }
};
```

## Problem: 0081-search-in-rotated-sorted-array-ii
### Thought Process:
Uses a simple linear search to find the target element in the array, returning true if found, and false otherwise. Like problem 33, it does not take advantage of binary search for better time complexity.

### Code:
```cpp
class Solution {
public:
    bool search(vector<int>& nums, int target) {
     for(int i=0;i<nums.size();i++)
     {
        if(nums[i]==target)
        {
        return true;
        break;
        }
     }
     return false;
    }
};
```

## Problem: 0120-triangle
### Thought Process:
Uses a bottom-up Dynamic Programming approach. It starts from the second to last row and updates each element to be the sum of itself and the minimum of its two adjacent children in the row below, eventually accumulating the minimum path sum at the top.

### Code:
```cpp
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
         for(int i=triangle.size()-2;i>=0;i--)
         {
            for(int j=0;j<=i;j++)
            {
                triangle[i][j]+=min(triangle[i+1][j],triangle[i+1][j+1]);
            }
        }
        return triangle[0][0];
    }
};
```

## Problem: 0153-find-minimum-in-rotated-sorted-array
### Thought Process:
Finds the minimum element by directly utilizing the `min_element` function from the C++ standard library, doing a linear scan instead of the optimal O(log n) binary search.

### Code:
```cpp
class Solution {
public:
    int findMin(vector<int>& nums) {
        return *min_element(nums.begin(),nums.end());
    }
};
```

## Problem: 0189-rotate-array
### Thought Process:
Rotates the array to the right by `k` steps using an in-place array reversal approach: it first reverses the first `n-k` elements, then the last `k` elements, and finally reverses the entire array.

### Code:
```cpp
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        rvrse(nums,0,n-k-1);
        rvrse(nums,n-k,n-1);
        rvrse(nums,0,n-1);
    }
    void rvrse(vector<int>& nums,int s,int e)
    {
        for(int i=0;i<(e-s+1)/2;i++)
        {
            int tmp=nums[s+i];
            nums[s+i]=nums[e-i];
            nums[e-i]=tmp;
        }
    }
};
```

## Problem: 0287-find-the-duplicate-number
### Thought Process:
Sorts the array first in O(n log n) time. Then, it iterates through the sorted array to find the duplicate by checking if any adjacent elements are equal.

### Code:
```cpp
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size()-1;i++)
        {
            if (nums[i]==nums[i+1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};
```

## Problem: 0442-find-all-duplicates-in-an-array
### Thought Process:
Sorts the array and then iterates through it to check for adjacent identical elements. When a duplicate is found, it is added to the result vector.

### Code:
```cpp
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
```

## Problem: 0628-maximum-product-of-three-numbers
### Thought Process:
Sorts the array and compares the product of the three largest numbers with the product of the two smallest (potentially large negative numbers) and the largest number. It returns the maximum of these two products.

### Code:
```cpp
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return(max(nums[0]*nums[1]*nums[nums.size()-1],nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]));
    }
};
```

## Problem: 0807-max-increase-to-keep-city-skyline
### Thought Process:
Calculates the maximum height for each row and each column. Then, it iterates through the grid again, determining that each building can be increased to the minimum of its corresponding row's max and column's max without affecting the skyline, summing up the allowed increases.

### Code:
```cpp
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int sz=grid[0].size();
        vector<int> rmx,cmx;
        for(int i=0;i<sz;i++)
        {
            int mx=grid[i][0];
            for(int j=0;j<sz;j++)
            {
                if(grid[i][j]>mx)
                mx=grid[i][j];
            }
            rmx.push_back(mx);
        }
        for(int i=0;i<sz;i++)
        {
            int mx=grid[0][i];
            for(int j=0;j<sz;j++)
            {
                if(grid[j][i]>mx)
                mx=grid[j][i];
            }
            cmx.push_back(mx);
        }
        vector<vector<int>> ans(sz,vector<int> (sz));
        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<sz;j++)
            {
                int r=rmx[i];
                int c=cmx[j];
                if(r<c)
                ans[i][j]=r;
                else
                ans[i][j]=c;
            }
        }
        int s=0;
        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<sz;j++)
            {
                s+=ans[i][j]-grid[i][j];
            }
        }
        return s;
    }
};
```

## Problem: 1441-build-an-array-with-stack-operations
### Thought Process:
Simulates building the target array using 'Push' and 'Pop'. It maintains a counter and pushes/pops elements until the counter matches the current target number, then just pushes the target number.

### Code:
```cpp
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        int c=1;
        for(int i=0;i<target.size();i++)
        {
            while(c<target[i])
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                c++;
            }
            ans.push_back("Push");
            c++;
        }
        return ans;
    }
};
```

## Problem: 1464-maximum-product-of-two-elements-in-an-array
### Thought Process:
Sorts the array in ascending order and then calculates the product of `(nums[n-1]-1) * (nums[n-2]-1)` using the two largest elements at the end of the sorted array.

### Code:
```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return((nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
    }
};
```

## Problem: 1561-maximum-number-of-coins-you-can-get
### Thought Process:
Sorts the piles of coins. Since you always pick the second largest, Alice picks the largest, and Bob picks the smallest, it iterates backwards from the second largest element, skipping one element each time, and sums them up until n/3 elements are taken.

### Code:
```cpp
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int s=0,n=piles.size();
        for(int i=n-2;i>=n/3;i-=2)
        {
            s+=piles[i];
        }
        return s;
    }
};
```

## Problem: 1769-minimum-number-of-operations-to-move-all-balls-to-each-box
### Thought Process:
Uses a brute-force approach. For each box `i`, it calculates the total operations required to move all '1's from every other box `j` by summing the absolute distances `|j - i|`.

### Code:
```cpp
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.size();i++)
        {
            int s=0;
            for(int j=0;j<boxes.size();j++)
            {
                if(boxes[j]=='1')
                {
                    s+=abs(j-i);
                }
            }
            ans.push_back(s);
        }
        return ans;
    }
};
```

## Problem: 1823-find-the-winner-of-the-circular-game
### Thought Process:
Solves the Josephus problem using iterative dynamic programming (bottom-up approach). It builds the solution from 2 people up to `n`, updating the winner's position at each step using the formula `(winner + k) % i`.

### Code:
```cpp
class Solution {
public:
    int findTheWinner(int n, int k) {
        int w=0;
    for(int i=2;i<=n;i++)
    {
        w=(w+k)%i;
    }
    return w+1;
    }
};
```

## Problem: 1829-maximum-xor-for-each-query
### Thought Process:
Calculates the prefix XOR of all elements. To maximize the result of the query, it XORs the current prefix XOR with the maximum possible value `(1 << maximumBit) - 1`. It then removes elements from the end for subsequent queries by XORing them out.

### Code:
```cpp
class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        vector<int> ans;
        int xr=0;
        long long mxr=(1<<maximumBit)-1;
        for(int i=0;i<nums.size();i++)
        {
            xr^=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans.push_back(mxr^xr);
            xr^=nums[i];
        }
        return ans;
    }
};
```

## Problem: 1833-maximum-ice-cream-bars
### Thought Process:
Uses a greedy approach by sorting the ice cream costs in ascending order. It iterates through the sorted costs, buying ice creams as long as the remaining coins are sufficient, thereby maximizing the number of ice creams bought.

### Code:
```cpp
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        for(int cost:costs)
        {
            if (coins>=cost)
            {
                coins-=cost;
                ans++;
            } else
            {
                break;
            }
        }
        return ans;
    }
};
```

## Problem: 1846-maximum-element-after-decreasing-and-rearranging
### Thought Process:
Sorts the array to process elements in ascending order. Sets the first element to 1, and for each subsequent element, it enforces the condition that the absolute difference between adjacent elements is at most 1 using `min(arr[i], arr[i-1] + 1)`.

### Code:
```cpp
class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        for(int i=1;i<arr.size();i++)
        {
            arr[i]=min(arr[i],arr[i-1]+1);
        }
        return arr[arr.size()-1];
    }
};
```

## Problem: 1877-minimize-maximum-pair-sum-in-array
### Thought Process:
Sorts the array and pairs the smallest available element with the largest available element (i.e., `nums[i]` with `nums[n-1-i]`). This minimizes the maximum pair sum.

### Code:
```cpp
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            mx=max(mx,nums[i]+nums[nums.size()-1-i]);
        }
        return mx;
    }
};
```

## Problem: 2079-watering-plants
### Thought Process:
Simulates the watering process. If the watering can has enough capacity for the next plant, it waters it and moves one step. If not, it adds the steps to walk back to the river and back to the plant (`2 * i`), refills the can, and waters the plant.

### Code:
```cpp
class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int s=0,c=capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(c>=plants[i])
            {
                c-=plants[i];
                s++;
            }
            else
            {
                c=capacity;
                s=s+2*i;
                c-=plants[i];
                s++;
            }
        }
        return s;
    }
};
```

## Problem: 2125-number-of-laser-beams-in-a-bank
### Thought Process:
Counts the number of security devices in each row. It ignores rows with 0 devices. For rows with devices, the number of laser beams between two adjacent non-empty rows is the product of their device counts.

### Code:
```cpp
class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size();
        int ar[n];
        for(int i=0;i<n;i++)
        {
            string s=bank[i];
            int sz=s.size();
            int c=0;
            for(int j=0;j<sz;j++)
            {
                if(s[j]=='1')
                c++;
            }
            ar[i]=c;
        }
        int pc=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=0)
            {
                ans+=pc*ar[i];
                pc=ar[i];
            }
        }
        return ans;
    }
};
```

## Problem: 2149-rearrange-array-elements-by-sign
### Thought Process:
Uses a two-pointer approach, maintaining separate indices for positive and negative numbers. It iterates through the input array and places positive numbers at even indices and negative numbers at odd indices in the result array.

### Code:
```cpp
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        int p=0,n=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                ans[p]=nums[i];
                p+=2;
            }
            else
            {
                ans[n]=nums[i];
                n+=2;
            }
        }
        return ans;
    }
};
```

## Problem: 2161-partition-array-according-to-given-pivot
### Thought Process:
Iterates through the array three times to maintain the original relative order: first adding elements less than the pivot, then elements equal to the pivot, and finally elements greater than the pivot.

### Code:
```cpp
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int s=nums.size();
        vector<int> ans(s);
        int t=0;
        for(int i=0;i<s;i++)
        {
            if(nums[i]<pivot)
            {
                ans[t++]=nums[i];
            }
        }
        for(int i=0;i<s;i++)
        {
            if(nums[i]==pivot)
            {
                ans[t++]=nums[i];
            }
        }
        for(int i=0;i<s;i++)
        {
            if(nums[i]>pivot)
            {
                ans[t++]=nums[i];
            }
        }

        return ans;
    }
};
```

## Problem: 2221-find-triangular-sum-of-an-array
### Thought Process:
Uses a recursive approach to simulate the process. In each recursive call, it creates a new array of size `n-1` where each element is the sum of adjacent elements modulo 10, continuing until only one element is left.

### Code:
```cpp
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        vector<int> ans(n-1);
        for(int i=0;i<n-1;i++)
        ans[i]=((nums[i]+nums[i+1])%10);
        return triangularSum(ans);
    }
};
```

## Problem: 2410-maximum-matching-of-players-with-trainers
### Thought Process:
Sorts both players' abilities and trainers' capacities. It uses a two-pointer approach starting from the maximum values. If a player's ability is greater than the trainer's capacity, that player cannot be matched, so it moves to the next player. Otherwise, they are matched.

### Code:
```cpp
class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int t=trainers.size()-1,p=players.size()-1,ans=0;
        while(t>=0 && p>=0)
        {
            if(players[p]>trainers[t])
            p--;
            else
            {
                ans++;
                p--;
                t--;
            }
        }
        return ans;
    }
};
```

## Problem: 2433-find-the-original-array-of-prefix-xor
### Thought Process:
Reconstructs the original array. Since `pref[i] = pref[i-1] ^ arr[i]`, we can find `arr[i]` by computing `pref[i] ^ pref[i-1]`. The first element is simply `pref[0]`.

### Code:
```cpp
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ar(pref.size());
        ar[0]=pref[0];
        for(int i=1;i<pref.size();i++)
        {
            ar[i]=pref[i-1]^pref[i];
        }
        return ar;
    }
};
```

## Problem: 2545-sort-the-students-by-their-kth-score
### Thought Process:
Sorts the 2D matrix (students) based on their score in the `k`-th exam. It temporarily swaps the `0`-th column with the `k`-th column, uses a basic Bubble Sort on the `0`-th column to sort rows, and then swaps the columns back. (Not the most optimal way to sort a matrix).

### Code:
```cpp
class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        int n=score.size();
        for(int i=0;i<n;i++)
        {
            int temp=score[i][0];
            score[i][0]=score[i][k];
            score[i][k]=temp;
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if (score[i][0]<score[j][0])
                {
                    vector<int> temp=score[i];
                    score[i]=score[j];
                    score[j]=temp;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            int temp=score[i][0];
            score[i][0]=score[i][k];
            score[i][k]=temp;
        }
        return score;
    }
};
```

## Problem: 2657-find-the-prefix-common-array-of-two-arrays
### Thought Process:
Maintains a frequency array for elements seen so far in both arrays. Iterates through the arrays, incrementing the frequency for elements in A and B. When an element's frequency reaches 2, it means it's common to both prefixes, so the count is incremented.

### Code:
```cpp
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),c=0;
        vector<int> ans(n);
        vector<int> frq(n,0);
        for(int i=0;i<n;i++)
        {
            frq[A[i]-1]++;
            if(frq[A[i]-1]==2)
            c++;
            frq[B[i]-1]++;
            if(frq[B[i]-1]==2)
            c++;
            ans[i]=c;
        }
        return ans;
    }
};
```

## Problem: 2683-neighboring-bitwise-xor
### Thought Process:
Checks if a valid original array can exist. The property of the derived array is that the XOR sum of all its elements must be 0 because each element in the original array is XORed twice. Thus, it just checks if the XOR of all elements in `derived` is 0.

### Code:
```cpp
class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int xr=0,n=derived.size();
        for(int i=0;i<n;i++)
        xr^=derived[i];
        if(xr==0)
        return true;
        else
        return false;
    }
};
```

## Problem: 2997-minimum-number-of-operations-to-make-array-xor-equal-to-k
### Thought Process:
Calculates the total XOR of all elements in the array. To find the minimum operations to make this equal to `k`, it computes the XOR of the total XOR and `k`. The answer is the number of set bits (1s) in this result, which it counts by repeatedly checking the last bit.

### Code:
```cpp
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int xr=0;
        for(int i=0;i<nums.size();i++)
        xr^=nums[i];
        xr^=k;
        int c=0;
        while(xr>0)
        {
            if(xr%2!=0)
            c++;
            xr>>=1;
        }
        return c;
    }
};
```

## Problem: 3895-count-digit-appearances
### Thought Process:
Iterates over each number in the array. For each number, it counts the occurrences of the given `digit` by repeatedly taking modulo 10 and dividing by 10. (Note: 3895 might be a non-standard or newer LeetCode problem ID, but the code clearly counts occurrences of a specific digit in an array of numbers).

### Code:
```cpp
class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans+=cnt(nums[i],digit);
        }
        return ans;
    }
    private:
    int cnt(int n,int d)
    {
        int rs=0;
        while(n!=0)
        {
            int r=n%10;
            if(r==d)
            rs++;
            n/=10;
        }
        return rs;
    }
};
```
