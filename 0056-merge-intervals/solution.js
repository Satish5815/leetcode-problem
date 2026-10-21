/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
    intervals.sort((a, b) => a[0] - b[0]);
    const merged = [];

    for (const [start, end] of intervals) {
        const last = merged[merged.length - 1];
        if (!last || start > last[1]) {
            merged.push([start, end]);
        } else {
            last[1] = Math.max(last[1], end);
        }
    }

    return merged;
};
