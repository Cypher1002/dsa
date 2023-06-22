// Floyd's algorithm
// consists of two phases and uses two pointers, usually called tortoise and hare.

// In phase 1, hare = nums[nums[hare]] is twice as fast as
// tortoise = nums[tortoise]. Since the hare goes fast,
// it would be the first to enter the cycle and run around the cycle.
// At some point, the tortoise enters the cycle as well, and since
// it's moving slower the hare catches up to the tortoise at some intersection point.
// Now phase 1 is over, and the tortoise has lost.

// Note that the intersection point is not the cycle entrance in the general case.

// pic

// To compute the intersection point, let's note that the hare has
// traversed twice as many nodes as the tortoise,
// i.e. 2d(tortoise)=d(hare)2d(\text{tortoise}) = d(\text{hare})2d(tortoise)=d(hare), implying:

// 2(F+a)=F+nC+a2(F + a) = F + nC + a2(F+a)=F+nC+a, where nnn is some integer.

// Hence the coordinate of the intersection point is F+a=nCF + a = nCF+a=nC.

// In phase 2, we give the tortoise a second chance by slowing down the hare,
// so that it now moves at the speed of tortoise: tortoise = nums[tortoise],
// hare = nums[hare]. The tortoise is back at the starting
// position, and the hare starts from the intersection point.



class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        // Find the intersection point of the two runners.
        int tortoise = nums[0];
        int hare = nums[0];

        do {
            tortoise = nums[tortoise];
            hare = nums[nums[hare]];
        } while (tortoise != hare);

        // Find the "entrance" to the cycle.
        tortoise = nums[0];
        while (tortoise != hare) {
            tortoise = nums[tortoise];
            hare = nums[hare];
        }

        return hare;
    }
};