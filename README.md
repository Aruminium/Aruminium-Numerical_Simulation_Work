### シュミレーション工学(数値計算)のソースコード保管場所です

### おかしい所があればissueやらプルリクやら出してください

### 間違っている可能性大

課題それぞれにMakefileを設定しているので、make f1 や make f2 でコンパイルしてください

### gnuplotの使い方


templete.pltを読み込むだけでOK

該当ファイルのPathであるかどうか確認
```shell
gnuplot> pwd
```

移動する際は

```shell
gnuplot> cd ...
```

```shell
gnuplot> load "templete.plt"
```