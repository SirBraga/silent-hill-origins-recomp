#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C55C0
// Address: 0x2c55c0 - 0x2c5c88
void sub_002C55C0_0x2c55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C55C0_0x2c55c0");
#endif

    switch (ctx->pc) {
        case 0x2c55c0u: goto label_2c55c0;
        case 0x2c55c4u: goto label_2c55c4;
        case 0x2c55c8u: goto label_2c55c8;
        case 0x2c55ccu: goto label_2c55cc;
        case 0x2c55d0u: goto label_2c55d0;
        case 0x2c55d4u: goto label_2c55d4;
        case 0x2c55d8u: goto label_2c55d8;
        case 0x2c55dcu: goto label_2c55dc;
        case 0x2c55e0u: goto label_2c55e0;
        case 0x2c55e4u: goto label_2c55e4;
        case 0x2c55e8u: goto label_2c55e8;
        case 0x2c55ecu: goto label_2c55ec;
        case 0x2c55f0u: goto label_2c55f0;
        case 0x2c55f4u: goto label_2c55f4;
        case 0x2c55f8u: goto label_2c55f8;
        case 0x2c55fcu: goto label_2c55fc;
        case 0x2c5600u: goto label_2c5600;
        case 0x2c5604u: goto label_2c5604;
        case 0x2c5608u: goto label_2c5608;
        case 0x2c560cu: goto label_2c560c;
        case 0x2c5610u: goto label_2c5610;
        case 0x2c5614u: goto label_2c5614;
        case 0x2c5618u: goto label_2c5618;
        case 0x2c561cu: goto label_2c561c;
        case 0x2c5620u: goto label_2c5620;
        case 0x2c5624u: goto label_2c5624;
        case 0x2c5628u: goto label_2c5628;
        case 0x2c562cu: goto label_2c562c;
        case 0x2c5630u: goto label_2c5630;
        case 0x2c5634u: goto label_2c5634;
        case 0x2c5638u: goto label_2c5638;
        case 0x2c563cu: goto label_2c563c;
        case 0x2c5640u: goto label_2c5640;
        case 0x2c5644u: goto label_2c5644;
        case 0x2c5648u: goto label_2c5648;
        case 0x2c564cu: goto label_2c564c;
        case 0x2c5650u: goto label_2c5650;
        case 0x2c5654u: goto label_2c5654;
        case 0x2c5658u: goto label_2c5658;
        case 0x2c565cu: goto label_2c565c;
        case 0x2c5660u: goto label_2c5660;
        case 0x2c5664u: goto label_2c5664;
        case 0x2c5668u: goto label_2c5668;
        case 0x2c566cu: goto label_2c566c;
        case 0x2c5670u: goto label_2c5670;
        case 0x2c5674u: goto label_2c5674;
        case 0x2c5678u: goto label_2c5678;
        case 0x2c567cu: goto label_2c567c;
        case 0x2c5680u: goto label_2c5680;
        case 0x2c5684u: goto label_2c5684;
        case 0x2c5688u: goto label_2c5688;
        case 0x2c568cu: goto label_2c568c;
        case 0x2c5690u: goto label_2c5690;
        case 0x2c5694u: goto label_2c5694;
        case 0x2c5698u: goto label_2c5698;
        case 0x2c569cu: goto label_2c569c;
        case 0x2c56a0u: goto label_2c56a0;
        case 0x2c56a4u: goto label_2c56a4;
        case 0x2c56a8u: goto label_2c56a8;
        case 0x2c56acu: goto label_2c56ac;
        case 0x2c56b0u: goto label_2c56b0;
        case 0x2c56b4u: goto label_2c56b4;
        case 0x2c56b8u: goto label_2c56b8;
        case 0x2c56bcu: goto label_2c56bc;
        case 0x2c56c0u: goto label_2c56c0;
        case 0x2c56c4u: goto label_2c56c4;
        case 0x2c56c8u: goto label_2c56c8;
        case 0x2c56ccu: goto label_2c56cc;
        case 0x2c56d0u: goto label_2c56d0;
        case 0x2c56d4u: goto label_2c56d4;
        case 0x2c56d8u: goto label_2c56d8;
        case 0x2c56dcu: goto label_2c56dc;
        case 0x2c56e0u: goto label_2c56e0;
        case 0x2c56e4u: goto label_2c56e4;
        case 0x2c56e8u: goto label_2c56e8;
        case 0x2c56ecu: goto label_2c56ec;
        case 0x2c56f0u: goto label_2c56f0;
        case 0x2c56f4u: goto label_2c56f4;
        case 0x2c56f8u: goto label_2c56f8;
        case 0x2c56fcu: goto label_2c56fc;
        case 0x2c5700u: goto label_2c5700;
        case 0x2c5704u: goto label_2c5704;
        case 0x2c5708u: goto label_2c5708;
        case 0x2c570cu: goto label_2c570c;
        case 0x2c5710u: goto label_2c5710;
        case 0x2c5714u: goto label_2c5714;
        case 0x2c5718u: goto label_2c5718;
        case 0x2c571cu: goto label_2c571c;
        case 0x2c5720u: goto label_2c5720;
        case 0x2c5724u: goto label_2c5724;
        case 0x2c5728u: goto label_2c5728;
        case 0x2c572cu: goto label_2c572c;
        case 0x2c5730u: goto label_2c5730;
        case 0x2c5734u: goto label_2c5734;
        case 0x2c5738u: goto label_2c5738;
        case 0x2c573cu: goto label_2c573c;
        case 0x2c5740u: goto label_2c5740;
        case 0x2c5744u: goto label_2c5744;
        case 0x2c5748u: goto label_2c5748;
        case 0x2c574cu: goto label_2c574c;
        case 0x2c5750u: goto label_2c5750;
        case 0x2c5754u: goto label_2c5754;
        case 0x2c5758u: goto label_2c5758;
        case 0x2c575cu: goto label_2c575c;
        case 0x2c5760u: goto label_2c5760;
        case 0x2c5764u: goto label_2c5764;
        case 0x2c5768u: goto label_2c5768;
        case 0x2c576cu: goto label_2c576c;
        case 0x2c5770u: goto label_2c5770;
        case 0x2c5774u: goto label_2c5774;
        case 0x2c5778u: goto label_2c5778;
        case 0x2c577cu: goto label_2c577c;
        case 0x2c5780u: goto label_2c5780;
        case 0x2c5784u: goto label_2c5784;
        case 0x2c5788u: goto label_2c5788;
        case 0x2c578cu: goto label_2c578c;
        case 0x2c5790u: goto label_2c5790;
        case 0x2c5794u: goto label_2c5794;
        case 0x2c5798u: goto label_2c5798;
        case 0x2c579cu: goto label_2c579c;
        case 0x2c57a0u: goto label_2c57a0;
        case 0x2c57a4u: goto label_2c57a4;
        case 0x2c57a8u: goto label_2c57a8;
        case 0x2c57acu: goto label_2c57ac;
        case 0x2c57b0u: goto label_2c57b0;
        case 0x2c57b4u: goto label_2c57b4;
        case 0x2c57b8u: goto label_2c57b8;
        case 0x2c57bcu: goto label_2c57bc;
        case 0x2c57c0u: goto label_2c57c0;
        case 0x2c57c4u: goto label_2c57c4;
        case 0x2c57c8u: goto label_2c57c8;
        case 0x2c57ccu: goto label_2c57cc;
        case 0x2c57d0u: goto label_2c57d0;
        case 0x2c57d4u: goto label_2c57d4;
        case 0x2c57d8u: goto label_2c57d8;
        case 0x2c57dcu: goto label_2c57dc;
        case 0x2c57e0u: goto label_2c57e0;
        case 0x2c57e4u: goto label_2c57e4;
        case 0x2c57e8u: goto label_2c57e8;
        case 0x2c57ecu: goto label_2c57ec;
        case 0x2c57f0u: goto label_2c57f0;
        case 0x2c57f4u: goto label_2c57f4;
        case 0x2c57f8u: goto label_2c57f8;
        case 0x2c57fcu: goto label_2c57fc;
        case 0x2c5800u: goto label_2c5800;
        case 0x2c5804u: goto label_2c5804;
        case 0x2c5808u: goto label_2c5808;
        case 0x2c580cu: goto label_2c580c;
        case 0x2c5810u: goto label_2c5810;
        case 0x2c5814u: goto label_2c5814;
        case 0x2c5818u: goto label_2c5818;
        case 0x2c581cu: goto label_2c581c;
        case 0x2c5820u: goto label_2c5820;
        case 0x2c5824u: goto label_2c5824;
        case 0x2c5828u: goto label_2c5828;
        case 0x2c582cu: goto label_2c582c;
        case 0x2c5830u: goto label_2c5830;
        case 0x2c5834u: goto label_2c5834;
        case 0x2c5838u: goto label_2c5838;
        case 0x2c583cu: goto label_2c583c;
        case 0x2c5840u: goto label_2c5840;
        case 0x2c5844u: goto label_2c5844;
        case 0x2c5848u: goto label_2c5848;
        case 0x2c584cu: goto label_2c584c;
        case 0x2c5850u: goto label_2c5850;
        case 0x2c5854u: goto label_2c5854;
        case 0x2c5858u: goto label_2c5858;
        case 0x2c585cu: goto label_2c585c;
        case 0x2c5860u: goto label_2c5860;
        case 0x2c5864u: goto label_2c5864;
        case 0x2c5868u: goto label_2c5868;
        case 0x2c586cu: goto label_2c586c;
        case 0x2c5870u: goto label_2c5870;
        case 0x2c5874u: goto label_2c5874;
        case 0x2c5878u: goto label_2c5878;
        case 0x2c587cu: goto label_2c587c;
        case 0x2c5880u: goto label_2c5880;
        case 0x2c5884u: goto label_2c5884;
        case 0x2c5888u: goto label_2c5888;
        case 0x2c588cu: goto label_2c588c;
        case 0x2c5890u: goto label_2c5890;
        case 0x2c5894u: goto label_2c5894;
        case 0x2c5898u: goto label_2c5898;
        case 0x2c589cu: goto label_2c589c;
        case 0x2c58a0u: goto label_2c58a0;
        case 0x2c58a4u: goto label_2c58a4;
        case 0x2c58a8u: goto label_2c58a8;
        case 0x2c58acu: goto label_2c58ac;
        case 0x2c58b0u: goto label_2c58b0;
        case 0x2c58b4u: goto label_2c58b4;
        case 0x2c58b8u: goto label_2c58b8;
        case 0x2c58bcu: goto label_2c58bc;
        case 0x2c58c0u: goto label_2c58c0;
        case 0x2c58c4u: goto label_2c58c4;
        case 0x2c58c8u: goto label_2c58c8;
        case 0x2c58ccu: goto label_2c58cc;
        case 0x2c58d0u: goto label_2c58d0;
        case 0x2c58d4u: goto label_2c58d4;
        case 0x2c58d8u: goto label_2c58d8;
        case 0x2c58dcu: goto label_2c58dc;
        case 0x2c58e0u: goto label_2c58e0;
        case 0x2c58e4u: goto label_2c58e4;
        case 0x2c58e8u: goto label_2c58e8;
        case 0x2c58ecu: goto label_2c58ec;
        case 0x2c58f0u: goto label_2c58f0;
        case 0x2c58f4u: goto label_2c58f4;
        case 0x2c58f8u: goto label_2c58f8;
        case 0x2c58fcu: goto label_2c58fc;
        case 0x2c5900u: goto label_2c5900;
        case 0x2c5904u: goto label_2c5904;
        case 0x2c5908u: goto label_2c5908;
        case 0x2c590cu: goto label_2c590c;
        case 0x2c5910u: goto label_2c5910;
        case 0x2c5914u: goto label_2c5914;
        case 0x2c5918u: goto label_2c5918;
        case 0x2c591cu: goto label_2c591c;
        case 0x2c5920u: goto label_2c5920;
        case 0x2c5924u: goto label_2c5924;
        case 0x2c5928u: goto label_2c5928;
        case 0x2c592cu: goto label_2c592c;
        case 0x2c5930u: goto label_2c5930;
        case 0x2c5934u: goto label_2c5934;
        case 0x2c5938u: goto label_2c5938;
        case 0x2c593cu: goto label_2c593c;
        case 0x2c5940u: goto label_2c5940;
        case 0x2c5944u: goto label_2c5944;
        case 0x2c5948u: goto label_2c5948;
        case 0x2c594cu: goto label_2c594c;
        case 0x2c5950u: goto label_2c5950;
        case 0x2c5954u: goto label_2c5954;
        case 0x2c5958u: goto label_2c5958;
        case 0x2c595cu: goto label_2c595c;
        case 0x2c5960u: goto label_2c5960;
        case 0x2c5964u: goto label_2c5964;
        case 0x2c5968u: goto label_2c5968;
        case 0x2c596cu: goto label_2c596c;
        case 0x2c5970u: goto label_2c5970;
        case 0x2c5974u: goto label_2c5974;
        case 0x2c5978u: goto label_2c5978;
        case 0x2c597cu: goto label_2c597c;
        case 0x2c5980u: goto label_2c5980;
        case 0x2c5984u: goto label_2c5984;
        case 0x2c5988u: goto label_2c5988;
        case 0x2c598cu: goto label_2c598c;
        case 0x2c5990u: goto label_2c5990;
        case 0x2c5994u: goto label_2c5994;
        case 0x2c5998u: goto label_2c5998;
        case 0x2c599cu: goto label_2c599c;
        case 0x2c59a0u: goto label_2c59a0;
        case 0x2c59a4u: goto label_2c59a4;
        case 0x2c59a8u: goto label_2c59a8;
        case 0x2c59acu: goto label_2c59ac;
        case 0x2c59b0u: goto label_2c59b0;
        case 0x2c59b4u: goto label_2c59b4;
        case 0x2c59b8u: goto label_2c59b8;
        case 0x2c59bcu: goto label_2c59bc;
        case 0x2c59c0u: goto label_2c59c0;
        case 0x2c59c4u: goto label_2c59c4;
        case 0x2c59c8u: goto label_2c59c8;
        case 0x2c59ccu: goto label_2c59cc;
        case 0x2c59d0u: goto label_2c59d0;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c59d8u: goto label_2c59d8;
        case 0x2c59dcu: goto label_2c59dc;
        case 0x2c59e0u: goto label_2c59e0;
        case 0x2c59e4u: goto label_2c59e4;
        case 0x2c59e8u: goto label_2c59e8;
        case 0x2c59ecu: goto label_2c59ec;
        case 0x2c59f0u: goto label_2c59f0;
        case 0x2c59f4u: goto label_2c59f4;
        case 0x2c59f8u: goto label_2c59f8;
        case 0x2c59fcu: goto label_2c59fc;
        case 0x2c5a00u: goto label_2c5a00;
        case 0x2c5a04u: goto label_2c5a04;
        case 0x2c5a08u: goto label_2c5a08;
        case 0x2c5a0cu: goto label_2c5a0c;
        case 0x2c5a10u: goto label_2c5a10;
        case 0x2c5a14u: goto label_2c5a14;
        case 0x2c5a18u: goto label_2c5a18;
        case 0x2c5a1cu: goto label_2c5a1c;
        case 0x2c5a20u: goto label_2c5a20;
        case 0x2c5a24u: goto label_2c5a24;
        case 0x2c5a28u: goto label_2c5a28;
        case 0x2c5a2cu: goto label_2c5a2c;
        case 0x2c5a30u: goto label_2c5a30;
        case 0x2c5a34u: goto label_2c5a34;
        case 0x2c5a38u: goto label_2c5a38;
        case 0x2c5a3cu: goto label_2c5a3c;
        case 0x2c5a40u: goto label_2c5a40;
        case 0x2c5a44u: goto label_2c5a44;
        case 0x2c5a48u: goto label_2c5a48;
        case 0x2c5a4cu: goto label_2c5a4c;
        case 0x2c5a50u: goto label_2c5a50;
        case 0x2c5a54u: goto label_2c5a54;
        case 0x2c5a58u: goto label_2c5a58;
        case 0x2c5a5cu: goto label_2c5a5c;
        case 0x2c5a60u: goto label_2c5a60;
        case 0x2c5a64u: goto label_2c5a64;
        case 0x2c5a68u: goto label_2c5a68;
        case 0x2c5a6cu: goto label_2c5a6c;
        case 0x2c5a70u: goto label_2c5a70;
        case 0x2c5a74u: goto label_2c5a74;
        case 0x2c5a78u: goto label_2c5a78;
        case 0x2c5a7cu: goto label_2c5a7c;
        case 0x2c5a80u: goto label_2c5a80;
        case 0x2c5a84u: goto label_2c5a84;
        case 0x2c5a88u: goto label_2c5a88;
        case 0x2c5a8cu: goto label_2c5a8c;
        case 0x2c5a90u: goto label_2c5a90;
        case 0x2c5a94u: goto label_2c5a94;
        case 0x2c5a98u: goto label_2c5a98;
        case 0x2c5a9cu: goto label_2c5a9c;
        case 0x2c5aa0u: goto label_2c5aa0;
        case 0x2c5aa4u: goto label_2c5aa4;
        case 0x2c5aa8u: goto label_2c5aa8;
        case 0x2c5aacu: goto label_2c5aac;
        case 0x2c5ab0u: goto label_2c5ab0;
        case 0x2c5ab4u: goto label_2c5ab4;
        case 0x2c5ab8u: goto label_2c5ab8;
        case 0x2c5abcu: goto label_2c5abc;
        case 0x2c5ac0u: goto label_2c5ac0;
        case 0x2c5ac4u: goto label_2c5ac4;
        case 0x2c5ac8u: goto label_2c5ac8;
        case 0x2c5accu: goto label_2c5acc;
        case 0x2c5ad0u: goto label_2c5ad0;
        case 0x2c5ad4u: goto label_2c5ad4;
        case 0x2c5ad8u: goto label_2c5ad8;
        case 0x2c5adcu: goto label_2c5adc;
        case 0x2c5ae0u: goto label_2c5ae0;
        case 0x2c5ae4u: goto label_2c5ae4;
        case 0x2c5ae8u: goto label_2c5ae8;
        case 0x2c5aecu: goto label_2c5aec;
        case 0x2c5af0u: goto label_2c5af0;
        case 0x2c5af4u: goto label_2c5af4;
        case 0x2c5af8u: goto label_2c5af8;
        case 0x2c5afcu: goto label_2c5afc;
        case 0x2c5b00u: goto label_2c5b00;
        case 0x2c5b04u: goto label_2c5b04;
        case 0x2c5b08u: goto label_2c5b08;
        case 0x2c5b0cu: goto label_2c5b0c;
        case 0x2c5b10u: goto label_2c5b10;
        case 0x2c5b14u: goto label_2c5b14;
        case 0x2c5b18u: goto label_2c5b18;
        case 0x2c5b1cu: goto label_2c5b1c;
        case 0x2c5b20u: goto label_2c5b20;
        case 0x2c5b24u: goto label_2c5b24;
        case 0x2c5b28u: goto label_2c5b28;
        case 0x2c5b2cu: goto label_2c5b2c;
        case 0x2c5b30u: goto label_2c5b30;
        case 0x2c5b34u: goto label_2c5b34;
        case 0x2c5b38u: goto label_2c5b38;
        case 0x2c5b3cu: goto label_2c5b3c;
        case 0x2c5b40u: goto label_2c5b40;
        case 0x2c5b44u: goto label_2c5b44;
        case 0x2c5b48u: goto label_2c5b48;
        case 0x2c5b4cu: goto label_2c5b4c;
        case 0x2c5b50u: goto label_2c5b50;
        case 0x2c5b54u: goto label_2c5b54;
        case 0x2c5b58u: goto label_2c5b58;
        case 0x2c5b5cu: goto label_2c5b5c;
        case 0x2c5b60u: goto label_2c5b60;
        case 0x2c5b64u: goto label_2c5b64;
        case 0x2c5b68u: goto label_2c5b68;
        case 0x2c5b6cu: goto label_2c5b6c;
        case 0x2c5b70u: goto label_2c5b70;
        case 0x2c5b74u: goto label_2c5b74;
        case 0x2c5b78u: goto label_2c5b78;
        case 0x2c5b7cu: goto label_2c5b7c;
        case 0x2c5b80u: goto label_2c5b80;
        case 0x2c5b84u: goto label_2c5b84;
        case 0x2c5b88u: goto label_2c5b88;
        case 0x2c5b8cu: goto label_2c5b8c;
        case 0x2c5b90u: goto label_2c5b90;
        case 0x2c5b94u: goto label_2c5b94;
        case 0x2c5b98u: goto label_2c5b98;
        case 0x2c5b9cu: goto label_2c5b9c;
        case 0x2c5ba0u: goto label_2c5ba0;
        case 0x2c5ba4u: goto label_2c5ba4;
        case 0x2c5ba8u: goto label_2c5ba8;
        case 0x2c5bacu: goto label_2c5bac;
        case 0x2c5bb0u: goto label_2c5bb0;
        case 0x2c5bb4u: goto label_2c5bb4;
        case 0x2c5bb8u: goto label_2c5bb8;
        case 0x2c5bbcu: goto label_2c5bbc;
        case 0x2c5bc0u: goto label_2c5bc0;
        case 0x2c5bc4u: goto label_2c5bc4;
        case 0x2c5bc8u: goto label_2c5bc8;
        case 0x2c5bccu: goto label_2c5bcc;
        case 0x2c5bd0u: goto label_2c5bd0;
        case 0x2c5bd4u: goto label_2c5bd4;
        case 0x2c5bd8u: goto label_2c5bd8;
        case 0x2c5bdcu: goto label_2c5bdc;
        case 0x2c5be0u: goto label_2c5be0;
        case 0x2c5be4u: goto label_2c5be4;
        case 0x2c5be8u: goto label_2c5be8;
        case 0x2c5becu: goto label_2c5bec;
        case 0x2c5bf0u: goto label_2c5bf0;
        case 0x2c5bf4u: goto label_2c5bf4;
        case 0x2c5bf8u: goto label_2c5bf8;
        case 0x2c5bfcu: goto label_2c5bfc;
        case 0x2c5c00u: goto label_2c5c00;
        case 0x2c5c04u: goto label_2c5c04;
        case 0x2c5c08u: goto label_2c5c08;
        case 0x2c5c0cu: goto label_2c5c0c;
        case 0x2c5c10u: goto label_2c5c10;
        case 0x2c5c14u: goto label_2c5c14;
        case 0x2c5c18u: goto label_2c5c18;
        case 0x2c5c1cu: goto label_2c5c1c;
        case 0x2c5c20u: goto label_2c5c20;
        case 0x2c5c24u: goto label_2c5c24;
        case 0x2c5c28u: goto label_2c5c28;
        case 0x2c5c2cu: goto label_2c5c2c;
        case 0x2c5c30u: goto label_2c5c30;
        case 0x2c5c34u: goto label_2c5c34;
        case 0x2c5c38u: goto label_2c5c38;
        case 0x2c5c3cu: goto label_2c5c3c;
        case 0x2c5c40u: goto label_2c5c40;
        case 0x2c5c44u: goto label_2c5c44;
        case 0x2c5c48u: goto label_2c5c48;
        case 0x2c5c4cu: goto label_2c5c4c;
        case 0x2c5c50u: goto label_2c5c50;
        case 0x2c5c54u: goto label_2c5c54;
        case 0x2c5c58u: goto label_2c5c58;
        case 0x2c5c5cu: goto label_2c5c5c;
        case 0x2c5c60u: goto label_2c5c60;
        case 0x2c5c64u: goto label_2c5c64;
        case 0x2c5c68u: goto label_2c5c68;
        case 0x2c5c6cu: goto label_2c5c6c;
        case 0x2c5c70u: goto label_2c5c70;
        case 0x2c5c74u: goto label_2c5c74;
        case 0x2c5c78u: goto label_2c5c78;
        case 0x2c5c7cu: goto label_2c5c7c;
        case 0x2c5c80u: goto label_2c5c80;
        case 0x2c5c84u: goto label_2c5c84;
        default: break;
    }

    ctx->pc = 0x2c55c0u;

