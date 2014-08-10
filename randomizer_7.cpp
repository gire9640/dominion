#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<time.h>

using namespace std;

#define INF 999999999

vector< vector<string> > cards(14, vector<string>(35));

int main(){
	//カードリスト ここから
	 cards[0][0] = "1基本＿３＿木こり＿＿＿＿v";
	 cards[0][1] = "1基本＿５＿市場＿＿＿＿＿o";
	 cards[0][2] = "1基本＿４＿改築＿＿＿＿＿o";
	 cards[0][3] = "1基本＿４＿鍛冶屋＿＿＿＿o";
	 cards[0][4] = "1基本＿４＿金貸し＿＿＿＿o";
	 cards[0][5] = "1基本＿５＿議事堂＿＿＿＿o";
	 cards[0][6] = "1基本＿４＿玉座の間＿＿＿o";
	 cards[0][7] = "1基本＿５＿研究所＿＿＿＿o";
	 cards[0][8] = "1基本＿５＿鉱山＿＿＿＿＿o";
	 cards[0][9] = "1基本＿３＿工房＿＿＿＿＿v";
	cards[0][10] = "1基本＿３＿宰相＿＿＿＿＿v";
	cards[0][11] = "1基本＿４＿祝宴＿＿＿＿＿o";
	cards[0][12] = "1基本＿５＿祝祭＿＿＿＿＿o";
	cards[0][13] = "1基本＿５＿書庫＿＿＿＿＿o";
	cards[0][14] = "1基本＿２＿地下貯蔵庫＿＿v";
	cards[0][15] = "1基本＿４＿庭園＿＿＿＿＿o";
	cards[0][16] = "1基本＿４＿泥棒＿＿＿＿＿o";
	cards[0][17] = "1基本＿６＿冒険者＿＿＿＿o";
	cards[0][18] = "1基本＿２＿堀＿＿＿＿＿＿v";
	cards[0][19] = "1基本＿５＿魔女＿＿＿＿＿o";
	cards[0][20] = "1基本＿４＿密偵＿＿＿＿＿o";
	cards[0][21] = "1基本＿４＿民兵＿＿＿＿＿o";
	cards[0][22] = "1基本＿３＿村＿＿＿＿＿＿v";
	cards[0][23] = "1基本＿４＿役人＿＿＿＿＿o";
	cards[0][24] = "1基本＿２＿礼拝堂＿＿＿＿v";
	
	 cards[1][0] = "2陰謀＿３＿大広間＿＿＿＿v";
	 cards[1][1] = "2陰謀＿５＿改良＿＿＿＿＿o";
	 cards[1][2] = "2陰謀＿３＿仮面舞踏会＿＿v";
	 cards[1][3] = "2陰謀＿６＿貴族＿＿＿＿＿o";
	 cards[1][4] = "2陰謀＿４＿共謀者＿＿＿＿o";
	 cards[1][5] = "2陰謀＿５＿交易場＿＿＿＿o";
	 cards[1][6] = "2陰謀＿４＿鉱山の村＿＿＿o";
	 cards[1][7] = "2陰謀＿５＿公爵＿＿＿＿＿o";
	 cards[1][8] = "2陰謀＿５＿拷問人＿＿＿＿o";
	 cards[1][9] = "2陰謀＿３＿詐欺師＿＿＿＿v";
	cards[1][10] = "2陰謀＿３＿執事＿＿＿＿＿v";
	cards[1][11] = "2陰謀＿４＿男爵＿＿＿＿＿o";
	cards[1][12] = "2陰謀＿５＿寵臣＿＿＿＿＿o";
	cards[1][13] = "2陰謀＿４＿偵察員＿＿＿＿o";
	cards[1][14] = "2陰謀＿２＿手先＿＿＿＿＿v";
	cards[1][15] = "2陰謀＿４＿鉄工所＿＿＿＿o";
	cards[1][16] = "2陰謀＿４＿銅細工師＿＿＿o";
	cards[1][17] = "2陰謀＿２＿中庭＿＿＿＿＿v";
	cards[1][18] = "2陰謀＿３＿願いの井戸＿＿v";
	cards[1][19] = "2陰謀＿６＿ハーレム＿＿＿o";
	cards[1][20] = "2陰謀＿５＿破壊工作員＿＿o";
	cards[1][21] = "2陰謀＿４＿橋＿＿＿＿＿＿o";
	cards[1][22] = "2陰謀＿２＿秘密の部屋＿＿v";
	cards[1][23] = "2陰謀＿３＿貧民街＿＿＿＿v";
	cards[1][24] = "2陰謀＿５＿貢物＿＿＿＿＿o";
	
	 cards[2][0] = "3海辺＿３＿漁村＿＿＿＿＿v";
	 cards[2][1] = "3海辺＿４＿海の妖婆＿＿＿o";
	 cards[2][2] = "3海辺＿４＿海賊船＿＿＿＿o";
	 cards[2][3] = "3海辺＿４＿巾着切り＿＿＿o";
	 cards[2][4] = "3海辺＿２＿原住民の村＿＿v";
	 cards[2][5] = "3海辺＿４＿航海士＿＿＿＿o";
	 cards[2][6] = "3海辺＿５＿策士＿＿＿＿＿o";
	 cards[2][7] = "3海辺＿４＿島＿＿＿＿＿＿o";
	 cards[2][8] = "3海辺＿５＿商船＿＿＿＿＿o";
	 cards[2][9] = "3海辺＿２＿真珠採り＿＿＿v";
	cards[2][10] = "3海辺＿５＿前哨地＿＿＿＿o";
	cards[2][11] = "3海辺＿３＿倉庫＿＿＿＿＿v";
	cards[2][12] = "3海辺＿３＿大使＿＿＿＿＿v";
	cards[2][13] = "3海辺＿４＿隊商＿＿＿＿＿o";
	cards[2][14] = "3海辺＿４＿宝の地図＿＿＿o";
	cards[2][15] = "3海辺＿５＿探検家＿＿＿＿o";
	cards[2][16] = "3海辺＿２＿停泊所＿＿＿＿v";
	cards[2][17] = "3海辺＿２＿灯台＿＿＿＿＿v";
	cards[2][18] = "3海辺＿５＿バザー＿＿＿＿o";
	cards[2][19] = "3海辺＿４＿引揚水夫＿＿＿o";
	cards[2][20] = "3海辺＿５＿船着場＿＿＿＿o";
	cards[2][21] = "3海辺＿５＿宝物庫＿＿＿＿o";
	cards[2][22] = "3海辺＿３＿密輸人＿＿＿＿v";
	cards[2][23] = "3海辺＿３＿見張り＿＿＿＿v";
	cards[2][24] = "3海辺＿５＿幽霊船＿＿＿＿o";
	cards[2][25] = "3海辺＿２＿抑留＿＿＿＿＿v";
	
	 cards[3][0] = "4錬金術２＿薬草商＿＿＿＿v";
	 cards[3][1] = "4錬金術２Ｐ薬師＿＿＿＿＿o";
	 cards[3][2] = "4錬金術３Ｐ賢者の石＿＿＿o";
	 cards[3][3] = "4錬金術４Ｐゴーレム＿＿＿o";
	 cards[3][4] = "4錬金術６Ｐ支配＿＿＿＿＿o";
	 cards[3][5] = "4錬金術２Ｐ大学＿＿＿＿＿o";
	 cards[3][6] = "4錬金術３Ｐ使い魔＿＿＿＿o";
	 cards[3][7] = "4錬金術５＿弟子＿＿＿＿＿o";
	 cards[3][8] = "4錬金術２Ｐ念視の泉＿＿＿o";
	 cards[3][9] = "4錬金術０Ｐブドウ園＿＿＿o";
	cards[3][10] = "4錬金術０Ｐ変成＿＿＿＿＿o";
	cards[3][11] = "4錬金術３Ｐ錬金術師＿＿＿o";
	
	 cards[4][0] = "5繁栄＿３＿交易路＿＿＿＿v";
	 cards[4][1] = "5繁栄＿４＿石切場＿＿＿＿o";
	 cards[4][2] = "5繁栄＿６＿大市場＿＿＿＿o";
	 cards[4][3] = "5繁栄＿５＿会計所＿＿＿＿o";
	 cards[4][4] = "5繁栄＿６＿隠し財産＿＿＿o";
	 cards[4][5] = "5繁栄＿７＿拡張＿＿＿＿＿o";
	 cards[4][6] = "5繁栄＿４＿記念碑＿＿＿＿o";
	 cards[4][7] = "5繁栄＿７＿宮廷＿＿＿＿＿o";
	 cards[4][8] = "5繁栄＿８＊行商人＿＿＿＿o";
	 cards[4][9] = "5繁栄＿５＿玉璽＿＿＿＿＿o";
	cards[4][10] = "5繁栄＿７＿銀行＿＿＿＿＿o";
	cards[4][11] = "5繁栄＿５＿禁制品＿＿＿＿o";
	cards[4][12] = "5繁栄＿４＿護符＿＿＿＿＿o";
	cards[4][13] = "5繁栄＿４＿司教＿＿＿＿＿o";
	cards[4][14] = "5繁栄＿３＿借金＿＿＿＿＿v";
	cards[4][15] = "5繁栄＿５＿造幣所＿＿＿＿o";
	cards[4][16] = "5繁栄＿５＿大衆＿＿＿＿＿o";
	cards[4][17] = "5繁栄＿７＿鍛造＿＿＿＿＿o";
	cards[4][18] = "5繁栄＿５＿投機＿＿＿＿＿o";
	cards[4][19] = "5繁栄＿５＿都市＿＿＿＿＿o";
	cards[4][20] = "5繁栄＿６＿ならず者＿＿＿o";
	cards[4][21] = "5繁栄＿３＿望楼＿＿＿＿＿v";
	cards[4][22] = "5繁栄＿５＿保管庫＿＿＿＿o";
	cards[4][23] = "5繁栄＿５＿香具師＿＿＿＿o";
	cards[4][24] = "5繁栄＿４＿労働者の村＿＿o";
	
	 cards[5][0] = "6収穫祭３＿移動動物園＿＿v";
	 cards[5][1] = "6収穫祭４＿馬商人＿＿＿＿o";
	 cards[5][2] = "6収穫祭３＿占い師＿＿＿＿v";
	 cards[5][3] = "6収穫祭４＿再建＿＿＿＿＿o";
	 cards[5][4] = "6収穫祭５＿収穫＿＿＿＿＿o";
	 cards[5][5] = "6収穫祭５＿狩猟団＿＿＿＿o";
	 cards[5][6] = "6収穫祭２＿村落＿＿＿＿＿v";
	 cards[5][7] = "6収穫祭５＿道化師＿＿＿＿o";
	 cards[5][8] = "6収穫祭４＿農村＿＿＿＿＿o";
	 cards[5][9] = "6収穫祭４＿馬上槍試合＿＿o";
	cards[5][10] = "6収穫祭６＿品評会＿＿＿＿o";
	cards[5][11] = "6収穫祭５＿豊穣の角笛＿＿o";
	cards[5][12] = "6収穫祭４＿魔女娘＿＿＿＿o";
	
	 cards[6][0] = "7異郷＿３＿オアシス＿＿＿v";
	 cards[6][1] = "7異郷＿５＿街道＿＿＿＿＿o";
	 cards[6][2] = "7異郷＿３＿開発＿＿＿＿＿v";
	 cards[6][3] = "7異郷＿３＿画策＿＿＿＿＿v";
	 cards[6][4] = "7異郷＿５＿官吏＿＿＿＿＿o";
	 cards[6][5] = "7異郷＿４＿義賊＿＿＿＿＿o";
	 cards[6][6] = "7異郷＿５＿厩舎＿＿＿＿＿o";
	 cards[6][7] = "7異郷＿２＿岐路＿＿＿＿＿v";
	 cards[6][8] = "7異郷＿２＿愚者の黄金＿＿v";
	 cards[6][9] = "7異郷＿４＿交易人＿＿＿＿o";
	cards[6][10] = "7異郷＿２＿公爵夫人＿＿＿v";
	cards[6][11] = "7異郷＿４＿香辛料商人＿＿o";
	cards[6][12] = "7異郷＿３＿坑道＿＿＿＿＿v";
	cards[6][13] = "7異郷＿６＿国境の村＿＿＿o";
	cards[6][14] = "7異郷＿４＿シルクロード＿";
	cards[6][15] = "7異郷＿３＿神託＿＿＿＿＿v";
	cards[6][16] = "7異郷＿５＿大使館＿＿＿＿o";
	cards[6][17] = "7異郷＿５＿地図職人＿＿＿o";
	cards[6][18] = "7異郷＿５＿値切り屋＿＿＿o";
	cards[6][19] = "7異郷＿６＿農地＿＿＿＿＿o";
	cards[6][20] = "7異郷＿５＿不正利得＿＿＿o";
	cards[6][21] = "7異郷＿５＿辺境伯＿＿＿＿o";
	cards[6][22] = "7異郷＿５＿埋蔵金＿＿＿＿o";
	cards[6][23] = "7異郷＿５＿宿屋＿＿＿＿＿o";
	cards[6][24] = "7異郷＿４＿遊牧民の野営地";
	cards[6][25] = "7異郷＿４＿よろずや＿＿＿o";
	
	 cards[7][0] = "8暗黒＿３＿青空市場＿＿＿v";
	 cards[7][1] = "8暗黒＿３＿隠遁者＿＿＿＿v";
	 cards[7][2] = "8暗黒＿４＿金物商＿＿＿＿o";
	 cards[7][3] = "8暗黒＿６＿狩場＿＿＿＿＿o";
	 cards[7][4] = "8暗黒＿５※騎士＿＿＿＿＿o";
	 cards[7][5] = "8暗黒＿５＿偽造通貨＿＿＿o";
	 cards[7][6] = "8暗黒＿１＿救貧院＿＿＿＿o";
	 cards[7][7] = "8暗黒＿５＿狂信者＿＿＿＿o";
	 cards[7][8] = "8暗黒＿４＿吟遊詩人＿＿＿o";
	 cards[7][9] = "8暗黒＿５＿屑屋＿＿＿＿＿o";
	cards[7][10] = "8暗黒＿３＿賢者＿＿＿＿＿v";
	cards[7][11] = "8暗黒＿４＿行進＿＿＿＿＿o";
	cards[7][12] = "8暗黒＿４＿ゴミあさり＿＿o";
	cards[7][13] = "8暗黒＿３＿採集者＿＿＿＿v";
	cards[7][14] = "8暗黒＿６＿祭壇＿＿＿＿＿o";
	cards[7][15] = "8暗黒＿５＿山賊の宿営地＿o";
	cards[7][16] = "8暗黒＿４＿死の荷車＿＿＿o";
	cards[7][17] = "8暗黒＿４＿襲撃者＿＿＿＿o";
	cards[7][18] = "8暗黒＿２＿従者＿＿＿＿＿v";
	cards[7][19] = "8暗黒＿４＿城塞＿＿＿＿＿o";
	cards[7][20] = "8暗黒＿５＿建て直し＿＿＿o";
	cards[7][21] = "8暗黒＿５＿地下墓所＿＿＿o";
	cards[7][22] = "8暗黒＿５＿盗賊＿＿＿＿＿o";
	cards[7][23] = "8暗黒＿４＿ネズミ＿＿＿＿o";
	cards[7][24] = "8暗黒＿５＿墓暴き＿＿＿＿o";
	cards[7][25] = "8暗黒＿５＿伯爵＿＿＿＿＿o";
	cards[7][26] = "8暗黒＿５＿はみだし者＿＿o";
	cards[7][27] = "8暗黒＿５＿秘術師＿＿＿＿o";
	cards[7][28] = "8暗黒＿４＿武器庫＿＿＿＿o";
	cards[7][29] = "8暗黒＿３＿浮浪児＿＿＿＿v";
	cards[7][30] = "8暗黒＿２＿浮浪者＿＿＿＿v";
	cards[7][31] = "8暗黒＿４＿封土＿＿＿＿＿o";
	cards[7][32] = "8暗黒＿３＿物置＿＿＿＿＿v";
	cards[7][33] = "8暗黒＿２＿物乞い＿＿＿＿v";
	cards[7][34] = "8暗黒＿５＿略奪＿＿＿＿＿o";
	
	 cards[8][0] = "9ギルド２＋石工＿＿＿＿＿v";
	 cards[8][1] = "9ギルド３＋医者＿＿＿＿＿v";
	 cards[8][2] = "9ギルド４＿収税吏＿＿＿＿o";
	 cards[8][3] = "9ギルド５＿熟練工＿＿＿＿o";
	 cards[8][4] = "9ギルド５＿商人ギルド＿＿o";
	 cards[8][5] = "9ギルド４＿助言者＿＿＿＿o";
	 cards[8][6] = "9ギルド４＋伝令官＿＿＿＿o";
	 cards[8][7] = "9ギルド５＿肉屋＿＿＿＿＿o";
	 cards[8][8] = "9ギルド５＿パン屋＿＿＿＿o";
	 cards[8][9] = "9ギルド４＿広場＿＿＿＿＿o";
	cards[8][10] = "9ギルド３＋名品＿＿＿＿＿v";
	cards[8][11] = "9ギルド５＿予言者＿＿＿＿o";
	cards[8][12] = "9ギルド２＿蝋燭職人＿＿＿v";
	
	 cards[9][0] = "aプロモ４＿公使＿＿＿＿＿o";
	cards[10][0] = "bプロモ３＿闇市場＿＿＿＿v";
	cards[11][0] = "cプロモ５＿へそくり＿＿＿o";
	cards[12][0] = "dプロモ４＿囲郭村＿＿＿＿o";
	cards[13][0] = "fプロモ５＿総督＿＿＿＿＿o";
	//カードリスト ここまで
	
	int tables, players[22], veto, inset[14]; //卓の数、プレイヤー人数、vetoあり、拡張の所有数
	int colshe[22][2]; //植民地、避難所
	int noset[14] = {25,25,26,12,25, 13,26,35,13,1, 1,1,1,1}; //各拡張の種類数
	int vaneset[14] = { 7, 9,10, 1, 3,  3, 8, 9, 4,0, 1,0,0,0}; //各拡張のコスト２～３の種類数
	int sumset[14]; //使用拡張のべ種類数
	vector<int> nokori; //各種ランダマイザカード残り枚数
	int kinds, nowkinds, randomizers=0, dice; //種類数、ある時点の選べる種類の数、「使用されうるランダマイザカード」の枚数、乱数
	int kaburi; // 被り判定のフラグ
	int minplayers[2]; //[0]:プレイヤーの最も少ない卓の人数,[1]その卓の番号
	int answer, vetoed; //veto不可のときの選択肢、vetoの選択肢
	vector<string> shoji; //持っているカードのリスト
	vector<int> kouho(15); //サプライ候補となるカードの番号のリスト
	vector< vector<string> > list(21, vector<string>(15)); //各卓において選ばれたカードのリスト
	int yw=0, vanes=0; //nokoriにおける魔女娘の番号(収穫祭がなければ0とする)、災いカードとなりうるカードの種類数
	int ywflag[21]; //魔女娘を引いた際に立てるフラグ
	
	//卓の数,veto,set
	while(1){
		//卓の数
		cout << "卓の数？(1-20): ";
		cin >> tables;
		//拡張セット
		cout << "使用拡張セットorプロモ？(あり:所有数,なし:0)" << endl;
		cout << "＿＿＿＿＿＿＿暗＿＿＿へ＿＿" << endl;
		cout << "＿＿＿錬＿収＿黒ギ＿闇そ囲＿" << endl;
		cout << "基陰海金繁穫異時ル公市く郭総" << endl;
		cout << "本謀辺術栄祭郷代ド使場り村督" << endl;
		sumset[0] = 0;
		yw = 0;
		vanes = 0;
		randomizers = 0;
		for(int i = 0; i < 14;i++){
			if(cin >> inset[i], inset[i]){
				randomizers += noset[i] * min(inset[i], tables); //使用されうるランダマイザカードを数える
				vanes += vaneset[i]; //災いカードとなりうるものを数える
				for(int k = 0; k < noset[i]; k++){
					nokori.push_back(inset[i]);  //ランダマイザカードの残り枚数をnokoriに入れる
					shoji.push_back(cards[i][k]); //所持カードリストshoji(一次元配列)を作る
				}
				if(i) sumset[i] = sumset[i-1] + noset[i]; 
				else sumset[i] = noset[i];
				if(i == 5) yw = sumset[i] - 1; //収穫祭があれば魔女娘のnokoriにおける番号を記録
			}
			else if(i) sumset[i] = sumset[i-1];
		}
		
		kinds = sumset[13];
		nowkinds = kinds;
		//卓が立てられないときは忠告
		if(tables * 10 > randomizers || kinds < 10) cout << "カードが少ないため卓が立ちません" << endl;
		else {
			//立つならばvetoの確認
			cout << "vetoルール？(あり:1,なし:0)" << endl;
			cin >> veto;
			if(veto){ //各卓のプレイヤー数を入力させ、人数最少の卓の人数および番号を把握する
				minplayers[0] = 4;
				for(int s = 1; s <= tables; s++){
					cout << "卓" << s << "の人数？(2-4): ";
					cin >> players[s];
					if(minplayers[0] >= players[s]){
						minplayers[0] = players[s];
						minplayers[1] = s;
					}
				}
				players[tables+1] = 0;
			}
			else for(int v = 1; v <= tables+1; v++) players[v] = 0; //vetoがないときは人数は関係ないので0とする
			if(tables * 10 + players[tables] + min(tables, inset[5]) > randomizers && veto){ //vetoする順番を変えても、最終卓でvetoするための枚数が残ることが保証されないとき
				if(tables * 10 + minplayers[0] + min(tables, inset[5]) > randomizers){
					cout << "いずれかの卓が" << randomizers - tables * 10 << "人以下でないとvetoできないことがあります。どうしますか？" << endl;
					cout << "(vetoをなしにする:1,入力をやり直す:0)" << endl;
					cin >> answer;
					if(answer == 0) continue;
					else if(answer == 1){
						veto = 0;
						break;
					}
				}
				else { //vetoする順番を変えれば、vetoが行えることが保証されるとき
					cout << "卓1から順番にvetoを行います。卓" << tables << "の人数が多いため、" << endl;
					cout << "卓" << tables << "(" << players[tables] << "人卓)と卓" << minplayers[1] << "(" << minplayers[0] << "人卓)を入れかえて下さい。" << endl;
					cout << "(入れかえる:1,入力をやり直す:0)" << endl;
					cin >> answer;
					if(answer == 0) continue;
					else if(answer == 1){
						swap(players[tables], players[ minplayers[1] ]);
						break;
					}
				}
			}
			else break;
		}
	}
	
	//ランダマイズ
	for(int r = 1; r <= tables; r++){
		ywflag[r] = 0; //魔女娘フラグの初期化
		cout << "卓" << r;
		if(veto) cout << "(" << players[r] << "人卓)";
		cout << ": " << endl;
		//カード選択
		srand((unsigned int)time(NULL) + (unsigned int)r);//乱数の初期化
		for(int j = 0; j < 10 + players[r] * veto; j++){
			while(1){ //使用可能なカードが選ばれるまでループ
				dice = rand() % kinds;
				kouho[j] = dice;
				if(nokori[dice]){ //まだランダマイザカードが残っているか判定
					kaburi = 0; //卓内で被っていないか判定
					for(int m = 0; m < j; m++) if(dice == kouho[m]) kaburi = 1;
					if(kaburi == 0){
						nokori[dice]--;
						if(nokori[dice] > 0) break; //種類数が減らないなら問題なし
						else{//種類数が減るときがやばい
							nowkinds--;
							if( r == tables || (nowkinds >= 10 + players[r+1] * veto + min(nokori[yw], min(yw,1)) && vanes >= nokori[yw]) ){//次の卓でveto分と災いを用意できるならよい
								break;
							}
							else{ //災いvetoが用意できなればやりなおし
								nokori[dice]++;
								nowkinds++;
							}
						}
					}
				}
			}
			if(yw && dice == yw) ywflag[r] = 1; //引いたカードが魔女娘なら魔女娘フラグを立てる
			list[r][j] = shoji[dice]; //listに格納
			//今回選んだカードがコスト２～３でnowkindsが減るものだったらvanesを減らしておく
			if(nokori[dice]==0 && shoji[dice][37] == 'v') vanes--;
		}
		//veto
		if(veto){
			//veto用に1度表示
			sort( list[r].begin(), list[r].begin() + 10 + players[r] * veto); //拡張順にソート
			sort( kouho.begin(), kouho.begin() + 10 + players[r] * veto);
			cout << "    ";
			cout << "name           cost set " << endl;
			for(int n = 0; n < 10 + players[r] * veto; n++){
				printf("%2d: ", n+1);
				cout << list[r][n].substr(16, 21);
				cout << " ";
				cout << list[r][n].substr(10, 6);
				cout << " ";
				cout << list[r][n].substr(1, 9);
				cout << endl;
			}
			cout << endl;
			//わくわくvetoタイム
			for(int t = 1; t <= players[r]; t++){
				while(1){
					cout << t << "番手の方、拒否するカードの番号を選んで下さい。" << endl;
					cin >> vetoed;
					if(list[r][vetoed-1][0] - 'v' < 0){
						cout << list[r][vetoed-1].substr(16, 21) << "が拒否されました。" << endl;
						list[r][vetoed-1][0] = 'v' + t; //cardsの1文字目をw,x,y,zに
						if(!nokori[ kouho[vetoed-1] ]) nowkinds++; //nowkindsを調整
						nokori[ kouho[vetoed-1] ] ++; //nokoriを増やす
						if(kouho[vetoed-1] == yw && yw) ywflag[r] = 0; //魔女娘が拒否されれば魔女娘フラグを0に
						break;
					}
					else cout << "そのカードはすでに拒否されています。" << endl;
				}
			}
			cout << endl;
		}
		//植民地、避難所判定
		dice = rand() % 10;
		if(list[r][dice][0] == '5') colshe[r][0] = 1;
		else colshe[r][0] = 0;
		dice = rand() % 10;
		if(list[r][dice][0] == '8') colshe[r][1] = 1;
		else colshe[r][1] = 0;
		//魔女娘フラグが立っている際、災いカードを用意する
		if(ywflag[r]){
			sort( list[r].begin(), list[r].begin() + 10 + players[r] * veto); //0~9に使用カードがくるようにソート
			while(1){ //使用可能なカードが選ばれるまでループ
				dice = rand() % kinds;
				kouho[9 + players[r] * veto + ywflag[r]] = dice;
				if(shoji[dice][37] == 'v'){ //コストが２～３か判定
					if(nokori[dice]){ //まだランダマイザカードが残っているか判定
						kaburi = 0; //卓内で被っていないか判定
						for(int z = 0; z < 10; z++) if(dice == kouho[z]) kaburi = 1;
						if(kaburi == 0){
							nokori[dice]--;
							if(nokori[dice] > 0) break; //種類数が減らないなら問題なし
							else{//種類数が減るときがやばい
								nowkinds--;
								if( r == tables || (nowkinds - 1 >= 10 + players[r+1] * veto + min(nokori[yw], min(yw,1)) && vanes >= nokori[yw]) ){//次の卓でveto分と災いを用意できるならよい
									break;
								}
								else{ //災いvetoが用意できなればやりなおし
									nokori[dice]++;
									nowkinds++;
								}
							}
						}
					}
				}
			}
			list[r][9 + players[r] * veto + ywflag[r]] = shoji[dice]; //災いカードをlistに格納
			list[r][9 + players[r] * veto + ywflag[r]][0] = 'v'; //1文字目をvにする
		}
	}
	
	//結果表示
	int lines;
	if(veto) lines = 15;
	else lines = 11;
	for(int row = 0; row * 3 < tables; row++){ //3列に分けて表示
		if(row * 3 + 1 <= tables)printf("卓%2d                               |   ", row * 3 + 1);
		if(row * 3 + 2 <= tables)printf("卓%2d                               |   ", row * 3 + 2);
		if(row * 3 + 3 <= tables)printf("卓%2d                               |   ", row * 3 + 3);
		cout << endl;
		if(row * 3 + 1 <= tables && colshe[row * 3 + 1][0] == 1)printf("      植民地有・");
		if(row * 3 + 1 <= tables && colshe[row * 3 + 1][0] == 0)printf("      植民地無・");
		if(row * 3 + 1 <= tables && colshe[row * 3 + 1][1] == 1)printf("避難所有           |   ");
		if(row * 3 + 1 <= tables && colshe[row * 3 + 1][1] == 0)printf("避難所無           |   ");
		if(row * 3 + 2 <= tables && colshe[row * 3 + 2][0] == 1)printf("      植民地有・");
		if(row * 3 + 2 <= tables && colshe[row * 3 + 2][0] == 0)printf("      植民地無・");
		if(row * 3 + 2 <= tables && colshe[row * 3 + 2][1] == 1)printf("避難所有           |   ");
		if(row * 3 + 2 <= tables && colshe[row * 3 + 2][1] == 0)printf("避難所無           |   ");
		if(row * 3 + 3 <= tables && colshe[row * 3 + 3][0] == 1)printf("      植民地有・");
		if(row * 3 + 3 <= tables && colshe[row * 3 + 3][0] == 0)printf("      植民地無・");
		if(row * 3 + 3 <= tables && colshe[row * 3 + 3][1] == 1)printf("避難所有           |   ");
		if(row * 3 + 3 <= tables && colshe[row * 3 + 3][1] == 0)printf("避難所無           |   ");
		cout << endl;
		if(row * 3 + 1 <= tables)printf("      name           cost set      |   ");
		if(row * 3 + 2 <= tables)printf("      name           cost set      |   ");
		if(row * 3 + 3 <= tables)printf("      name           cost set      |   ");
		cout << endl;
		for(int cell = 0; cell < lines; cell++){ //1卓につきlines行
			for(int x = 1; x <= 3 ; x++){
				if(row * 3 + x <= tables){
					sort( list[row * 3 + x].begin(), list[row * 3 + x].begin() + 10 + players[row * 3 + x] * veto + ywflag[row * 3 + x]); //ソート
					if(cell < 10 + players[row * 3 + x] * veto + ywflag[row * 3 + x]){
						if(list[row * 3 + x][cell][0] < 'v') printf("  %2d: ", cell+1);
						if(list[row * 3 + x][cell][0] == 'v') printf("災い: ");
						if(list[row * 3 + x][cell][0] > 'v') printf("拒否: ");
						
						cout << list[row * 3 + x][cell].substr(16, 21);
						cout << " ";
						cout << list[row * 3 + x][cell].substr(10, 6);
						cout << " ";
						cout << list[row * 3 + x][cell].substr(1, 9);
						cout << "   |   ";
					}
					else cout << "                                   |   ";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}
