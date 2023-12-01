const digits = '0123456789'
const alpha = 'abcdefghijklmnopqrstuvwxyz'
const pool = alpha + alpha.toUpperCase() + digits
const result = (n => { let s = ''; for (i of [...Array(n)]) { s += pool[(pool.length * Math.random()) >> 0]; } return s; })(32)
console.log(result)
