## ベキ乗法

適当な初期値x^(0)から

$$\LARGE x^{(k)} = Ax^{(k-1)} $$

によりxを更新 ->絶対値最大固有値の固有ベクトルが得られる.

固有ベクトルは定数倍OKなので

$$ \LARGE |x^{(k)}| = 1 $$

となるようにする.(初期値も含め)

レイリー(Rayleigh)商を考えると固有値も計算可能

$$
\LARGE
R(x) = \frac{x⋅Ax}{x⋅x} \\

\rightarrow R(v_1)=\frac{v_1⋅Av_1}{v_1⋅v_1} = \frac{v_1⋅\lambda_1 v_1}{v_1⋅v_1}\\

\large 固有値の定義 Av=\lambda v より \\

\LARGE = \lambda_1 \\

\large つまり,毎半複以下の式で固有値が計算できる \\

\LARGE R(x^{(k)})=\frac{x^{(k)}⋅Ax^{(k)}}{x^{(k)}⋅x^{(k)}} = \frac{x^{(k)}⋅ x^{(k+1)}}{x^{(k)}⋅x^{(k)}} = \lambda^{(k)}
$$

## 収束判定

設定した閾値εより小さくなるまで続ける.

$$
\LARGE |Ax^{(k)} - \lambda^{(k)}x^{(k)}| < \epsilon\\
\rightarrow |x^{(k+1)}|^2 - (\lambda^{(k)})^2 < \epsilon^2
$$


[参考](http://www.slis.tsukuba.ac.jp/~fujisawa.makoto.fu/lecture/mic/text/10_eigen.pdf)
