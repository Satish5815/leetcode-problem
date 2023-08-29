/**
 * @param {Function} fn
 * @return {Array}
 */
Array.prototype.groupBy = function(fn) {
   let arr=this;
    let ans={};
    for(let i=0;i<arr.length;i++){
        let key=fn(arr[i]);
        if(ans[key]){
            ans[key].push(arr[i]);
        }else{
            ans[key]=[];
            ans[key].push(arr[i]);
        }
    }
    return ans;
};

/**
 * [1,2,3].groupBy(String) // {"1":[1],"2":[2],"3":[3]}
 */
