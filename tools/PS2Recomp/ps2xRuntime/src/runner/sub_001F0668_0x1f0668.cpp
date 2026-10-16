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

// Function: sub_001F0668
// Address: 0x1f0668 - 0x1f0b78
void sub_001F0668_0x1f0668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0668_0x1f0668");
#endif

    switch (ctx->pc) {
        case 0x1f0668u: goto label_1f0668;
        case 0x1f066cu: goto label_1f066c;
        case 0x1f0670u: goto label_1f0670;
        case 0x1f0674u: goto label_1f0674;
        case 0x1f0678u: goto label_1f0678;
        case 0x1f067cu: goto label_1f067c;
        case 0x1f0680u: goto label_1f0680;
        case 0x1f0684u: goto label_1f0684;
        case 0x1f0688u: goto label_1f0688;
        case 0x1f068cu: goto label_1f068c;
        case 0x1f0690u: goto label_1f0690;
        case 0x1f0694u: goto label_1f0694;
        case 0x1f0698u: goto label_1f0698;
        case 0x1f069cu: goto label_1f069c;
        case 0x1f06a0u: goto label_1f06a0;
        case 0x1f06a4u: goto label_1f06a4;
        case 0x1f06a8u: goto label_1f06a8;
        case 0x1f06acu: goto label_1f06ac;
        case 0x1f06b0u: goto label_1f06b0;
        case 0x1f06b4u: goto label_1f06b4;
        case 0x1f06b8u: goto label_1f06b8;
        case 0x1f06bcu: goto label_1f06bc;
        case 0x1f06c0u: goto label_1f06c0;
        case 0x1f06c4u: goto label_1f06c4;
        case 0x1f06c8u: goto label_1f06c8;
        case 0x1f06ccu: goto label_1f06cc;
        case 0x1f06d0u: goto label_1f06d0;
        case 0x1f06d4u: goto label_1f06d4;
        case 0x1f06d8u: goto label_1f06d8;
        case 0x1f06dcu: goto label_1f06dc;
        case 0x1f06e0u: goto label_1f06e0;
        case 0x1f06e4u: goto label_1f06e4;
        case 0x1f06e8u: goto label_1f06e8;
        case 0x1f06ecu: goto label_1f06ec;
        case 0x1f06f0u: goto label_1f06f0;
        case 0x1f06f4u: goto label_1f06f4;
        case 0x1f06f8u: goto label_1f06f8;
        case 0x1f06fcu: goto label_1f06fc;
        case 0x1f0700u: goto label_1f0700;
        case 0x1f0704u: goto label_1f0704;
        case 0x1f0708u: goto label_1f0708;
        case 0x1f070cu: goto label_1f070c;
        case 0x1f0710u: goto label_1f0710;
        case 0x1f0714u: goto label_1f0714;
        case 0x1f0718u: goto label_1f0718;
        case 0x1f071cu: goto label_1f071c;
        case 0x1f0720u: goto label_1f0720;
        case 0x1f0724u: goto label_1f0724;
        case 0x1f0728u: goto label_1f0728;
        case 0x1f072cu: goto label_1f072c;
        case 0x1f0730u: goto label_1f0730;
        case 0x1f0734u: goto label_1f0734;
        case 0x1f0738u: goto label_1f0738;
        case 0x1f073cu: goto label_1f073c;
        case 0x1f0740u: goto label_1f0740;
        case 0x1f0744u: goto label_1f0744;
        case 0x1f0748u: goto label_1f0748;
        case 0x1f074cu: goto label_1f074c;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f0754u: goto label_1f0754;
        case 0x1f0758u: goto label_1f0758;
        case 0x1f075cu: goto label_1f075c;
        case 0x1f0760u: goto label_1f0760;
        case 0x1f0764u: goto label_1f0764;
        case 0x1f0768u: goto label_1f0768;
        case 0x1f076cu: goto label_1f076c;
        case 0x1f0770u: goto label_1f0770;
        case 0x1f0774u: goto label_1f0774;
        case 0x1f0778u: goto label_1f0778;
        case 0x1f077cu: goto label_1f077c;
        case 0x1f0780u: goto label_1f0780;
        case 0x1f0784u: goto label_1f0784;
        case 0x1f0788u: goto label_1f0788;
        case 0x1f078cu: goto label_1f078c;
        case 0x1f0790u: goto label_1f0790;
        case 0x1f0794u: goto label_1f0794;
        case 0x1f0798u: goto label_1f0798;
        case 0x1f079cu: goto label_1f079c;
        case 0x1f07a0u: goto label_1f07a0;
        case 0x1f07a4u: goto label_1f07a4;
        case 0x1f07a8u: goto label_1f07a8;
        case 0x1f07acu: goto label_1f07ac;
        case 0x1f07b0u: goto label_1f07b0;
        case 0x1f07b4u: goto label_1f07b4;
        case 0x1f07b8u: goto label_1f07b8;
        case 0x1f07bcu: goto label_1f07bc;
        case 0x1f07c0u: goto label_1f07c0;
        case 0x1f07c4u: goto label_1f07c4;
        case 0x1f07c8u: goto label_1f07c8;
        case 0x1f07ccu: goto label_1f07cc;
        case 0x1f07d0u: goto label_1f07d0;
        case 0x1f07d4u: goto label_1f07d4;
        case 0x1f07d8u: goto label_1f07d8;
        case 0x1f07dcu: goto label_1f07dc;
        case 0x1f07e0u: goto label_1f07e0;
        case 0x1f07e4u: goto label_1f07e4;
        case 0x1f07e8u: goto label_1f07e8;
        case 0x1f07ecu: goto label_1f07ec;
        case 0x1f07f0u: goto label_1f07f0;
        case 0x1f07f4u: goto label_1f07f4;
        case 0x1f07f8u: goto label_1f07f8;
        case 0x1f07fcu: goto label_1f07fc;
        case 0x1f0800u: goto label_1f0800;
        case 0x1f0804u: goto label_1f0804;
        case 0x1f0808u: goto label_1f0808;
        case 0x1f080cu: goto label_1f080c;
        case 0x1f0810u: goto label_1f0810;
        case 0x1f0814u: goto label_1f0814;
        case 0x1f0818u: goto label_1f0818;
        case 0x1f081cu: goto label_1f081c;
        case 0x1f0820u: goto label_1f0820;
        case 0x1f0824u: goto label_1f0824;
        case 0x1f0828u: goto label_1f0828;
        case 0x1f082cu: goto label_1f082c;
        case 0x1f0830u: goto label_1f0830;
        case 0x1f0834u: goto label_1f0834;
        case 0x1f0838u: goto label_1f0838;
        case 0x1f083cu: goto label_1f083c;
        case 0x1f0840u: goto label_1f0840;
        case 0x1f0844u: goto label_1f0844;
        case 0x1f0848u: goto label_1f0848;
        case 0x1f084cu: goto label_1f084c;
        case 0x1f0850u: goto label_1f0850;
        case 0x1f0854u: goto label_1f0854;
        case 0x1f0858u: goto label_1f0858;
        case 0x1f085cu: goto label_1f085c;
        case 0x1f0860u: goto label_1f0860;
        case 0x1f0864u: goto label_1f0864;
        case 0x1f0868u: goto label_1f0868;
        case 0x1f086cu: goto label_1f086c;
        case 0x1f0870u: goto label_1f0870;
        case 0x1f0874u: goto label_1f0874;
        case 0x1f0878u: goto label_1f0878;
        case 0x1f087cu: goto label_1f087c;
        case 0x1f0880u: goto label_1f0880;
        case 0x1f0884u: goto label_1f0884;
        case 0x1f0888u: goto label_1f0888;
        case 0x1f088cu: goto label_1f088c;
        case 0x1f0890u: goto label_1f0890;
        case 0x1f0894u: goto label_1f0894;
        case 0x1f0898u: goto label_1f0898;
        case 0x1f089cu: goto label_1f089c;
        case 0x1f08a0u: goto label_1f08a0;
        case 0x1f08a4u: goto label_1f08a4;
        case 0x1f08a8u: goto label_1f08a8;
        case 0x1f08acu: goto label_1f08ac;
        case 0x1f08b0u: goto label_1f08b0;
        case 0x1f08b4u: goto label_1f08b4;
        case 0x1f08b8u: goto label_1f08b8;
        case 0x1f08bcu: goto label_1f08bc;
        case 0x1f08c0u: goto label_1f08c0;
        case 0x1f08c4u: goto label_1f08c4;
        case 0x1f08c8u: goto label_1f08c8;
        case 0x1f08ccu: goto label_1f08cc;
        case 0x1f08d0u: goto label_1f08d0;
        case 0x1f08d4u: goto label_1f08d4;
        case 0x1f08d8u: goto label_1f08d8;
        case 0x1f08dcu: goto label_1f08dc;
        case 0x1f08e0u: goto label_1f08e0;
        case 0x1f08e4u: goto label_1f08e4;
        case 0x1f08e8u: goto label_1f08e8;
        case 0x1f08ecu: goto label_1f08ec;
        case 0x1f08f0u: goto label_1f08f0;
        case 0x1f08f4u: goto label_1f08f4;
        case 0x1f08f8u: goto label_1f08f8;
        case 0x1f08fcu: goto label_1f08fc;
        case 0x1f0900u: goto label_1f0900;
        case 0x1f0904u: goto label_1f0904;
        case 0x1f0908u: goto label_1f0908;
        case 0x1f090cu: goto label_1f090c;
        case 0x1f0910u: goto label_1f0910;
        case 0x1f0914u: goto label_1f0914;
        case 0x1f0918u: goto label_1f0918;
        case 0x1f091cu: goto label_1f091c;
        case 0x1f0920u: goto label_1f0920;
        case 0x1f0924u: goto label_1f0924;
        case 0x1f0928u: goto label_1f0928;
        case 0x1f092cu: goto label_1f092c;
        case 0x1f0930u: goto label_1f0930;
        case 0x1f0934u: goto label_1f0934;
        case 0x1f0938u: goto label_1f0938;
        case 0x1f093cu: goto label_1f093c;
        case 0x1f0940u: goto label_1f0940;
        case 0x1f0944u: goto label_1f0944;
        case 0x1f0948u: goto label_1f0948;
        case 0x1f094cu: goto label_1f094c;
        case 0x1f0950u: goto label_1f0950;
        case 0x1f0954u: goto label_1f0954;
        case 0x1f0958u: goto label_1f0958;
        case 0x1f095cu: goto label_1f095c;
        case 0x1f0960u: goto label_1f0960;
        case 0x1f0964u: goto label_1f0964;
        case 0x1f0968u: goto label_1f0968;
        case 0x1f096cu: goto label_1f096c;
        case 0x1f0970u: goto label_1f0970;
        case 0x1f0974u: goto label_1f0974;
        case 0x1f0978u: goto label_1f0978;
        case 0x1f097cu: goto label_1f097c;
        case 0x1f0980u: goto label_1f0980;
        case 0x1f0984u: goto label_1f0984;
        case 0x1f0988u: goto label_1f0988;
        case 0x1f098cu: goto label_1f098c;
        case 0x1f0990u: goto label_1f0990;
        case 0x1f0994u: goto label_1f0994;
        case 0x1f0998u: goto label_1f0998;
        case 0x1f099cu: goto label_1f099c;
        case 0x1f09a0u: goto label_1f09a0;
        case 0x1f09a4u: goto label_1f09a4;
        case 0x1f09a8u: goto label_1f09a8;
        case 0x1f09acu: goto label_1f09ac;
        case 0x1f09b0u: goto label_1f09b0;
        case 0x1f09b4u: goto label_1f09b4;
        case 0x1f09b8u: goto label_1f09b8;
        case 0x1f09bcu: goto label_1f09bc;
        case 0x1f09c0u: goto label_1f09c0;
        case 0x1f09c4u: goto label_1f09c4;
        case 0x1f09c8u: goto label_1f09c8;
        case 0x1f09ccu: goto label_1f09cc;
        case 0x1f09d0u: goto label_1f09d0;
        case 0x1f09d4u: goto label_1f09d4;
        case 0x1f09d8u: goto label_1f09d8;
        case 0x1f09dcu: goto label_1f09dc;
        case 0x1f09e0u: goto label_1f09e0;
        case 0x1f09e4u: goto label_1f09e4;
        case 0x1f09e8u: goto label_1f09e8;
        case 0x1f09ecu: goto label_1f09ec;
        case 0x1f09f0u: goto label_1f09f0;
        case 0x1f09f4u: goto label_1f09f4;
        case 0x1f09f8u: goto label_1f09f8;
        case 0x1f09fcu: goto label_1f09fc;
        case 0x1f0a00u: goto label_1f0a00;
        case 0x1f0a04u: goto label_1f0a04;
        case 0x1f0a08u: goto label_1f0a08;
        case 0x1f0a0cu: goto label_1f0a0c;
        case 0x1f0a10u: goto label_1f0a10;
        case 0x1f0a14u: goto label_1f0a14;
        case 0x1f0a18u: goto label_1f0a18;
        case 0x1f0a1cu: goto label_1f0a1c;
        case 0x1f0a20u: goto label_1f0a20;
        case 0x1f0a24u: goto label_1f0a24;
        case 0x1f0a28u: goto label_1f0a28;
        case 0x1f0a2cu: goto label_1f0a2c;
        case 0x1f0a30u: goto label_1f0a30;
        case 0x1f0a34u: goto label_1f0a34;
        case 0x1f0a38u: goto label_1f0a38;
        case 0x1f0a3cu: goto label_1f0a3c;
        case 0x1f0a40u: goto label_1f0a40;
        case 0x1f0a44u: goto label_1f0a44;
        case 0x1f0a48u: goto label_1f0a48;
        case 0x1f0a4cu: goto label_1f0a4c;
        case 0x1f0a50u: goto label_1f0a50;
        case 0x1f0a54u: goto label_1f0a54;
        case 0x1f0a58u: goto label_1f0a58;
        case 0x1f0a5cu: goto label_1f0a5c;
        case 0x1f0a60u: goto label_1f0a60;
        case 0x1f0a64u: goto label_1f0a64;
        case 0x1f0a68u: goto label_1f0a68;
        case 0x1f0a6cu: goto label_1f0a6c;
        case 0x1f0a70u: goto label_1f0a70;
        case 0x1f0a74u: goto label_1f0a74;
        case 0x1f0a78u: goto label_1f0a78;
        case 0x1f0a7cu: goto label_1f0a7c;
        case 0x1f0a80u: goto label_1f0a80;
        case 0x1f0a84u: goto label_1f0a84;
        case 0x1f0a88u: goto label_1f0a88;
        case 0x1f0a8cu: goto label_1f0a8c;
        case 0x1f0a90u: goto label_1f0a90;
        case 0x1f0a94u: goto label_1f0a94;
        case 0x1f0a98u: goto label_1f0a98;
        case 0x1f0a9cu: goto label_1f0a9c;
        case 0x1f0aa0u: goto label_1f0aa0;
        case 0x1f0aa4u: goto label_1f0aa4;
        case 0x1f0aa8u: goto label_1f0aa8;
        case 0x1f0aacu: goto label_1f0aac;
        case 0x1f0ab0u: goto label_1f0ab0;
        case 0x1f0ab4u: goto label_1f0ab4;
        case 0x1f0ab8u: goto label_1f0ab8;
        case 0x1f0abcu: goto label_1f0abc;
        case 0x1f0ac0u: goto label_1f0ac0;
        case 0x1f0ac4u: goto label_1f0ac4;
        case 0x1f0ac8u: goto label_1f0ac8;
        case 0x1f0accu: goto label_1f0acc;
        case 0x1f0ad0u: goto label_1f0ad0;
        case 0x1f0ad4u: goto label_1f0ad4;
        case 0x1f0ad8u: goto label_1f0ad8;
        case 0x1f0adcu: goto label_1f0adc;
        case 0x1f0ae0u: goto label_1f0ae0;
        case 0x1f0ae4u: goto label_1f0ae4;
        case 0x1f0ae8u: goto label_1f0ae8;
        case 0x1f0aecu: goto label_1f0aec;
        case 0x1f0af0u: goto label_1f0af0;
        case 0x1f0af4u: goto label_1f0af4;
        case 0x1f0af8u: goto label_1f0af8;
        case 0x1f0afcu: goto label_1f0afc;
        case 0x1f0b00u: goto label_1f0b00;
        case 0x1f0b04u: goto label_1f0b04;
        case 0x1f0b08u: goto label_1f0b08;
        case 0x1f0b0cu: goto label_1f0b0c;
        case 0x1f0b10u: goto label_1f0b10;
        case 0x1f0b14u: goto label_1f0b14;
        case 0x1f0b18u: goto label_1f0b18;
        case 0x1f0b1cu: goto label_1f0b1c;
        case 0x1f0b20u: goto label_1f0b20;
        case 0x1f0b24u: goto label_1f0b24;
        case 0x1f0b28u: goto label_1f0b28;
        case 0x1f0b2cu: goto label_1f0b2c;
        case 0x1f0b30u: goto label_1f0b30;
        case 0x1f0b34u: goto label_1f0b34;
        case 0x1f0b38u: goto label_1f0b38;
        case 0x1f0b3cu: goto label_1f0b3c;
        case 0x1f0b40u: goto label_1f0b40;
        case 0x1f0b44u: goto label_1f0b44;
        case 0x1f0b48u: goto label_1f0b48;
        case 0x1f0b4cu: goto label_1f0b4c;
        case 0x1f0b50u: goto label_1f0b50;
        case 0x1f0b54u: goto label_1f0b54;
        case 0x1f0b58u: goto label_1f0b58;
        case 0x1f0b5cu: goto label_1f0b5c;
        case 0x1f0b60u: goto label_1f0b60;
        case 0x1f0b64u: goto label_1f0b64;
        case 0x1f0b68u: goto label_1f0b68;
        case 0x1f0b6cu: goto label_1f0b6c;
        case 0x1f0b70u: goto label_1f0b70;
        case 0x1f0b74u: goto label_1f0b74;
        default: break;
    }

    ctx->pc = 0x1f0668u;