label_2c55c0:
    // 0x2c55c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2c55c4:
    // 0x2c55c4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2c55c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_2c55c8:
    // 0x2c55c8: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2c55c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_2c55cc:
    // 0x2c55cc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2c55ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_2c55d0:
    // 0x2c55d0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2c55d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c55d4:
    // 0x2c55d4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2c55d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_2c55d8:
    // 0x2c55d8: 0x3c11cccc  lui         $s1, 0xCCCC
    ctx->pc = 0x2c55d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52428 << 16));
label_2c55dc:
    // 0x2c55dc: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2c55dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_2c55e0:
    // 0x2c55e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c55e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c55e4:
    // 0x2c55e4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c55e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2c55e8:
    // 0x2c55e8: 0x3631cccd  ori         $s1, $s1, 0xCCCD
    ctx->pc = 0x2c55e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)52429);
label_2c55ec:
    // 0x2c55ec: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2c55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_2c55f0:
    // 0x2c55f0: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x2c55f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c55f4:
    // 0x2c55f4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2c55f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_2c55f8:
    // 0x2c55f8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2c55f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c55fc:
    // 0x2c55fc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2c55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_2c5600:
    // 0x2c5600: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x2c5600u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2c5604:
    // 0x2c5604: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2c5604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_2c5608:
    // 0x2c5608: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2c5608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2c560c:
    // 0x2c560c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2c560cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_2c5610:
    // 0x2c5610: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2c5610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c5614:
    // 0x2c5614: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2c5614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2c5618:
    // 0x2c5618: 0x2e31823  subu        $v1, $s7, $v1
    ctx->pc = 0x2c5618u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_2c561c:
    // 0x2c561c: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2c561cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2c5620:
    // 0x2c5620: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x2c5620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c5624:
    // 0x2c5624: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x2c5624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2c5628:
    // 0x2c5628: 0x24183  sra         $t0, $v0, 6
    ctx->pc = 0x2c5628u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 6));
