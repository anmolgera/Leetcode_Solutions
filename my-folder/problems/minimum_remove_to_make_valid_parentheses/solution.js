/**
 * @param {string} s
 * @return {string}
 */
var minRemoveToMakeValid = function(s) {
let op = []
    s = s.split('')
    for(let i=0; i<s.length; i++){
        if(s[i]==='(') op.push(i)
        if(s[i]===')') {
            if(op.length) op.pop(); else s[i]=''
        }
    }
    while(op.length) s[op.pop()]='';
    return s.join('')    
};