label_1f0668:
    // 0x1f0668: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1f0668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_1f066c:
    // 0x1f066c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1f066cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1f0670:
    // 0x1f0670: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1f0670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_1f0674:
    // 0x1f0674: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1f0674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_1f0678:
    // 0x1f0678: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f0678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f067c:
    // 0x1f067c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f067cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f0680:
    // 0x1f0680: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x1f0680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_1f0684:
    // 0x1f0684: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1f0684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_1f0688:
    // 0x1f0688: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1f0688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_1f068c:
    // 0x1f068c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1f068cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_1f0690:
    // 0x1f0690: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1f0690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_1f0694:
    // 0x1f0694: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1f0694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_1f0698:
    // 0x1f0698: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1f0698u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_1f069c:
    // 0x1f069c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1f069cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_1f06a0:
    // 0x1f06a0: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1f06a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_1f06a4:
    // 0x1f06a4: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1f06a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_1f06a8:
    // 0x1f06a8: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1f06a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_1f06ac:
    // 0x1f06ac: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f06acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1f06b0:
    // 0x1f06b0: 0xe7bd0178  swc1        $f29, 0x178($sp)
    ctx->pc = 0x1f06b0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_1f06b4:
    // 0x1f06b4: 0xe7bc0170  swc1        $f28, 0x170($sp)
    ctx->pc = 0x1f06b4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_1f06b8:
    // 0x1f06b8: 0xe7bb0168  swc1        $f27, 0x168($sp)
    ctx->pc = 0x1f06b8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_1f06bc:
    // 0x1f06bc: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x1f06bcu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_1f06c0:
    // 0x1f06c0: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x1f06c0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_1f06c4:
    // 0x1f06c4: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x1f06c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_1f06c8:
    // 0x1f06c8: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1f06c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1f06cc:
    // 0x1f06cc: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1f06ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1f06d0:
    // 0x1f06d0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1f06d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1f06d4:
    // 0x1f06d4: 0x40f809  jalr        $v0
