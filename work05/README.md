2x = tan x

の0より大きい最小の正の実根を求める。

## step1 y=2x, y=tan(x)のグラフをプロット

![step 1](https://github.com/Aruminium/Aruminium-Numerical_Simulation_Work/blob/main/work05/step1/step1.png)

逐次代入法においての初期値は [1.15, 1.20] であると考察できる

## step2 逐次代入法を試す

初期値が理論解に近いほど、つまり誤差が小さいほど逐次代入法の実行回数は減る.

従って[1.15, 1.20]においてstep0.001で実行し推定値と実行回数をプロットする.
誤差は少数第6位まで収束させている.

![step2](https://github.com/Aruminium/Aruminium-Numerical_Simulation_Work/blob/main/work05/step2/step2.png)

[1.165, 1.667]に範囲を狭めることができた。

初期値1.166におけるxの推定値は
1.165562 となった.