label_2c562c:
    // 0x2c562c: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c562cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2c5630:
    // 0x2c5630: 0xafa90048  sw          $t1, 0x48($sp)
    ctx->pc = 0x2c5630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 9));
label_2c5634:
    // 0x2c5634: 0x104202b  sltu        $a0, $t0, $a0
    ctx->pc = 0x2c5634u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2c5638:
    // 0x2c5638: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x2c5638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
label_2c563c:
    // 0x2c563c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2c563cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2c5640:
    // 0x2c5640: 0xae48001c  sw          $t0, 0x1C($s2)
    ctx->pc = 0x2c5640u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 8));
label_2c5644:
    // 0x2c5644: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2c5648:
    if (ctx->pc == 0x2C5648u) {
        ctx->pc = 0x2C5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5644u;
        // 0x2c5648: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C564Cu;
        goto label_2c564c;
    }
    ctx->pc = 0x2C5644u;
    {
        const bool branch_taken_0x2c5644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5644u;
        // 0x2c5648: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5644) {
            ctx->pc = 0x2C565Cu;
            goto label_2c565c;
        }
    }
    ctx->pc = 0x2C564Cu;
label_2c564c:
    // 0x2c564c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2c564cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2c5650:
    // 0x2c5650: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c5650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c5654:
    // 0x2c5654: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c5658:
    if (ctx->pc == 0x2C5658u) {
        ctx->pc = 0x2C5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5654u;
        // 0x2c5658: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C565Cu;
        goto label_2c565c;
    }
    ctx->pc = 0x2C5654u;
    {
        const bool branch_taken_0x2c5654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5654u;
        // 0x2c5658: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5654) {
            ctx->pc = 0x2C566Cu;
            goto label_2c566c;
        }
    }
    ctx->pc = 0x2C565Cu;
label_2c565c:
    // 0x2c565c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c565cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5660:
    // 0x2c5660: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5664:
    // 0x2c5664: 0x1000017a  b           . + 4 + (0x17A << 2)
label_2c5668:
    if (ctx->pc == 0x2C5668u) {
        ctx->pc = 0x2C5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5664u;
        // 0x2c5668: 0xae430078  sw          $v1, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C566Cu;
        goto label_2c566c;
    }
    ctx->pc = 0x2C5664u;
    {
        const bool branch_taken_0x2c5664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5664u;
        // 0x2c5668: 0xae430078  sw          $v1, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5664) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C566Cu;
label_2c566c:
    // 0x2c566c: 0x8e14005c  lw          $s4, 0x5C($s0)
    ctx->pc = 0x2c566cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2c5670:
    // 0x2c5670: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2c5670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2c5674:
    // 0x2c5674: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x2c5674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2c5678:
    // 0x2c5678: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2c5678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2c567c:
    // 0x2c567c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2c5680:
    if (ctx->pc == 0x2C5680u) {
        ctx->pc = 0x2C5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C567Cu;
        // 0x2c5680: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5684u;
        goto label_2c5684;
    }
    ctx->pc = 0x2C567Cu;
    {
        const bool branch_taken_0x2c567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C567Cu;
        // 0x2c5680: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c567c) {
            ctx->pc = 0x2C56CCu;
            goto label_2c56cc;
        }
    }
    ctx->pc = 0x2C5684u;
label_2c5684:
    // 0x2c5684: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x2c5684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2c5688:
    // 0x2c5688: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
label_2c568c:
    if (ctx->pc == 0x2C568Cu) {
        ctx->pc = 0x2C568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5688u;
        // 0x2c568c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5690u;
        goto label_2c5690;
    }
    ctx->pc = 0x2C5688u;
    {
        const bool branch_taken_0x2c5688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5688u;
        // 0x2c568c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5688) {
            ctx->pc = 0x2C59F0u;
            goto label_2c59f0;
        }
    }
    ctx->pc = 0x2C5690u;
label_2c5690:
    // 0x2c5690: 0xaef60010  sw          $s6, 0x10($s7)
    ctx->pc = 0x2c5690u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 22));