label_1f06d8:
    if (ctx->pc == 0x1F06D8u) {
        ctx->pc = 0x1F06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06D4u;
        // 0x1f06d8: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F06DCu;
        goto label_1f06dc;
    }
    ctx->pc = 0x1F06D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F06DCu);
        ctx->pc = 0x1F06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F06D4u;
        // 0x1f06d8: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F06D4u, 0x1F06DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F06DCu;
label_1f06dc:
    // 0x1f06dc: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x1f06dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_1f06e0:
    // 0x1f06e0: 0x2443007f  addiu       $v1, $v0, 0x7F
    ctx->pc = 0x1f06e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_1f06e4:
    // 0x1f06e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f06e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_1f06e8:
    // 0x1f06e8: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x1f06e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_1f06ec:
    // 0x1f06ec: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x1f06ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_1f06f0:
    // 0x1f06f0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1f06f4:
    // 0x1f06f4: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1f06f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1f06f8:
    // 0x1f06f8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1f06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1f06fc:
    // 0x1f06fc: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x1f06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_1f0700:
    // 0x1f0700: 0xac40e854  sw          $zero, -0x17AC($v0)
    ctx->pc = 0x1f0700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961236), GPR_U32(ctx, 0));
label_1f0704:
    // 0x1f0704: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x1f0704u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_1f0708:
    // 0x1f0708: 0xc091e14  jal         func_247850
label_1f070c:
    if (ctx->pc == 0x1F070Cu) {
        ctx->pc = 0x1F070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0708u;
        // 0x1f070c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0710u;
        goto label_1f0710;
    }
    ctx->pc = 0x1F0708u;
    SET_GPR_U32(ctx, 31, 0x1F0710u);
    ctx->pc = 0x1F070Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0708u;
    // 0x1f070c: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247850u, 0x1F0708u, 0x1F0710u)) {
        return;
    }
    ctx->pc = 0x1F0710u;
label_1f0710:
    // 0x1f0710: 0x3c04000a  lui         $a0, 0xA
    ctx->pc = 0x1f0710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10 << 16));
