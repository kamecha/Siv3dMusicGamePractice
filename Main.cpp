#include <Siv3D.hpp>
#include "Gamemgr.hpp"
#include "Scenemgr.hpp"

void Main(){
    //csv読み込み
    const CSVData csv(U"Data/tmp.csv");
    /*  ロード周りがよく分からないので、放っておこう...
    if (!csv) // もし読み込みに失敗したら
    {
        throw Error(U"Failed to load `tmp.csv`");
    }
    */
    for (size_t row = 1; row < csv.rows(); ++row){
        int time = Parse<int>(csv[row][0]);
        int flag = Parse<int>(csv[row][1]);
        int ekind = Parse<int>(csv[row][2]);
        int ex = Parse<int>(csv[row][3]);
        int ey = Parse<int>(csv[row][4]);
        int enote = Parse<int>(csv[row][5]);
        int lane = Parse<int>(csv[row][6]);
        gamemgr.fumen.push(Fumen(time, flag, ekind, ex, ey, enote, lane));
    }
    //画像読み込み
    const Texture EnemyA(U"Data/enemy.png");
    gamemgr.enemymgr.etexture.push_back(EnemyA);

    Window::SetTitle(U"音ゲーもどき");
    Scenemgr scenemgr;
    while(System::Update()){
        scenemgr.update();
        scenemgr.draw();
    }
}
