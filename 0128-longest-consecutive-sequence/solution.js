/**
 * @param {number[]} nums
 * @return {number}
 */
var longestConsecutive = function(nums) {
    const values = new Set(nums);
    let longest = 0;

    for (const num of values) {
        if (values.has(num - 1)) continue;

        let length = 1;
        while (values.has(num + length)) length++;
        longest = Math.max(longest, length);
    }

    return longest;
};