label_1f0714:
    // 0x1f0714: 0xae62001c  sw          $v0, 0x1C($s3)
    ctx->pc = 0x1f0714u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
label_1f0718:
    // 0x1f0718: 0xc091e18  jal         func_247860
label_1f071c:
    if (ctx->pc == 0x1F071Cu) {
        ctx->pc = 0x1F071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0718u;
        // 0x1f071c: 0x34848000  ori         $a0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0720u;
        goto label_1f0720;
    }
    ctx->pc = 0x1F0718u;
    SET_GPR_U32(ctx, 31, 0x1F0720u);
    ctx->pc = 0x1F071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0718u;
    // 0x1f071c: 0x34848000  ori         $a0, $a0, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247860u, 0x1F0718u, 0x1F0720u)) {
        return;
    }
    ctx->pc = 0x1F0720u;
label_1f0720:
    // 0x1f0720: 0x8e24e858  lw          $a0, -0x17A8($s1)
    ctx->pc = 0x1f0720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961240)));
label_1f0724:
    // 0x1f0724: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1f0728:
    if (ctx->pc == 0x1F0728u) {
        ctx->pc = 0x1F072Cu;
        goto label_1f072c;
    }
    ctx->pc = 0x1F0724u;
    {
        const bool branch_taken_0x1f0724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0724) {
            ctx->pc = 0x1F0750u;
            goto label_1f0750;
        }
    }
    ctx->pc = 0x1F072Cu;
label_1f072c:
    // 0x1f072c: 0xc091a88  jal         func_246A20
label_1f0730:
    if (ctx->pc == 0x1F0730u) {
        ctx->pc = 0x1F0734u;
        goto label_1f0734;
    }
    ctx->pc = 0x1F072Cu;
    SET_GPR_U32(ctx, 31, 0x1F0734u);
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x1F072Cu, 0x1F0734u)) {
        return;
    }
    ctx->pc = 0x1F0734u;
label_1f0734:
    // 0x1f0734: 0x8e24e858  lw          $a0, -0x17A8($s1)
    ctx->pc = 0x1f0734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961240)));
label_1f0738:
    // 0x1f0738: 0xc091abe  jal         func_246AF8
label_1f073c:
    if (ctx->pc == 0x1F073Cu) {
        ctx->pc = 0x1F073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0738u;
        // 0x1f073c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0740u;
        goto label_1f0740;
    }
    ctx->pc = 0x1F0738u;
    SET_GPR_U32(ctx, 31, 0x1F0740u);
    ctx->pc = 0x1F073Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0738u;
    // 0x1f073c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x1F0738u, 0x1F0740u)) {
        return;
    }
    ctx->pc = 0x1F0740u;
label_1f0740:
    // 0x1f0740: 0x8e24e858  lw          $a0, -0x17A8($s1)
    ctx->pc = 0x1f0740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961240)));
label_1f0744:
    // 0x1f0744: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x1f0744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_1f0748:
    // 0x1f0748: 0xc091de2  jal         func_247788
label_1f074c:
    if (ctx->pc == 0x1F074Cu) {
        ctx->pc = 0x1F074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0748u;
        // 0x1f074c: 0x26660028  addiu       $a2, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0750u;
        goto label_1f0750;
    }
    ctx->pc = 0x1F0748u;
    SET_GPR_U32(ctx, 31, 0x1F0750u);
    ctx->pc = 0x1F074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0748u;
    // 0x1f074c: 0x26660028  addiu       $a2, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x1F0748u, 0x1F0750u)) {
        return;
    }
    ctx->pc = 0x1F0750u;
label_1f0750:
    // 0x1f0750: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1f0750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1f0754:
    // 0x1f0754: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1f0754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_1f0758:
    // 0x1f0758: 0xc0c8568  jal         func_3215A0
label_1f075c:
    if (ctx->pc == 0x1F075Cu) {
        ctx->pc = 0x1F075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0758u;
        // 0x1f075c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0760u;
        goto label_1f0760;
    }
    ctx->pc = 0x1F0758u;
    SET_GPR_U32(ctx, 31, 0x1F0760u);
    ctx->pc = 0x1F075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0758u;
    // 0x1f075c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3215A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3215A0u, 0x1F0758u, 0x1F0760u)) {
        return;
    }
    ctx->pc = 0x1F0760u;
label_1f0760:
    // 0x1f0760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f0764:
    // 0x1f0764: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1f0764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_1f0768:
    // 0x1f0768: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1f0768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1f076c:
    // 0x1f076c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1f076cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1f0770:
    // 0x1f0770: 0xdc5034c8  ld          $s0, 0x34C8($v0)
    ctx->pc = 0x1f0770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 13512)));
label_1f0774:
    // 0x1f0774: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1f0774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1f0778:
    // 0x1f0778: 0xdc7234c0  ld          $s2, 0x34C0($v1)
    ctx->pc = 0x1f0778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 13504)));
label_1f077c:
    // 0x1f077c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f077cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f0780:
    // 0x1f0780: 0x108c3b  dsra        $s1, $s0, 16
    ctx->pc = 0x1f0780u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 16) >> 16);
label_1f0784:
    // 0x1f0784: 0xacb3e850  sw          $s3, -0x17B0($a1)
    ctx->pc = 0x1f0784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294961232), GPR_U32(ctx, 19));
label_1f0788:
    // 0x1f0788: 0x321001ff  andi        $s0, $s0, 0x1FF
    ctx->pc = 0x1f0788u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)511);
label_1f078c:
    // 0x1f078c: 0x3231003f  andi        $s1, $s1, 0x3F
    ctx->pc = 0x1f078cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)63);
label_1f0790:
    // 0x1f0790: 0x108178  dsll        $s0, $s0, 5
    ctx->pc = 0x1f0790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 5);
label_1f0794:
    // 0x1f0794: 0xc079cfa  jal         func_1E73E8
label_1f0798:
    if (ctx->pc == 0x1F0798u) {
        ctx->pc = 0x1F0798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0794u;
        // 0x1f0798: 0x325201ff  andi        $s2, $s2, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F079Cu;
        goto label_1f079c;
    }
    ctx->pc = 0x1F0794u;
    SET_GPR_U32(ctx, 31, 0x1F079Cu);
    ctx->pc = 0x1F0798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0794u;
    // 0x1f0798: 0x325201ff  andi        $s2, $s2, 0x1FF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)511);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1F0794u, 0x1F079Cu)) {
        return;
    }
    ctx->pc = 0x1F079Cu;
label_1f079c:
    // 0x1f079c: 0x3c013f95  lui         $at, 0x3F95
    ctx->pc = 0x1f079cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16277 << 16));
label_1f07a0:
    // 0x1f07a0: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x1f07a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
label_1f07a4:
    // 0x1f07a4: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1f07a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_1f07a8:
    // 0x1f07a8: 0x111438  dsll        $v0, $s1, 16
    ctx->pc = 0x1f07a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << 16);
label_1f07ac:
    // 0x1f07ac: 0x12917c  dsll32      $s2, $s2, 5
    ctx->pc = 0x1f07acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 5));
label_1f07b0:
    // 0x1f07b0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1f07b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_1f07b4:
    // 0x1f07b4: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x1f07b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
label_1f07b8:
    // 0x1f07b8: 0x2128025  or          $s0, $s0, $s2
    ctx->pc = 0x1f07b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 18));
