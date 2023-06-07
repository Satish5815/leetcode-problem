/**
 * @param {Object | Array} obj
 * @return {boolean}
 */
function isEmptyObject(obj) {
  return Object.keys(obj).length === 0;
}

var isEmpty = function(obj) {
    return isEmptyObject(obj);
};
