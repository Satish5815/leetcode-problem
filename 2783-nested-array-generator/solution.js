/**
 * @param {Array} arr
 * @return {Generator}
 */
var inorderTraversal = function*(arr) {
   const flattened = arr.flat(Infinity);
  const filtered = flattened.filter(item => item !== undefined && item !== null);
  
  for (const item of filtered) {
    yield item; // Yield each item one by one
  }
};

/**
 * const gen = inorderTraversal([1, [2, 3]]);
 * gen.next().value; // 1
 * gen.next().value; // 2
 * gen.next().value; // 3
 */