label_1f07bc:
    // 0x1f07bc: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1f07bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1f07c0:
    // 0x1f07c0: 0xc079d0e  jal         func_1E7438
label_1f07c4:
    if (ctx->pc == 0x1F07C4u) {
        ctx->pc = 0x1F07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07C0u;
        // 0x1f07c4: 0x2112825  or          $a1, $s0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07C8u;
        goto label_1f07c8;
    }
    ctx->pc = 0x1F07C0u;
    SET_GPR_U32(ctx, 31, 0x1F07C8u);
    ctx->pc = 0x1F07C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07C0u;
    // 0x1f07c4: 0x2112825  or          $a1, $s0, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F07C0u, 0x1F07C8u)) {
        return;
    }
    ctx->pc = 0x1F07C8u;
label_1f07c8:
    // 0x1f07c8: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x1f07c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1f07cc:
    // 0x1f07cc: 0xc079d0e  jal         func_1E7438
label_1f07d0:
    if (ctx->pc == 0x1F07D0u) {
        ctx->pc = 0x1F07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07CCu;
        // 0x1f07d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07D4u;
        goto label_1f07d4;
    }
    ctx->pc = 0x1F07CCu;
    SET_GPR_U32(ctx, 31, 0x1F07D4u);
    ctx->pc = 0x1F07D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07CCu;
    // 0x1f07d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F07CCu, 0x1F07D4u)) {
        return;
    }
    ctx->pc = 0x1F07D4u;
label_1f07d4:
    // 0x1f07d4: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x1f07d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_1f07d8:
    // 0x1f07d8: 0x52e78  dsll        $a1, $a1, 25
    ctx->pc = 0x1f07d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 25);
label_1f07dc:
    // 0x1f07dc: 0x34a50200  ori         $a1, $a1, 0x200
    ctx->pc = 0x1f07dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)512);
label_1f07e0:
    // 0x1f07e0: 0xc079d0e  jal         func_1E7438
label_1f07e4:
    if (ctx->pc == 0x1F07E4u) {
        ctx->pc = 0x1F07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07E0u;
        // 0x1f07e4: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07E8u;
        goto label_1f07e8;
    }
    ctx->pc = 0x1F07E0u;
    SET_GPR_U32(ctx, 31, 0x1F07E8u);
    ctx->pc = 0x1F07E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07E0u;
    // 0x1f07e4: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F07E0u, 0x1F07E8u)) {
        return;
    }
    ctx->pc = 0x1F07E8u;
label_1f07e8:
    // 0x1f07e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f07e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f07ec:
    // 0x1f07ec: 0xc079d0e  jal         func_1E7438
label_1f07f0:
    if (ctx->pc == 0x1F07F0u) {
        ctx->pc = 0x1F07F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07ECu;
        // 0x1f07f0: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07F4u;
        goto label_1f07f4;
    }
    ctx->pc = 0x1F07ECu;
    SET_GPR_U32(ctx, 31, 0x1F07F4u);
    ctx->pc = 0x1F07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07ECu;
    // 0x1f07f0: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1F07ECu, 0x1F07F4u)) {
        return;
    }
    ctx->pc = 0x1F07F4u;
label_1f07f4:
    // 0x1f07f4: 0xc079ca0  jal         func_1E7280
label_1f07f8:
    if (ctx->pc == 0x1F07F8u) {
        ctx->pc = 0x1F07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07F4u;
        // 0x1f07f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F07FCu;
        goto label_1f07fc;
    }
    ctx->pc = 0x1F07F4u;
    SET_GPR_U32(ctx, 31, 0x1F07FCu);
    ctx->pc = 0x1F07F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F07F4u;
    // 0x1f07f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1F07F4u, 0x1F07FCu)) {
        return;
    }
    ctx->pc = 0x1F07FCu;
label_1f07fc:
    // 0x1f07fc: 0xc0791f8  jal         func_1E47E0
label_1f0800:
    if (ctx->pc == 0x1F0800u) {
        ctx->pc = 0x1F0804u;
        goto label_1f0804;
    }
    ctx->pc = 0x1F07FCu;
    SET_GPR_U32(ctx, 31, 0x1F0804u);
    ctx->pc = 0x1E47E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E47E0u, 0x1F07FCu, 0x1F0804u)) {
        return;
    }
    ctx->pc = 0x1F0804u;
label_1f0804:
    // 0x1f0804: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1f0808:
    // 0x1f0808: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x1f0808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_1f080c:
    // 0x1f080c: 0x8c640198  lw          $a0, 0x198($v1)
    ctx->pc = 0x1f080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
label_1f0810:
    // 0x1f0810: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1f0814:
    if (ctx->pc == 0x1F0814u) {
        ctx->pc = 0x1F0818u;
        goto label_1f0818;
    }
    ctx->pc = 0x1F0810u;
    {
        const bool branch_taken_0x1f0810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0810) {
            ctx->pc = 0x1F0824u;
            goto label_1f0824;
        }
    }
    ctx->pc = 0x1F0818u;
label_1f0818:
    // 0x1f0818: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1f0818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1f081c:
    // 0x1f081c: 0x3421013b  ori         $at, $at, 0x13B
    ctx->pc = 0x1f081cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)315);
label_1f0820:
    // 0x1f0820: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1f0820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_1f0824:
    // 0x1f0824: 0xc0a074a  jal         func_281D28
label_1f0828:
    if (ctx->pc == 0x1F0828u) {
        ctx->pc = 0x1F082Cu;
        goto label_1f082c;
    }
    ctx->pc = 0x1F0824u;
    SET_GPR_U32(ctx, 31, 0x1F082Cu);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1F0824u, 0x1F082Cu)) {
        return;
    }
    ctx->pc = 0x1F082Cu;
label_1f082c:
    // 0x1f082c: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x1f082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
label_1f0830:
    // 0x1f0830: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_1f0834:
    if (ctx->pc == 0x1F0834u) {
        ctx->pc = 0x1F0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0830u;
        // 0x1f0834: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0838u;
        goto label_1f0838;
    }
    ctx->pc = 0x1F0830u;
    {
        const bool branch_taken_0x1f0830 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1F0834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0830u;
        // 0x1f0834: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0830) {
            ctx->pc = 0x1F084Cu;
            goto label_1f084c;
        }
    }
    ctx->pc = 0x1F0838u;
label_1f0838:
    // 0x1f0838: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f0838u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f083c:
    // 0x1f083c: 0x0  nop
    ctx->pc = 0x1f083cu;
    // NOP
label_1f0840:
    // 0x1f0840: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f0840u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f0844:
    // 0x1f0844: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f0848:
    if (ctx->pc == 0x1F0848u) {
        ctx->pc = 0x1F084Cu;
        goto label_1f084c;
    }
    ctx->pc = 0x1F0844u;
    {
        const bool branch_taken_0x1f0844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0844) {
            ctx->pc = 0x1F0864u;
            goto label_1f0864;
        }
    }
    ctx->pc = 0x1F084Cu;
label_1f084c:
    // 0x1f084c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1f084cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1f0850:
    // 0x1f0850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f0850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f0854:
    // 0x1f0854: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f0854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f0858:
    // 0x1f0858: 0x0  nop
    ctx->pc = 0x1f0858u;
    // NOP
