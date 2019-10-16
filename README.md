亀茶が音ゲーの練習用に作ろうとしているもの
CSVの読み込みは、該当ファイルをApp内にDataフォルダを追加してそこに置いてある
データの打ち込み順は以下に示すとおり...

time,flag,enemykind,e.x,e.y,withnotes,lane
time:Gamemgrが起動してからの経過時間
flag:敵orノーツどちらの情報か
enemykind:現時点ではA,Bどちらの種類の敵かどうか
e.x,e.y:敵の出現座標(0:0, 1:Window::ClientWdith()...と言った感じにそれぞれの整数に割り当てられている)
withnotes:どの敵(Enemymgrの配列の添字)がノーツを持っているか
lane:どのレーンにノーツを乗せるか

現時点でのデータ構造なので後々変更する可能性あり
