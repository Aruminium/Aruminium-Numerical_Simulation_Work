// ベキ乗法で最大固有値を求めるだけ
const n: usize = 3; // 要素数
fn main() {
    let eps: f64 = 0.0001; //精度
    let A: [[f64; n]; n] = [
        [5.0, 1.0, -2.0],
        [1.0, 6.0, -1.0],
        [-2.0, -1.0, 5.0]
    ]; // 任意の対角化可能な行列
    let mut x: [f64; n] = [1.0, 0.0, 0.0]; // 初期値
    let mut l2: f64 = dot(x, x).powi(2i32); // 収束判定変数.
    let mut lambda: f64 = 0.0; // 固有値
    let mut x1: [f64; n] = Default::default(); // v^(k+1)
    let mut l: f64 = 0.0; //|x^(k)|
    loop {
        l = l2.sqrt(); // |x^(k)|の計算
        x = mul_sv(1.0/l, x);
        x1 = mul_mv(A, x);
        lambda = dot(x, x1);
        l2 = dot(x1, x1);
        let mut e = libm::fabs(l2-lambda*lambda);
        if e < eps.powi(2i32) {
            println!("最大固有値: {}", lambda);
            break;
        }
        x = x1;
        println!("lambda = {}, v[0] = {}", lambda, x[0]);
    }
}

pub fn mul_sv(k: f64, x: [f64; n]) -> [f64; n] {
    //! x^(k)の正規化関数
    let mut tmp: [f64; n] = Default::default();
    for i in 0..=n-1 {
        tmp[i] = k * x[i];
    }
    return tmp;
}

pub fn mul_mv(A: [[f64; n]; n], x: [f64; n]) -> [f64; n] {
    let mut tmp :[f64; n] = Default::default();
    for i in 0..=n-1 {
        for j in 0..=n-1 {
            tmp[i] += A[i][j] * x[j];
        }
    }
    return tmp;
}

pub fn dot(a: [f64; n], b: [f64; n]) -> f64 {
    //! 内積を計算する関数
    let mut tmp: f64 = 0.0;
    for i in 0..=n-1 {
        tmp += a[i] * b[i];
    }
    return tmp;
}