label_2c5694:
    // 0x2c5694: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2c5694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2c5698:
    // 0x2c5698: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x2c5698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2c569c:
    // 0x2c569c: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x2c569cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2c56a0:
    // 0x2c56a0: 0xb2e40007  sdl         $a0, 0x7($s7)
    ctx->pc = 0x2c56a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c56a4:
    // 0x2c56a4: 0xb6e40000  sdr         $a0, 0x0($s7)
    ctx->pc = 0x2c56a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2c56a8:
    // 0x2c56a8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2c56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2c56ac:
    // 0x2c56ac: 0xaee3000c  sw          $v1, 0xC($s7)
    ctx->pc = 0x2c56acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
label_2c56b0:
    // 0x2c56b0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2c56b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c56b4:
    // 0x2c56b4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2c56b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2c56b8:
    // 0x2c56b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2c56bc:
    // 0x2c56bc: 0xaef00008  sw          $s0, 0x8($s7)
    ctx->pc = 0x2c56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 16));
label_2c56c0:
    // 0x2c56c0: 0xa6e40004  sh          $a0, 0x4($s7)
    ctx->pc = 0x2c56c0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 4), (uint16_t)GPR_U32(ctx, 4));
label_2c56c4:
    // 0x2c56c4: 0x10000162  b           . + 4 + (0x162 << 2)
label_2c56c8:
    if (ctx->pc == 0x2C56C8u) {
        ctx->pc = 0x2C56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56C4u;
        // 0x2c56c8: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56CCu;
        goto label_2c56cc;
    }
    ctx->pc = 0x2C56C4u;
    {
        const bool branch_taken_0x2c56c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56C4u;
        // 0x2c56c8: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56c4) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C56CCu;
label_2c56cc:
    // 0x2c56cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c56d0:
    // 0x2c56d0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x2c56d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2c56d4:
    // 0x2c56d4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2c56d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_2c56d8:
    // 0x2c56d8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2c56d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2c56dc:
    // 0x2c56dc: 0x14620097  bne         $v1, $v0, . + 4 + (0x97 << 2)
label_2c56e0:
    if (ctx->pc == 0x2C56E0u) {
        ctx->pc = 0x2C56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56DCu;
        // 0x2c56e0: 0xc6540070  lwc1        $f20, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C56E4u;
        goto label_2c56e4;
    }
    ctx->pc = 0x2C56DCu;
    {
        const bool branch_taken_0x2c56dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C56DCu;
        // 0x2c56e0: 0xc6540070  lwc1        $f20, 0x70($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c56dc) {
            ctx->pc = 0x2C593Cu;
            goto label_2c593c;
        }
    }
    ctx->pc = 0x2C56E4u;
label_2c56e4:
    // 0x2c56e4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2c56e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_2c56e8:
    // 0x2c56e8: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2c56e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_2c56ec:
    // 0x2c56ec: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2c56ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c56f0:
    // 0x2c56f0: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2c56f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2c56f4:
    // 0x2c56f4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2c56f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_2c56f8:
    // 0x2c56f8: 0x2cc70002  sltiu       $a3, $a2, 0x2
    ctx->pc = 0x2c56f8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2c56fc:
    // 0x2c56fc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2c56fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5700:
    // 0x2c5700: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x2c5700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_2c5704:
    // 0x2c5704: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2c5708:
    if (ctx->pc == 0x2C5708u) {
        ctx->pc = 0x2C5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5704u;
        // 0x2c5708: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C570Cu;
        goto label_2c570c;
    }
    ctx->pc = 0x2C5704u;
    {
        const bool branch_taken_0x2c5704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5704u;
        // 0x2c5708: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5704) {
            ctx->pc = 0x2C58F4u;
            goto label_2c58f4;
        }
    }
    ctx->pc = 0x2C570Cu;
label_2c570c:
    // 0x2c570c: 0x0  nop
    ctx->pc = 0x2c570cu;
    // NOP
label_2c5710:
    // 0x2c5710: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2c5710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_2c5714:
    // 0x2c5714: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x2c5714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2c5718:
    // 0x2c5718: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2c5718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c571c:
    // 0x2c571c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2c571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2c5720:
    // 0x2c5720: 0xc48021  addu        $s0, $a2, $a0
    ctx->pc = 0x2c5720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2c5724:
    // 0x2c5724: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c5724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2c5728:
    // 0x2c5728: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c572c:
    if (ctx->pc == 0x2C572Cu) {
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5728u;
        // 0x2c572c: 0xa3a821  addu        $s5, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5730u;
        goto label_2c5730;
    }
    ctx->pc = 0x2C5728u;
    {
        const bool branch_taken_0x2c5728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5728u;
        // 0x2c572c: 0xa3a821  addu        $s5, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5728) {
            ctx->pc = 0x2C5754u;
            goto label_2c5754;
        }
    }
    ctx->pc = 0x2C5730u;
label_2c5730:
    // 0x2c5730: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x2c5730u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2c5734:
    // 0x2c5734: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5734u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5738:
    // 0x2c5738: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x2c5738u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_2c573c:
    // 0x2c573c: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c573cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c5740:
    // 0x2c5740: 0x7ac20020  lq          $v0, 0x20($s6)
    ctx->pc = 0x2c5740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 32)));
label_2c5744:
    // 0x2c5744: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5744u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5748:
    // 0x2c5748: 0x7ac30030  lq          $v1, 0x30($s6)
    ctx->pc = 0x2c5748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_2c574c:
    // 0x2c574c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2c5750:
    if (ctx->pc == 0x2C5750u) {
        ctx->pc = 0x2C5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C574Cu;
        // 0x2c5750: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5754u;
        goto label_2c5754;
    }
    ctx->pc = 0x2C574Cu;
    {
        const bool branch_taken_0x2c574c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C574Cu;
        // 0x2c5750: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c574c) {
            ctx->pc = 0x2C57C8u;
            goto label_2c57c8;
        }
    }
    ctx->pc = 0x2C5754u;
label_2c5754:
    // 0x2c5754: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
label_2c5758:
    if (ctx->pc == 0x2C5758u) {
        ctx->pc = 0x2C575Cu;
        goto label_2c575c;
    }
    ctx->pc = 0x2C5754u;
    {
        const bool branch_taken_0x2c5754 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5754) {
            ctx->pc = 0x2C5780u;
            goto label_2c5780;
        }
    }
    ctx->pc = 0x2C575Cu;
label_2c575c:
    // 0x2c575c: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x2c575cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2c5760:
    // 0x2c5760: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5760u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5764:
    // 0x2c5764: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x2c5764u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_2c5768:
    // 0x2c5768: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c5768u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c576c:
    // 0x2c576c: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x2c576cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
label_2c5770:
    // 0x2c5770: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5774:
    // 0x2c5774: 0x7a630030  lq          $v1, 0x30($s3)
    ctx->pc = 0x2c5774u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 48)));
label_2c5778:
    // 0x2c5778: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c577c:
    if (ctx->pc == 0x2C577Cu) {
        ctx->pc = 0x2C577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5778u;
        // 0x2c577c: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5780u;
        goto label_2c5780;
    }
    ctx->pc = 0x2C5778u;
    {
        const bool branch_taken_0x2c5778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C577Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5778u;
        // 0x2c577c: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5778) {
            ctx->pc = 0x2C57C8u;
            goto label_2c57c8;
        }
    }
    ctx->pc = 0x2C5780u;
label_2c5780:
    // 0x2c5780: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2c5780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2c5784:
    // 0x2c5784: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x2c5784u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2c5788:
    // 0x2c5788: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x2c5788u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_2c578c:
    // 0x2c578c: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x2c578cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_2c5790:
    // 0x2c5790: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x2c5790u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2c5794:
    // 0x2c5794: 0xdac60010  lqc2        $vf6, 0x10($s6)
    ctx->pc = 0x2c5794u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_2c5798:
    // 0x2c5798: 0xdac70020  lqc2        $vf7, 0x20($s6)
    ctx->pc = 0x2c5798u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
label_2c579c:
    // 0x2c579c: 0xdac80030  lqc2        $vf8, 0x30($s6)
    ctx->pc = 0x2c579cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_2c57a0:
    // 0x2c57a0: 0x4a007378  vcallms     0xE68
    ctx->pc = 0x2c57a0u;
    {     ctx->vu0_tpc = 0xE68;     runtime->executeVU0Microprogram(rdram, ctx, 0xE68); }
label_2c57a4:
    // 0x2c57a4: 0x9e28000c  lwu         $t0, 0xC($s1)
    ctx->pc = 0x2c57a4u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c57a8:
    // 0x2c57a8: 0x9ec9000c  lwu         $t1, 0xC($s6)
    ctx->pc = 0x2c57a8u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_2c57ac:
    // 0x2c57ac: 0x1095024  and         $t2, $t0, $t1
    ctx->pc = 0x2c57acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_2c57b0:
    // 0x2c57b0: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x2c57b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
label_2c57b4:
    // 0x2c57b4: 0x4a0002ff  vnop
    ctx->pc = 0x2c57b4u;
    // NOP operation, no action needed for VU0
label_2c57b8:
    // 0x2c57b8: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x2c57b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_2c57bc:
    // 0x2c57bc: 0xfa0a0010  sqc2        $vf10, 0x10($s0)
    ctx->pc = 0x2c57bcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[10]));
label_2c57c0:
    // 0x2c57c0: 0xfa0b0020  sqc2        $vf11, 0x20($s0)
    ctx->pc = 0x2c57c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[11]));
label_2c57c4:
    // 0x2c57c4: 0xfa0c0030  sqc2        $vf12, 0x30($s0)
    ctx->pc = 0x2c57c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[12]));
label_2c57c8:
    // 0x2c57c8: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_2c57cc:
    if (ctx->pc == 0x2C57CCu) {
        ctx->pc = 0x2C57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57C8u;
        // 0x2c57cc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C57D0u;
        goto label_2c57d0;
    }
    ctx->pc = 0x2C57C8u;
    {
        const bool branch_taken_0x2c57c8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57C8u;
        // 0x2c57cc: 0x3c030068  lui         $v1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57c8) {
            ctx->pc = 0x2C57E4u;
            goto label_2c57e4;
        }
    }
    ctx->pc = 0x2C57D0u;
