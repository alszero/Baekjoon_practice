function solution(x, n) {
    var answer = [];
    let add_gap=x;
    // n번 반복
    for(let i=0; i<n; i++){
        answer.push(x); // 처음 답인 x집어넣음
        x += add_gap;
    }
    return answer;
}