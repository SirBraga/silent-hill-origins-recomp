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

// Function: sub_003068C0
// Address: 0x3068c0 - 0x306dd8
void sub_003068C0_0x3068c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003068C0_0x3068c0");
#endif

    switch (ctx->pc) {
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        case 0x3068e4u: goto label_3068e4;
        case 0x3068e8u: goto label_3068e8;
        case 0x3068ecu: goto label_3068ec;
        case 0x3068f0u: goto label_3068f0;
        case 0x3068f4u: goto label_3068f4;
        case 0x3068f8u: goto label_3068f8;
        case 0x3068fcu: goto label_3068fc;
        case 0x306900u: goto label_306900;
        case 0x306904u: goto label_306904;
        case 0x306908u: goto label_306908;
        case 0x30690cu: goto label_30690c;
        case 0x306910u: goto label_306910;
        case 0x306914u: goto label_306914;
        case 0x306918u: goto label_306918;
        case 0x30691cu: goto label_30691c;
        case 0x306920u: goto label_306920;
        case 0x306924u: goto label_306924;
        case 0x306928u: goto label_306928;
        case 0x30692cu: goto label_30692c;
        case 0x306930u: goto label_306930;
        case 0x306934u: goto label_306934;
        case 0x306938u: goto label_306938;
        case 0x30693cu: goto label_30693c;
        case 0x306940u: goto label_306940;
        case 0x306944u: goto label_306944;
        case 0x306948u: goto label_306948;
        case 0x30694cu: goto label_30694c;
        case 0x306950u: goto label_306950;
        case 0x306954u: goto label_306954;
        case 0x306958u: goto label_306958;
        case 0x30695cu: goto label_30695c;
        case 0x306960u: goto label_306960;
        case 0x306964u: goto label_306964;
        case 0x306968u: goto label_306968;
        case 0x30696cu: goto label_30696c;
        case 0x306970u: goto label_306970;
        case 0x306974u: goto label_306974;
        case 0x306978u: goto label_306978;
        case 0x30697cu: goto label_30697c;
        case 0x306980u: goto label_306980;
        case 0x306984u: goto label_306984;
        case 0x306988u: goto label_306988;
        case 0x30698cu: goto label_30698c;
        case 0x306990u: goto label_306990;
        case 0x306994u: goto label_306994;
        case 0x306998u: goto label_306998;
        case 0x30699cu: goto label_30699c;
        case 0x3069a0u: goto label_3069a0;
        case 0x3069a4u: goto label_3069a4;
        case 0x3069a8u: goto label_3069a8;
        case 0x3069acu: goto label_3069ac;
        case 0x3069b0u: goto label_3069b0;
        case 0x3069b4u: goto label_3069b4;
        case 0x3069b8u: goto label_3069b8;
        case 0x3069bcu: goto label_3069bc;
        case 0x3069c0u: goto label_3069c0;
        case 0x3069c4u: goto label_3069c4;
        case 0x3069c8u: goto label_3069c8;
        case 0x3069ccu: goto label_3069cc;
        case 0x3069d0u: goto label_3069d0;
        case 0x3069d4u: goto label_3069d4;
        case 0x3069d8u: goto label_3069d8;
        case 0x3069dcu: goto label_3069dc;
        case 0x3069e0u: goto label_3069e0;
        case 0x3069e4u: goto label_3069e4;
        case 0x3069e8u: goto label_3069e8;
        case 0x3069ecu: goto label_3069ec;
        case 0x3069f0u: goto label_3069f0;
        case 0x3069f4u: goto label_3069f4;
        case 0x3069f8u: goto label_3069f8;
        case 0x3069fcu: goto label_3069fc;
        case 0x306a00u: goto label_306a00;
        case 0x306a04u: goto label_306a04;
        case 0x306a08u: goto label_306a08;
        case 0x306a0cu: goto label_306a0c;
        case 0x306a10u: goto label_306a10;
        case 0x306a14u: goto label_306a14;
        case 0x306a18u: goto label_306a18;
        case 0x306a1cu: goto label_306a1c;
        case 0x306a20u: goto label_306a20;
        case 0x306a24u: goto label_306a24;
        case 0x306a28u: goto label_306a28;
        case 0x306a2cu: goto label_306a2c;
        case 0x306a30u: goto label_306a30;
        case 0x306a34u: goto label_306a34;
        case 0x306a38u: goto label_306a38;
        case 0x306a3cu: goto label_306a3c;
        case 0x306a40u: goto label_306a40;
        case 0x306a44u: goto label_306a44;
        case 0x306a48u: goto label_306a48;
        case 0x306a4cu: goto label_306a4c;
        case 0x306a50u: goto label_306a50;
        case 0x306a54u: goto label_306a54;
        case 0x306a58u: goto label_306a58;
        case 0x306a5cu: goto label_306a5c;
        case 0x306a60u: goto label_306a60;
        case 0x306a64u: goto label_306a64;
        case 0x306a68u: goto label_306a68;
        case 0x306a6cu: goto label_306a6c;
        case 0x306a70u: goto label_306a70;
        case 0x306a74u: goto label_306a74;
        case 0x306a78u: goto label_306a78;
        case 0x306a7cu: goto label_306a7c;
        case 0x306a80u: goto label_306a80;
        case 0x306a84u: goto label_306a84;
        case 0x306a88u: goto label_306a88;
        case 0x306a8cu: goto label_306a8c;
        case 0x306a90u: goto label_306a90;
        case 0x306a94u: goto label_306a94;
        case 0x306a98u: goto label_306a98;
        case 0x306a9cu: goto label_306a9c;
        case 0x306aa0u: goto label_306aa0;
        case 0x306aa4u: goto label_306aa4;
        case 0x306aa8u: goto label_306aa8;
        case 0x306aacu: goto label_306aac;
        case 0x306ab0u: goto label_306ab0;
        case 0x306ab4u: goto label_306ab4;
        case 0x306ab8u: goto label_306ab8;
        case 0x306abcu: goto label_306abc;
        case 0x306ac0u: goto label_306ac0;
        case 0x306ac4u: goto label_306ac4;
        case 0x306ac8u: goto label_306ac8;
        case 0x306accu: goto label_306acc;
        case 0x306ad0u: goto label_306ad0;
        case 0x306ad4u: goto label_306ad4;
        case 0x306ad8u: goto label_306ad8;
        case 0x306adcu: goto label_306adc;
        case 0x306ae0u: goto label_306ae0;
        case 0x306ae4u: goto label_306ae4;
        case 0x306ae8u: goto label_306ae8;
        case 0x306aecu: goto label_306aec;
        case 0x306af0u: goto label_306af0;
        case 0x306af4u: goto label_306af4;
        case 0x306af8u: goto label_306af8;
        case 0x306afcu: goto label_306afc;
        case 0x306b00u: goto label_306b00;
        case 0x306b04u: goto label_306b04;
        case 0x306b08u: goto label_306b08;
        case 0x306b0cu: goto label_306b0c;
        case 0x306b10u: goto label_306b10;
        case 0x306b14u: goto label_306b14;
        case 0x306b18u: goto label_306b18;
        case 0x306b1cu: goto label_306b1c;
        case 0x306b20u: goto label_306b20;
        case 0x306b24u: goto label_306b24;
        case 0x306b28u: goto label_306b28;
        case 0x306b2cu: goto label_306b2c;
        case 0x306b30u: goto label_306b30;
        case 0x306b34u: goto label_306b34;
        case 0x306b38u: goto label_306b38;
        case 0x306b3cu: goto label_306b3c;
        case 0x306b40u: goto label_306b40;
        case 0x306b44u: goto label_306b44;
        case 0x306b48u: goto label_306b48;
        case 0x306b4cu: goto label_306b4c;
        case 0x306b50u: goto label_306b50;
        case 0x306b54u: goto label_306b54;
        case 0x306b58u: goto label_306b58;
        case 0x306b5cu: goto label_306b5c;
        case 0x306b60u: goto label_306b60;
        case 0x306b64u: goto label_306b64;
        case 0x306b68u: goto label_306b68;
        case 0x306b6cu: goto label_306b6c;
        case 0x306b70u: goto label_306b70;
        case 0x306b74u: goto label_306b74;
        case 0x306b78u: goto label_306b78;
        case 0x306b7cu: goto label_306b7c;
        case 0x306b80u: goto label_306b80;
        case 0x306b84u: goto label_306b84;
        case 0x306b88u: goto label_306b88;
        case 0x306b8cu: goto label_306b8c;
        case 0x306b90u: goto label_306b90;
        case 0x306b94u: goto label_306b94;
        case 0x306b98u: goto label_306b98;
        case 0x306b9cu: goto label_306b9c;
        case 0x306ba0u: goto label_306ba0;
        case 0x306ba4u: goto label_306ba4;
        case 0x306ba8u: goto label_306ba8;
        case 0x306bacu: goto label_306bac;
        case 0x306bb0u: goto label_306bb0;
        case 0x306bb4u: goto label_306bb4;
        case 0x306bb8u: goto label_306bb8;
        case 0x306bbcu: goto label_306bbc;
        case 0x306bc0u: goto label_306bc0;
        case 0x306bc4u: goto label_306bc4;
        case 0x306bc8u: goto label_306bc8;
        case 0x306bccu: goto label_306bcc;
        case 0x306bd0u: goto label_306bd0;
        case 0x306bd4u: goto label_306bd4;
        case 0x306bd8u: goto label_306bd8;
        case 0x306bdcu: goto label_306bdc;
        case 0x306be0u: goto label_306be0;
        case 0x306be4u: goto label_306be4;
        case 0x306be8u: goto label_306be8;
        case 0x306becu: goto label_306bec;
        case 0x306bf0u: goto label_306bf0;
        case 0x306bf4u: goto label_306bf4;
        case 0x306bf8u: goto label_306bf8;
        case 0x306bfcu: goto label_306bfc;
        case 0x306c00u: goto label_306c00;
        case 0x306c04u: goto label_306c04;
        case 0x306c08u: goto label_306c08;
        case 0x306c0cu: goto label_306c0c;
        case 0x306c10u: goto label_306c10;
        case 0x306c14u: goto label_306c14;
        case 0x306c18u: goto label_306c18;
        case 0x306c1cu: goto label_306c1c;
        case 0x306c20u: goto label_306c20;
        case 0x306c24u: goto label_306c24;
        case 0x306c28u: goto label_306c28;
        case 0x306c2cu: goto label_306c2c;
        case 0x306c30u: goto label_306c30;
        case 0x306c34u: goto label_306c34;
        case 0x306c38u: goto label_306c38;
        case 0x306c3cu: goto label_306c3c;
        case 0x306c40u: goto label_306c40;
        case 0x306c44u: goto label_306c44;
        case 0x306c48u: goto label_306c48;
        case 0x306c4cu: goto label_306c4c;
        case 0x306c50u: goto label_306c50;
        case 0x306c54u: goto label_306c54;
        case 0x306c58u: goto label_306c58;
        case 0x306c5cu: goto label_306c5c;
        case 0x306c60u: goto label_306c60;
        case 0x306c64u: goto label_306c64;
        case 0x306c68u: goto label_306c68;
        case 0x306c6cu: goto label_306c6c;
        case 0x306c70u: goto label_306c70;
        case 0x306c74u: goto label_306c74;
        case 0x306c78u: goto label_306c78;
        case 0x306c7cu: goto label_306c7c;
        case 0x306c80u: goto label_306c80;
        case 0x306c84u: goto label_306c84;
        case 0x306c88u: goto label_306c88;
        case 0x306c8cu: goto label_306c8c;
        case 0x306c90u: goto label_306c90;
        case 0x306c94u: goto label_306c94;
        case 0x306c98u: goto label_306c98;
        case 0x306c9cu: goto label_306c9c;
        case 0x306ca0u: goto label_306ca0;
        case 0x306ca4u: goto label_306ca4;
        case 0x306ca8u: goto label_306ca8;
        case 0x306cacu: goto label_306cac;
        case 0x306cb0u: goto label_306cb0;
        case 0x306cb4u: goto label_306cb4;
        case 0x306cb8u: goto label_306cb8;
        case 0x306cbcu: goto label_306cbc;
        case 0x306cc0u: goto label_306cc0;
        case 0x306cc4u: goto label_306cc4;
        case 0x306cc8u: goto label_306cc8;
        case 0x306cccu: goto label_306ccc;
        case 0x306cd0u: goto label_306cd0;
        case 0x306cd4u: goto label_306cd4;
        case 0x306cd8u: goto label_306cd8;
        case 0x306cdcu: goto label_306cdc;
        case 0x306ce0u: goto label_306ce0;
        case 0x306ce4u: goto label_306ce4;
        case 0x306ce8u: goto label_306ce8;
        case 0x306cecu: goto label_306cec;
        case 0x306cf0u: goto label_306cf0;
        case 0x306cf4u: goto label_306cf4;
        case 0x306cf8u: goto label_306cf8;
        case 0x306cfcu: goto label_306cfc;
        case 0x306d00u: goto label_306d00;
        case 0x306d04u: goto label_306d04;
        case 0x306d08u: goto label_306d08;
        case 0x306d0cu: goto label_306d0c;
        case 0x306d10u: goto label_306d10;
        case 0x306d14u: goto label_306d14;
        case 0x306d18u: goto label_306d18;
        case 0x306d1cu: goto label_306d1c;
        case 0x306d20u: goto label_306d20;
        case 0x306d24u: goto label_306d24;
        case 0x306d28u: goto label_306d28;
        case 0x306d2cu: goto label_306d2c;
        case 0x306d30u: goto label_306d30;
        case 0x306d34u: goto label_306d34;
        case 0x306d38u: goto label_306d38;
        case 0x306d3cu: goto label_306d3c;
        case 0x306d40u: goto label_306d40;
        case 0x306d44u: goto label_306d44;
        case 0x306d48u: goto label_306d48;
        case 0x306d4cu: goto label_306d4c;
        case 0x306d50u: goto label_306d50;
        case 0x306d54u: goto label_306d54;
        case 0x306d58u: goto label_306d58;
        case 0x306d5cu: goto label_306d5c;
        case 0x306d60u: goto label_306d60;
        case 0x306d64u: goto label_306d64;
        case 0x306d68u: goto label_306d68;
        case 0x306d6cu: goto label_306d6c;
        case 0x306d70u: goto label_306d70;
        case 0x306d74u: goto label_306d74;
        case 0x306d78u: goto label_306d78;
        case 0x306d7cu: goto label_306d7c;
        case 0x306d80u: goto label_306d80;
        case 0x306d84u: goto label_306d84;
        case 0x306d88u: goto label_306d88;
        case 0x306d8cu: goto label_306d8c;
        case 0x306d90u: goto label_306d90;
        case 0x306d94u: goto label_306d94;
        case 0x306d98u: goto label_306d98;
        case 0x306d9cu: goto label_306d9c;
        case 0x306da0u: goto label_306da0;
        case 0x306da4u: goto label_306da4;
        case 0x306da8u: goto label_306da8;
        case 0x306dacu: goto label_306dac;
        case 0x306db0u: goto label_306db0;
        case 0x306db4u: goto label_306db4;
        case 0x306db8u: goto label_306db8;
        case 0x306dbcu: goto label_306dbc;
        case 0x306dc0u: goto label_306dc0;
        case 0x306dc4u: goto label_306dc4;
        case 0x306dc8u: goto label_306dc8;
        case 0x306dccu: goto label_306dcc;
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd4u: goto label_306dd4;
        default: break;
    }

    ctx->pc = 0x3068c0u;

