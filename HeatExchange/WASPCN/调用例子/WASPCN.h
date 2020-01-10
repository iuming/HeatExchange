/*
   根据IFC67和IAPWS-IF84以及IAPWS-IF97编写的动态链接库的函数的调用接口声明
    专供Visual C++ (C/C++语言) 使用

    使用方法：

    直接把本软件包提供的导入库文件(WASPCN.Lib)和本头文件(WASPCN.h)加进对应项目，
    在需要调用的单元中#include本头文件(WASPCN.h)即可！
*/

#pragma comment(lib,"WASPCN.lib")

#define IMPORT_TYPE extern "C" _declspec(dllimport) 

//设定将要使用的标准
IMPORT_TYPE void _stdcall SETSTD_WASP(int STDID);
//获知当前使用的标准
IMPORT_TYPE void _stdcall GETSTD_WASP(int & STDID);
//关于窗口
IMPORT_TYPE void _stdcall ABOUT_WASP();
//帮助窗口
IMPORT_TYPE void _stdcall HELP_WASP();
//版权窗口
IMPORT_TYPE void _stdcall COPYRIGHT_WASP();



//已知压力(MPa)，求对应饱和温度(℃)
IMPORT_TYPE void _stdcall P2T(double P,double & T,int & Range);
//已知压力(MPa)，求对应饱和水比焓(kJ/kg)
IMPORT_TYPE void _stdcall P2HL(double P,double & H,int & Range);
//已知压力(MPa)，求对应饱和汽比焓(kJ/kg)
IMPORT_TYPE void _stdcall P2HG(double P,double & H,int & Range);
//已知压力(MPa)，求对应饱和水比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2SL(double P,double & S,int & Range);
//已知压力(MPa)，求对应饱和汽比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2SG(double P,double & S,int & Range);
//已知压力(MPa)，求对应饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall P2VL(double P,double & V,int & Range);
//已知压力(MPa)，求对应饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall P2VG(double P,double & V,int & Range);
//已知压力(MPa)，求对应饱和温度(℃)、饱和水比焓(kJ/kg)、饱和水比熵(kJ/(kg.℃))、饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall P2L(double P,double & T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)，求对应饱和温度(℃)、饱和汽比焓(kJ/kg)、饱和汽比熵(kJ/(kg.℃))、饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall P2G(double P,double & T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)，求对应饱和水定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CPL(double P,double & CP,int & Range);
//已知压力(MPa)，求对应饱和汽定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CPG(double P,double & CP,int & Range);
//已知压力(MPa)，求对应饱和水定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CVL(double P,double & CV,int & Range);
//已知压力(MPa)，求对应饱和汽定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CVG(double P,double & CV,int & Range);
//已知压力(MPa)，求对应饱和水内能(kJ/kg)
IMPORT_TYPE void _stdcall P2EL(double P,double & E,int & Range);
//已知压力(MPa)，求对应饱和汽内能(kJ/kg)
IMPORT_TYPE void _stdcall P2EG(double P,double & E,int & Range);
//已知压力(MPa)，求对应饱和水音速(m/s)
IMPORT_TYPE void _stdcall P2SSPL(double P,double & SSP,int & Range);
//已知压力(MPa)，求对应饱和汽音速(m/s)
IMPORT_TYPE void _stdcall P2SSPG(double P,double & SSP,int & Range);
//已知压力(MPa)，求对应饱和水定熵指数
IMPORT_TYPE void _stdcall P2KSL(double P,double & KS,int & Range);
//已知压力(MPa)，求对应饱和汽定熵指数
IMPORT_TYPE void _stdcall P2KSG(double P,double & KS,int & Range);
//已知压力(MPa)，求对应饱和水动力粘度(Pa.s)
IMPORT_TYPE void _stdcall P2ETAL(double P,double & ETA,int & Range);
//已知压力(MPa)，求对应饱和汽动力粘度(Pa.s)
IMPORT_TYPE void _stdcall P2ETAG(double P,double & ETA,int & Range);
//已知压力(MPa)，求对应饱和水运动粘度(m^2/s)
IMPORT_TYPE void _stdcall P2UL(double P,double & U,int & Range);
//已知压力(MPa)，求对应饱和汽运动粘度(m^2/s)
IMPORT_TYPE void _stdcall P2UG(double P,double & U,int & Range);
//已知压力(MPa)，求对应饱和水导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall P2RAMDL(double P,double & RAMD,int & Range);
//已知压力(MPa)，求对应饱和汽导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall P2RAMDG(double P,double & RAMD,int & Range);
//已知压力(MPa)，求对应饱和水普朗特数
IMPORT_TYPE void _stdcall P2PRNL(double P,double & PRN,int & Range);
//已知压力(MPa)，求对应饱和汽普朗特数
IMPORT_TYPE void _stdcall P2PRNG(double P,double & PRN,int & Range);
//已知压力(MPa)，求对应饱和水介电常数
IMPORT_TYPE void _stdcall P2EPSL(double P,double & EPS,int & Range);
//已知压力(MPa)，求对应饱和汽介电常数
IMPORT_TYPE void _stdcall P2EPSG(double P,double & EPS,int & Range);
//已知压力(MPa)，求对应饱和水折射率
IMPORT_TYPE void _stdcall P2NL(double P,double LAMD,double & N,int & Range);
//已知压力(MPa)，求对应饱和汽折射率
IMPORT_TYPE void _stdcall P2NG(double P,double LAMD,double & N,int & Range);

//已知压力(MPa)和温度(℃)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PT2H(double P,double T,double & H,int & Range);
//已知压力(MPa)和温度(℃)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2S(double P,double T,double & S,int & Range);
//已知压力(MPa)和温度(℃)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PT2V(double P,double T,double & V,int & Range);
//已知压力(MPa)和温度(℃)，求干度(100%)
IMPORT_TYPE void _stdcall PT2X(double P,double T,double & X,int & Range);
//已知压力(MPa)和温度(℃)，求比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall PT(double P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)和温度(℃)，求定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2CP(double P,double T,double & CP,int & Range);
//已知压力(MPa)和温度(℃)，求定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2CV(double P,double T,double & CV,int & Range);
//已知压力(MPa)和温度(℃)，求内能(kJ/kg)
IMPORT_TYPE void _stdcall PT2E(double P,double T,double & E,int & Range);
//已知压力(MPa)和温度(℃)，求音速(m/s)
IMPORT_TYPE void _stdcall PT2SSP(double P,double T,double & SSP,int & Range);
//已知压力(MPa)和温度(℃)，求定熵指数
IMPORT_TYPE void _stdcall PT2KS(double P,double T,double & KS,int & Range);
//已知压力(MPa)和温度(℃)，求动力粘度(Pa.s)
IMPORT_TYPE void _stdcall PT2ETA(double P,double T,double & ETA,int & Range);
//已知压力(MPa)和温度(℃)，求运动粘度(m^2/s)
IMPORT_TYPE void _stdcall PT2U(double P,double T,double & U,int & Range);
//已知压力(MPa)和温度(℃)，求热传导系数 (W/(m.℃))
IMPORT_TYPE void _stdcall PT2RAMD(double P,double T,double & RAMD,int & Range);
//已知压力(MPa)和温度(℃)，求普朗特数
IMPORT_TYPE void _stdcall PT2PRN(double P,double T,double & PRN,int & Range);
//已知压力(MPa)和温度(℃)，求介电常数
IMPORT_TYPE void _stdcall PT2EPS(double P,double T,double & EPS,int & Range);
//已知压力(MPa)和温度(℃)，求折射率
IMPORT_TYPE void _stdcall PT2N(double P,double T,double LAMD,double & N,int & Range);

