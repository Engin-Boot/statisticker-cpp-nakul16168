  
#include "stats.h"
#include <bits/stdc++.h>
namespace Statistics {
    
    Stats ComputeStatistics(const std::vector<float>& floatVector) {
        struct Stats obj1 = {NaN, NaN, NaN};
        bool size_zero = (floatVector.size() == 0) ;
        if(size_zero)
        {
            return obj1;
        }
        obj1.average = accumulate( floatVector.begin(), floatVector.end(), 0.0) / floatVector.size();
        obj1.max = *max_element(floatVector.begin(), floatVector.end());
        obj1.min = *min_element(floatVector.begin(), floatVector.end());
        return obj1;
    }
}
