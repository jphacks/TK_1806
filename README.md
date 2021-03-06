# LaMBarS(Lab Mini-Bar System)

[![LaMBarS](http://img.youtube.com/vi/AQcQSCQUERI/hqdefault.jpg)](https://www.youtube.com/watch?v=AQcQSCQUERI&amp=&feature=youtu.be)

## 製品概要
### Mini Bar Tech

### 背景（製品開発のきっかけ、課題等）

研究室や職場ではよく共用のお菓子やドリンクなどが提供されていますがその利用頻度は様々です。
そうした中で割り勘を行うと、「ええ、私今月こんなに使ってない。」といった事態が発生します。
また、買い出しを担当する人はいつどれだけの量を買えばよいのか、今月の割り勘をどうしようか悩んでいます。

今回私達はこれらの問題を解決するために重さを用いて食料の残量や明瞭な利用料金の把握を行うことにしました。


### 製品説明（具体的な製品の説明）
共用のお菓子やドリンクを誰が、どれだけ持っていったのかを把握し、各自の持って行った量に応じた金額を
Lineによって通知してくれるというシステムになっています。
これにより、割り勘より公平な共用の飲食物の提供ができるようになります。

### 特長

#### 1. 特長1 FeliCaを利用した個人認証により、お菓子やドリンクを持っていった人を把握。

#### 2. 特長2 ロードセル(重量センサ)によりお菓子やドリンクの残量を把握。

#### 3. 特長3 上二つの特徴を組み合わせて、個人がいくら分使ったかをLineで通知。

### 解決出来ること
研究室や職場の共用お菓子割り勘問題の解決に働きます。
お菓子の残量把握ができ、買い出しのタイミングも分かります。

### 今後の展望
FireBaseによるリアルタイムDB自体は動いていたものの、外部からの認証に問題があり、
全体が動作する状態までもっていくことが出来ませんでしたので、そこを修正したいです。


## 開発内容・開発技術
### 活用した技術

#### デバイス
* Infineon XMC4700 Relax Kit for 5V Shields

### 研究内容・事前開発プロダクト（任意）
ご自身やチームの研究内容や、事前に持ち込みをしたプロダクトがある場合は、こちらに実績なども含め記載をして下さい。


### 独自開発技術（Hack Dayで開発したもの）
#### 2日間に開発した独自の機能・技術
* FireBaseを利用した個人とお菓子類の重量リアルタイムDB
* LaMBarS本体デバイス(四種類の重量計測、シリアルによるデータ送信)