label_3068c0:
    // 0x3068c0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3068c4:
    // 0x3068c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3068c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3068c8:
    // 0x3068c8: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3068c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_3068cc:
    // 0x3068cc: 0x240603d0  addiu       $a2, $zero, 0x3D0
    ctx->pc = 0x3068ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 976));
label_3068d0:
    // 0x3068d0: 0x24a30037  addiu       $v1, $a1, 0x37
    ctx->pc = 0x3068d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
label_3068d4:
    // 0x3068d4: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3068d8:
    // 0x3068d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3068d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3068dc:
    // 0x3068dc: 0xaca6001c  sw          $a2, 0x1C($a1)
    ctx->pc = 0x3068dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 6));
label_3068e0:
    // 0x3068e0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x3068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_3068e4:
    // 0x3068e4: 0x3c0a6c01  lui         $t2, 0x6C01
    ctx->pc = 0x3068e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)27649 << 16));
label_3068e8:
    // 0x3068e8: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x3068e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
label_3068ec:
    // 0x3068ec: 0x3c0b0100  lui         $t3, 0x100
    ctx->pc = 0x3068ecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)256 << 16));
label_3068f0:
    // 0x3068f0: 0x356b0404  ori         $t3, $t3, 0x404
    ctx->pc = 0x3068f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)1028);