label_2c57d0:
    // 0x2c57d0: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x2c57d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_2c57d4:
    // 0x2c57d4: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x2c57d4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
label_2c57d8:
    // 0x2c57d8: 0x7bc30010  lq          $v1, 0x10($fp)
    ctx->pc = 0x2c57d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 16)));
label_2c57dc:
    // 0x2c57dc: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2c57e0:
    if (ctx->pc == 0x2C57E0u) {
        ctx->pc = 0x2C57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57DCu;
        // 0x2c57e0: 0x7ea30010  sq          $v1, 0x10($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C57E4u;
        goto label_2c57e4;
    }
    ctx->pc = 0x2C57DCu;
    {
        const bool branch_taken_0x2c57dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57DCu;
        // 0x2c57e0: 0x7ea30010  sq          $v1, 0x10($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c57dc) {
            ctx->pc = 0x2C588Cu;
            goto label_2c588c;
        }
    }
    ctx->pc = 0x2C57E4u;
label_2c57e4:
    // 0x2c57e4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x2c57e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_2c57e8:
    // 0x2c57e8: 0x8c623034  lw          $v0, 0x3034($v1)
    ctx->pc = 0x2c57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12340)));
label_2c57ec:
    // 0x2c57ec: 0x248472f0  addiu       $a0, $a0, 0x72F0
    ctx->pc = 0x2c57ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29424));
label_2c57f0:
    // 0x2c57f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c57f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c57f4:
    // 0x2c57f4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2c57f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_2c57f8:
    // 0x2c57f8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c57f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2c57fc:
    // 0x2c57fc: 0x5445000e  bnel        $v0, $a1, . + 4 + (0xE << 2)
label_2c5800:
    if (ctx->pc == 0x2C5800u) {
        ctx->pc = 0x2C5800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C57FCu;
        // 0x2c5800: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5804u;
        goto label_2c5804;
    }
    ctx->pc = 0x2C57FCu;
    {
        const bool branch_taken_0x2c57fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c57fc) {
            ctx->pc = 0x2C5800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C57FCu;
            // 0x2c5800: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5838u;
            goto label_2c5838;
        }
    }
    ctx->pc = 0x2C5804u;
label_2c5804:
    // 0x2c5804: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x2c5804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_2c5808:
    // 0x2c5808: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c5808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2c580c:
    // 0x2c580c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c5810:
    // 0x2c5810: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c5810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2c5814:
    // 0x2c5814: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2c5818:
    if (ctx->pc == 0x2C5818u) {
        ctx->pc = 0x2C5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5814u;
        // 0x2c5818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C581Cu;
        goto label_2c581c;
    }
    ctx->pc = 0x2C5814u;
    {
        const bool branch_taken_0x2c5814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5814u;
        // 0x2c5818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5814) {
            ctx->pc = 0x2C5834u;
            goto label_2c5834;
        }
    }
    ctx->pc = 0x2C581Cu;
label_2c581c:
    // 0x2c581c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c581cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5820:
    // 0x2c5820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5824:
    // 0x2c5824: 0xc0b529c  jal         func_2D4A70
label_2c5828:
    if (ctx->pc == 0x2C5828u) {
        ctx->pc = 0x2C5828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5824u;
        // 0x2c5828: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C582Cu;
        goto label_2c582c;
    }
    ctx->pc = 0x2C5824u;
    SET_GPR_U32(ctx, 31, 0x2C582Cu);
    ctx->pc = 0x2C5828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5824u;
    // 0x2c5828: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4A70u, 0x2C5824u, 0x2C582Cu)) {
        return;
    }
    ctx->pc = 0x2C582Cu;
label_2c582c:
    // 0x2c582c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c5830:
    if (ctx->pc == 0x2C5830u) {
        ctx->pc = 0x2C5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C582Cu;
        // 0x2c5830: 0x8fa60054  lw          $a2, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5834u;
        goto label_2c5834;
    }
    ctx->pc = 0x2C582Cu;
    {
        const bool branch_taken_0x2c582c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C582Cu;
        // 0x2c5830: 0x8fa60054  lw          $a2, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c582c) {
            ctx->pc = 0x2C5850u;
            goto label_2c5850;
        }
    }
    ctx->pc = 0x2C5834u;
label_2c5834:
    // 0x2c5834: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2c5838:
    // 0x2c5838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c583c:
    // 0x2c583c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c583cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5840:
    // 0x2c5840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5844:
    // 0x2c5844: 0x40f809  jalr        $v0
label_2c5848:
    if (ctx->pc == 0x2C5848u) {
        ctx->pc = 0x2C5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5844u;
        // 0x2c5848: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C584Cu;
        goto label_2c584c;
    }
    ctx->pc = 0x2C5844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C584Cu);
        ctx->pc = 0x2C5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5844u;
        // 0x2c5848: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5844u, 0x2C584Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C584Cu;
label_2c584c:
    // 0x2c584c: 0x8fa60054  lw          $a2, 0x54($sp)
    ctx->pc = 0x2c584cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2c5850:
    // 0x2c5850: 0x14c0000f  bnez        $a2, . + 4 + (0xF << 2)
label_2c5854:
    if (ctx->pc == 0x2C5854u) {
        ctx->pc = 0x2C5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5850u;
        // 0x2c5854: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5858u;
        goto label_2c5858;
    }
    ctx->pc = 0x2C5850u;
    {
        const bool branch_taken_0x2c5850 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5850u;
        // 0x2c5854: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5850) {
            ctx->pc = 0x2C5890u;
            goto label_2c5890;
        }
    }
    ctx->pc = 0x2C5858u;
label_2c5858:
    // 0x2c5858: 0x8fa70110  lw          $a3, 0x110($sp)
    ctx->pc = 0x2c5858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2c585c:
    // 0x2c585c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x2c585cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_2c5860:
    // 0x2c5860: 0xdaa10010  lqc2        $vf1, 0x10($s5)
    ctx->pc = 0x2c5860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
label_2c5864:
    // 0x2c5864: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x2c5864u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2c5868:
    // 0x2c5868: 0xd8e30010  lqc2        $vf3, 0x10($a3)
    ctx->pc = 0x2c5868u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_2c586c:
    // 0x2c586c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2c586cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_2c5870:
    // 0x2c5870: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2c5870u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_2c5874:
    // 0x2c5874: 0x4a006fb8  vcallms     0xDF0
    ctx->pc = 0x2c5874u;
    {     ctx->vu0_tpc = 0xDF0;     runtime->executeVU0Microprogram(rdram, ctx, 0xDF0); }
label_2c5878:
    // 0x2c5878: 0x4a0002ff  vnop
    ctx->pc = 0x2c5878u;
    // NOP operation, no action needed for VU0
label_2c587c:
    // 0x2c587c: 0x48420801  cfc2.i      $v0, $vi1
    ctx->pc = 0x2c587cu;
    SET_GPR_U32(ctx, 2, static_cast<uint32_t>(ctx->vi[1]));
label_2c5880:
    // 0x2c5880: 0x0  nop
    ctx->pc = 0x2c5880u;
    // NOP
label_2c5884:
    // 0x2c5884: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2c5888:
    if (ctx->pc == 0x2C5888u) {
        ctx->pc = 0x2C5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5884u;
        // 0x2c5888: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C588Cu;
        goto label_2c588c;
    }
    ctx->pc = 0x2C5884u;
    {
        const bool branch_taken_0x2c5884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5884u;
        // 0x2c5888: 0x8fa50058  lw          $a1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5884) {
            ctx->pc = 0x2C58D8u;
            goto label_2c58d8;
        }
    }
    ctx->pc = 0x2C588Cu;
label_2c588c:
    // 0x2c588c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x2c588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2c5890:
    // 0x2c5890: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2c5890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c5894:
    // 0x2c5894: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2c5894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2c5898:
    // 0x2c5898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c589c:
    // 0x2c589c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2c58a0:
    // 0x2c58a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c58a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c58a4:
    // 0x2c58a4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2c58a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2c58a8:
    // 0x2c58a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c58a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c58ac:
    // 0x2c58ac: 0x8fa90058  lw          $t1, 0x58($sp)
    ctx->pc = 0x2c58acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c58b0:
    // 0x2c58b0: 0x3c0582d  daddu       $t3, $fp, $zero
    ctx->pc = 0x2c58b0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c58b4:
    // 0x2c58b4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2c58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2c58b8:
    // 0x2c58b8: 0xc0b1570  jal         func_2C55C0
label_2c58bc:
    if (ctx->pc == 0x2C58BCu) {
        ctx->pc = 0x2C58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C58B8u;
        // 0x2c58bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C58C0u;
        goto label_2c58c0;
    }
    ctx->pc = 0x2C58B8u;
    SET_GPR_U32(ctx, 31, 0x2C58C0u);
    ctx->pc = 0x2C58BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C58B8u;
    // 0x2c58bc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55C0u;
    goto label_2c55c0;
    ctx->pc = 0x2C58C0u;
label_2c58c0:
    // 0x2c58c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c58c4:
    // 0x2c58c4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c58c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c58c8:
    // 0x2c58c8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2c58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c58cc:
    // 0x2c58cc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c58ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c58d0:
    // 0x2c58d0: 0x43b821  addu        $s7, $v0, $v1
    ctx->pc = 0x2c58d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c58d4:
    // 0x2c58d4: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2c58d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2c58d8:
    // 0x2c58d8: 0x26730060  addiu       $s3, $s3, 0x60
    ctx->pc = 0x2c58d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_2c58dc:
    // 0x2c58dc: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x2c58dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2c58e0:
    // 0x2c58e0: 0x26310060  addiu       $s1, $s1, 0x60
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_2c58e4:
    // 0x2c58e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c58e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2c58e8:
    // 0x2c58e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2c58e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2c58ec:
    // 0x2c58ec: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x2c58ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_2c58f0:
    // 0x2c58f0: 0xafa6004c  sw          $a2, 0x4C($sp)
    ctx->pc = 0x2c58f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
