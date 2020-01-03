/* charsets as presented/used in the GBA/NDS games */

// charlist assumes that token is not an opcode and was reduced by 128

/* shared charset across all localizations */
char *charset_shared[256] = {
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F", // 080
	"G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", // 090
	"W", "X", "Y", "Z", "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", // 0A0
	"m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z", "!", "?", // 0B0
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0C0
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0D0
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0E0
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0F0
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 100
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 110
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 120
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 130
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 140
	 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 150
	 0 , ".", "☞", "｢", "｣", "(", ")", "『", "』", "‟", "”", "▼", "▲", ":", "`", ",", // 160
	"+", "/", "*", "'", "-", "･", "｡", "%%", "‥", "~", "«", "»", "&", "☆", "♪", " ", // 170
};

/* characters specific to localization, but still within the limits of the basic charset
   for the japanese releases these characters are shared across all games
   this uses the isjp flag to select the correct charset */
char *charset_default[2][256] = {
	{ /* for US/EU releases */
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 080
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 090
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0A0
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0B0
		"É", "À", "È", "Ù", "Â", "Ê", "Î", "Ô", "Û", "Ë", "Ï", "Ü", "Ç", "Œ", "é", "à", // 0C0
		"è", "ù", "â", "ê", "î", "ô", "û", "ë", "ï", "ü", "ç", "œ", "°", "€", ";", "á", // 0D0
		"ä", "å", "æ", "﹚", "ö", "ø", "ß", "ÿ", "Ä", "Å", "Æ", "﹙", "Ö", "Ø", "ì", "ò", // 0E0
		"Ì", "Ò", "í", "ñ", "ó", "ú", "Á", "Í", "Ñ", "Ó", "Ú", "¿", "¡",  0 ,  0 ,  0 , // 0F0
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 100
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 110
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 120
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 130
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 140
		"-", "\"", "[", "]", "$", "#", ">", "<", "=", "˽", " ",  0 ,  0 ,  0 ,  0 ,  0 , // 150 space here because the scripts contain enough refs to it, char before space is [box]
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 160
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 170
	},
	{ /* for JP releases, shared chars only */
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 080
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 090
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0A0
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 0B0
		"あ", "い", "う", "え", "お", "か", "き", "く", "け", "こ", "さ", "し", "す", "せ", "そ", "た",  // 0C0
		"ち", "つ", "て", "と", "な", "に", "ぬ", "ね", "の", "は", "ひ", "ふ", "へ", "ほ", "ま", "み", // 0D0
		"む", "め", "も", "や", "ゆ", "よ", "ら", "り", "る", "れ", "ろ", "わ", "を", "ん", "が", "ぎ", // 0E0
		"ぐ", "げ", "ご", "ざ", "じ", "ず", "ぜ", "ぞ", "だ", "ぢ", "づ", "で", "ど", "ば", "び", "ぶ", // 0F0
		"べ", "ぼ", "ぱ", "ぴ", "ぷ", "ぺ", "ぽ", "ぁ", "ぃ", "ぅ", "ぇ", "ぉ", "ゃ", "ゅ", "ょ", "っ", // 100
		"ア", "イ", "ウ", "エ", "オ", "カ", "キ", "ク", "ケ", "コ", "サ", "シ", "ス", "セ", "ソ", "タ", // 110
		"チ", "ツ", "テ", "ト", "ナ", "ニ", "ヌ", "ネ", "ノ", "ハ", "ヒ", "フ", "ヘ", "ホ", "マ", "ミ", // 120
		"ム", "メ", "モ", "ヤ", "ユ", "ヨ", "ラ", "リ", "ル", "レ", "ロ", "ワ", "ヲ", "ン", "ガ", "ギ", // 130
		"グ", "ゲ", "ゴ", "ザ", "ジ", "ズ", "ゼ", "ゾ", "ダ", "ヂ", "ヅ", "デ", "ド", "バ", "ビ", "ブ", // 140
		"ベ", "ボ", "パ", "ピ", "プ", "ペ", "ポ", "ァ", "ィ", "ゥ", "ェ", "ォ", "ャ", "ュ", "ョ", "ッ", // 150
		"ヴ",  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 160
		 0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 ,  0 , // 170
	}
};