label_3068f4:
    // 0x3068f4: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x3068f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
label_3068f8:
    // 0x3068f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3068f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3068fc:
    // 0x3068fc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x3068fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_306900:
    // 0x306900: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x306900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306904:
    // 0x306904: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x306904u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306908:
    // 0x306908: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x306908u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_30690c:
    // 0x30690c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x30690cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_306910:
    // 0x306910: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306914:
    // 0x306914: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x306914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_306918:
    // 0x306918: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x306918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_30691c:
    // 0x30691c: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x30691cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_306920:
    // 0x306920: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x306920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_306924:
    // 0x306924: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x306924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_306928:
    // 0x306928: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x306928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_30692c:
    // 0x30692c: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x30692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_306930:
    // 0x306930: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x306930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_306934:
    // 0x306934: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x306934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_306938:
    // 0x306938: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x306938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_30693c:
    // 0x30693c: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x30693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
label_306940:
    // 0x306940: 0x70691b89  pcpyld      $v1, $v1, $t1
    ctx->pc = 0x306940u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
label_306944:
    // 0x306944: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x306944u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_306948:
    // 0x306948: 0xa0a80005  sb          $t0, 0x5($a1)
    ctx->pc = 0x306948u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 8));
label_30694c:
    // 0x30694c: 0xa0a60009  sb          $a2, 0x9($a1)
    ctx->pc = 0x30694cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 6));
label_306950:
    // 0x306950: 0xa0a7000c  sb          $a3, 0xC($a1)
    ctx->pc = 0x306950u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 7));
label_306954:
    // 0x306954: 0xa0a0000e  sb          $zero, 0xE($a1)
    ctx->pc = 0x306954u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 0));
label_306958:
    // 0x306958: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x306958u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_30695c:
    // 0x30695c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x30695cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_306960:
    // 0x306960: 0xa0a60001  sb          $a2, 0x1($a1)
    ctx->pc = 0x306960u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 6));
label_306964:
    // 0x306964: 0xa0a70002  sb          $a3, 0x2($a1)
    ctx->pc = 0x306964u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 7));
label_306968:
    // 0x306968: 0xa0a60003  sb          $a2, 0x3($a1)
    ctx->pc = 0x306968u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 6));
label_30696c:
    // 0x30696c: 0xa0a60004  sb          $a2, 0x4($a1)
    ctx->pc = 0x30696cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 6));
label_306970:
    // 0x306970: 0xa0a60006  sb          $a2, 0x6($a1)
    ctx->pc = 0x306970u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 6));
label_306974:
    // 0x306974: 0xa0a70007  sb          $a3, 0x7($a1)
    ctx->pc = 0x306974u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 7));
label_306978:
    // 0x306978: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x306978u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