label_1f085c:
    // 0x1f085c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f085cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f0860:
    // 0x1f0860: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1f0860u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1f0864:
    // 0x1f0864: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x1f0864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_1f0868:
    // 0x1f0868: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f086c:
    // 0x1f086c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1f0870:
    // 0x1f0870: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f0874:
    // 0x1f0874: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f0874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1f0878:
    // 0x1f0878: 0xc0a074a  jal         func_281D28
label_1f087c:
    if (ctx->pc == 0x1F087Cu) {
        ctx->pc = 0x1F087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0878u;
        // 0x1f087c: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0880u;
        goto label_1f0880;
    }
    ctx->pc = 0x1F0878u;
    SET_GPR_U32(ctx, 31, 0x1F0880u);
    ctx->pc = 0x1F087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0878u;
    // 0x1f087c: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1F0878u, 0x1F0880u)) {
        return;
    }
    ctx->pc = 0x1F0880u;
label_1f0880:
    // 0x1f0880: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x1f0880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
label_1f0884:
    // 0x1f0884: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_1f0888:
    if (ctx->pc == 0x1F0888u) {
        ctx->pc = 0x1F0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0884u;
        // 0x1f0888: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F088Cu;
        goto label_1f088c;
    }
    ctx->pc = 0x1F0884u;
    {
        const bool branch_taken_0x1f0884 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1F0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0884u;
        // 0x1f0888: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0884) {
            ctx->pc = 0x1F08A0u;
            goto label_1f08a0;
        }
    }
    ctx->pc = 0x1F088Cu;
label_1f088c:
    // 0x1f088c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f088cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f0890:
    // 0x1f0890: 0x0  nop
    ctx->pc = 0x1f0890u;
    // NOP
label_1f0894:
    // 0x1f0894: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f0894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f0898:
    // 0x1f0898: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f089c:
    if (ctx->pc == 0x1F089Cu) {
        ctx->pc = 0x1F08A0u;
        goto label_1f08a0;
    }
    ctx->pc = 0x1F0898u;
    {
        const bool branch_taken_0x1f0898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f0898) {
            ctx->pc = 0x1F08B8u;
            goto label_1f08b8;
        }
    }
    ctx->pc = 0x1F08A0u;
label_1f08a0:
    // 0x1f08a0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1f08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1f08a4:
    // 0x1f08a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f08a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f08a8:
    // 0x1f08a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f08a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f08ac:
    // 0x1f08ac: 0x0  nop
    ctx->pc = 0x1f08acu;
    // NOP
label_1f08b0:
    // 0x1f08b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f08b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f08b4:
    // 0x1f08b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1f08b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1f08b8:
    // 0x1f08b8: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x1f08b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_1f08bc:
    // 0x1f08bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f08bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f08c0:
    // 0x1f08c0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f08c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1f08c4:
    // 0x1f08c4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f08c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f08c8:
    // 0x1f08c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f08c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1f08cc:
    // 0x1f08cc: 0xc0a074a  jal         func_281D28
label_1f08d0:
    if (ctx->pc == 0x1F08D0u) {
        ctx->pc = 0x1F08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08CCu;
        // 0x1f08d0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08D4u;
        goto label_1f08d4;
    }
    ctx->pc = 0x1F08CCu;
    SET_GPR_U32(ctx, 31, 0x1F08D4u);
    ctx->pc = 0x1F08D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F08CCu;
    // 0x1f08d0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1F08CCu, 0x1F08D4u)) {
        return;
    }
    ctx->pc = 0x1F08D4u;
label_1f08d4:
    // 0x1f08d4: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x1f08d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
label_1f08d8:
    // 0x1f08d8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_1f08dc:
    if (ctx->pc == 0x1F08DCu) {
        ctx->pc = 0x1F08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08D8u;
        // 0x1f08dc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F08E0u;
        goto label_1f08e0;
    }
    ctx->pc = 0x1F08D8u;
    {
        const bool branch_taken_0x1f08d8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1F08DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F08D8u;
        // 0x1f08dc: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f08d8) {
            ctx->pc = 0x1F08F4u;
            goto label_1f08f4;
        }
    }
    ctx->pc = 0x1F08E0u;
label_1f08e0:
    // 0x1f08e0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1f08e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f08e4:
    // 0x1f08e4: 0x0  nop
    ctx->pc = 0x1f08e4u;
    // NOP
label_1f08e8:
    // 0x1f08e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f08e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f08ec:
    // 0x1f08ec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1f08f0:
    if (ctx->pc == 0x1F08F0u) {
        ctx->pc = 0x1F08F4u;
        goto label_1f08f4;
    }
    ctx->pc = 0x1F08ECu;
    {
        const bool branch_taken_0x1f08ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f08ec) {
            ctx->pc = 0x1F090Cu;
            goto label_1f090c;
        }
    }
    ctx->pc = 0x1F08F4u;
label_1f08f4:
    // 0x1f08f4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1f08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1f08f8:
    // 0x1f08f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f08f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1f08fc:
    // 0x1f08fc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1f08fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f0900:
    // 0x1f0900: 0x0  nop
    ctx->pc = 0x1f0900u;
    // NOP
label_1f0904:
    // 0x1f0904: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f0904u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1f0908:
    // 0x1f0908: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1f0908u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1f090c:
    // 0x1f090c: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x1f090cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
label_1f0910:
    // 0x1f0910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f0914:
    // 0x1f0914: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x1f0914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1f0918:
    // 0x1f0918: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f0918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_1f091c:
    // 0x1f091c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f091cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f0920:
    // 0x1f0920: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x1f0920u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f0924:
    // 0x1f0924: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1f0924u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1f0928:
    // 0x1f0928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f092c:
    // 0x1f092c: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1f092cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_1f0930:
    // 0x1f0930: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x1f0930u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1f0934:
    // 0x1f0934: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f0934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0938:
    // 0x1f0938: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f0938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_1f093c:
    // 0x1f093c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1f093cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1f0940:
    // 0x1f0940: 0x267e002e  addiu       $fp, $s3, 0x2E
    ctx->pc = 0x1f0940u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 46));
label_1f0944:
    // 0x1f0944: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x1f0944u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f0948:
    // 0x1f0948: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1f0948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
label_1f094c:
    // 0x1f094c: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1f094cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_1f0950:
    // 0x1f0950: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1f0950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_1f0954:
    // 0x1f0954: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1f0954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1f0958:
    // 0x1f0958: 0x26770030  addiu       $s7, $s3, 0x30
    ctx->pc = 0x1f0958u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_1f095c:
    // 0x1f095c: 0x26760038  addiu       $s6, $s3, 0x38
    ctx->pc = 0x1f095cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
label_1f0960:
    // 0x1f0960: 0x27b50054  addiu       $s5, $sp, 0x54
    ctx->pc = 0x1f0960u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_1f0964:
    // 0x1f0964: 0x0  nop
    ctx->pc = 0x1f0964u;
    // NOP
label_1f0968:
    // 0x1f0968: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1f0968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
label_1f096c:
    // 0x1f096c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f096cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f0970:
    // 0x1f0970: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f0970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1f0974:
    // 0x1f0974: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x1f0974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
label_1f0978:
    // 0x1f0978: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f0978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1f097c:
    // 0x1f097c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f0980:
    // 0x1f0980: 0x4601b580  add.s       $f22, $f22, $f1
    ctx->pc = 0x1f0980u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_1f0984:
    // 0x1f0984: 0x3c014007  lui         $at, 0x4007
    ctx->pc = 0x1f0984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16391 << 16));
label_1f0988:
    // 0x1f0988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f098c:
    // 0x1f098c: 0x3c013d49  lui         $at, 0x3D49
    ctx->pc = 0x1f098cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15689 << 16));