label_2c58f4:
    // 0x2c58f4: 0x8fa7004c  lw          $a3, 0x4C($sp)
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2c58f8:
    // 0x2c58f8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2c58f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c58fc:
    // 0x2c58fc: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x2c58fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c5900:
    // 0x2c5900: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
label_2c5904:
    if (ctx->pc == 0x2C5904u) {
        ctx->pc = 0x2C5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5900u;
        // 0x2c5904: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5908u;
        goto label_2c5908;
    }
    ctx->pc = 0x2C5900u;
    {
        const bool branch_taken_0x2c5900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5900u;
        // 0x2c5904: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5900) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C5908u;
label_2c5908:
    // 0x2c5908: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2c5908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2c590c:
    // 0x2c590c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2c590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2c5910:
    // 0x2c5910: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x2c5910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c5914:
    // 0x2c5914: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c5918:
    if (ctx->pc == 0x2C5918u) {
        ctx->pc = 0x2C5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5914u;
        // 0x2c5918: 0x8e74005c  lw          $s4, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C591Cu;
        goto label_2c591c;
    }
    ctx->pc = 0x2C5914u;
    {
        const bool branch_taken_0x2c5914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5914u;
        // 0x2c5918: 0x8e74005c  lw          $s4, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5914) {
            ctx->pc = 0x2C5930u;
            goto label_2c5930;
        }
    }
    ctx->pc = 0x2C591Cu;
label_2c591c:
    // 0x2c591c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2c591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c5920:
    // 0x2c5920: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2c5920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2c5924:
    // 0x2c5924: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c5924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2c5928:
    // 0x2c5928: 0x5440ff79  bnel        $v0, $zero, . + 4 + (-0x87 << 2)
label_2c592c:
    if (ctx->pc == 0x2C592Cu) {
        ctx->pc = 0x2C592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5928u;
        // 0x2c592c: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5930u;
        goto label_2c5930;
    }
    ctx->pc = 0x2C5928u;
    {
        const bool branch_taken_0x2c5928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5928) {
            ctx->pc = 0x2C592Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5928u;
            // 0x2c592c: 0x8e460018  lw          $a2, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5710;
        }
    }
    ctx->pc = 0x2C5930u;
label_2c5930:
    // 0x2c5930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c5930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5934:
    // 0x2c5934: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_2c5938:
    if (ctx->pc == 0x2C5938u) {
        ctx->pc = 0x2C5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5934u;
        // 0x2c5938: 0xae440078  sw          $a0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C593Cu;
        goto label_2c593c;
    }
    ctx->pc = 0x2C5934u;
    {
        const bool branch_taken_0x2c5934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5934u;
        // 0x2c5938: 0xae440078  sw          $a0, 0x78($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5934) {
            ctx->pc = 0x2C5C4Cu;
            goto label_2c5c4c;
        }
    }
    ctx->pc = 0x2C593Cu;
label_2c593c:
    // 0x2c593c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2c593cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2c5940:
    // 0x2c5940: 0xe7b40034  swc1        $f20, 0x34($sp)
    ctx->pc = 0x2c5940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2c5944:
    // 0x2c5944: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x2c5944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2c5948:
    // 0x2c5948: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x2c5948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2c594c:
    // 0x2c594c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5950:
    // 0x2c5950: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2c5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c5954:
    // 0x2c5954: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x2c5954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_2c5958:
    // 0x2c5958: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2c5958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c595c:
    // 0x2c595c: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x2c595cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_2c5960:
    // 0x2c5960: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2c5960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2c5964:
    // 0x2c5964: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c5964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_2c5968:
    // 0x2c5968: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c5968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_2c596c:
    // 0x2c596c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2c596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2c5970:
    // 0x2c5970: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x2c5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c5974:
    // 0x2c5974: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x2c5974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c5978:
    // 0x2c5978: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x2c5978u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
label_2c597c:
    // 0x2c597c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2c597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c5980:
    // 0x2c5980: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x2c5980u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
label_2c5984:
    // 0x2c5984: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2c5984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2c5988:
    // 0x2c5988: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2c5988u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2c598c:
    // 0x2c598c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2c598cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2c5990:
    // 0x2c5990: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x2c5990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_2c5994:
    // 0x2c5994: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2c5998:
    if (ctx->pc == 0x2C5998u) {
        ctx->pc = 0x2C5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5994u;
        // 0x2c5998: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C599Cu;
        goto label_2c599c;
    }
    ctx->pc = 0x2C5994u;
    {
        const bool branch_taken_0x2c5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5994u;
        // 0x2c5998: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5994) {
            ctx->pc = 0x2C59E8u;
            goto label_2c59e8;
        }
    }
    ctx->pc = 0x2C599Cu;
label_2c599c:
    // 0x2c599c: 0x17c000ac  bnez        $fp, . + 4 + (0xAC << 2)
label_2c59a0:
    if (ctx->pc == 0x2C59A0u) {
        ctx->pc = 0x2C59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C599Cu;
        // 0x2c59a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59A4u;
        goto label_2c59a4;
    }
    ctx->pc = 0x2C599Cu;
    {
        const bool branch_taken_0x2c599c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C59A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C599Cu;
        // 0x2c59a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c599c) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C59A4u;
label_2c59a4:
    // 0x2c59a4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2c59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2c59a8:
    // 0x2c59a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c59a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c59ac:
    // 0x2c59ac: 0x8fa70118  lw          $a3, 0x118($sp)
    ctx->pc = 0x2c59acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2c59b0:
    // 0x2c59b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c59b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c59b4:
    // 0x2c59b4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c59b8:
    // 0x2c59b8: 0x40f809  jalr        $v0
label_2c59bc:
    if (ctx->pc == 0x2C59BCu) {
        ctx->pc = 0x2C59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59B8u;
        // 0x2c59bc: 0x26480044  addiu       $t0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59C0u;
        goto label_2c59c0;
    }
    ctx->pc = 0x2C59B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C59C0u);
        ctx->pc = 0x2C59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59B8u;
        // 0x2c59bc: 0x26480044  addiu       $t0, $s2, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C59B8u, 0x2C59C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C59C0u;
label_2c59c0:
    // 0x2c59c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2c59c4:
    if (ctx->pc == 0x2C59C4u) {
        ctx->pc = 0x2C59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59C0u;
        // 0x2c59c4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59C8u;
        goto label_2c59c8;
    }
    ctx->pc = 0x2C59C0u;
    {
        const bool branch_taken_0x2c59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59C0u;
        // 0x2c59c4: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59c0) {
            ctx->pc = 0x2C59F0u;
            goto label_2c59f0;
        }
    }
    ctx->pc = 0x2C59C8u;
label_2c59c8:
    // 0x2c59c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c59c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c59cc:
    // 0x2c59cc: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x2c59ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2c59d0:
    // 0x2c59d0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c59d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c59d4:
    // 0x2c59d4: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x2c59d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2c59d8:
    // 0x2c59d8: 0xc0b1488  jal         func_2C5220
label_2c59dc:
    if (ctx->pc == 0x2C59DCu) {
        ctx->pc = 0x2C59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59D8u;
        // 0x2c59dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59E0u;
        goto label_2c59e0;
    }
    ctx->pc = 0x2C59D8u;
    SET_GPR_U32(ctx, 31, 0x2C59E0u);
    ctx->pc = 0x2C59DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C59D8u;
    // 0x2c59dc: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5220u, 0x2C59D8u, 0x2C59E0u)) {
        return;
    }
    ctx->pc = 0x2C59E0u;
label_2c59e0:
    // 0x2c59e0: 0x1000009c  b           . + 4 + (0x9C << 2)
label_2c59e4:
    if (ctx->pc == 0x2C59E4u) {
        ctx->pc = 0x2C59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59E0u;
        // 0x2c59e4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59E8u;
        goto label_2c59e8;
    }
    ctx->pc = 0x2C59E0u;
    {
        const bool branch_taken_0x2c59e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59E0u;
        // 0x2c59e4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59e0) {
            ctx->pc = 0x2C5C54u;
            goto label_2c5c54;
        }
    }
    ctx->pc = 0x2C59E8u;
label_2c59e8:
    // 0x2c59e8: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
label_2c59ec:
    if (ctx->pc == 0x2C59ECu) {
        ctx->pc = 0x2C59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59E8u;
        // 0x2c59ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59F0u;
        goto label_2c59f0;
    }
    ctx->pc = 0x2C59E8u;
    {
        const bool branch_taken_0x2c59e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59E8u;
        // 0x2c59ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59e8) {
            ctx->pc = 0x2C59F8u;
            goto label_2c59f8;
        }
    }
    ctx->pc = 0x2C59F0u;
label_2c59f0:
    // 0x2c59f0: 0x10000097  b           . + 4 + (0x97 << 2)
label_2c59f4:
    if (ctx->pc == 0x2C59F4u) {
        ctx->pc = 0x2C59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59F0u;
        // 0x2c59f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C59F8u;
        goto label_2c59f8;
    }
    ctx->pc = 0x2C59F0u;
    {
        const bool branch_taken_0x2c59f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C59F0u;
        // 0x2c59f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c59f0) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C59F8u;
label_2c59f8:
    // 0x2c59f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2c59f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c59fc:
    // 0x2c59fc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2c59fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c5a00:
    // 0x2c5a00: 0xc0ace06  jal         func_2B3818
label_2c5a04:
    if (ctx->pc == 0x2C5A04u) {
        ctx->pc = 0x2C5A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A00u;
        // 0x2c5a04: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5A08u;
        goto label_2c5a08;
    }
    ctx->pc = 0x2C5A00u;
    SET_GPR_U32(ctx, 31, 0x2C5A08u);
    ctx->pc = 0x2C5A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5A00u;
    // 0x2c5a04: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B3818u, 0x2C5A00u, 0x2C5A08u)) {
        return;
    }
    ctx->pc = 0x2C5A08u;
label_2c5a08:
    // 0x2c5a08: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x2c5a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_2c5a0c:
    // 0x2c5a0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5a10:
    // 0x2c5a10: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x2c5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2c5a14:
    // 0x2c5a14: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2c5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2c5a18:
    // 0x2c5a18: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x2c5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_2c5a1c:
    // 0x2c5a1c: 0x40f809  jalr        $v0