label_30697c:
    // 0x30697c: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x30697cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
label_306980:
    // 0x306980: 0xa0a7000b  sb          $a3, 0xB($a1)
    ctx->pc = 0x306980u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 7));
label_306984:
    // 0x306984: 0x3e00008  jr          $ra
label_306988:
    if (ctx->pc == 0x306988u) {
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0xa0a0000d  sb          $zero, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30698Cu;
        goto label_30698c;
    }
    ctx->pc = 0x306984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0xa0a0000d  sb          $zero, 0xD($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30698Cu;
label_30698c:
    // 0x30698c: 0x0  nop
    ctx->pc = 0x30698cu;
    // NOP
label_306990:
    // 0x306990: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x306990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_306994:
    // 0x306994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x306994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306998:
    // 0x306998: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x306998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_30699c:
    // 0x30699c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x30699cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3069a0:
    // 0x3069a0: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3069a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3069a4:
    // 0x3069a4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x3069a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_3069a8:
    // 0x3069a8: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x3069a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_3069ac:
    // 0x3069ac: 0x26035650  addiu       $v1, $s0, 0x5650
    ctx->pc = 0x3069acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 22096));
label_3069b0:
    // 0x3069b0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x3069b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_3069b4:
    // 0x3069b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3069b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3069b8:
    // 0x3069b8: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x3069b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_3069bc:
    // 0x3069bc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3069bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_3069c0:
    // 0x3069c0: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x3069c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_3069c4:
    // 0x3069c4: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x3069c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_3069c8:
    // 0x3069c8: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x3069c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_3069cc:
    // 0x3069cc: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x3069ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_3069d0:
    // 0x3069d0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3069d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3069d4:
    // 0x3069d4: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x3069d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_3069d8:
    // 0x3069d8: 0x8c910014  lw          $s1, 0x14($a0)
    ctx->pc = 0x3069d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3069dc:
    // 0x3069dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3069dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_3069e0:
    // 0x3069e0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x3069e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_3069e4:
    // 0x3069e4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x3069e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3069e8:
    // 0x3069e8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x3069e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_3069ec:
    // 0x3069ec: 0xac2341bc  sw          $v1, 0x41BC($at)
    ctx->pc = 0x3069ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16828), GPR_U32(ctx, 3));
label_3069f0:
    // 0x3069f0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x3069f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3069f4:
    // 0x3069f4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3069f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3069f8:
    // 0x3069f8: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x3069f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16784)));
label_3069fc:
    // 0x3069fc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3069fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_306a00:
    // 0x306a00: 0xa3a50029  sb          $a1, 0x29($sp)
    ctx->pc = 0x306a00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 41), (uint8_t)GPR_U32(ctx, 5));
label_306a04:
    // 0x306a04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x306a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_306a08:
    // 0x306a08: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x306a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_306a0c:
    // 0x306a0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x306a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306a10:
    // 0x306a10: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x306a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_306a14:
    // 0x306a14: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x306a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_306a18:
    // 0x306a18: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x306a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
label_306a1c:
    // 0x306a1c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x306a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_306a20:
    // 0x306a20: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x306a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_306a24:
    // 0x306a24: 0xa3a00028  sb          $zero, 0x28($sp)
    ctx->pc = 0x306a24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 0));
label_306a28:
    // 0x306a28: 0xa3a0002a  sb          $zero, 0x2A($sp)
    ctx->pc = 0x306a28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 42), (uint8_t)GPR_U32(ctx, 0));
label_306a2c:
    // 0x306a2c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x306a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_306a30:
    // 0x306a30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x306a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_306a34:
    // 0x306a34: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x306a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_306a38:
    // 0x306a38: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x306a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_306a3c:
    // 0x306a3c: 0xac2041c0  sw          $zero, 0x41C0($at)
    ctx->pc = 0x306a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16832), GPR_U32(ctx, 0));
label_306a40:
    // 0x306a40: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x306a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_306a44:
    // 0x306a44: 0x40f809  jalr        $v0
label_306a48:
    if (ctx->pc == 0x306A48u) {
        ctx->pc = 0x306A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A44u;
        // 0x306a48: 0x8c7e0044  lw          $fp, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A4Cu;
        goto label_306a4c;
    }
    ctx->pc = 0x306A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306A4Cu);
        ctx->pc = 0x306A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A44u;
        // 0x306a48: 0x8c7e0044  lw          $fp, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306A44u, 0x306A4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306A4Cu;
label_306a4c:
    // 0x306a4c: 0x104000d4  beqz        $v0, . + 4 + (0xD4 << 2)
label_306a50:
    if (ctx->pc == 0x306A50u) {
        ctx->pc = 0x306A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A4Cu;
        // 0x306a50: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A54u;
        goto label_306a54;
    }
    ctx->pc = 0x306A4Cu;
    {
        const bool branch_taken_0x306a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A4Cu;
        // 0x306a50: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a4c) {
            ctx->pc = 0x306DA0u;
            goto label_306da0;
        }
    }
    ctx->pc = 0x306A54u;
label_306a54:
    // 0x306a54: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x306a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_306a58:
    // 0x306a58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_306a5c:
    if (ctx->pc == 0x306A5Cu) {
        ctx->pc = 0x306A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A58u;
        // 0x306a5c: 0x8f839150  lw          $v1, -0x6EB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938960)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A60u;
        goto label_306a60;
    }
    ctx->pc = 0x306A58u;
    {
        const bool branch_taken_0x306a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A58u;
        // 0x306a5c: 0x8f839150  lw          $v1, -0x6EB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a58) {
            ctx->pc = 0x306A70u;
            goto label_306a70;
        }
    }
    ctx->pc = 0x306A60u;
label_306a60:
    // 0x306a60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306a64:
    // 0x306a64: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x306a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_306a68:
    // 0x306a68: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306a6c:
    // 0x306a6c: 0x8c6341c0  lw          $v1, 0x41C0($v1)
    ctx->pc = 0x306a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16832)));
label_306a70:
    // 0x306a70: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_306a74:
    if (ctx->pc == 0x306A74u) {
        ctx->pc = 0x306A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A70u;
        // 0x306a74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A78u;
        goto label_306a78;
    }
    ctx->pc = 0x306A70u;
    {
        const bool branch_taken_0x306a70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x306A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A70u;
        // 0x306a74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a70) {
            ctx->pc = 0x306A90u;
            goto label_306a90;
        }
    }
    ctx->pc = 0x306A78u;
label_306a78:
    // 0x306a78: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x306a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_306a7c:
    // 0x306a7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x306a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306a80:
    // 0x306a80: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x306a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_306a84:
    // 0x306a84: 0xac2241c0  sw          $v0, 0x41C0($at)
    ctx->pc = 0x306a84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16832), GPR_U32(ctx, 2));
