/**
 * @param {string} a
 * @param {string} b
 * @return {string}
 */
var addBinary = function(a, b) {
   const decimalSum = BigInt("0b" + a) + BigInt("0b" + b);
   const binarySum = decimalSum.toString(2);
    return binarySum;
};
