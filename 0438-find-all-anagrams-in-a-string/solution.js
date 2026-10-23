var findAnagrams = function(s, p) {
    if (p.length > s.length) return [];

    const need = new Array(26).fill(0);
    const window = new Array(26).fill(0);
    const index = (char) => char.charCodeAt(0) - 97;

    for (let i = 0; i < p.length; i++) {
        need[index(p[i])]++;
        window[index(s[i])]++;
    }

    const matches = () => need.every((count, i) => count === window[i]);
    const result = [];
    if (matches()) result.push(0);

    for (let right = p.length; right < s.length; right++) {
        window[index(s[right])]++;
        window[index(s[right - p.length])]--;
        if (matches()) result.push(right - p.length + 1);
    }

    return result;
};