label_306a88:
    // 0x306a88: 0x1000002b  b           . + 4 + (0x2B << 2)
label_306a8c:
    if (ctx->pc == 0x306A8Cu) {
        ctx->pc = 0x306A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A88u;
        // 0x306a8c: 0xaf83914c  sw          $v1, -0x6EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A90u;
        goto label_306a90;
    }
    ctx->pc = 0x306A88u;
    {
        const bool branch_taken_0x306a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A88u;
        // 0x306a8c: 0xaf83914c  sw          $v1, -0x6EB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a88) {
            ctx->pc = 0x306B38u;
            goto label_306b38;
        }
    }
    ctx->pc = 0x306A90u;
label_306a90:
    // 0x306a90: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_306a94:
    if (ctx->pc == 0x306A94u) {
        ctx->pc = 0x306A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A90u;
        // 0x306a94: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A98u;
        goto label_306a98;
    }
    ctx->pc = 0x306A90u;
    {
        const bool branch_taken_0x306a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x306A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A90u;
        // 0x306a94: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a90) {
            ctx->pc = 0x306AA0u;
            goto label_306aa0;
        }
    }
    ctx->pc = 0x306A98u;
label_306a98:
    // 0x306a98: 0x10000027  b           . + 4 + (0x27 << 2)
label_306a9c:
    if (ctx->pc == 0x306A9Cu) {
        ctx->pc = 0x306A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A98u;
        // 0x306a9c: 0xaf809150  sw          $zero, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AA0u;
        goto label_306aa0;
    }
    ctx->pc = 0x306A98u;
    {
        const bool branch_taken_0x306a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A98u;
        // 0x306a9c: 0xaf809150  sw          $zero, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306a98) {
            ctx->pc = 0x306B38u;
            goto label_306b38;
        }
    }
    ctx->pc = 0x306AA0u;
label_306aa0:
    // 0x306aa0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_306aa4:
    if (ctx->pc == 0x306AA4u) {
        ctx->pc = 0x306AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AA0u;
        // 0x306aa4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AA8u;
        goto label_306aa8;
    }
    ctx->pc = 0x306AA0u;
    {
        const bool branch_taken_0x306aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x306aa0) {
            ctx->pc = 0x306AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306AA0u;
            // 0x306aa4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306ABCu;
            goto label_306abc;
        }
    }
    ctx->pc = 0x306AA8u;
label_306aa8:
    // 0x306aa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x306aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_306aac:
    // 0x306aac: 0x1000000c  b           . + 4 + (0xC << 2)
label_306ab0:
    if (ctx->pc == 0x306AB0u) {
        ctx->pc = 0x306AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AACu;
        // 0x306ab0: 0xaf829150  sw          $v0, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AB4u;
        goto label_306ab4;
    }
    ctx->pc = 0x306AACu;
    {
        const bool branch_taken_0x306aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AACu;
        // 0x306ab0: 0xaf829150  sw          $v0, -0x6EB0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306aac) {
            ctx->pc = 0x306AE0u;
            goto label_306ae0;
        }
    }
    ctx->pc = 0x306AB4u;
label_306ab4:
    // 0x306ab4: 0x100000bb  b           . + 4 + (0xBB << 2)
label_306ab8:
    if (ctx->pc == 0x306AB8u) {
        ctx->pc = 0x306AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AB4u;
        // 0x306ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306ABCu;
        goto label_306abc;
    }
    ctx->pc = 0x306AB4u;
    {
        const bool branch_taken_0x306ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AB4u;
        // 0x306ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ab4) {
            ctx->pc = 0x306DA4u;
            goto label_306da4;
        }
    }
    ctx->pc = 0x306ABCu;
label_306abc:
    // 0x306abc: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x306abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_306ac0:
    // 0x306ac0: 0x8c8441bc  lw          $a0, 0x41BC($a0)
    ctx->pc = 0x306ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16828)));
label_306ac4:
    // 0x306ac4: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x306ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_306ac8:
    // 0x306ac8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x306ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_306acc:
    // 0x306acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306ad0:
    // 0x306ad0: 0x8c6341c0  lw          $v1, 0x41C0($v1)
    ctx->pc = 0x306ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16832)));
label_306ad4:
    // 0x306ad4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_306ad8:
    // 0x306ad8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x306ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_306adc:
    // 0x306adc: 0xac2341c0  sw          $v1, 0x41C0($at)
    ctx->pc = 0x306adcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16832), GPR_U32(ctx, 3));
label_306ae0:
    // 0x306ae0: 0x26085650  addiu       $t0, $s0, 0x5650
    ctx->pc = 0x306ae0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 22096));
label_306ae4:
    // 0x306ae4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x306ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_306ae8:
    // 0x306ae8: 0x9c4241c0  lwu         $v0, 0x41C0($v0)
    ctx->pc = 0x306ae8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16832)));
label_306aec:
    // 0x306aec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x306aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_306af0:
    // 0x306af0: 0xac2841bc  sw          $t0, 0x41BC($at)
    ctx->pc = 0x306af0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16828), GPR_U32(ctx, 8));
label_306af4:
    // 0x306af4: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x306af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
label_306af8:
    // 0x306af8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x306af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_306afc:
    // 0x306afc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306b00:
    // 0x306b00: 0x8c6341c0  lw          $v1, 0x41C0($v1)
    ctx->pc = 0x306b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16832)));
label_306b04:
    // 0x306b04: 0x9e24001c  lwu         $a0, 0x1C($s1)
    ctx->pc = 0x306b04u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_306b08:
    // 0x306b08: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x306b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
label_306b0c:
    // 0x306b0c: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x306b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
label_306b10:
    // 0x306b10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306b14:
    // 0x306b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x306b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_306b18:
    // 0x306b18: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x306b18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_306b1c:
    // 0x306b1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x306b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_306b20:
    // 0x306b20: 0xac2341c0  sw          $v1, 0x41C0($at)
    ctx->pc = 0x306b20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16832), GPR_U32(ctx, 3));
label_306b24:
    // 0x306b24: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x306b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_306b28:
    // 0x306b28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x306b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_306b2c:
    // 0x306b2c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x306b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_306b30:
    // 0x306b30: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x306b30u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
label_306b34:
    // 0x306b34: 0x7d020000  sq          $v0, 0x0($t0)
    ctx->pc = 0x306b34u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 2));