label_1f0990:
    // 0x1f0990: 0x34210fd0  ori         $at, $at, 0xFD0
    ctx->pc = 0x1f0990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4048);
label_1f0994:
    // 0x1f0994: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f0998:
    // 0x1f0998: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x1f0998u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_1f099c:
    // 0x1f099c: 0x246a1fa8  addiu       $t2, $v1, 0x1FA8
    ctx->pc = 0x1f099cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 8104));
label_1f09a0:
    // 0x1f09a0: 0x69470007  ldl         $a3, 0x7($t2)
    ctx->pc = 0x1f09a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1f09a4:
    // 0x1f09a4: 0x6d470000  ldr         $a3, 0x0($t2)
    ctx->pc = 0x1f09a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1f09a8:
    // 0x1f09a8: 0x8d480008  lw          $t0, 0x8($t2)
    ctx->pc = 0x1f09a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_1f09ac:
    // 0x1f09ac: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x1f09acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f09b0:
    // 0x1f09b0: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x1f09b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1f09b4:
    // 0x1f09b4: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x1f09b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
label_1f09b8:
    // 0x1f09b8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1f09b8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1f09bc:
    // 0x1f09bc: 0x4601c600  add.s       $f24, $f24, $f1
    ctx->pc = 0x1f09bcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_1f09c0:
    // 0x1f09c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f09c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f09c4:
    // 0x1f09c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f09c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f09c8:
    // 0x1f09c8: 0xc092e32  jal         func_24B8C8
label_1f09cc:
    if (ctx->pc == 0x1F09CCu) {
        ctx->pc = 0x1F09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09C8u;
        // 0x1f09cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09D0u;
        goto label_1f09d0;
    }
    ctx->pc = 0x1F09C8u;
    SET_GPR_U32(ctx, 31, 0x1F09D0u);
    ctx->pc = 0x1F09CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09C8u;
    // 0x1f09cc: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1F09C8u, 0x1F09D0u)) {
        return;
    }
    ctx->pc = 0x1F09D0u;
label_1f09d0:
    // 0x1f09d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f09d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f09d4:
    // 0x1f09d4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1f09d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1f09d8:
    // 0x1f09d8: 0xe7ba0044  swc1        $f26, 0x44($sp)
    ctx->pc = 0x1f09d8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1f09dc:
    // 0x1f09dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f09dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f09e0:
    // 0x1f09e0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f09e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1f09e4:
    // 0x1f09e4: 0xc092e32  jal         func_24B8C8
label_1f09e8:
    if (ctx->pc == 0x1F09E8u) {
        ctx->pc = 0x1F09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F09E4u;
        // 0x1f09e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F09ECu;
        goto label_1f09ec;
    }
    ctx->pc = 0x1F09E4u;
    SET_GPR_U32(ctx, 31, 0x1F09ECu);
    ctx->pc = 0x1F09E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F09E4u;
    // 0x1f09e8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1F09E4u, 0x1F09ECu)) {
        return;
    }
    ctx->pc = 0x1F09ECu;
label_1f09ec:
    // 0x1f09ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f09ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f09f0:
    // 0x1f09f0: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1f09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1f09f4:
    // 0x1f09f4: 0xe7ba0048  swc1        $f26, 0x48($sp)
    ctx->pc = 0x1f09f4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1f09f8:
    // 0x1f09f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f09f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1f09fc:
    // 0x1f09fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a00:
    // 0x1f0a00: 0xc092e32  jal         func_24B8C8
label_1f0a04:
    if (ctx->pc == 0x1F0A04u) {
        ctx->pc = 0x1F0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A00u;
        // 0x1f0a04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A08u;
        goto label_1f0a08;
    }
    ctx->pc = 0x1F0A00u;
    SET_GPR_U32(ctx, 31, 0x1F0A08u);
    ctx->pc = 0x1F0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A00u;
    // 0x1f0a04: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x1F0A00u, 0x1F0A08u)) {
        return;
    }
    ctx->pc = 0x1F0A08u;
label_1f0a08:
    // 0x1f0a08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1f0a0c:
    // 0x1f0a0c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1f0a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a10:
    // 0x1f0a10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f0a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a14:
    // 0x1f0a14: 0x2445e860  addiu       $a1, $v0, -0x17A0
    ctx->pc = 0x1f0a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
label_1f0a18:
    // 0x1f0a18: 0xc093afa  jal         func_24EBE8
label_1f0a1c:
    if (ctx->pc == 0x1F0A1Cu) {
        ctx->pc = 0x1F0A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A18u;
        // 0x1f0a1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A20u;
        goto label_1f0a20;
    }
    ctx->pc = 0x1F0A18u;
    SET_GPR_U32(ctx, 31, 0x1F0A20u);
    ctx->pc = 0x1F0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A18u;
    // 0x1f0a1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x1F0A18u, 0x1F0A20u)) {
        return;
    }
    ctx->pc = 0x1F0A20u;
label_1f0a20:
    // 0x1f0a20: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1f0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f0a24:
    // 0x1f0a24: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1f0a24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1f0a28:
    // 0x1f0a28: 0x2238018  mult        $s0, $s1, $v1
    ctx->pc = 0x1f0a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1f0a2c:
    // 0x1f0a2c: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x1f0a2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_1f0a30:
    // 0x1f0a30: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x1f0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_1f0a34:
    // 0x1f0a34: 0x3d08021  addu        $s0, $fp, $s0
    ctx->pc = 0x1f0a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_1f0a38:
    // 0x1f0a38: 0xc09b164  jal         func_26C590
label_1f0a3c:
    if (ctx->pc == 0x1F0A3Cu) {
        ctx->pc = 0x1F0A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0A38u;
        // 0x1f0a3c: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0A40u;
        goto label_1f0a40;
    }
    ctx->pc = 0x1F0A38u;
    SET_GPR_U32(ctx, 31, 0x1F0A40u);
    ctx->pc = 0x1F0A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0A38u;
    // 0x1f0a3c: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1F0A38u, 0x1F0A40u)) {
        return;
    }
    ctx->pc = 0x1F0A40u;
label_1f0a40:
    // 0x1f0a40: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1f0a40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_1f0a44:
    // 0x1f0a44: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x1f0a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1f0a48:
    // 0x1f0a48: 0x2281818  mult        $v1, $s1, $t0
    ctx->pc = 0x1f0a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f0a4c:
    // 0x1f0a4c: 0x26290001  addiu       $t1, $s1, 0x1
    ctx->pc = 0x1f0a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f0a50:
    // 0x1f0a50: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f0a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f0a54:
    // 0x1f0a54: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1f0a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f0a58:
    // 0x1f0a58: 0x46190000  add.s       $f0, $f0, $f25
    ctx->pc = 0x1f0a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_1f0a5c:
    // 0x1f0a5c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1f0a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1f0a60:
    // 0x1f0a60: 0x772821  addu        $a1, $v1, $s7
    ctx->pc = 0x1f0a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_1f0a64:
    // 0x1f0a64: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x1f0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_1f0a68:
    // 0x1f0a68: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0a68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f0a6c:
    // 0x1f0a6c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f0a6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1f0a70:
    // 0x1f0a70: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1f0a70u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f0a74:
    // 0x1f0a74: 0x0  nop
    ctx->pc = 0x1f0a74u;
    // NOP