/* size currently calculated as 0x550 (num of chars in gs1) - 0x180 (num of shared chars), adjust if required */
char *charset_japanese_extended[4][976] = { /* for JP releases, version specific characters only */
	// not sure about 0x180 aka 'ー'
	/* GS1 mapped out by phoenixbound */
	{ /* GS1 */
		"ー", "記", "録", "中", "断", "選", "消", "去", "初", "期", "状", "態", "戻", "追", "加", "逆", // 180
		"転", "日", "目", "法", "廷", "姉", "妹", "探", "偵", "最", "終", "手", "今", "血", "気", "千", // 190
		"尋", "所", "長", "無", "事", "発", "言", "証", "拠", "品", "特", "異", "議", "認", "弁", "護", // 1A0
		"人", "慎", "重", "失", "敗", "残", "念", "私", "見", "得", "与", "違", "示", "関", "係", "全", // 1B0
		"然", "考", "裁", "判", "心", "悪", "思", "明", "顔", "説", "力", "欠", "感", "却", "下", "誰", // 1C0
		"月", "午", "前", "時", "分", "地", "方", "被", "告", "第", "控", "室", "間", "小", "学", "校", // 1D0
		"級", "以", "来", "部", "舞", "台", "殺", "件", "度", "胸", "依", "頼", "借", "実", "士", "意", // 1E0
		"味", "耳", "助", "何", "叫", "死", "成", "歩", "堂", "矢", "張", "有", "罪", "刑", "女", "生", // 1F0
		"教", "害", "犯", "新", "聞", "書", "名", "龍", "一", "ヶ", "回", "若", "性", "逮", "捕", "不", // 200
		"運", "彼", "男", "政", "志", "大", "親", "友", "年", "巻", "込", "知", "開", "検", "察", "側", // 210
		"準", "備", "完", "了", "困", "進", "本", "当", "質", "問", "答", "綾", "里", "帰", "宅", "急", // 220
		"便", "届", "常", "識", "落", "着", "次", "者", "調", "読", "忘", "好", "高", "美", "佳", "通", // 230
		"用", "自", "信", "命", "困", "毒", "飲", "鈍", "器", "殴", "首", "絞", "冷", "独", "審", "理", // 240
		"始", "亜", "内", "具", "体", "的", "凶", "置", "物", "受", "提", "出", "武", "呼", "話", "情", // 250
		"報", "逃", "反", "撃", "祈", "配", "近", "世", "紀", "向", "電", "会", "況", "際", "遊", "海", // 260
		"外", "旅", "行", "亡", "国", "付", "収", "入", "金", "援", "口", "走", "他", "天", "動", "機", // 270
		"移", "屋", "正", "直", "合", "図", "送", "静", "粛", "留", "守", "結", "局", "我", "々", "立", // 280
		"覚", "予", "決", "定", "早", "現", "場", "勧", "誘", "山", "野", "星", "雄", "員", "半", "腰", // 290
		"抜", "怖", "警", "公", "衆", "昼", "停", "使", "種", "子", "番", "暴", "食", "含", "妙", "怒", // 2A0
		"閉", "登", "同", "押", "切", "流", "致", "傷", "触", "玄", "上", "携", "帯", "持", "皆", "後", // 2B0
		"絶", "対", "解", "剖", "単", "憶", "指", "摘", "詰", "音", "計", "続", "型", "引", "題", "刻", // 2C0
		"裏", "捜", "査", "揺", "待", "確", "取", "交", "鳴", "驚", "瞬", "声", "強", "烈", "印", "象", // 2D0
		"細", "主", "要", "池", "隣", "住", "頃", "別", "貸", "遅", "氏", "連", "想", "由", "差", "変", // 2E0
		"先", "緊", "救", "真", "形", "式", "過", "渡", "空", "巣", "習", "家", "狙", "訪", "仕", "侵", // 2F0
		"色", "作", "個", "製", "角", "夜", "祝", "興", "幕", "料", "払", "再", "起", "約", "束", "永", // 300
		"久", "必", "身", "柄", "司", "預", "等", "忙", "元", "憤", "扱", "械", "類", "晚", "務", "打", // 310
		"店", "律", "集", "油", "遠", "沈", "黙", "寝", "課", "客", "梅", "署", "悟", "宵", "放", "眠", // 320
		"面", "座", "革", "絵", "画", "並", "棚", "整", "領", "活", "役", "弱", "暗", "欲", "散", "某", // 330
		"官", "禁", "止", "勝", "縮", "糸", "鋸", "圭", "介", "例", "松", "竹", "観", "葉", "植", "恐", // 340
		"片", "姿", "古", "映", "泣", "果", "働", "即", "楽", "担", "御", "剣", "任", "怜", "侍", "獲", // 350
		"段", "涙", "負", "歳", "黒", "憎", "才", "酷", "偽", "返", "号", "酸", "江", "戸", "戦", "倒", // 360
		"破", "紙", "文", "字", "筆", "跡", "鑑", "悲", "相", "退", "水", "少", "肩", "抱", "速", "板", // 370
		"東", "奪", "庫", "頭", "奥", "昨", "業", "窓", "帳", "簿", "数", "専", "針", "資", "能", "視", // 380
		"安", "飛", "騒", "願", "昔", "両", "絡", "談", "監", "看", "朝", "修", "装", "霊", "媒", "師", // 390
		"系", "接", "挟", "族", "父", "母", "代", "宿", "滅", "極", "秘", "笑", "捨", "二", "孤", "唯", // 3A0
		"存", "在", "化", "粧", "造", "花", "泊", "夏", "降", "丸", "苦", "赤", "推", "申", "様", "伝", // 3B0
		"株", "社", "偶", "盗", "聴", "影", "宇", "宙", "値", "深", "檀", "純", "突", "億", "売", "買", // 3C0
		"冒", "論", "点", "余", "揮", "職", "轄", "位", "可", "迷", "席", "投", "容", "怪", "到", "標", // 3D0
		"語", "迅", "和", "服", "順", "疑", "析", "注", "否", "液", "給", "多", "利", "右", "翌", "令", // 3E0
		"劇", "盛", "髪", "攻", "弟", "為", "低", "省", "壁", "納", "験", "拒", "筋", "保", "管", "君", // 3F0
		"練", "表", "求", "素", "刺", "氷", "溶", "条", "材", "道", "忠", "招", "参", "婦", "拝", "組", // 400
		"工", "許", "横", "円", "共", "隠", "白", "冊", "項", "脅", "迫", "寄", "虫", "治", "格", "協", // 410
		"写", "足", "応", "息", "宣", "誓", "処", "箱", "効", "乗", "脱", "獄", "球", "冗", "増", "途", // 420
		"設", "序", "巨", "枚", "机", "青", "春", "商", "握", "像", "供", "輩", "愛", "礼", "老", "訴", // 430
	},
	{ /* GS2 */
		
	},
	{ /* GS3 */
		
	},
	{ /* GS4? */
		
	}
};