label_306b38:
    // 0x306b38: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x306b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_306b3c:
    // 0x306b3c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x306b3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306b40:
    // 0x306b40: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x306b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_306b44:
    // 0x306b44: 0x8ca541bc  lw          $a1, 0x41BC($a1)
    ctx->pc = 0x306b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16828)));
label_306b48:
    // 0x306b48: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x306b48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306b4c:
    // 0x306b4c: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x306b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_306b50:
    // 0x306b50: 0x8cc641c0  lw          $a2, 0x41C0($a2)
    ctx->pc = 0x306b50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16832)));
label_306b54:
    // 0x306b54: 0xc09084c  jal         func_242130
label_306b58:
    if (ctx->pc == 0x306B58u) {
        ctx->pc = 0x306B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B54u;
        // 0x306b58: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B5Cu;
        goto label_306b5c;
    }
    ctx->pc = 0x306B54u;
    SET_GPR_U32(ctx, 31, 0x306B5Cu);
    ctx->pc = 0x306B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B54u;
    // 0x306b58: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x242130u, 0x306B54u, 0x306B5Cu)) {
        return;
    }
    ctx->pc = 0x306B5Cu;
label_306b5c:
    // 0x306b5c: 0x8fb5000c  lw          $s5, 0xC($sp)
    ctx->pc = 0x306b5cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_306b60:
    // 0x306b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x306b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_306b64:
    // 0x306b64: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x306b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_306b68:
    // 0x306b68: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x306b68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_306b6c:
    // 0x306b6c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x306b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_306b70:
    // 0x306b70: 0x10600086  beqz        $v1, . + 4 + (0x86 << 2)
label_306b74:
    if (ctx->pc == 0x306B74u) {
        ctx->pc = 0x306B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B70u;
        // 0x306b74: 0x2a28021  addu        $s0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B78u;
        goto label_306b78;
    }
    ctx->pc = 0x306B70u;
    {
        const bool branch_taken_0x306b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B70u;
        // 0x306b74: 0x2a28021  addu        $s0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b70) {
            ctx->pc = 0x306D8Cu;
            goto label_306d8c;
        }
    }
    ctx->pc = 0x306B78u;
label_306b78:
    // 0x306b78: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x306b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_306b7c:
    // 0x306b7c: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x306b7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_306b80:
    // 0x306b80: 0x24530fc8  addiu       $s3, $v0, 0xFC8
    ctx->pc = 0x306b80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_306b84:
    // 0x306b84: 0x0  nop
    ctx->pc = 0x306b84u;
    // NOP
label_306b88:
    // 0x306b88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x306b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_306b8c:
    // 0x306b8c: 0x24463d60  addiu       $a2, $v0, 0x3D60
    ctx->pc = 0x306b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15712));
label_306b90:
    // 0x306b90: 0x88c30003  lwl         $v1, 0x3($a2)
    ctx->pc = 0x306b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_306b94:
    // 0x306b94: 0x98c30000  lwr         $v1, 0x0($a2)
    ctx->pc = 0x306b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_306b98:
    // 0x306b98: 0xaba30093  swl         $v1, 0x93($sp)
    ctx->pc = 0x306b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_306b9c:
    // 0x306b9c: 0xbba30090  swr         $v1, 0x90($sp)
    ctx->pc = 0x306b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_306ba0:
    // 0x306ba0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x306ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_306ba4:
    // 0x306ba4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_306ba8:
    if (ctx->pc == 0x306BA8u) {
        ctx->pc = 0x306BACu;
        goto label_306bac;
    }
    ctx->pc = 0x306BA4u;
    {
        const bool branch_taken_0x306ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x306ba4) {
            ctx->pc = 0x306BB8u;
            goto label_306bb8;
        }
    }
    ctx->pc = 0x306BACu;
label_306bac:
    // 0x306bac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x306bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_306bb0:
    // 0x306bb0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x306bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_306bb4:
    // 0x306bb4: 0x3c3180a  movz        $v1, $fp, $v1
    ctx->pc = 0x306bb4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30));
label_306bb8:
    // 0x306bb8: 0x10770006  beq         $v1, $s7, . + 4 + (0x6 << 2)
label_306bbc:
    if (ctx->pc == 0x306BBCu) {
        ctx->pc = 0x306BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BB8u;
        // 0x306bbc: 0x93a20028  lbu         $v0, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BC0u;
        goto label_306bc0;
    }
    ctx->pc = 0x306BB8u;
    {
        const bool branch_taken_0x306bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x306BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BB8u;
        // 0x306bbc: 0x93a20028  lbu         $v0, 0x28($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306bb8) {
            ctx->pc = 0x306BD4u;
            goto label_306bd4;
        }
    }
    ctx->pc = 0x306BC0u;
label_306bc0:
    // 0x306bc0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x306bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_306bc4:
    // 0x306bc4: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x306bc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_306bc8:
    // 0x306bc8: 0x8c560014  lw          $s6, 0x14($v0)
    ctx->pc = 0x306bc8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_306bcc:
    // 0x306bcc: 0xafb60004  sw          $s6, 0x4($sp)
    ctx->pc = 0x306bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 22));
label_306bd0:
    // 0x306bd0: 0x93a20028  lbu         $v0, 0x28($sp)
    ctx->pc = 0x306bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
label_306bd4:
    // 0x306bd4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x306bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_306bd8:
    // 0x306bd8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x306bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_306bdc:
    // 0x306bdc: 0xafb0002c  sw          $s0, 0x2C($sp)
    ctx->pc = 0x306bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 16));
label_306be0:
    // 0x306be0: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x306be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
label_306be4:
    // 0x306be4: 0xa3a2002b  sb          $v0, 0x2B($sp)
    ctx->pc = 0x306be4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 43), (uint8_t)GPR_U32(ctx, 2));
label_306be8:
    // 0x306be8: 0xafb20030  sw          $s2, 0x30($sp)
    ctx->pc = 0x306be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 18));
label_306bec:
    // 0x306bec: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x306becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_306bf0:
    // 0x306bf0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x306bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_306bf4:
    // 0x306bf4: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_306bf8:
    // 0x306bf8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x306bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_306bfc:
    // 0x306bfc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x306bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_306c00:
    // 0x306c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306c04:
    // 0x306c04: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x306c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_306c08:
    // 0x306c08: 0x8ba20093  lwl         $v0, 0x93($sp)
    ctx->pc = 0x306c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 147); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_306c0c:
    // 0x306c0c: 0x9ba20090  lwr         $v0, 0x90($sp)
    ctx->pc = 0x306c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_306c10:
    // 0x306c10: 0xaba20047  swl         $v0, 0x47($sp)
    ctx->pc = 0x306c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_306c14:
    // 0x306c14: 0xbba20044  swr         $v0, 0x44($sp)
    ctx->pc = 0x306c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_306c18:
    // 0x306c18: 0x93a2002a  lbu         $v0, 0x2A($sp)
    ctx->pc = 0x306c18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
