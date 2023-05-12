Array.prototype.last = function() {
     const l=this.length-1;
   if(l==-1) return -1;
   return this[this.length - 1];
};

/**
 * const arr = [1, 2, 3];
 * arr.last(); // 3
 */