label_2c5a20:
    if (ctx->pc == 0x2C5A20u) {
        ctx->pc = 0x2C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A1Cu;
        // 0x2c5a20: 0x2647000c  addiu       $a3, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5A24u;
        goto label_2c5a24;
    }
    ctx->pc = 0x2C5A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5A24u);
        ctx->pc = 0x2C5A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A1Cu;
        // 0x2c5a20: 0x2647000c  addiu       $a3, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5A1Cu, 0x2C5A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5A24u;
label_2c5a24:
    // 0x2c5a24: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c5a28:
    // 0x2c5a28: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c5a2c:
    // 0x2c5a2c: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x2c5a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2c5a30:
    // 0x2c5a30: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2c5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2c5a34:
    // 0x2c5a34: 0x2641023  subu        $v0, $s3, $a0
    ctx->pc = 0x2c5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2c5a38:
    // 0x2c5a38: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x2c5a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2c5a3c:
    // 0x2c5a3c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2c5a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c5a40:
    // 0x2c5a40: 0x653818  mult        $a3, $v1, $a1
    ctx->pc = 0x2c5a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_2c5a44:
    // 0x2c5a44: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2c5a44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2c5a48:
    // 0x2c5a48: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2c5a4c:
    // 0x2c5a4c: 0xc2a821  addu        $s5, $a2, $v0
    ctx->pc = 0x2c5a4cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2c5a50:
    // 0x2c5a50: 0xe4b821  addu        $s7, $a3, $a0
    ctx->pc = 0x2c5a50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_2c5a54:
    // 0x2c5a54: 0x10000073  b           . + 4 + (0x73 << 2)
label_2c5a58:
    if (ctx->pc == 0x2C5A58u) {
        ctx->pc = 0x2C5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A54u;
        // 0x2c5a58: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5A5Cu;
        goto label_2c5a5c;
    }
    ctx->pc = 0x2C5A54u;
    {
        const bool branch_taken_0x2c5a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A54u;
        // 0x2c5a58: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a54) {
            ctx->pc = 0x2C5C24u;
            goto label_2c5c24;
        }
    }
    ctx->pc = 0x2C5A5Cu;
label_2c5a5c:
    // 0x2c5a5c: 0x0  nop
    ctx->pc = 0x2c5a5cu;
    // NOP
label_2c5a60:
    // 0x2c5a60: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x2c5a60u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_2c5a64:
    // 0x2c5a64: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x2c5a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2c5a68:
    // 0x2c5a68: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x2c5a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2c5a6c:
    // 0x2c5a6c: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x2c5a6cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2c5a70:
    // 0x2c5a70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c5a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5a74:
    // 0x2c5a74: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2c5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2c5a78:
    // 0x2c5a78: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x2c5a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2c5a7c:
    // 0x2c5a7c: 0x8e34005c  lw          $s4, 0x5C($s1)
    ctx->pc = 0x2c5a7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c5a80:
    // 0x2c5a80: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x2c5a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_2c5a84:
    // 0x2c5a84: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x2c5a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2c5a88:
    // 0x2c5a88: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2c5a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_2c5a8c:
    // 0x2c5a8c: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x2c5a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2c5a90:
    // 0x2c5a90: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2c5a94:
    // 0x2c5a94: 0xa6670004  sh          $a3, 0x4($s3)
    ctx->pc = 0x2c5a94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 7));
label_2c5a98:
    // 0x2c5a98: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2c5a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2c5a9c:
    // 0x2c5a9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c5aa0:
    if (ctx->pc == 0x2C5AA0u) {
        ctx->pc = 0x2C5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A9Cu;
        // 0x2c5aa0: 0xae700010  sw          $s0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5AA4u;
        goto label_2c5aa4;
    }
    ctx->pc = 0x2C5A9Cu;
    {
        const bool branch_taken_0x2c5a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5A9Cu;
        // 0x2c5aa0: 0xae700010  sw          $s0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a9c) {
            ctx->pc = 0x2C5AC8u;
            goto label_2c5ac8;
        }
    }
    ctx->pc = 0x2C5AA4u;
label_2c5aa4:
    // 0x2c5aa4: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x2c5aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2c5aa8:
    // 0x2c5aa8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5aac:
    // 0x2c5aac: 0x7ac30010  lq          $v1, 0x10($s6)
    ctx->pc = 0x2c5aacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_2c5ab0:
    // 0x2c5ab0: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c5ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c5ab4:
    // 0x2c5ab4: 0x7ac20020  lq          $v0, 0x20($s6)
    ctx->pc = 0x2c5ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 32)));
label_2c5ab8:
    // 0x2c5ab8: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5abc:
    // 0x2c5abc: 0x7ac30030  lq          $v1, 0x30($s6)
    ctx->pc = 0x2c5abcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_2c5ac0:
    // 0x2c5ac0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2c5ac4:
    if (ctx->pc == 0x2C5AC4u) {
        ctx->pc = 0x2C5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AC0u;
        // 0x2c5ac4: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5AC8u;
        goto label_2c5ac8;
    }
    ctx->pc = 0x2C5AC0u;
    {
        const bool branch_taken_0x2c5ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AC0u;
        // 0x2c5ac4: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ac0) {
            ctx->pc = 0x2C5B3Cu;
            goto label_2c5b3c;
        }
    }
    ctx->pc = 0x2C5AC8u;
label_2c5ac8:
    // 0x2c5ac8: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
label_2c5acc:
    if (ctx->pc == 0x2C5ACCu) {
        ctx->pc = 0x2C5AD0u;
        goto label_2c5ad0;
    }
    ctx->pc = 0x2C5AC8u;
    {
        const bool branch_taken_0x2c5ac8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ac8) {
            ctx->pc = 0x2C5AF4u;
            goto label_2c5af4;
        }
    }
    ctx->pc = 0x2C5AD0u;
label_2c5ad0:
    // 0x2c5ad0: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x2c5ad0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2c5ad4:
    // 0x2c5ad4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2c5ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_2c5ad8:
    // 0x2c5ad8: 0x7a230010  lq          $v1, 0x10($s1)
    ctx->pc = 0x2c5ad8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2c5adc:
    // 0x2c5adc: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2c5adcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_2c5ae0:
    // 0x2c5ae0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x2c5ae0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_2c5ae4:
    // 0x2c5ae4: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2c5ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
label_2c5ae8:
    // 0x2c5ae8: 0x7a230030  lq          $v1, 0x30($s1)
    ctx->pc = 0x2c5ae8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_2c5aec:
    // 0x2c5aec: 0x10000013  b           . + 4 + (0x13 << 2)
label_2c5af0:
    if (ctx->pc == 0x2C5AF0u) {
        ctx->pc = 0x2C5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AECu;
        // 0x2c5af0: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5AF4u;
        goto label_2c5af4;
    }
    ctx->pc = 0x2C5AECu;
    {
        const bool branch_taken_0x2c5aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5AECu;
        // 0x2c5af0: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5aec) {
            ctx->pc = 0x2C5B3Cu;
            goto label_2c5b3c;
        }
    }
    ctx->pc = 0x2C5AF4u;
label_2c5af4:
    // 0x2c5af4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2c5af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2c5af8:
    // 0x2c5af8: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x2c5af8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_2c5afc:
    // 0x2c5afc: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x2c5afcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_2c5b00:
    // 0x2c5b00: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x2c5b00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_2c5b04:
    // 0x2c5b04: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x2c5b04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_2c5b08:
    // 0x2c5b08: 0xdac60010  lqc2        $vf6, 0x10($s6)
    ctx->pc = 0x2c5b08u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
label_2c5b0c:
    // 0x2c5b0c: 0xdac70020  lqc2        $vf7, 0x20($s6)
    ctx->pc = 0x2c5b0cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
label_2c5b10:
    // 0x2c5b10: 0xdac80030  lqc2        $vf8, 0x30($s6)
    ctx->pc = 0x2c5b10u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
label_2c5b14:
    // 0x2c5b14: 0x4a007378  vcallms     0xE68
    ctx->pc = 0x2c5b14u;
    {     ctx->vu0_tpc = 0xE68;     runtime->executeVU0Microprogram(rdram, ctx, 0xE68); }
label_2c5b18:
    // 0x2c5b18: 0x9e28000c  lwu         $t0, 0xC($s1)
    ctx->pc = 0x2c5b18u;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2c5b1c:
    // 0x2c5b1c: 0x9ec9000c  lwu         $t1, 0xC($s6)
    ctx->pc = 0x2c5b1cu;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_2c5b20:
    // 0x2c5b20: 0x1095024  and         $t2, $t0, $t1
    ctx->pc = 0x2c5b20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_2c5b24:
    // 0x2c5b24: 0xae0a000c  sw          $t2, 0xC($s0)
    ctx->pc = 0x2c5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
label_2c5b28:
    // 0x2c5b28: 0x4a0002ff  vnop
    ctx->pc = 0x2c5b28u;
    // NOP operation, no action needed for VU0
label_2c5b2c:
    // 0x2c5b2c: 0xfa090000  sqc2        $vf9, 0x0($s0)
    ctx->pc = 0x2c5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[9]));
label_2c5b30:
    // 0x2c5b30: 0xfa0a0010  sqc2        $vf10, 0x10($s0)
    ctx->pc = 0x2c5b30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[10]));
label_2c5b34:
    // 0x2c5b34: 0xfa0b0020  sqc2        $vf11, 0x20($s0)
    ctx->pc = 0x2c5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[11]));
label_2c5b38:
    // 0x2c5b38: 0xfa0c0030  sqc2        $vf12, 0x30($s0)
    ctx->pc = 0x2c5b38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[12]));
label_2c5b3c:
    // 0x2c5b3c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2c5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2c5b40:
    // 0x2c5b40: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x2c5b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_2c5b44:
    // 0x2c5b44: 0x8c443034  lw          $a0, 0x3034($v0)
    ctx->pc = 0x2c5b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12340)));
