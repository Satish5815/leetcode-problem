/** @param {string} s @return {string} */
var decodeString = function(s) {
    const counts = [], prefixes = [];
    let current = "", number = 0;
    for (const ch of s) {
        if (ch >= "0" && ch <= "9") {
            number = number * 10 + Number(ch);
        } else if (ch === "[") {
            counts.push(number);
            prefixes.push(current);
            number = 0;
            current = "";
        } else if (ch === "]") {
            current = prefixes.pop() + current.repeat(counts.pop());
        } else {
            current += ch;
        }
    }
    return current;
};
