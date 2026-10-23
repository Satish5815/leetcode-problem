var zigzagLevelOrder = function(root) {
    if (root === null) return [];

    const queue = [root];
    let head = 0;
    let leftToRight = true;
    const result = [];

    while (head < queue.length) {
        const size = queue.length - head;
        const level = new Array(size);

        for (let i = 0; i < size; i++) {
            const node = queue[head++];
            const index = leftToRight ? i : size - 1 - i;
            level[index] = node.val;

            if (node.left !== null) queue.push(node.left);
            if (node.right !== null) queue.push(node.right);
        }

        result.push(level);
        leftToRight = !leftToRight;
    }

    return result;
};