//已知压力(MPa)和比焓(kJ/kg)，求温度(℃)
IMPORT_TYPE void _stdcall PH2T(double P,double H,double & T,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PH2S(double P,double H,double & S,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PH2V(double P,double H,double & V,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求干度(100%)
IMPORT_TYPE void _stdcall PH2X(double P,double H,double & X,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PH(double P,double & T,double H,double & S,double & V,double & X,int & Range);

//已知压力(MPa)和比熵(kJ/(kg.℃))，求温度(℃)
IMPORT_TYPE void _stdcall PS2T(double P,double S,double & T,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PS2H(double P,double S,double & H,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PS2V(double P,double S,double & V,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall PS2X(double P,double S,double & X,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求温度(℃)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PS(double P,double & T,double & H,double S,double & V,double & X,int & Range);

//已知压力(MPa)和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall PV2T(double P,double V,double & T,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PV2H(double P,double V,double & H,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PV2S(double P,double V,double & S,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall PV2X(double P,double V,double & X,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求温度(℃)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PV(double P,double & T,double & H,double & S,double V,double & X,int & Range);

//已知压力(MPa)和干度(100%)，求温度(℃)
IMPORT_TYPE void _stdcall PX2T(double P,double X,double & T,int & Range);
//已知压力(MPa)和干度(100%)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PX2H(double P,double X,double & H,int & Range);
//已知压力(MPa)和干度(100%)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PX2S(double P,double X,double & S,int & Range);
//已知压力(MPa)和干度(100%)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PX2V(double P,double X,double & V,int & Range);
//已知压力(MPa)和干度(100%)，求温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall PX(double P,double & T,double & H,double & S,double & V,double X,int & Range);

//已知温度(℃)，求饱和压力(MPa)？
IMPORT_TYPE void _stdcall T2P(double T,double & P,int & Range);
//已知温度(℃)，求饱和水比焓(kJ/kg)
IMPORT_TYPE void _stdcall T2HL(double T,double & H,int & Range);
//已知温度(℃)，求饱和汽比焓(kJ/kg)
IMPORT_TYPE void _stdcall T2HG(double T,double & H,int & Range);
//已知温度(℃)，求饱和水比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2SL(double T,double & S,int & Range);
//已知温度(℃)，求饱和汽比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2SG(double T,double & S,int & Range);
//已知温度(℃)，求饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall T2VL(double T,double & V,int & Range);
//已知温度(℃)，求饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall T2VG(double T,double & V,int & Range);
//已知温度(℃)，求饱和水比焓(kJ/kg)、饱和水比熵(kJ/(kg.℃))、饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall T2L(double & P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知温度(℃)，求饱和汽比焓(kJ/kg)、饱和汽比熵(kJ/(kg.℃))、饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall T2G(double & P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知温度(℃)，求饱和水定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CPL(double T,double & CP,int & Range);
//已知温度(℃)，求饱和汽定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CPG(double T,double & CP,int & Range);
//已知温度(℃)，求饱和水定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CVL(double T,double & CV,int & Range);
//已知温度(℃)，求饱和汽定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CVG(double T,double & CV,int & Range);
//已知温度(℃)，求饱和水内能(kJ/kg)
IMPORT_TYPE void _stdcall T2EL(double T,double & E,int & Range);
//已知温度(℃)，求饱和汽内能(kJ/kg)
IMPORT_TYPE void _stdcall T2EG(double T,double & E,int & Range);
//已知温度(℃)，求饱和水音速(m/s)
IMPORT_TYPE void _stdcall T2SSPL(double T,double & SSP,int & Range);
//已知温度(℃)，求饱和汽音速(m/s)
IMPORT_TYPE void _stdcall T2SSPG(double T,double & SSP,int & Range);
//已知温度(℃)，求饱和水定熵指数
IMPORT_TYPE void _stdcall T2KSL(double T,double & KS,int & Range);
//已知温度(℃)，求饱和汽定熵指数
IMPORT_TYPE void _stdcall T2KSG(double T,double & KS,int & Range);
//已知温度(℃)，求饱和水动力粘度(Pa.s)
IMPORT_TYPE void _stdcall T2ETAL(double T,double & ETA,int & Range);
//已知温度(℃)，求饱和汽动力粘度(Pa.s)
IMPORT_TYPE void _stdcall T2ETAG(double T,double & ETA,int & Range);
//已知温度(℃)，求饱和水运动粘度(m^2/s)
IMPORT_TYPE void _stdcall T2UL(double T,double & U,int & Range);
//已知温度(℃)，求饱和汽运动粘度(m^2/s)
IMPORT_TYPE void _stdcall T2UG(double T,double & U,int & Range);
//已知温度(℃)，求饱和水导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall T2RAMDL(double T,double & RAMD,int & Range);
//已知温度(℃)，求饱和汽导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall T2RAMDG(double T,double & RAMD,int & Range);
//已知温度(℃)，求饱和水普朗特数
IMPORT_TYPE void _stdcall T2PRNL(double T,double & PRN,int & Range);
//已知温度(℃)，求饱和汽普朗特数
IMPORT_TYPE void _stdcall T2PRNG(double T,double & PRN,int & Range);
//已知温度(℃)，求饱和水介电常数
IMPORT_TYPE void _stdcall T2EPSL(double T,double & EPS,int & Range);
//已知温度(℃)，求饱和汽介电常数
IMPORT_TYPE void _stdcall T2EPSG(double T,double & EPS,int & Range);
//已知温度(℃)，求饱和水折射率
IMPORT_TYPE void _stdcall T2NL(double T,double LAMD,double & N,int & Range);
//已知温度(℃)，求饱和汽折射率
IMPORT_TYPE void _stdcall T2NG(double T,double LAMD,double & N,int & Range);
//已知温度(℃)，求饱和水表面张力(N/m)
IMPORT_TYPE void _stdcall T2SURFT(double T,double & SURFT,int & Range);

//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall TH2PLP(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall TH2SLP(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TH2VLP(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall TH2PHP(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall TH2SHP(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TH2VHP(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(低压的一个值)
IMPORT_TYPE void _stdcall THLP(double & P,double T,double H,double & S,double & V,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(高压的一个值)
IMPORT_TYPE void _stdcall THHP(double & P,double T,double H,double & S,double & V,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2P(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2S(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2V(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求干度(100%)
IMPORT_TYPE void _stdcall TH2X(double T,double H,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH(double & P,double T,double H,double & S,double & V,double & X,int & Range);

//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall TS2PLP(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TS2HLP(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TS2VLP(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall TS2PHP(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TS2HHP(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TS2VHP(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2P(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2H(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2V(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall TS2X(double T,double S,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(低压的一个值)
IMPORT_TYPE void _stdcall TSLP(double & P,double T,double & H,double S,double & V,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(高压的一个值)
IMPORT_TYPE void _stdcall TSHP(double & P,double T,double & H,double S,double & V,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS(double & P,double T,double & H,double S,double & V,double & X,int & Range);

//已知温度(℃)和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall TV2P(double T,double V,double & P,int & Range);
//已知温度(℃)和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall TV2H(double T,double V,double & H,int & Range);
//已知温度(℃)和比容(m^3/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall TV2S(double T,double V,double & S,int & Range);
//已知温度(℃)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall TV2X(double T,double V,double & X,int & Range);
//已知温度(℃)和比容(m^3/kg)，求压力(MPa)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、干度(100%)
IMPORT_TYPE void _stdcall TV(double & P,double T,double & H,double & S,double V,double & X,int & Range);

//已知温度(℃)和干度(100%)，求压力(MPa)
IMPORT_TYPE void _stdcall TX2P(double T,double X,double & P,int & Range);
//已知温度(℃)和干度(100%)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall TX2H(double T,double X,double & H,int & Range);
//已知温度(℃)和干度(100%)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall TX2S(double T,double X,double & S,int & Range);
//已知温度(℃)和干度(100%)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall TX2V(double T,double X,double & V,int & Range);
//已知温度(℃)和干度(100%)，求压力(MPa)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall TX(double & P,double T,double & H,double & S,double & V,double X,int & Range);

//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求压力(MPa)
IMPORT_TYPE void _stdcall HS2P(double H,double S,double & P,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求温度(℃)
IMPORT_TYPE void _stdcall HS2T(double H,double S,double & T,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求比容(m^3/kg)
IMPORT_TYPE void _stdcall HS2V(double H,double S,double & V,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall HS2X(double H,double S,double & X,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求压力(MPa)、温度(℃)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall HS(double & P,double & T,double H,double S,double & V,double & X,int & Range);

//已知比焓(kJ/kg)和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall HV2P(double H,double V,double & P,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall HV2T(double H,double V,double & T,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall HV2S(double H,double V,double & S,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall HV2X(double H,double V,double & X,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、干度(100%)
IMPORT_TYPE void _stdcall HV(double & P,double & T,double H,double & S,double V,double & X,int & Range);

//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall HX2PLP(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall HX2TLP(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall HX2SLP(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall HX2VLP(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall HX2PHP(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall HX2THP(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall HX2SHP(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall HX2VHP(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2P(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2T(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2S(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2V(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall HXLP(double & P,double & T,double H,double & S,double & V,double X,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall HXHP(double & P,double & T,double H,double & S,double & V,double X,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX(double & P,double & T,double H,double & S,double & V,double X,int & Range);

//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall SV2P(double S,double V,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall SV2T(double S,double V,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall SV2H(double S,double V,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall SV2X(double S,double V,double & X,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、干度(100%)
IMPORT_TYPE void _stdcall SV(double & P,double & T,double & H,double S,double V,double & X,int & Range);


//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall SX2PLP(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(中压的一个值)
IMPORT_TYPE void _stdcall SX2PMP(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall SX2PHP(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2P(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall SX2TLP(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(中压的一个值)
IMPORT_TYPE void _stdcall SX2TMP(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall SX2THP(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2T(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SX2HLP(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SX2HMP(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SX2HHP(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2H(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SX2VLP(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SX2VMP(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SX2VHP(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2V(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SXLP(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SXMP(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SXHP(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX(double & P,double & T,double & H,double S,double & V,double X,int & Range);

//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall VX2PLP(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(低高压的一个值)
IMPORT_TYPE void _stdcall VX2PHP(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2P(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall VX2TLP(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall VX2THP(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2T(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall VX2HLP(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall VX2HHP(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2H(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall VX2SLP(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall VX2SHP(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2S(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall VXLP(double & P,double & T,double & H,double & S,double V,double X,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall VXHP(double & P,double & T,double & H,double & S,double V,double X,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX(double & P,double & T,double & H,double & S,double V,double X,int & Range);


//已知压力(MPa)，求对应饱和温度(℃)
IMPORT_TYPE void _stdcall P2T97(double P,double & T,int & Range);
//已知压力(MPa)，求对应饱和水比焓(kJ/kg)
IMPORT_TYPE void _stdcall P2HL97(double P,double & H,int & Range);
//已知压力(MPa)，求对应饱和汽比焓(kJ/kg)
IMPORT_TYPE void _stdcall P2HG97(double P,double & H,int & Range);
//已知压力(MPa)，求对应饱和水比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2SL97(double P,double & S,int & Range);
//已知压力(MPa)，求对应饱和汽比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2SG97(double P,double & S,int & Range);
//已知压力(MPa)，求对应饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall P2VL97(double P,double & V,int & Range);
//已知压力(MPa)，求对应饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall P2VG97(double P,double & V,int & Range);
//已知压力(MPa)，求对应饱和温度(℃)、饱和水比焓(kJ/kg)、饱和水比熵(kJ/(kg.℃))、饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall P2L97(double P,double & T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)，求对应饱和温度(℃)、饱和汽比焓(kJ/kg)、饱和汽比熵(kJ/(kg.℃))、饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall P2G97(double P,double & T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)，求对应饱和水定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CPL97(double P,double & CP,int & Range);
//已知压力(MPa)，求对应饱和汽定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CPG97(double P,double & CP,int & Range);
//已知压力(MPa)，求对应饱和水定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CVL97(double P,double & CV,int & Range);
//已知压力(MPa)，求对应饱和汽定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CVG97(double P,double & CV,int & Range);
//已知压力(MPa)，求对应饱和水内能(kJ/kg)
IMPORT_TYPE void _stdcall P2EL97(double P,double & E,int & Range);
//已知压力(MPa)，求对应饱和汽内能(kJ/kg)
IMPORT_TYPE void _stdcall P2EG97(double P,double & E,int & Range);
//已知压力(MPa)，求对应饱和水音速(m/s)
IMPORT_TYPE void _stdcall P2SSPL97(double P,double & SSP,int & Range);
//已知压力(MPa)，求对应饱和汽音速(m/s)
IMPORT_TYPE void _stdcall P2SSPG97(double P,double & SSP,int & Range);
//已知压力(MPa)，求对应饱和水定熵指数
IMPORT_TYPE void _stdcall P2KSL97(double P,double & KS,int & Range);
//已知压力(MPa)，求对应饱和汽定熵指数
IMPORT_TYPE void _stdcall P2KSG97(double P,double & KS,int & Range);
//已知压力(MPa)，求对应饱和水动力粘度(Pa.s)
IMPORT_TYPE void _stdcall P2ETAL97(double P,double & ETA,int & Range);
//已知压力(MPa)，求对应饱和汽动力粘度(Pa.s)
IMPORT_TYPE void _stdcall P2ETAG97(double P,double & ETA,int & Range);
//已知压力(MPa)，求对应饱和水运动粘度(m^2/s)
IMPORT_TYPE void _stdcall P2UL97(double P,double & U,int & Range);
//已知压力(MPa)，求对应饱和汽运动粘度(m^2/s)
IMPORT_TYPE void _stdcall P2UG97(double P,double & U,int & Range);
//已知压力(MPa)，求对应饱和水导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall P2RAMDL97(double P,double & RAMD,int & Range);
//已知压力(MPa)，求对应饱和汽导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall P2RAMDG97(double P,double & RAMD,int & Range);
//已知压力(MPa)，求对应饱和水普朗特数
IMPORT_TYPE void _stdcall P2PRNL97(double P,double & PRN,int & Range);
//已知压力(MPa)，求对应饱和汽普朗特数
IMPORT_TYPE void _stdcall P2PRNG97(double P,double & PRN,int & Range);
//已知压力(MPa)，求对应饱和水介电常数
IMPORT_TYPE void _stdcall P2EPSL97(double P,double & EPS,int & Range);
//已知压力(MPa)，求对应饱和汽介电常数
IMPORT_TYPE void _stdcall P2EPSG97(double P,double & EPS,int & Range);
//已知压力(MPa)，求对应饱和水折射率
IMPORT_TYPE void _stdcall P2NL97(double P,double LAMD,double & N,int & Range);
//已知压力(MPa)，求对应饱和汽折射率
IMPORT_TYPE void _stdcall P2NG97(double P,double LAMD,double & N,int & Range);

//已知压力(MPa)和温度(℃)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PT2H97(double P,double T,double & H,int & Range);
//已知压力(MPa)和温度(℃)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2S97(double P,double T,double & S,int & Range);
//已知压力(MPa)和温度(℃)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PT2V97(double P,double T,double & V,int & Range);
//已知压力(MPa)和温度(℃)，求干度(100%)
IMPORT_TYPE void _stdcall PT2X97(double P,double T,double & X,int & Range);
//已知压力(MPa)和温度(℃)，求比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall PT97(double P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)和温度(℃)，求定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2CP97(double P,double T,double & CP,int & Range);
//已知压力(MPa)和温度(℃)，求定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2CV97(double P,double T,double & CV,int & Range);
//已知压力(MPa)和温度(℃)，求内能(kJ/kg)
IMPORT_TYPE void _stdcall PT2E97(double P,double T,double & E,int & Range);
//已知压力(MPa)和温度(℃)，求音速(m/s)
IMPORT_TYPE void _stdcall PT2SSP97(double P,double T,double & SSP,int & Range);
//已知压力(MPa)和温度(℃)，求定熵指数
IMPORT_TYPE void _stdcall PT2KS97(double P,double T,double & KS,int & Range);
//已知压力(MPa)和温度(℃)，求动力粘度(Pa.s)
IMPORT_TYPE void _stdcall PT2ETA97(double P,double T,double & ETA,int & Range);
//已知压力(MPa)和温度(℃)，求运动粘度(m^2/s)
IMPORT_TYPE void _stdcall PT2U97(double P,double T,double & U,int & Range);
//已知压力(MPa)和温度(℃)，求热传导系数 (W/(m.℃))
IMPORT_TYPE void _stdcall PT2RAMD97(double P,double T,double & RAMD,int & Range);
//已知压力(MPa)和温度(℃)，求普朗特数
IMPORT_TYPE void _stdcall PT2PRN97(double P,double T,double & PRN,int & Range);
//已知压力(MPa)和温度(℃)，求介电常数
IMPORT_TYPE void _stdcall PT2EPS97(double P,double T,double & EPS,int & Range);
//已知压力(MPa)和温度(℃)，求折射率
IMPORT_TYPE void _stdcall PT2N97(double P,double T,double LAMD,double & N,int & Range);

//已知压力(MPa)和比焓(kJ/kg)，求温度(℃)
IMPORT_TYPE void _stdcall PH2T97(double P,double H,double & T,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PH2S97(double P,double H,double & S,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PH2V97(double P,double H,double & V,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求干度(100%)
IMPORT_TYPE void _stdcall PH2X97(double P,double H,double & X,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PH97(double P,double & T,double H,double & S,double & V,double & X,int & Range);

//已知压力(MPa)和比熵(kJ/(kg.℃))，求温度(℃)
IMPORT_TYPE void _stdcall PS2T97(double P,double S,double & T,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PS2H97(double P,double S,double & H,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PS2V97(double P,double S,double & V,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall PS2X97(double P,double S,double & X,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求温度(℃)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PS97(double P,double & T,double & H,double S,double & V,double & X,int & Range);

//已知压力(MPa)和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall PV2T97(double P,double V,double & T,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PV2H97(double P,double V,double & H,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PV2S97(double P,double V,double & S,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall PV2X97(double P,double V,double & X,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求温度(℃)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PV97(double P,double & T,double & H,double & S,double V,double & X,int & Range);

//已知压力(MPa)和干度(100%)，求温度(℃)
IMPORT_TYPE void _stdcall PX2T97(double P,double X,double & T,int & Range);
//已知压力(MPa)和干度(100%)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PX2H97(double P,double X,double & H,int & Range);
//已知压力(MPa)和干度(100%)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PX2S97(double P,double X,double & S,int & Range);
//已知压力(MPa)和干度(100%)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PX2V97(double P,double X,double & V,int & Range);
//已知压力(MPa)和干度(100%)，求温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall PX97(double P,double & T,double & H,double & S,double & V,double X,int & Range);

//已知温度(℃)，求饱和压力(MPa)？
IMPORT_TYPE void _stdcall T2P97(double T,double & P,int & Range);
//已知温度(℃)，求饱和水比焓(kJ/kg)
IMPORT_TYPE void _stdcall T2HL97(double T,double & H,int & Range);
//已知温度(℃)，求饱和汽比焓(kJ/kg)
IMPORT_TYPE void _stdcall T2HG97(double T,double & H,int & Range);
//已知温度(℃)，求饱和水比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2SL97(double T,double & S,int & Range);
//已知温度(℃)，求饱和汽比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2SG97(double T,double & S,int & Range);
//已知温度(℃)，求饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall T2VL97(double T,double & V,int & Range);
//已知温度(℃)，求饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall T2VG97(double T,double & V,int & Range);
//已知温度(℃)，求饱和水比焓(kJ/kg)、饱和水比熵(kJ/(kg.℃))、饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall T2L97(double & P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知温度(℃)，求饱和汽比焓(kJ/kg)、饱和汽比熵(kJ/(kg.℃))、饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall T2G97(double & P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知温度(℃)，求饱和水定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CPL97(double T,double & CP,int & Range);
//已知温度(℃)，求饱和汽定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CPG97(double T,double & CP,int & Range);
//已知温度(℃)，求饱和水定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CVL97(double T,double & CV,int & Range);
//已知温度(℃)，求饱和汽定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CVG97(double T,double & CV,int & Range);
//已知温度(℃)，求饱和水内能(kJ/kg)
IMPORT_TYPE void _stdcall T2EL97(double T,double & E,int & Range);
//已知温度(℃)，求饱和汽内能(kJ/kg)
IMPORT_TYPE void _stdcall T2EG97(double T,double & E,int & Range);
//已知温度(℃)，求饱和水音速(m/s)
IMPORT_TYPE void _stdcall T2SSPL97(double T,double & SSP,int & Range);
//已知温度(℃)，求饱和汽音速(m/s)
IMPORT_TYPE void _stdcall T2SSPG97(double T,double & SSP,int & Range);
//已知温度(℃)，求饱和水定熵指数
IMPORT_TYPE void _stdcall T2KSL97(double T,double & KS,int & Range);
//已知温度(℃)，求饱和汽定熵指数
IMPORT_TYPE void _stdcall T2KSG97(double T,double & KS,int & Range);
//已知温度(℃)，求饱和水动力粘度(Pa.s)
IMPORT_TYPE void _stdcall T2ETAL97(double T,double & ETA,int & Range);
//已知温度(℃)，求饱和汽动力粘度(Pa.s)
IMPORT_TYPE void _stdcall T2ETAG97(double T,double & ETA,int & Range);
//已知温度(℃)，求饱和水运动粘度(m^2/s)
IMPORT_TYPE void _stdcall T2UL97(double T,double & U,int & Range);
//已知温度(℃)，求饱和汽运动粘度(m^2/s)
IMPORT_TYPE void _stdcall T2UG97(double T,double & U,int & Range);
//已知温度(℃)，求饱和水导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall T2RAMDL97(double T,double & RAMD,int & Range);
//已知温度(℃)，求饱和汽导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall T2RAMDG97(double T,double & RAMD,int & Range);
//已知温度(℃)，求饱和水普朗特数
IMPORT_TYPE void _stdcall T2PRNL97(double T,double & PRN,int & Range);
//已知温度(℃)，求饱和汽普朗特数
IMPORT_TYPE void _stdcall T2PRNG97(double T,double & PRN,int & Range);
//已知温度(℃)，求饱和水介电常数
IMPORT_TYPE void _stdcall T2EPSL97(double T,double & EPS,int & Range);
//已知温度(℃)，求饱和汽介电常数
IMPORT_TYPE void _stdcall T2EPSG97(double T,double & EPS,int & Range);
//已知温度(℃)，求饱和水折射率
IMPORT_TYPE void _stdcall T2NL97(double T,double LAMD,double & N,int & Range);
//已知温度(℃)，求饱和汽折射率
IMPORT_TYPE void _stdcall T2NG97(double T,double LAMD,double & N,int & Range);
//已知温度(℃)，求饱和水表面张力(N/m)
IMPORT_TYPE void _stdcall T2SURFT97(double T,double & SURFT,int & Range);

//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall TH2PLP97(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall TH2SLP97(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TH2VLP97(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall TH2PHP97(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall TH2SHP97(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TH2VHP97(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(低压的一个值)
IMPORT_TYPE void _stdcall THLP97(double & P,double T,double H,double & S,double & V,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(高压的一个值)
IMPORT_TYPE void _stdcall THHP97(double & P,double T,double H,double & S,double & V,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2P97(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2S97(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2V97(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求干度(100%)
IMPORT_TYPE void _stdcall TH2X97(double T,double H,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH97(double & P,double T,double H,double & S,double & V,double & X,int & Range);

//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall TS2PLP97(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TS2HLP97(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TS2VLP97(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall TS2PHP97(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TS2HHP97(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TS2VHP97(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2P97(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2H97(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2V97(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall TS2X97(double T,double S,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(低压的一个值)
IMPORT_TYPE void _stdcall TSLP97(double & P,double T,double & H,double S,double & V,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(高压的一个值)
IMPORT_TYPE void _stdcall TSHP97(double & P,double T,double & H,double S,double & V,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS97(double & P,double T,double & H,double S,double & V,double & X,int & Range);

//已知温度(℃)和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall TV2P97(double T,double V,double & P,int & Range);
//已知温度(℃)和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall TV2H97(double T,double V,double & H,int & Range);
//已知温度(℃)和比容(m^3/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall TV2S97(double T,double V,double & S,int & Range);
//已知温度(℃)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall TV2X97(double T,double V,double & X,int & Range);
//已知温度(℃)和比容(m^3/kg)，求压力(MPa)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、干度(100%)
IMPORT_TYPE void _stdcall TV97(double & P,double T,double & H,double & S,double V,double & X,int & Range);

//已知温度(℃)和干度(100%)，求压力(MPa)
IMPORT_TYPE void _stdcall TX2P97(double T,double X,double & P,int & Range);
//已知温度(℃)和干度(100%)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall TX2H97(double T,double X,double & H,int & Range);
//已知温度(℃)和干度(100%)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall TX2S97(double T,double X,double & S,int & Range);
//已知温度(℃)和干度(100%)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall TX2V97(double T,double X,double & V,int & Range);
//已知温度(℃)和干度(100%)，求压力(MPa)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall TX97(double & P,double T,double & H,double & S,double & V,double X,int & Range);

//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求压力(MPa)
IMPORT_TYPE void _stdcall HS2P97(double H,double S,double & P,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求温度(℃)
IMPORT_TYPE void _stdcall HS2T97(double H,double S,double & T,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求比容(m^3/kg)
IMPORT_TYPE void _stdcall HS2V97(double H,double S,double & V,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall HS2X97(double H,double S,double & X,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求压力(MPa)、温度(℃)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall HS97(double & P,double & T,double H,double S,double & V,double & X,int & Range);

//已知比焓(kJ/kg)和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall HV2P97(double H,double V,double & P,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall HV2T97(double H,double V,double & T,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall HV2S97(double H,double V,double & S,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall HV2X97(double H,double V,double & X,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、干度(100%)
IMPORT_TYPE void _stdcall HV97(double & P,double & T,double H,double & S,double V,double & X,int & Range);

//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall HX2PLP97(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall HX2TLP97(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall HX2SLP97(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall HX2VLP97(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall HX2PHP97(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall HX2THP97(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall HX2SHP97(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall HX2VHP97(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2P97(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2T97(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2S97(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2V97(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall HXLP97(double & P,double & T,double H,double & S,double & V,double X,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall HXHP97(double & P,double & T,double H,double & S,double & V,double X,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX97(double & P,double & T,double H,double & S,double & V,double X,int & Range);

//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall SV2P97(double S,double V,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall SV2T97(double S,double V,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall SV2H97(double S,double V,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall SV2X97(double S,double V,double & X,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、干度(100%)
IMPORT_TYPE void _stdcall SV97(double & P,double & T,double & H,double S,double V,double & X,int & Range);


//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall SX2PLP97(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(中压的一个值)
IMPORT_TYPE void _stdcall SX2PMP97(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall SX2PHP97(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2P97(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall SX2TLP97(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(中压的一个值)
IMPORT_TYPE void _stdcall SX2TMP97(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall SX2THP97(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2T97(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SX2HLP97(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SX2HMP97(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SX2HHP97(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2H97(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SX2VLP97(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SX2VMP97(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SX2VHP97(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2V97(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SXLP97(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SXMP97(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SXHP97(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX97(double & P,double & T,double & H,double S,double & V,double X,int & Range);

//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall VX2PLP97(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(低高压的一个值)
IMPORT_TYPE void _stdcall VX2PHP97(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2P97(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall VX2TLP97(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall VX2THP97(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2T97(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall VX2HLP97(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall VX2HHP97(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2H97(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall VX2SLP97(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall VX2SHP97(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2S97(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall VXLP97(double & P,double & T,double & H,double & S,double V,double X,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall VXHP97(double & P,double & T,double & H,double & S,double V,double X,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX97(double & P,double & T,double & H,double & S,double V,double X,int & Range);


//已知压力(MPa)，求对应饱和温度(℃)
IMPORT_TYPE void _stdcall P2T67(double P,double & T,int & Range);
//已知压力(MPa)，求对应饱和水比焓(kJ/kg)
IMPORT_TYPE void _stdcall P2HL67(double P,double & H,int & Range);
//已知压力(MPa)，求对应饱和汽比焓(kJ/kg)
IMPORT_TYPE void _stdcall P2HG67(double P,double & H,int & Range);
//已知压力(MPa)，求对应饱和水比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2SL67(double P,double & S,int & Range);
//已知压力(MPa)，求对应饱和汽比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2SG67(double P,double & S,int & Range);
//已知压力(MPa)，求对应饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall P2VL67(double P,double & V,int & Range);
//已知压力(MPa)，求对应饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall P2VG67(double P,double & V,int & Range);
//已知压力(MPa)，求对应饱和温度(℃)、饱和水比焓(kJ/kg)、饱和水比熵(kJ/(kg.℃))、饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall P2L67(double P,double & T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)，求对应饱和温度(℃)、饱和汽比焓(kJ/kg)、饱和汽比熵(kJ/(kg.℃))、饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall P2G67(double P,double & T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)，求对应饱和水定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CPL67(double P,double & CP,int & Range);
//已知压力(MPa)，求对应饱和汽定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CPG67(double P,double & CP,int & Range);
//已知压力(MPa)，求对应饱和水定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CVL67(double P,double & CV,int & Range);
//已知压力(MPa)，求对应饱和汽定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall P2CVG67(double P,double & CV,int & Range);
//已知压力(MPa)，求对应饱和水内能(kJ/kg)
IMPORT_TYPE void _stdcall P2EL67(double P,double & E,int & Range);
//已知压力(MPa)，求对应饱和汽内能(kJ/kg)
IMPORT_TYPE void _stdcall P2EG67(double P,double & E,int & Range);
//已知压力(MPa)，求对应饱和水音速(m/s)
IMPORT_TYPE void _stdcall P2SSPL67(double P,double & SSP,int & Range);
//已知压力(MPa)，求对应饱和汽音速(m/s)
IMPORT_TYPE void _stdcall P2SSPG67(double P,double & SSP,int & Range);
//已知压力(MPa)，求对应饱和水定熵指数
IMPORT_TYPE void _stdcall P2KSL67(double P,double & KS,int & Range);
//已知压力(MPa)，求对应饱和汽定熵指数
IMPORT_TYPE void _stdcall P2KSG67(double P,double & KS,int & Range);
//已知压力(MPa)，求对应饱和水动力粘度(Pa.s)
IMPORT_TYPE void _stdcall P2ETAL67(double P,double & ETA,int & Range);
//已知压力(MPa)，求对应饱和汽动力粘度(Pa.s)
IMPORT_TYPE void _stdcall P2ETAG67(double P,double & ETA,int & Range);
//已知压力(MPa)，求对应饱和水运动粘度(m^2/s)
IMPORT_TYPE void _stdcall P2UL67(double P,double & U,int & Range);
//已知压力(MPa)，求对应饱和汽运动粘度(m^2/s)
IMPORT_TYPE void _stdcall P2UG67(double P,double & U,int & Range);
//已知压力(MPa)，求对应饱和水导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall P2RAMDL67(double P,double & RAMD,int & Range);
//已知压力(MPa)，求对应饱和汽导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall P2RAMDG67(double P,double & RAMD,int & Range);
//已知压力(MPa)，求对应饱和水普朗特数
IMPORT_TYPE void _stdcall P2PRNL67(double P,double & PRN,int & Range);
//已知压力(MPa)，求对应饱和汽普朗特数
IMPORT_TYPE void _stdcall P2PRNG67(double P,double & PRN,int & Range);
//已知压力(MPa)，求对应饱和水介电常数
IMPORT_TYPE void _stdcall P2EPSL67(double P,double & EPS,int & Range);
//已知压力(MPa)，求对应饱和汽介电常数
IMPORT_TYPE void _stdcall P2EPSG67(double P,double & EPS,int & Range);
//已知压力(MPa)，求对应饱和水折射率
IMPORT_TYPE void _stdcall P2NL67(double P,double LAMD,double & N,int & Range);
//已知压力(MPa)，求对应饱和汽折射率
IMPORT_TYPE void _stdcall P2NG67(double P,double LAMD,double & N,int & Range);

//已知压力(MPa)和温度(℃)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PT2H67(double P,double T,double & H,int & Range);
//已知压力(MPa)和温度(℃)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2S67(double P,double T,double & S,int & Range);
//已知压力(MPa)和温度(℃)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PT2V67(double P,double T,double & V,int & Range);
//已知压力(MPa)和温度(℃)，求干度(100%)
IMPORT_TYPE void _stdcall PT2X67(double P,double T,double & X,int & Range);
//已知压力(MPa)和温度(℃)，求比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall PT67(double P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知压力(MPa)和温度(℃)，求定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2CP67(double P,double T,double & CP,int & Range);
//已知压力(MPa)和温度(℃)，求定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PT2CV67(double P,double T,double & CV,int & Range);
//已知压力(MPa)和温度(℃)，求内能(kJ/kg)
IMPORT_TYPE void _stdcall PT2E67(double P,double T,double & E,int & Range);
//已知压力(MPa)和温度(℃)，求音速(m/s)
IMPORT_TYPE void _stdcall PT2SSP67(double P,double T,double & SSP,int & Range);
//已知压力(MPa)和温度(℃)，求定熵指数
IMPORT_TYPE void _stdcall PT2KS67(double P,double T,double & KS,int & Range);
//已知压力(MPa)和温度(℃)，求动力粘度(Pa.s)
IMPORT_TYPE void _stdcall PT2ETA67(double P,double T,double & ETA,int & Range);
//已知压力(MPa)和温度(℃)，求运动粘度(m^2/s)
IMPORT_TYPE void _stdcall PT2U67(double P,double T,double & U,int & Range);
//已知压力(MPa)和温度(℃)，求热传导系数 (W/(m.℃))
IMPORT_TYPE void _stdcall PT2RAMD67(double P,double T,double & RAMD,int & Range);
//已知压力(MPa)和温度(℃)，求普朗特数
IMPORT_TYPE void _stdcall PT2PRN67(double P,double T,double & PRN,int & Range);
//已知压力(MPa)和温度(℃)，求介电常数
IMPORT_TYPE void _stdcall PT2EPS67(double P,double T,double & EPS,int & Range);
//已知压力(MPa)和温度(℃)，求折射率
IMPORT_TYPE void _stdcall PT2N67(double P,double T,double LAMD,double & N,int & Range);

//已知压力(MPa)和比焓(kJ/kg)，求温度(℃)
IMPORT_TYPE void _stdcall PH2T67(double P,double H,double & T,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PH2S67(double P,double H,double & S,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PH2V67(double P,double H,double & V,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求干度(100%)
IMPORT_TYPE void _stdcall PH2X67(double P,double H,double & X,int & Range);
//已知压力(MPa)和比焓(kJ/kg)，求温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PH67(double P,double & T,double H,double & S,double & V,double & X,int & Range);

//已知压力(MPa)和比熵(kJ/(kg.℃))，求温度(℃)
IMPORT_TYPE void _stdcall PS2T67(double P,double S,double & T,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PS2H67(double P,double S,double & H,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PS2V67(double P,double S,double & V,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall PS2X67(double P,double S,double & X,int & Range);
//已知压力(MPa)和比熵(kJ/(kg.℃))，求温度(℃)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PS67(double P,double & T,double & H,double S,double & V,double & X,int & Range);

//已知压力(MPa)和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall PV2T67(double P,double V,double & T,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PV2H67(double P,double V,double & H,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PV2S67(double P,double V,double & S,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall PV2X67(double P,double V,double & X,int & Range);
//已知压力(MPa)和比容(m^3/kg)，求温度(℃)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall PV67(double P,double & T,double & H,double & S,double V,double & X,int & Range);

//已知压力(MPa)和干度(100%)，求温度(℃)
IMPORT_TYPE void _stdcall PX2T67(double P,double X,double & T,int & Range);
//已知压力(MPa)和干度(100%)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall PX2H67(double P,double X,double & H,int & Range);
//已知压力(MPa)和干度(100%)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall PX2S67(double P,double X,double & S,int & Range);
//已知压力(MPa)和干度(100%)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall PX2V67(double P,double X,double & V,int & Range);
//已知压力(MPa)和干度(100%)，求温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall PX67(double P,double & T,double & H,double & S,double & V,double X,int & Range);

//已知温度(℃)，求饱和压力(MPa)？
IMPORT_TYPE void _stdcall T2P67(double T,double & P,int & Range);
//已知温度(℃)，求饱和水比焓(kJ/kg)
IMPORT_TYPE void _stdcall T2HL67(double T,double & H,int & Range);
//已知温度(℃)，求饱和汽比焓(kJ/kg)
IMPORT_TYPE void _stdcall T2HG67(double T,double & H,int & Range);
//已知温度(℃)，求饱和水比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2SL67(double T,double & S,int & Range);
//已知温度(℃)，求饱和汽比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2SG67(double T,double & S,int & Range);
//已知温度(℃)，求饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall T2VL67(double T,double & V,int & Range);
//已知温度(℃)，求饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall T2VG67(double T,double & V,int & Range);
//已知温度(℃)，求饱和水比焓(kJ/kg)、饱和水比熵(kJ/(kg.℃))、饱和水比容(m^3/kg)
IMPORT_TYPE void _stdcall T2L67(double & P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知温度(℃)，求饱和汽比焓(kJ/kg)、饱和汽比熵(kJ/(kg.℃))、饱和汽比容(m^3/kg)
IMPORT_TYPE void _stdcall T2G67(double & P,double T,double & H,double & S,double & V,double & X,int & Range);
//已知温度(℃)，求饱和水定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CPL67(double T,double & CP,int & Range);
//已知温度(℃)，求饱和汽定压比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CPG67(double T,double & CP,int & Range);
//已知温度(℃)，求饱和水定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CVL67(double T,double & CV,int & Range);
//已知温度(℃)，求饱和汽定容比热(kJ/(kg.℃))
IMPORT_TYPE void _stdcall T2CVG67(double T,double & CV,int & Range);
//已知温度(℃)，求饱和水内能(kJ/kg)
IMPORT_TYPE void _stdcall T2EL67(double T,double & E,int & Range);
//已知温度(℃)，求饱和汽内能(kJ/kg)
IMPORT_TYPE void _stdcall T2EG67(double T,double & E,int & Range);
//已知温度(℃)，求饱和水音速(m/s)
IMPORT_TYPE void _stdcall T2SSPL67(double T,double & SSP,int & Range);
//已知温度(℃)，求饱和汽音速(m/s)
IMPORT_TYPE void _stdcall T2SSPG67(double T,double & SSP,int & Range);
//已知温度(℃)，求饱和水定熵指数
IMPORT_TYPE void _stdcall T2KSL67(double T,double & KS,int & Range);
//已知温度(℃)，求饱和汽定熵指数
IMPORT_TYPE void _stdcall T2KSG67(double T,double & KS,int & Range);
//已知温度(℃)，求饱和水动力粘度(Pa.s)
IMPORT_TYPE void _stdcall T2ETAL67(double T,double & ETA,int & Range);
//已知温度(℃)，求饱和汽动力粘度(Pa.s)
IMPORT_TYPE void _stdcall T2ETAG67(double T,double & ETA,int & Range);
//已知温度(℃)，求饱和水运动粘度(m^2/s)
IMPORT_TYPE void _stdcall T2UL67(double T,double & U,int & Range);
//已知温度(℃)，求饱和汽运动粘度(m^2/s)
IMPORT_TYPE void _stdcall T2UG67(double T,double & U,int & Range);
//已知温度(℃)，求饱和水导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall T2RAMDL67(double T,double & RAMD,int & Range);
//已知温度(℃)，求饱和汽导热系数(W/(m.℃))
IMPORT_TYPE void _stdcall T2RAMDG67(double T,double & RAMD,int & Range);
//已知温度(℃)，求饱和水普朗特数
IMPORT_TYPE void _stdcall T2PRNL67(double T,double & PRN,int & Range);
//已知温度(℃)，求饱和汽普朗特数
IMPORT_TYPE void _stdcall T2PRNG67(double T,double & PRN,int & Range);
//已知温度(℃)，求饱和水介电常数
IMPORT_TYPE void _stdcall T2EPSL67(double T,double & EPS,int & Range);
//已知温度(℃)，求饱和汽介电常数
IMPORT_TYPE void _stdcall T2EPSG67(double T,double & EPS,int & Range);
//已知温度(℃)，求饱和水折射率
IMPORT_TYPE void _stdcall T2NL67(double T,double LAMD,double & N,int & Range);
//已知温度(℃)，求饱和汽折射率
IMPORT_TYPE void _stdcall T2NG67(double T,double LAMD,double & N,int & Range);
//已知温度(℃)，求饱和水表面张力(N/m)
IMPORT_TYPE void _stdcall T2SURFT67(double T,double & SURFT,int & Range);

//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall TH2PLP67(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall TH2SLP67(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TH2VLP67(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall TH2PHP67(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall TH2SHP67(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TH2VHP67(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(低压的一个值)
IMPORT_TYPE void _stdcall THLP67(double & P,double T,double H,double & S,double & V,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(高压的一个值)
IMPORT_TYPE void _stdcall THHP67(double & P,double T,double H,double & S,double & V,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2P67(double T,double H,double & P,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比熵(kJ/(kg.℃))(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2S67(double T,double H,double & S,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求比容(m^3/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH2V67(double T,double H,double & V,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求干度(100%)
IMPORT_TYPE void _stdcall TH2X67(double T,double H,double & X,int & Range);
//已知温度(℃)和比焓(kJ/kg)，求压力(MPa)、比熵(kJ/(kg.℃))、比容(m^3/kg)、干度(100%)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TH67(double & P,double T,double H,double & S,double & V,double & X,int & Range);

//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall TS2PLP67(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TS2HLP67(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall TS2VLP67(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall TS2PHP67(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TS2HHP67(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall TS2VHP67(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2P67(double T,double S,double & P,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比焓(kJ/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2H67(double T,double S,double & H,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求比容(m^3/kg)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS2V67(double T,double S,double & V,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall TS2X67(double T,double S,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(低压的一个值)
IMPORT_TYPE void _stdcall TSLP67(double & P,double T,double & H,double S,double & V,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(高压的一个值)
IMPORT_TYPE void _stdcall TSHP67(double & P,double T,double & H,double S,double & V,double & X,int & Range);
//已知温度(℃)和比熵(kJ/(kg.℃))，求压力(MPa)、比焓(kJ/kg)、比容(m^3/kg)、干度(100%)(缺省为低压的一个值)
IMPORT_TYPE void _stdcall TS67(double & P,double T,double & H,double S,double & V,double & X,int & Range);

//已知温度(℃)和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall TV2P67(double T,double V,double & P,int & Range);
//已知温度(℃)和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall TV2H67(double T,double V,double & H,int & Range);
//已知温度(℃)和比容(m^3/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall TV2S67(double T,double V,double & S,int & Range);
//已知温度(℃)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall TV2X67(double T,double V,double & X,int & Range);
//已知温度(℃)和比容(m^3/kg)，求压力(MPa)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、干度(100%)
IMPORT_TYPE void _stdcall TV67(double & P,double T,double & H,double & S,double V,double & X,int & Range);

//已知温度(℃)和干度(100%)，求压力(MPa)
IMPORT_TYPE void _stdcall TX2P67(double T,double X,double & P,int & Range);
//已知温度(℃)和干度(100%)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall TX2H67(double T,double X,double & H,int & Range);
//已知温度(℃)和干度(100%)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall TX2S67(double T,double X,double & S,int & Range);
//已知温度(℃)和干度(100%)，求比容(m^3/kg)
IMPORT_TYPE void _stdcall TX2V67(double T,double X,double & V,int & Range);
//已知温度(℃)和干度(100%)，求压力(MPa)、比焓(kJ/kg)、比熵(kJ/(kg.℃))、比容(m^3/kg)
IMPORT_TYPE void _stdcall TX67(double & P,double T,double & H,double & S,double & V,double X,int & Range);

//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求压力(MPa)
IMPORT_TYPE void _stdcall HS2P67(double H,double S,double & P,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求温度(℃)
IMPORT_TYPE void _stdcall HS2T67(double H,double S,double & T,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求比容(m^3/kg)
IMPORT_TYPE void _stdcall HS2V67(double H,double S,double & V,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求干度(100%)
IMPORT_TYPE void _stdcall HS2X67(double H,double S,double & X,int & Range);
//已知比焓(kJ/kg)和比熵(kJ/(kg.℃))，求压力(MPa)、温度(℃)、比容(m^3/kg)、干度(100%)
IMPORT_TYPE void _stdcall HS67(double & P,double & T,double H,double S,double & V,double & X,int & Range);

//已知比焓(kJ/kg)和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall HV2P67(double H,double V,double & P,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall HV2T67(double H,double V,double & T,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求比熵(kJ/(kg.℃))
IMPORT_TYPE void _stdcall HV2S67(double H,double V,double & S,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall HV2X67(double H,double V,double & X,int & Range);
//已知比焓(kJ/kg)和比容(m^3/kg)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、干度(100%)
IMPORT_TYPE void _stdcall HV67(double & P,double & T,double H,double & S,double V,double & X,int & Range);

//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall HX2PLP67(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall HX2TLP67(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall HX2SLP67(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall HX2VLP67(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall HX2PHP67(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall HX2THP67(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall HX2SHP67(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall HX2VHP67(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2P67(double H,double X,double & P,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2T67(double H,double X,double & T,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2S67(double H,double X,double & S,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX2V67(double H,double X,double & V,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall HXLP67(double & P,double & T,double H,double & S,double & V,double X,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall HXHP67(double & P,double & T,double H,double & S,double & V,double X,int & Range);
//已知比焓(kJ/kg)和干度(100%)，求压力(MPa)、温度(℃)、比熵(kJ/(kg.℃))、比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall HX67(double & P,double & T,double H,double & S,double & V,double X,int & Range);

//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求压力(MPa)
IMPORT_TYPE void _stdcall SV2P67(double S,double V,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求温度(℃)
IMPORT_TYPE void _stdcall SV2T67(double S,double V,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求比焓(kJ/kg)
IMPORT_TYPE void _stdcall SV2H67(double S,double V,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求干度(100%)
IMPORT_TYPE void _stdcall SV2X67(double S,double V,double & X,int & Range);
//已知比熵(kJ/(kg.℃))和比容(m^3/kg)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、干度(100%)
IMPORT_TYPE void _stdcall SV67(double & P,double & T,double & H,double S,double V,double & X,int & Range);


//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall SX2PLP67(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(中压的一个值)
IMPORT_TYPE void _stdcall SX2PMP67(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(高压的一个值)
IMPORT_TYPE void _stdcall SX2PHP67(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2P67(double S,double X,double & P,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall SX2TLP67(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(中压的一个值)
IMPORT_TYPE void _stdcall SX2TMP67(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall SX2THP67(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2T67(double S,double X,double & T,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SX2HLP67(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SX2HMP67(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SX2HHP67(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比焓(kJ/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2H67(double S,double X,double & H,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SX2VLP67(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SX2VMP67(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SX2VHP67(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX2V67(double S,double X,double & V,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(低压的一个值)
IMPORT_TYPE void _stdcall SXLP67(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(中压的一个值)
IMPORT_TYPE void _stdcall SXMP67(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(高压的一个值)
IMPORT_TYPE void _stdcall SXHP67(double & P,double & T,double & H,double S,double & V,double X,int & Range);
//已知比熵(kJ/(kg.℃))和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比容(m^3/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall SX67(double & P,double & T,double & H,double S,double & V,double X,int & Range);

//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(低压的一个值)
IMPORT_TYPE void _stdcall VX2PLP67(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(低高压的一个值)
IMPORT_TYPE void _stdcall VX2PHP67(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2P67(double V,double X,double & P,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(低压的一个值)
IMPORT_TYPE void _stdcall VX2TLP67(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(高压的一个值)
IMPORT_TYPE void _stdcall VX2THP67(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求温度(℃)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2T67(double V,double X,double & T,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(低压的一个值)
IMPORT_TYPE void _stdcall VX2HLP67(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(高压的一个值)
IMPORT_TYPE void _stdcall VX2HHP67(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比焓(kJ/kg)(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2H67(double V,double X,double & H,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall VX2SLP67(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall VX2SHP67(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX2S67(double V,double X,double & S,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(低压的一个值)
IMPORT_TYPE void _stdcall VXLP67(double & P,double & T,double & H,double & S,double V,double X,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(高压的一个值)
IMPORT_TYPE void _stdcall VXHP67(double & P,double & T,double & H,double & S,double V,double X,int & Range);
//已知比容(m^3/kg)和干度(100%)，求压力(MPa)、温度(℃)、比焓(kJ/kg)、比熵(kJ/(kg.℃))(缺省是低压的一个值)
IMPORT_TYPE void _stdcall VX67(double & P,double & T,double & H,double & S,double V,double X,int & Range);