label_306c1c:
    // 0x306c1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_306c20:
    if (ctx->pc == 0x306C20u) {
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C24u;
        goto label_306c24;
    }
    ctx->pc = 0x306C1Cu;
    {
        const bool branch_taken_0x306c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c1c) {
            ctx->pc = 0x306C3Cu;
            goto label_306c3c;
        }
    }
    ctx->pc = 0x306C24u;
label_306c24:
    // 0x306c24: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x306c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_306c28:
    // 0x306c28: 0x88460007  lwl         $a2, 0x7($v0)
    ctx->pc = 0x306c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_306c2c:
    // 0x306c2c: 0x98460004  lwr         $a2, 0x4($v0)
    ctx->pc = 0x306c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_306c30:
    // 0x306c30: 0xaba60047  swl         $a2, 0x47($sp)
    ctx->pc = 0x306c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_306c34:
    // 0x306c34: 0xbba60044  swr         $a2, 0x44($sp)
    ctx->pc = 0x306c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_306c38:
    // 0x306c38: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x306c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_306c3c:
    // 0x306c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306c40:
    // 0x306c40: 0x10620043  beq         $v1, $v0, . + 4 + (0x43 << 2)
label_306c44:
    if (ctx->pc == 0x306C44u) {
        ctx->pc = 0x306C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C40u;
        // 0x306c44: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C48u;
        goto label_306c48;
    }
    ctx->pc = 0x306C40u;
    {
        const bool branch_taken_0x306c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x306C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C40u;
        // 0x306c44: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c40) {
            ctx->pc = 0x306D50u;
            goto label_306d50;
        }
    }
    ctx->pc = 0x306C48u;
label_306c48:
    // 0x306c48: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x306c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_306c4c:
    // 0x306c4c: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x306c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_306c50:
    // 0x306c50: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x306c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_306c54:
    // 0x306c54: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x306c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_306c58:
    // 0x306c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x306c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306c5c:
    // 0x306c5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_306c60:
    if (ctx->pc == 0x306C60u) {
        ctx->pc = 0x306C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C5Cu;
        // 0x306c60: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C64u;
        goto label_306c64;
    }
    ctx->pc = 0x306C5Cu;
    {
        const bool branch_taken_0x306c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C5Cu;
        // 0x306c60: 0x3c020007  lui         $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c5c) {
            ctx->pc = 0x306C80u;
            goto label_306c80;
        }
    }
    ctx->pc = 0x306C64u;
label_306c64:
    // 0x306c64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306c68:
    // 0x306c68: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_306c6c:
    if (ctx->pc == 0x306C6Cu) {
        ctx->pc = 0x306C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C68u;
        // 0x306c6c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C70u;
        goto label_306c70;
    }
    ctx->pc = 0x306C68u;
    {
        const bool branch_taken_0x306c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c68) {
            ctx->pc = 0x306C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306C68u;
            // 0x306c6c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306C90u;
            goto label_306c90;
        }
    }
    ctx->pc = 0x306C70u;
label_306c70:
    // 0x306c70: 0x40f809  jalr        $v0
label_306c74:
    if (ctx->pc == 0x306C74u) {
        ctx->pc = 0x306C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C70u;
        // 0x306c74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C78u;
        goto label_306c78;
    }
    ctx->pc = 0x306C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306C78u);
        ctx->pc = 0x306C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C70u;
        // 0x306c74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C70u, 0x306C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306C78u;
label_306c78:
    // 0x306c78: 0x10000005  b           . + 4 + (0x5 << 2)
label_306c7c:
    if (ctx->pc == 0x306C7Cu) {
        ctx->pc = 0x306C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C78u;
        // 0x306c7c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C80u;
        goto label_306c80;
    }
    ctx->pc = 0x306C78u;
    {
        const bool branch_taken_0x306c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C78u;
        // 0x306c7c: 0x8fa20034  lw          $v0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c78) {
            ctx->pc = 0x306C90u;
            goto label_306c90;
        }
    }
    ctx->pc = 0x306C80u;
label_306c80:
    // 0x306c80: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x306c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
label_306c84:
    // 0x306c84: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x306c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_306c88:
    // 0x306c88: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x306c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_306c8c:
    // 0x306c8c: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x306c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_306c90:
    // 0x306c90: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x306c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_306c94:
    // 0x306c94: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_306c98:
    if (ctx->pc == 0x306C98u) {
        ctx->pc = 0x306C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C94u;
        // 0x306c98: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C9Cu;
        goto label_306c9c;
    }
    ctx->pc = 0x306C94u;
    {
        const bool branch_taken_0x306c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C94u;
        // 0x306c98: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c94) {
            ctx->pc = 0x306CACu;
            goto label_306cac;
        }
    }
    ctx->pc = 0x306C9Cu;
label_306c9c:
    // 0x306c9c: 0xc0c1b76  jal         func_306DD8
label_306ca0:
    if (ctx->pc == 0x306CA0u) {
        ctx->pc = 0x306CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C9Cu;
        // 0x306ca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CA4u;
        goto label_306ca4;
    }
    ctx->pc = 0x306C9Cu;
    SET_GPR_U32(ctx, 31, 0x306CA4u);
    ctx->pc = 0x306CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C9Cu;
    // 0x306ca0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x306DD8u, 0x306C9Cu, 0x306CA4u)) {
        return;
    }
    ctx->pc = 0x306CA4u;
label_306ca4:
    // 0x306ca4: 0x1040ff83  beqz        $v0, . + 4 + (-0x7D << 2)
label_306ca8:
    if (ctx->pc == 0x306CA8u) {
        ctx->pc = 0x306CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CA4u;
        // 0x306ca8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CACu;
        goto label_306cac;
    }
    ctx->pc = 0x306CA4u;
    {
        const bool branch_taken_0x306ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CA4u;
        // 0x306ca8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306ca4) {
            ctx->pc = 0x306AB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306ab4;
        }
    }
    ctx->pc = 0x306CACu;
label_306cac:
    // 0x306cac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x306cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306cb0:
    // 0x306cb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x306cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_306cb4:
    // 0x306cb4: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
label_306cb8:
    if (ctx->pc == 0x306CB8u) {
        ctx->pc = 0x306CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CB4u;
        // 0x306cb8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CBCu;
        goto label_306cbc;
    }
    ctx->pc = 0x306CB4u;
    {
        const bool branch_taken_0x306cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x306cb4) {
            ctx->pc = 0x306CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306CB4u;
            // 0x306cb8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306D54u;
            goto label_306d54;
        }
    }
    ctx->pc = 0x306CBCu;
