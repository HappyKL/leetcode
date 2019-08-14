//
// Created by KANG on 2019-08-14.
//

//亚特兰数

class NumTrees {
public:
    //动态规划 复杂度 O(n^2)
    int numTrees(int n) {
        int* result_vector = new int[n+1];
        result_vector[0] = 1;
        result_vector[1] = 1;
        for(int i = 2;i<=n;i++){
            result_vector[i] = 0;
            for(int j = 1;j<=i;j++){
                result_vector[i] += result_vector[j-1]*result_vector[i-j];
            }
        }
        return result_vector[n];
    }

    //直接利用亚特兰数的递推公式 h(n) = (4*n-2)*h(n-1) / (n+1)
    int numTrees_math(int n) {
        //int result = 1;   不能是int，公式可能会超出int范围
        long result = 1;
        for(int i =  1; i<= n ; i++){
            result = (4*i-2)*result/(i+1);
        }
        return result;
    }
};