label_1f0a78:
    // 0x1f0a78: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1f0a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f0a7c:
    // 0x1f0a7c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1f0a7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_1f0a80:
    // 0x1f0a80: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1f0a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0a84:
    // 0x1f0a84: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1f0a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1f0a88:
    // 0x1f0a88: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x1f0a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
label_1f0a8c:
    // 0x1f0a8c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x1f0a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_1f0a90:
    // 0x1f0a90: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x1f0a90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_1f0a94:
    // 0x1f0a94: 0x461b0842  mul.s       $f1, $f1, $f27
    ctx->pc = 0x1f0a94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
label_1f0a98:
    // 0x1f0a98: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x1f0a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
label_1f0a9c:
    // 0x1f0a9c: 0x461c0842  mul.s       $f1, $f1, $f28
    ctx->pc = 0x1f0a9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
label_1f0aa0:
    // 0x1f0aa0: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x1f0aa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
label_1f0aa4:
    // 0x1f0aa4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0aa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_1f0aa8:
    // 0x1f0aa8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1f0aa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1f0aac:
    // 0x1f0aac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f0aacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f0ab0:
    // 0x1f0ab0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f0ab0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1f0ab4:
    // 0x1f0ab4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1f0ab4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f0ab8:
    // 0x1f0ab8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1f0ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_1f0abc:
    // 0x1f0abc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1f0abcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1f0ac0:
    // 0x1f0ac0: 0x24421c00  addiu       $v0, $v0, 0x1C00
    ctx->pc = 0x1f0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
label_1f0ac4:
    // 0x1f0ac4: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x1f0ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f0ac8:
    // 0x1f0ac8: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1f0ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1f0acc:
    // 0x1f0acc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1f0accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1f0ad0:
    // 0x1f0ad0: 0x24421880  addiu       $v0, $v0, 0x1880
    ctx->pc = 0x1f0ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
label_1f0ad4:
    // 0x1f0ad4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1f0ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1f0ad8:
    // 0x1f0ad8: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_1f0adc:
    if (ctx->pc == 0x1F0ADCu) {
        ctx->pc = 0x1F0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD8u;
        // 0x1f0adc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AE0u;
        goto label_1f0ae0;
    }
    ctx->pc = 0x1F0AD8u;
    {
        const bool branch_taken_0x1f0ad8 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x1F0ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AD8u;
        // 0x1f0adc: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ad8) {
            ctx->pc = 0x1F0A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0a78;
        }
    }
    ctx->pc = 0x1F0AE0u;
label_1f0ae0:
    // 0x1f0ae0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1f0ae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1f0ae4:
    // 0x1f0ae4: 0x2a220200  slti        $v0, $s1, 0x200
    ctx->pc = 0x1f0ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)512) ? 1 : 0);
label_1f0ae8:
    // 0x1f0ae8: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_1f0aec:
    if (ctx->pc == 0x1F0AECu) {
        ctx->pc = 0x1F0AF0u;
        goto label_1f0af0;
    }
    ctx->pc = 0x1F0AE8u;
    {
        const bool branch_taken_0x1f0ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f0ae8) {
            ctx->pc = 0x1F0968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0968;
        }
    }
    ctx->pc = 0x1F0AF0u;
label_1f0af0:
    // 0x1f0af0: 0xc076204  jal         func_1D8810
label_1f0af4:
    if (ctx->pc == 0x1F0AF4u) {
        ctx->pc = 0x1F0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0AF0u;
        // 0x1f0af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0AF8u;
        goto label_1f0af8;
    }
    ctx->pc = 0x1F0AF0u;
    SET_GPR_U32(ctx, 31, 0x1F0AF8u);
    ctx->pc = 0x1F0AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0AF0u;
    // 0x1f0af4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8810u, 0x1F0AF0u, 0x1F0AF8u)) {
        return;
    }
    ctx->pc = 0x1F0AF8u;
label_1f0af8:
    // 0x1f0af8: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x1f0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
label_1f0afc:
    // 0x1f0afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f0afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b00:
    // 0x1f0b00: 0x24a50b90  addiu       $a1, $a1, 0xB90
    ctx->pc = 0x1f0b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
label_1f0b04:
    // 0x1f0b04: 0xc0c8400  jal         func_321000
label_1f0b08:
    if (ctx->pc == 0x1F0B08u) {
        ctx->pc = 0x1F0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B04u;
        // 0x1f0b08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B0Cu;
        goto label_1f0b0c;
    }
    ctx->pc = 0x1F0B04u;
    SET_GPR_U32(ctx, 31, 0x1F0B0Cu);
    ctx->pc = 0x1F0B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0B04u;
    // 0x1f0b08: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321000u, 0x1F0B04u, 0x1F0B0Cu)) {
        return;
    }
    ctx->pc = 0x1F0B0Cu;
label_1f0b0c:
    // 0x1f0b0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f0b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1f0b10:
    // 0x1f0b10: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x1f0b10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_1f0b14:
    // 0x1f0b14: 0xc0c8770  jal         func_321DC0
label_1f0b18:
    if (ctx->pc == 0x1F0B18u) {
        ctx->pc = 0x1F0B1Cu;
        goto label_1f0b1c;
    }
    ctx->pc = 0x1F0B14u;
    SET_GPR_U32(ctx, 31, 0x1F0B1Cu);
    ctx->pc = 0x321DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321DC0u, 0x1F0B14u, 0x1F0B1Cu)) {
        return;
    }
    ctx->pc = 0x1F0B1Cu;
label_1f0b1c:
    // 0x1f0b1c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1f0b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f0b20:
    // 0x1f0b20: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1f0b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1f0b24:
    // 0x1f0b24: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1f0b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1f0b28:
    // 0x1f0b28: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1f0b28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1f0b2c:
    // 0x1f0b2c: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1f0b2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1f0b30:
    // 0x1f0b30: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1f0b30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1f0b34:
    // 0x1f0b34: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1f0b34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1f0b38:
    // 0x1f0b38: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1f0b38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f0b3c:
    // 0x1f0b3c: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1f0b3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1f0b40:
    // 0x1f0b40: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1f0b40u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1f0b44:
    // 0x1f0b44: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f0b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f0b48:
    // 0x1f0b48: 0xc7bd0178  lwc1        $f29, 0x178($sp)
    ctx->pc = 0x1f0b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1f0b4c:
    // 0x1f0b4c: 0xc7bc0170  lwc1        $f28, 0x170($sp)
    ctx->pc = 0x1f0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1f0b50:
    // 0x1f0b50: 0xc7bb0168  lwc1        $f27, 0x168($sp)
    ctx->pc = 0x1f0b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1f0b54:
    // 0x1f0b54: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x1f0b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1f0b58:
    // 0x1f0b58: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x1f0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1f0b5c:
    // 0x1f0b5c: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x1f0b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1f0b60:
    // 0x1f0b60: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x1f0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1f0b64:
    // 0x1f0b64: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1f0b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f0b68:
    // 0x1f0b68: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1f0b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f0b6c:
    // 0x1f0b6c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1f0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f0b70:
    // 0x1f0b70: 0x3e00008  jr          $ra
label_1f0b74:
    if (ctx->pc == 0x1F0B74u) {
        ctx->pc = 0x1F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B70u;
        // 0x1f0b74: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0B78u;
        goto label_fallthrough_0x1f0b70;
    }
    ctx->pc = 0x1F0B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B70u;
        // 0x1f0b74: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f0b70:
    ctx->pc = 0x1F0B78u;
}
