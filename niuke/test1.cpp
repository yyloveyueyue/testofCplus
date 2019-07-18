#include<stdio.h>
#include<unordered_map>
#include<algorithm>
using namespace std;
#include <vector>
#include<map>

/*
hashmap插入相同键时不会继续插入
 */

int main()
{
    // unordered_map<int, int> hashmap;
    // hashmap.insert(make_pair(1, 10));
    // hashmap.insert(make_pair(2, 20));
    // hashmap.insert(make_pair(1, 20));
    // hashmap.insert(make_pair(1, 30));
    // return 0;
    map<int, int> hashmap;
    hashmap.insert(make_pair(1, 10));
    hashmap.insert(make_pair(2, 20));
    hashmap.insert(make_pair(1, 20));
    hashmap.insert(make_pair(1, 30));
    return 0;

}