label_2c5b48:
    // 0x2c5b48: 0x246372f0  addiu       $v1, $v1, 0x72F0
    ctx->pc = 0x2c5b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29424));
label_2c5b4c:
    // 0x2c5b4c: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
label_2c5b50:
    if (ctx->pc == 0x2C5B50u) {
        ctx->pc = 0x2C5B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B4Cu;
        // 0x2c5b50: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5B54u;
        goto label_2c5b54;
    }
    ctx->pc = 0x2C5B4Cu;
    {
        const bool branch_taken_0x2c5b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5b4c) {
            ctx->pc = 0x2C5B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5B4Cu;
            // 0x2c5b50: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5B88u;
            goto label_2c5b88;
        }
    }
    ctx->pc = 0x2C5B54u;
label_2c5b54:
    // 0x2c5b54: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x2c5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2c5b58:
    // 0x2c5b58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2c5b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_2c5b5c:
    // 0x2c5b5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2c5b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2c5b60:
    // 0x2c5b60: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2c5b60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2c5b64:
    // 0x2c5b64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2c5b68:
    if (ctx->pc == 0x2C5B68u) {
        ctx->pc = 0x2C5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B64u;
        // 0x2c5b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5B6Cu;
        goto label_2c5b6c;
    }
    ctx->pc = 0x2C5B64u;
    {
        const bool branch_taken_0x2c5b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B64u;
        // 0x2c5b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b64) {
            ctx->pc = 0x2C5B84u;
            goto label_2c5b84;
        }
    }
    ctx->pc = 0x2C5B6Cu;
label_2c5b6c:
    // 0x2c5b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5b70:
    // 0x2c5b70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5b74:
    // 0x2c5b74: 0xc0b529c  jal         func_2D4A70
label_2c5b78:
    if (ctx->pc == 0x2C5B78u) {
        ctx->pc = 0x2C5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B74u;
        // 0x2c5b78: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5B7Cu;
        goto label_2c5b7c;
    }
    ctx->pc = 0x2C5B74u;
    SET_GPR_U32(ctx, 31, 0x2C5B7Cu);
    ctx->pc = 0x2C5B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5B74u;
    // 0x2c5b78: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4A70u, 0x2C5B74u, 0x2C5B7Cu)) {
        return;
    }
    ctx->pc = 0x2C5B7Cu;
label_2c5b7c:
    // 0x2c5b7c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c5b80:
    if (ctx->pc == 0x2C5B80u) {
        ctx->pc = 0x2C5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B7Cu;
        // 0x2c5b80: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5B84u;
        goto label_2c5b84;
    }
    ctx->pc = 0x2C5B7Cu;
    {
        const bool branch_taken_0x2c5b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B7Cu;
        // 0x2c5b80: 0x8e820040  lw          $v0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5b7c) {
            ctx->pc = 0x2C5BA0u;
            goto label_2c5ba0;
        }
    }
    ctx->pc = 0x2C5B84u;
label_2c5b84:
    // 0x2c5b84: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2c5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2c5b88:
    // 0x2c5b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5b8c:
    // 0x2c5b8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c5b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5b90:
    // 0x2c5b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c5b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5b94:
    // 0x2c5b94: 0x40f809  jalr        $v0
label_2c5b98:
    if (ctx->pc == 0x2C5B98u) {
        ctx->pc = 0x2C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B94u;
        // 0x2c5b98: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5B9Cu;
        goto label_2c5b9c;
    }
    ctx->pc = 0x2C5B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C5B9Cu);
        ctx->pc = 0x2C5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5B94u;
        // 0x2c5b98: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5B94u, 0x2C5B9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C5B9Cu;
label_2c5b9c:
    // 0x2c5b9c: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x2c5b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_2c5ba0:
    // 0x2c5ba0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c5ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2c5ba4:
    // 0x2c5ba4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2c5ba8:
    if (ctx->pc == 0x2C5BA8u) {
        ctx->pc = 0x2C5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BA4u;
        // 0x2c5ba8: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5BACu;
        goto label_2c5bac;
    }
    ctx->pc = 0x2C5BA4u;
    {
        const bool branch_taken_0x2c5ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BA4u;
        // 0x2c5ba8: 0x8fa30118  lw          $v1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5ba4) {
            ctx->pc = 0x2C5BFCu;
            goto label_2c5bfc;
        }
    }
    ctx->pc = 0x2C5BACu;
label_2c5bac:
    // 0x2c5bac: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2c5bacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2c5bb0:
    // 0x2c5bb0: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x2c5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_2c5bb4:
    // 0x2c5bb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c5bb8:
    // 0x2c5bb8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2c5bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2c5bbc:
    // 0x2c5bbc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c5bbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c5bc0:
    // 0x2c5bc0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2c5bc4:
    // 0x2c5bc4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c5bc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5bc8:
    // 0x2c5bc8: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2c5bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2c5bcc:
    // 0x2c5bcc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2c5bccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c5bd0:
    // 0x2c5bd0: 0x8e69000c  lw          $t1, 0xC($s3)
    ctx->pc = 0x2c5bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2c5bd4:
    // 0x2c5bd4: 0xc0b1570  jal         func_2C55C0
label_2c5bd8:
    if (ctx->pc == 0x2C5BD8u) {
        ctx->pc = 0x2C5BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BD4u;
        // 0x2c5bd8: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5BDCu;
        goto label_2c5bdc;
    }
    ctx->pc = 0x2C5BD4u;
    SET_GPR_U32(ctx, 31, 0x2C5BDCu);
    ctx->pc = 0x2C5BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5BD4u;
    // 0x2c5bd8: 0x8fa60044  lw          $a2, 0x44($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55C0u;
    goto label_2c55c0;
    ctx->pc = 0x2C5BDCu;
label_2c5bdc:
    // 0x2c5bdc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2c5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2c5be0:
    // 0x2c5be0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2c5be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2c5be4:
    // 0x2c5be4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2c5be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2c5be8:
    // 0x2c5be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5bec:
    // 0x2c5bec: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2c5becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2c5bf0:
    // 0x2c5bf0: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2c5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2c5bf4:
    // 0x2c5bf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2c5bf8:
    if (ctx->pc == 0x2C5BF8u) {
        ctx->pc = 0x2C5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BF4u;
        // 0x2c5bf8: 0xa3b821  addu        $s7, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5BFCu;
        goto label_2c5bfc;
    }
    ctx->pc = 0x2C5BF4u;
    {
        const bool branch_taken_0x2c5bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5BF4u;
        // 0x2c5bf8: 0xa3b821  addu        $s7, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5bf4) {
            ctx->pc = 0x2C5C08u;
            goto label_2c5c08;
        }
    }
    ctx->pc = 0x2C5BFCu;
label_2c5bfc:
    // 0x2c5bfc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2c5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2c5c00:
    // 0x2c5c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c5c04:
    // 0x2c5c04: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2c5c04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_2c5c08:
    // 0x2c5c08: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x2c5c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_2c5c0c:
    // 0x2c5c0c: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x2c5c0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_2c5c10:
    // 0x2c5c10: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2c5c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c5c14:
    // 0x2c5c14: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x2c5c14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2c5c18:
    // 0x2c5c18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c5c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2c5c1c:
    // 0x2c5c1c: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x2c5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
label_2c5c20:
    // 0x2c5c20: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2c5c20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2c5c24:
    // 0x2c5c24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2c5c28:
    if (ctx->pc == 0x2C5C28u) {
        ctx->pc = 0x2C5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C24u;
        // 0x2c5c28: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C2Cu;
        goto label_2c5c2c;
    }
    ctx->pc = 0x2C5C24u;
    {
        const bool branch_taken_0x2c5c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C24u;
        // 0x2c5c28: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c24) {
            ctx->pc = 0x2C5C50u;
            goto label_2c5c50;
        }
    }
    ctx->pc = 0x2C5C2Cu;
label_2c5c2c:
    // 0x2c5c2c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2c5c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2c5c30:
    // 0x2c5c30: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2c5c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2c5c34:
    // 0x2c5c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c5c38:
    // 0x2c5c38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2c5c38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2c5c3c:
    // 0x2c5c3c: 0x1440ff88  bnez        $v0, . + 4 + (-0x78 << 2)
label_2c5c40:
    if (ctx->pc == 0x2C5C40u) {
        ctx->pc = 0x2C5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C3Cu;
        // 0x2c5c40: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C44u;
        goto label_2c5c44;
    }
    ctx->pc = 0x2C5C3Cu;
    {
        const bool branch_taken_0x2c5c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C3Cu;
        // 0x2c5c40: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5c3c) {
            ctx->pc = 0x2C5A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5a60;
        }
    }
    ctx->pc = 0x2C5C44u;
label_2c5c44:
    // 0x2c5c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c5c48:
    // 0x2c5c48: 0xae420078  sw          $v0, 0x78($s2)
    ctx->pc = 0x2c5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 2));
label_2c5c4c:
    // 0x2c5c4c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c5c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2c5c50:
    // 0x2c5c50: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2c5c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2c5c54:
    // 0x2c5c54: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2c5c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2c5c58:
    // 0x2c5c58: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2c5c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c5c5c:
    // 0x2c5c5c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2c5c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c5c60:
    // 0x2c5c60: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2c5c60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c5c64:
    // 0x2c5c64: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2c5c64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c5c68:
    // 0x2c5c68: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2c5c68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c5c6c:
    // 0x2c5c6c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c5c6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c5c70:
    // 0x2c5c70: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2c5c70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c5c74:
    // 0x2c5c74: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2c5c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2c5c78:
    // 0x2c5c78: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2c5c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c5c7c:
    // 0x2c5c7c: 0x3e00008  jr          $ra
label_2c5c80:
    if (ctx->pc == 0x2C5C80u) {
        ctx->pc = 0x2C5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C7Cu;
        // 0x2c5c80: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C5C84u;
        goto label_2c5c84;
    }
    ctx->pc = 0x2C5C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5C7Cu;
        // 0x2c5c80: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5C84u;
label_2c5c84:
    // 0x2c5c84: 0x0  nop
    ctx->pc = 0x2c5c84u;
    // NOP
    ctx->pc = 0x2c5c88u;
}