label_306cbc:
    // 0x306cbc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x306cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_306cc0:
    // 0x306cc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x306cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_306cc4:
    // 0x306cc4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x306cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_306cc8:
    // 0x306cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x306cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_306ccc:
    // 0x306ccc: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x306cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_306cd0:
    // 0x306cd0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306cd4:
    // 0x306cd4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x306cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_306cd8:
    // 0x306cd8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306cdc:
    // 0x306cdc: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x306cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_306ce0:
    // 0x306ce0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x306ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_306ce4:
    // 0x306ce4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x306ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_306ce8:
    // 0x306ce8: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x306ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_306cec:
    // 0x306cec: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x306cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_306cf0:
    // 0x306cf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306cf4:
    // 0x306cf4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x306cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_306cf8:
    // 0x306cf8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306cfc:
    // 0x306cfc: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x306cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_306d00:
    // 0x306d00: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x306d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_306d04:
    // 0x306d04: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x306d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_306d08:
    // 0x306d08: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x306d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306d0c:
    // 0x306d0c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x306d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_306d10:
    // 0x306d10: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x306d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_306d14:
    // 0x306d14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306d18:
    // 0x306d18: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x306d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_306d1c:
    // 0x306d1c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x306d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_306d20:
    // 0x306d20: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x306d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_306d24:
    // 0x306d24: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x306d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_306d28:
    // 0x306d28: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x306d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_306d2c:
    // 0x306d2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x306d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_306d30:
    // 0x306d30: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x306d30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_306d34:
    // 0x306d34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x306d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_306d38:
    // 0x306d38: 0x8c634198  lw          $v1, 0x4198($v1)
    ctx->pc = 0x306d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16792)));
label_306d3c:
    // 0x306d3c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x306d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_306d40:
    // 0x306d40: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x306d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_306d44:
    // 0x306d44: 0x8c640024  lw          $a0, 0x24($v1)
    ctx->pc = 0x306d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_306d48:
    // 0x306d48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x306d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_306d4c:
    // 0x306d4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x306d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_306d50:
    // 0x306d50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x306d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_306d54:
    // 0x306d54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x306d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_306d58:
    // 0x306d58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x306d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_306d5c:
    // 0x306d5c: 0x40f809  jalr        $v0
label_306d60:
    if (ctx->pc == 0x306D60u) {
        ctx->pc = 0x306D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D5Cu;
        // 0x306d60: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D64u;
        goto label_306d64;
    }
    ctx->pc = 0x306D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306D64u);
        ctx->pc = 0x306D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D5Cu;
        // 0x306d60: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D5Cu, 0x306D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306D64u;
label_306d64:
    // 0x306d64: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x306d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_306d68:
    // 0x306d68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_306d6c:
    if (ctx->pc == 0x306D6Cu) {
        ctx->pc = 0x306D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D68u;
        // 0x306d6c: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D70u;
        goto label_306d70;
    }
    ctx->pc = 0x306D68u;
    {
        const bool branch_taken_0x306d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d68) {
            ctx->pc = 0x306D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306D68u;
            // 0x306d6c: 0x96a20004  lhu         $v0, 0x4($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306D7Cu;
            goto label_306d7c;
        }
    }
    ctx->pc = 0x306D70u;
label_306d70:
    // 0x306d70: 0x40f809  jalr        $v0
label_306d74:
    if (ctx->pc == 0x306D74u) {
        ctx->pc = 0x306D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D70u;
        // 0x306d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D78u;
        goto label_306d78;
    }
    ctx->pc = 0x306D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306D78u);
        ctx->pc = 0x306D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D70u;
        // 0x306d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D70u, 0x306D78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306D78u;
label_306d78:
    // 0x306d78: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x306d78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_306d7c:
    // 0x306d7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x306d7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_306d80:
    // 0x306d80: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x306d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_306d84:
    // 0x306d84: 0x1440ff80  bnez        $v0, . + 4 + (-0x80 << 2)
label_306d88:
    if (ctx->pc == 0x306D88u) {
        ctx->pc = 0x306D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D84u;
        // 0x306d88: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D8Cu;
        goto label_306d8c;
    }
    ctx->pc = 0x306D84u;
    {
        const bool branch_taken_0x306d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D84u;
        // 0x306d88: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d84) {
            ctx->pc = 0x306B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_306b88;
        }
    }
    ctx->pc = 0x306D8Cu;
label_306d8c:
    // 0x306d8c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x306d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_306d90:
    // 0x306d90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_306d94:
    if (ctx->pc == 0x306D94u) {
        ctx->pc = 0x306D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D90u;
        // 0x306d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D98u;
        goto label_306d98;
    }
    ctx->pc = 0x306D90u;
    {
        const bool branch_taken_0x306d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d90) {
            ctx->pc = 0x306D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306D90u;
            // 0x306d94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306DA4u;
            goto label_306da4;
        }
    }
    ctx->pc = 0x306D98u;
label_306d98:
    // 0x306d98: 0x40f809  jalr        $v0
label_306d9c:
    if (ctx->pc == 0x306D9Cu) {
        ctx->pc = 0x306D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D98u;
        // 0x306d9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DA0u;
        goto label_306da0;
    }
    ctx->pc = 0x306D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x306DA0u);
        ctx->pc = 0x306D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D98u;
        // 0x306d9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D98u, 0x306DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x306DA0u;
label_306da0:
    // 0x306da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306da4:
    // 0x306da4: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x306da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_306da8:
    // 0x306da8: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x306da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_306dac:
    // 0x306dac: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x306dacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_306db0:
    // 0x306db0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x306db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_306db4:
    // 0x306db4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x306db4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_306db8:
    // 0x306db8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x306db8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_306dbc:
    // 0x306dbc: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x306dbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_306dc0:
    // 0x306dc0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x306dc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_306dc4:
    // 0x306dc4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x306dc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_306dc8:
    // 0x306dc8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x306dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_306dcc:
    // 0x306dcc: 0x3e00008  jr          $ra
label_306dd0:
    if (ctx->pc == 0x306DD0u) {
        ctx->pc = 0x306DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DCCu;
        // 0x306dd0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DD4u;
        goto label_306dd4;
    }
    ctx->pc = 0x306DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DCCu;
        // 0x306dd0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306DD4u;
label_306dd4:
    // 0x306dd4: 0x0  nop
    ctx->pc = 0x306dd4u;
    // NOP
    ctx->pc = 0x306dd8u;
}
