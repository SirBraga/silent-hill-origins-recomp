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

// Function: sub_00273C90
// Address: 0x273c90 - 0x274118
void sub_00273C90_0x273c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273C90_0x273c90");
#endif

    switch (ctx->pc) {
        case 0x273c90u: goto label_273c90;
        case 0x273c94u: goto label_273c94;
        case 0x273c98u: goto label_273c98;
        case 0x273c9cu: goto label_273c9c;
        case 0x273ca0u: goto label_273ca0;
        case 0x273ca4u: goto label_273ca4;
        case 0x273ca8u: goto label_273ca8;
        case 0x273cacu: goto label_273cac;
        case 0x273cb0u: goto label_273cb0;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cb8u: goto label_273cb8;
        case 0x273cbcu: goto label_273cbc;
        case 0x273cc0u: goto label_273cc0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cc8u: goto label_273cc8;
        case 0x273cccu: goto label_273ccc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273cd4u: goto label_273cd4;
        case 0x273cd8u: goto label_273cd8;
        case 0x273cdcu: goto label_273cdc;
        case 0x273ce0u: goto label_273ce0;
        case 0x273ce4u: goto label_273ce4;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cecu: goto label_273cec;
        case 0x273cf0u: goto label_273cf0;
        case 0x273cf4u: goto label_273cf4;
        case 0x273cf8u: goto label_273cf8;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d00u: goto label_273d00;
        case 0x273d04u: goto label_273d04;
        case 0x273d08u: goto label_273d08;
        case 0x273d0cu: goto label_273d0c;
        case 0x273d10u: goto label_273d10;
        case 0x273d14u: goto label_273d14;
        case 0x273d18u: goto label_273d18;
        case 0x273d1cu: goto label_273d1c;
        case 0x273d20u: goto label_273d20;
        case 0x273d24u: goto label_273d24;
        case 0x273d28u: goto label_273d28;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d30u: goto label_273d30;
        case 0x273d34u: goto label_273d34;
        case 0x273d38u: goto label_273d38;
        case 0x273d3cu: goto label_273d3c;
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        case 0x273e90u: goto label_273e90;
        case 0x273e94u: goto label_273e94;
        case 0x273e98u: goto label_273e98;
        case 0x273e9cu: goto label_273e9c;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ea4u: goto label_273ea4;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eacu: goto label_273eac;
        case 0x273eb0u: goto label_273eb0;
        case 0x273eb4u: goto label_273eb4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273ebcu: goto label_273ebc;
        case 0x273ec0u: goto label_273ec0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273ec8u: goto label_273ec8;
        case 0x273eccu: goto label_273ecc;
        case 0x273ed0u: goto label_273ed0;
        case 0x273ed4u: goto label_273ed4;
        case 0x273ed8u: goto label_273ed8;
        case 0x273edcu: goto label_273edc;
        case 0x273ee0u: goto label_273ee0;
        case 0x273ee4u: goto label_273ee4;
        case 0x273ee8u: goto label_273ee8;
        case 0x273eecu: goto label_273eec;
        case 0x273ef0u: goto label_273ef0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273ef8u: goto label_273ef8;
        case 0x273efcu: goto label_273efc;
        case 0x273f00u: goto label_273f00;
        case 0x273f04u: goto label_273f04;
        case 0x273f08u: goto label_273f08;
        case 0x273f0cu: goto label_273f0c;
        case 0x273f10u: goto label_273f10;
        case 0x273f14u: goto label_273f14;
        case 0x273f18u: goto label_273f18;
        case 0x273f1cu: goto label_273f1c;
        case 0x273f20u: goto label_273f20;
        case 0x273f24u: goto label_273f24;
        case 0x273f28u: goto label_273f28;
        case 0x273f2cu: goto label_273f2c;
        case 0x273f30u: goto label_273f30;
        case 0x273f34u: goto label_273f34;
        case 0x273f38u: goto label_273f38;
        case 0x273f3cu: goto label_273f3c;
        case 0x273f40u: goto label_273f40;
        case 0x273f44u: goto label_273f44;
        case 0x273f48u: goto label_273f48;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f50u: goto label_273f50;
        case 0x273f54u: goto label_273f54;
        case 0x273f58u: goto label_273f58;
        case 0x273f5cu: goto label_273f5c;
        case 0x273f60u: goto label_273f60;
        case 0x273f64u: goto label_273f64;
        case 0x273f68u: goto label_273f68;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f70u: goto label_273f70;
        case 0x273f74u: goto label_273f74;
        case 0x273f78u: goto label_273f78;
        case 0x273f7cu: goto label_273f7c;
        case 0x273f80u: goto label_273f80;
        case 0x273f84u: goto label_273f84;
        case 0x273f88u: goto label_273f88;
        case 0x273f8cu: goto label_273f8c;
        case 0x273f90u: goto label_273f90;
        case 0x273f94u: goto label_273f94;
        case 0x273f98u: goto label_273f98;
        case 0x273f9cu: goto label_273f9c;
        case 0x273fa0u: goto label_273fa0;
        case 0x273fa4u: goto label_273fa4;
        case 0x273fa8u: goto label_273fa8;
        case 0x273facu: goto label_273fac;
        case 0x273fb0u: goto label_273fb0;
        case 0x273fb4u: goto label_273fb4;
        case 0x273fb8u: goto label_273fb8;
        case 0x273fbcu: goto label_273fbc;
        case 0x273fc0u: goto label_273fc0;
        case 0x273fc4u: goto label_273fc4;
        case 0x273fc8u: goto label_273fc8;
        case 0x273fccu: goto label_273fcc;
        case 0x273fd0u: goto label_273fd0;
        case 0x273fd4u: goto label_273fd4;
        case 0x273fd8u: goto label_273fd8;
        case 0x273fdcu: goto label_273fdc;
        case 0x273fe0u: goto label_273fe0;
        case 0x273fe4u: goto label_273fe4;
        case 0x273fe8u: goto label_273fe8;
        case 0x273fecu: goto label_273fec;
        case 0x273ff0u: goto label_273ff0;
        case 0x273ff4u: goto label_273ff4;
        case 0x273ff8u: goto label_273ff8;
        case 0x273ffcu: goto label_273ffc;
        case 0x274000u: goto label_274000;
        case 0x274004u: goto label_274004;
        case 0x274008u: goto label_274008;
        case 0x27400cu: goto label_27400c;
        case 0x274010u: goto label_274010;
        case 0x274014u: goto label_274014;
        case 0x274018u: goto label_274018;
        case 0x27401cu: goto label_27401c;
        case 0x274020u: goto label_274020;
        case 0x274024u: goto label_274024;
        case 0x274028u: goto label_274028;
        case 0x27402cu: goto label_27402c;
        case 0x274030u: goto label_274030;
        case 0x274034u: goto label_274034;
        case 0x274038u: goto label_274038;
        case 0x27403cu: goto label_27403c;
        case 0x274040u: goto label_274040;
        case 0x274044u: goto label_274044;
        case 0x274048u: goto label_274048;
        case 0x27404cu: goto label_27404c;
        case 0x274050u: goto label_274050;
        case 0x274054u: goto label_274054;
        case 0x274058u: goto label_274058;
        case 0x27405cu: goto label_27405c;
        case 0x274060u: goto label_274060;
        case 0x274064u: goto label_274064;
        case 0x274068u: goto label_274068;
        case 0x27406cu: goto label_27406c;
        case 0x274070u: goto label_274070;
        case 0x274074u: goto label_274074;
        case 0x274078u: goto label_274078;
        case 0x27407cu: goto label_27407c;
        case 0x274080u: goto label_274080;
        case 0x274084u: goto label_274084;
        case 0x274088u: goto label_274088;
        case 0x27408cu: goto label_27408c;
        case 0x274090u: goto label_274090;
        case 0x274094u: goto label_274094;
        case 0x274098u: goto label_274098;
        case 0x27409cu: goto label_27409c;
        case 0x2740a0u: goto label_2740a0;
        case 0x2740a4u: goto label_2740a4;
        case 0x2740a8u: goto label_2740a8;
        case 0x2740acu: goto label_2740ac;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740b4u: goto label_2740b4;
        case 0x2740b8u: goto label_2740b8;
        case 0x2740bcu: goto label_2740bc;
        case 0x2740c0u: goto label_2740c0;
        case 0x2740c4u: goto label_2740c4;
        case 0x2740c8u: goto label_2740c8;
        case 0x2740ccu: goto label_2740cc;
        case 0x2740d0u: goto label_2740d0;
        case 0x2740d4u: goto label_2740d4;
        case 0x2740d8u: goto label_2740d8;
        case 0x2740dcu: goto label_2740dc;
        case 0x2740e0u: goto label_2740e0;
        case 0x2740e4u: goto label_2740e4;
        case 0x2740e8u: goto label_2740e8;
        case 0x2740ecu: goto label_2740ec;
        case 0x2740f0u: goto label_2740f0;
        case 0x2740f4u: goto label_2740f4;
        case 0x2740f8u: goto label_2740f8;
        case 0x2740fcu: goto label_2740fc;
        case 0x274100u: goto label_274100;
        case 0x274104u: goto label_274104;
        case 0x274108u: goto label_274108;
        case 0x27410cu: goto label_27410c;
        case 0x274110u: goto label_274110;
        case 0x274114u: goto label_274114;
        default: break;
    }

    ctx->pc = 0x273c90u;

label_273c90:
    // 0x273c90: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x273c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_273c94:
    // 0x273c94: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x273c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_273c98:
    // 0x273c98: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x273c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_273c9c:
    // 0x273c9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x273c9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273ca0:
    // 0x273ca0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x273ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_273ca4:
    // 0x273ca4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x273ca4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_273ca8:
    // 0x273ca8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x273ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_273cac:
    // 0x273cac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x273cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273cb0:
    // 0x273cb0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x273cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_273cb4:
    // 0x273cb4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x273cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_273cb8:
    // 0x273cb8: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x273cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_273cbc:
    // 0x273cbc: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x273cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_273cc0:
    // 0x273cc0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x273cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_273cc4:
    // 0x273cc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x273cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_273cc8:
    // 0x273cc8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x273cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_273ccc:
    // 0x273ccc: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x273cccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273cd0:
    // 0x273cd0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_273cd4:
    // 0x273cd4: 0x24560028  addiu       $s6, $v0, 0x28
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_273cd8:
    // 0x273cd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_273cdc:
    if (ctx->pc == 0x273CDCu) {
        ctx->pc = 0x273CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CD8u;
        // 0x273cdc: 0xfe240020  sd          $a0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CE0u;
        goto label_273ce0;
    }
    ctx->pc = 0x273CD8u;
    {
        const bool branch_taken_0x273cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CD8u;
        // 0x273cdc: 0xfe240020  sd          $a0, 0x20($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cd8) {
            ctx->pc = 0x273CE8u;
            goto label_273ce8;
        }
    }
    ctx->pc = 0x273CE0u;
label_273ce0:
    // 0x273ce0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x273ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_273ce4:
    // 0x273ce4: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x273ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_273ce8:
    // 0x273ce8: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x273ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
label_273cec:
    // 0x273cec: 0x40f809  jalr        $v0
label_273cf0:
    if (ctx->pc == 0x273CF0u) {
        ctx->pc = 0x273CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CECu;
        // 0x273cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CF4u;
        goto label_273cf4;
    }
    ctx->pc = 0x273CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273CF4u);
        ctx->pc = 0x273CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CECu;
        // 0x273cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273CECu, 0x273CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273CF4u;
label_273cf4:
    // 0x273cf4: 0x144000fc  bnez        $v0, . + 4 + (0xFC << 2)
label_273cf8:
    if (ctx->pc == 0x273CF8u) {
        ctx->pc = 0x273CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CF4u;
        // 0x273cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273CFCu;
        goto label_273cfc;
    }
    ctx->pc = 0x273CF4u;
    {
        const bool branch_taken_0x273cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273CF4u;
        // 0x273cf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273cf4) {
            ctx->pc = 0x2740E8u;
            goto label_2740e8;
        }
    }
    ctx->pc = 0x273CFCu;
label_273cfc:
    // 0x273cfc: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x273cfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273d00:
    // 0x273d00: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x273d00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_273d04:
    // 0x273d04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x273d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273d08:
    // 0x273d08: 0x242102d  daddu       $v0, $s2, $v0
    ctx->pc = 0x273d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 2));
label_273d0c:
    // 0x273d0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x273d0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_273d10:
    // 0x273d10: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x273d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273d14:
    // 0x273d14: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_273d18:
    if (ctx->pc == 0x273D18u) {
        ctx->pc = 0x273D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D14u;
        // 0x273d18: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D1Cu;
        goto label_273d1c;
    }
    ctx->pc = 0x273D14u;
    {
        const bool branch_taken_0x273d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D14u;
        // 0x273d18: 0x12103c  dsll32      $v0, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d14) {
            ctx->pc = 0x273D5Cu;
            goto label_273d5c;
        }
    }
    ctx->pc = 0x273D1Cu;
label_273d1c:
    // 0x273d1c: 0x64c407ff  daddiu      $a0, $a2, 0x7FF
    ctx->pc = 0x273d1cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)2047);
label_273d20:
    // 0x273d20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x273d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_273d24:
    // 0x273d24: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x273d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_273d28:
    // 0x273d28: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x273d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_273d2c:
    // 0x273d2c: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x273d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_273d30:
    // 0x273d30: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x273d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_273d34:
    // 0x273d34: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_273d38:
    if (ctx->pc == 0x273D38u) {
        ctx->pc = 0x273D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D34u;
        // 0x273d38: 0xc5102f  dsubu       $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D3Cu;
        goto label_273d3c;
    }
    ctx->pc = 0x273D34u;
    {
        const bool branch_taken_0x273d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D34u;
        // 0x273d38: 0xc5102f  dsubu       $v0, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d34) {
            ctx->pc = 0x273D40u;
            goto label_273d40;
        }
    }
    ctx->pc = 0x273D3Cu;
label_273d3c:
    // 0x273d3c: 0x85102f  dsubu       $v0, $a0, $a1
    ctx->pc = 0x273d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_273d40:
    // 0x273d40: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x273d40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
label_273d44:
    // 0x273d44: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x273d44u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_273d48:
    // 0x273d48: 0xc5102f  dsubu       $v0, $a2, $a1
    ctx->pc = 0x273d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 5));
label_273d4c:
    // 0x273d4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x273d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_273d50:
    // 0x273d50: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x273d50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_273d54:
    // 0x273d54: 0x10000002  b           . + 4 + (0x2 << 2)
label_273d58:
    if (ctx->pc == 0x273D58u) {
        ctx->pc = 0x273D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D54u;
        // 0x273d58: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D5Cu;
        goto label_273d5c;
    }
    ctx->pc = 0x273D54u;
    {
        const bool branch_taken_0x273d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D54u;
        // 0x273d58: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d54) {
            ctx->pc = 0x273D60u;
            goto label_273d60;
        }
    }
    ctx->pc = 0x273D5Cu;
label_273d5c:
    // 0x273d5c: 0xafb20070  sw          $s2, 0x70($sp)
    ctx->pc = 0x273d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 18));
label_273d60:
    // 0x273d60: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x273d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_273d64:
    // 0x273d64: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_273d68:
    if (ctx->pc == 0x273D68u) {
        ctx->pc = 0x273D6Cu;
        goto label_273d6c;
    }
    ctx->pc = 0x273D64u;
    {
        const bool branch_taken_0x273d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x273d64) {
            ctx->pc = 0x273E54u;
            goto label_273e54;
        }
    }
    ctx->pc = 0x273D6Cu;
label_273d6c:
    // 0x273d6c: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
label_273d70:
    if (ctx->pc == 0x273D70u) {
        ctx->pc = 0x273D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D6Cu;
        // 0x273d70: 0x324207ff  andi        $v0, $s2, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D74u;
        goto label_273d74;
    }
    ctx->pc = 0x273D6Cu;
    {
        const bool branch_taken_0x273d6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D6Cu;
        // 0x273d70: 0x324207ff  andi        $v0, $s2, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d6c) {
            ctx->pc = 0x273E44u;
            goto label_273e44;
        }
    }
    ctx->pc = 0x273D74u;
label_273d74:
    // 0x273d74: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_273d78:
    if (ctx->pc == 0x273D78u) {
        ctx->pc = 0x273D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D74u;
        // 0x273d78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D7Cu;
        goto label_273d7c;
    }
    ctx->pc = 0x273D74u;
    {
        const bool branch_taken_0x273d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D74u;
        // 0x273d78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d74) {
            ctx->pc = 0x273E48u;
            goto label_273e48;
        }
    }
    ctx->pc = 0x273D7Cu;
label_273d7c:
    // 0x273d7c: 0x3282000f  andi        $v0, $s4, 0xF
    ctx->pc = 0x273d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
label_273d80:
    // 0x273d80: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_273d84:
    if (ctx->pc == 0x273D84u) {
        ctx->pc = 0x273D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D80u;
        // 0x273d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D88u;
        goto label_273d88;
    }
    ctx->pc = 0x273D80u;
    {
        const bool branch_taken_0x273d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D80u;
        // 0x273d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d80) {
            ctx->pc = 0x273E4Cu;
            goto label_273e4c;
        }
    }
    ctx->pc = 0x273D88u;
label_273d88:
    // 0x273d88: 0x2922821  addu        $a1, $s4, $s2
    ctx->pc = 0x273d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_273d8c:
    // 0x273d8c: 0xc0c86e4  jal         func_321B90
label_273d90:
    if (ctx->pc == 0x273D90u) {
        ctx->pc = 0x273D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273D8Cu;
        // 0x273d90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273D94u;
        goto label_273d94;
    }
    ctx->pc = 0x273D8Cu;
    SET_GPR_U32(ctx, 31, 0x273D94u);
    ctx->pc = 0x273D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273D8Cu;
    // 0x273d90: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x273D8Cu, 0x273D94u)) {
        return;
    }
    ctx->pc = 0x273D94u;
label_273d94:
    // 0x273d94: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x273d94u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_273d98:
    // 0x273d98: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x273d98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273d9c:
    // 0x273d9c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x273d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_273da0:
    // 0x273da0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x273da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_273da4:
    // 0x273da4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x273da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_273da8:
    // 0x273da8: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x273da8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_273dac:
    // 0x273dac: 0x8e280064  lw          $t0, 0x64($s1)
    ctx->pc = 0x273dacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_273db0:
    // 0x273db0: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x273db0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
label_273db4:
    // 0x273db4: 0x24a65480  addiu       $a2, $a1, 0x5480
    ctx->pc = 0x273db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 21632));
label_273db8:
    // 0x273db8: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x273db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_273dbc:
    // 0x273dbc: 0x123ac2  srl         $a3, $s2, 11
    ctx->pc = 0x273dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
label_273dc0:
    // 0x273dc0: 0xacd40008  sw          $s4, 0x8($a2)
    ctx->pc = 0x273dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 20));
label_273dc4:
    // 0x273dc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x273dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_273dc8:
    // 0x273dc8: 0xaca85480  sw          $t0, 0x5480($a1)
    ctx->pc = 0x273dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 21632), GPR_U32(ctx, 8));
label_273dcc:
    // 0x273dcc: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x273dccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_273dd0:
    // 0x273dd0: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x273dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_273dd4:
    // 0x273dd4: 0xc0c84d8  jal         func_321360
label_273dd8:
    if (ctx->pc == 0x273DD8u) {
        ctx->pc = 0x273DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DD4u;
        // 0x273dd8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DDCu;
        goto label_273ddc;
    }
    ctx->pc = 0x273DD4u;
    SET_GPR_U32(ctx, 31, 0x273DDCu);
    ctx->pc = 0x273DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DD4u;
    // 0x273dd8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273DD4u, 0x273DDCu)) {
        return;
    }
    ctx->pc = 0x273DDCu;
label_273ddc:
    // 0x273ddc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x273ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_273de0:
    // 0x273de0: 0xc0c84e4  jal         func_321390
label_273de4:
    if (ctx->pc == 0x273DE4u) {
        ctx->pc = 0x273DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE0u;
        // 0x273de4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DE8u;
        goto label_273de8;
    }
    ctx->pc = 0x273DE0u;
    SET_GPR_U32(ctx, 31, 0x273DE8u);
    ctx->pc = 0x273DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DE0u;
    // 0x273de4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321390u, 0x273DE0u, 0x273DE8u)) {
        return;
    }
    ctx->pc = 0x273DE8u;
label_273de8:
    // 0x273de8: 0x10000004  b           . + 4 + (0x4 << 2)
label_273dec:
    if (ctx->pc == 0x273DECu) {
        ctx->pc = 0x273DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE8u;
        // 0x273dec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DF0u;
        goto label_273df0;
    }
    ctx->pc = 0x273DE8u;
    {
        const bool branch_taken_0x273de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DE8u;
        // 0x273dec: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273de8) {
            ctx->pc = 0x273DFCu;
            goto label_273dfc;
        }
    }
    ctx->pc = 0x273DF0u;
label_273df0:
    // 0x273df0: 0xc0c84d8  jal         func_321360
label_273df4:
    if (ctx->pc == 0x273DF4u) {
        ctx->pc = 0x273DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273DF0u;
        // 0x273df4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273DF8u;
        goto label_273df8;
    }
    ctx->pc = 0x273DF0u;
    SET_GPR_U32(ctx, 31, 0x273DF8u);
    ctx->pc = 0x273DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273DF0u;
    // 0x273df4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273DF0u, 0x273DF8u)) {
        return;
    }
    ctx->pc = 0x273DF8u;
label_273df8:
    // 0x273df8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x273df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_273dfc:
    // 0x273dfc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x273dfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_273e00:
    // 0x273e00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_273e04:
    // 0x273e04: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_273e08:
    if (ctx->pc == 0x273E08u) {
        ctx->pc = 0x273E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E04u;
        // 0x273e08: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E0Cu;
        goto label_273e0c;
    }
    ctx->pc = 0x273E04u;
    {
        const bool branch_taken_0x273e04 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x273E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E04u;
        // 0x273e08: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e04) {
            ctx->pc = 0x273DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273df0;
        }
    }
    ctx->pc = 0x273E0Cu;
label_273e0c:
    // 0x273e0c: 0x26e45448  addiu       $a0, $s7, 0x5448
    ctx->pc = 0x273e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21576));
label_273e10:
    // 0x273e10: 0x27c75480  addiu       $a3, $fp, 0x5480
    ctx->pc = 0x273e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 21632));
label_273e14:
    // 0x273e14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_273e18:
    // 0x273e18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x273e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_273e1c:
    // 0x273e1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273e20:
    // 0x273e20: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_273e24:
    // 0x273e24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273e24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273e28:
    // 0x273e28: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273e28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273e2c:
    // 0x273e2c: 0xc0c92ee  jal         func_324BB8
label_273e30:
    if (ctx->pc == 0x273E30u) {
        ctx->pc = 0x273E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E2Cu;
        // 0x273e30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E34u;
        goto label_273e34;
    }
    ctx->pc = 0x273E2Cu;
    SET_GPR_U32(ctx, 31, 0x273E34u);
    ctx->pc = 0x273E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E2Cu;
    // 0x273e30: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x273E2Cu, 0x273E34u)) {
        return;
    }
    ctx->pc = 0x273E34u;
label_273e34:
    // 0x273e34: 0xc0c84d0  jal         func_321340
label_273e38:
    if (ctx->pc == 0x273E38u) {
        ctx->pc = 0x273E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E34u;
        // 0x273e38: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E3Cu;
        goto label_273e3c;
    }
    ctx->pc = 0x273E34u;
    SET_GPR_U32(ctx, 31, 0x273E3Cu);
    ctx->pc = 0x273E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273E34u;
    // 0x273e38: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x273E34u, 0x273E3Cu)) {
        return;
    }
    ctx->pc = 0x273E3Cu;
label_273e3c:
    // 0x273e3c: 0x100000aa  b           . + 4 + (0xAA << 2)
label_273e40:
    if (ctx->pc == 0x273E40u) {
        ctx->pc = 0x273E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E3Cu;
        // 0x273e40: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E44u;
        goto label_273e44;
    }
    ctx->pc = 0x273E3Cu;
    {
        const bool branch_taken_0x273e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E3Cu;
        // 0x273e40: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e3c) {
            ctx->pc = 0x2740E8u;
            goto label_2740e8;
        }
    }
    ctx->pc = 0x273E44u;
label_273e44:
    // 0x273e44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x273e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_273e48:
    // 0x273e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x273e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273e4c:
    // 0x273e4c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_273e50:
    if (ctx->pc == 0x273E50u) {
        ctx->pc = 0x273E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E4Cu;
        // 0x273e50: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E54u;
        goto label_273e54;
    }
    ctx->pc = 0x273E4Cu;
    {
        const bool branch_taken_0x273e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E4Cu;
        // 0x273e50: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e4c) {
            ctx->pc = 0x2740E8u;
            goto label_2740e8;
        }
    }
    ctx->pc = 0x273E54u;
label_273e54:
    // 0x273e54: 0x124000a3  beqz        $s2, . + 4 + (0xA3 << 2)
label_273e58:
    if (ctx->pc == 0x273E58u) {
        ctx->pc = 0x273E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E54u;
        // 0x273e58: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E5Cu;
        goto label_273e5c;
    }
    ctx->pc = 0x273E54u;
    {
        const bool branch_taken_0x273e54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E54u;
        // 0x273e58: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e54) {
            ctx->pc = 0x2740E4u;
            goto label_2740e4;
        }
    }
    ctx->pc = 0x273E5Cu;
label_273e5c:
    // 0x273e5c: 0x24555480  addiu       $s5, $v0, 0x5480
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 21632));
label_273e60:
    // 0x273e60: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_273e64:
    // 0x273e64: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x273e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_273e68:
    // 0x273e68: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x273e68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273e6c:
    // 0x273e6c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_273e70:
    if (ctx->pc == 0x273E70u) {
        ctx->pc = 0x273E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E6Cu;
        // 0x273e70: 0x3c043000  lui         $a0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E74u;
        goto label_273e74;
    }
    ctx->pc = 0x273E6Cu;
    {
        const bool branch_taken_0x273e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E6Cu;
        // 0x273e70: 0x3c043000  lui         $a0, 0x3000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e6c) {
            ctx->pc = 0x273F10u;
            goto label_273f10;
        }
    }
    ctx->pc = 0x273E74u;
label_273e74:
    // 0x273e74: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x273e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_273e78:
    // 0x273e78: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_273e7c:
    if (ctx->pc == 0x273E7Cu) {
        ctx->pc = 0x273E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E78u;
        // 0x273e7c: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273E80u;
        goto label_273e80;
    }
    ctx->pc = 0x273E78u;
    {
        const bool branch_taken_0x273e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x273E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273E78u;
        // 0x273e7c: 0x442825  or          $a1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e78) {
            ctx->pc = 0x273EACu;
            goto label_273eac;
        }
    }
    ctx->pc = 0x273E80u;
label_273e80:
    // 0x273e80: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x273e80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273e84:
    // 0x273e84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x273e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_273e88:
    // 0x273e88: 0x644307ff  daddiu      $v1, $v0, 0x7FF
    ctx->pc = 0x273e88u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)2047);
label_273e8c:
    // 0x273e8c: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x273e8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273e90:
    // 0x273e90: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x273e90u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_273e94:
    // 0x273e94: 0x31afb  dsra        $v1, $v1, 11
    ctx->pc = 0x273e94u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 11);
label_273e98:
    // 0x273e98: 0x31af8  dsll        $v1, $v1, 11
    ctx->pc = 0x273e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 11);
label_273e9c:
    // 0x273e9c: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x273e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
label_273ea0:
    // 0x273ea0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x273ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_273ea4:
    // 0x273ea4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x273ea4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_273ea8:
    // 0x273ea8: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x273ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_273eac:
    // 0x273eac: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x273eacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_273eb0:
    // 0x273eb0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x273eb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273eb4:
    // 0x273eb4: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x273eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_273eb8:
    // 0x273eb8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_273ebc:
    // 0x273ebc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x273ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_273ec0:
    // 0x273ec0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x273ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_273ec4:
    // 0x273ec4: 0x243102b  sltu        $v0, $s2, $v1
    ctx->pc = 0x273ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_273ec8:
    // 0x273ec8: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x273ec8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_273ecc:
    // 0x273ecc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x273eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273ed0:
    // 0x273ed0: 0xc075fdc  jal         func_1D7F70
label_273ed4:
    if (ctx->pc == 0x273ED4u) {
        ctx->pc = 0x273ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273ED0u;
        // 0x273ed4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273ED8u;
        goto label_273ed8;
    }
    ctx->pc = 0x273ED0u;
    SET_GPR_U32(ctx, 31, 0x273ED8u);
    ctx->pc = 0x273ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273ED0u;
    // 0x273ed4: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x273ED0u, 0x273ED8u)) {
        return;
    }
    ctx->pc = 0x273ED8u;
label_273ed8:
    // 0x273ed8: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x273ed8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273edc:
    // 0x273edc: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x273edcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_273ee0:
    // 0x273ee0: 0x204102d  daddu       $v0, $s0, $a0
    ctx->pc = 0x273ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
label_273ee4:
    // 0x273ee4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x273ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273ee8:
    // 0x273ee8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_273eec:
    if (ctx->pc == 0x273EECu) {
        ctx->pc = 0x273EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EE8u;
        // 0x273eec: 0x64102f  dsubu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273EF0u;
        goto label_273ef0;
    }
    ctx->pc = 0x273EE8u;
    {
        const bool branch_taken_0x273ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273EE8u;
        // 0x273eec: 0x64102f  dsubu       $v0, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ee8) {
            ctx->pc = 0x273EF8u;
            goto label_273ef8;
        }
    }
    ctx->pc = 0x273EF0u;
label_273ef0:
    // 0x273ef0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x273ef0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_273ef4:
    // 0x273ef4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x273ef4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_273ef8:
    // 0x273ef8: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x273ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_273efc:
    // 0x273efc: 0x204102d  daddu       $v0, $s0, $a0
    ctx->pc = 0x273efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 4));
label_273f00:
    // 0x273f00: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x273f00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_273f04:
    // 0x273f04: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_273f08:
    // 0x273f08: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x273f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_273f0c:
    // 0x273f0c: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x273f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_273f10:
    // 0x273f10: 0x2e420800  sltiu       $v0, $s2, 0x800
    ctx->pc = 0x273f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_273f14:
    // 0x273f14: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_273f18:
    if (ctx->pc == 0x273F18u) {
        ctx->pc = 0x273F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F14u;
        // 0x273f18: 0x3282000f  andi        $v0, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F1Cu;
        goto label_273f1c;
    }
    ctx->pc = 0x273F14u;
    {
        const bool branch_taken_0x273f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F14u;
        // 0x273f18: 0x3282000f  andi        $v0, $s4, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f14) {
            ctx->pc = 0x273FF8u;
            goto label_273ff8;
        }
    }
    ctx->pc = 0x273F1Cu;
label_273f1c:
    // 0x273f1c: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
label_273f20:
    if (ctx->pc == 0x273F20u) {
        ctx->pc = 0x273F24u;
        goto label_273f24;
    }
    ctx->pc = 0x273F1Cu;
    {
        const bool branch_taken_0x273f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273f1c) {
            ctx->pc = 0x273FF8u;
            goto label_273ff8;
        }
    }
    ctx->pc = 0x273F24u;
label_273f24:
    // 0x273f24: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x273f24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273f28:
    // 0x273f28: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x273f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_273f2c:
    // 0x273f2c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_273f30:
    if (ctx->pc == 0x273F30u) {
        ctx->pc = 0x273F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F2Cu;
        // 0x273f30: 0x129ac2  srl         $s3, $s2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F34u;
        goto label_273f34;
    }
    ctx->pc = 0x273F2Cu;
    {
        const bool branch_taken_0x273f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F2Cu;
        // 0x273f30: 0x129ac2  srl         $s3, $s2, 11 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 18), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f2c) {
            ctx->pc = 0x273FF8u;
            goto label_273ff8;
        }
    }
    ctx->pc = 0x273F34u;
label_273f34:
    // 0x273f34: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x273f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_273f38:
    // 0x273f38: 0x1382c0  sll         $s0, $s3, 11
    ctx->pc = 0x273f38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_273f3c:
    // 0x273f3c: 0x3c1e0070  lui         $fp, 0x70
    ctx->pc = 0x273f3cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
label_273f40:
    // 0x273f40: 0x2902821  addu        $a1, $s4, $s0
    ctx->pc = 0x273f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_273f44:
    // 0x273f44: 0xc0c86e4  jal         func_321B90
label_273f48:
    if (ctx->pc == 0x273F48u) {
        ctx->pc = 0x273F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F44u;
        // 0x273f48: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F4Cu;
        goto label_273f4c;
    }
    ctx->pc = 0x273F44u;
    SET_GPR_U32(ctx, 31, 0x273F4Cu);
    ctx->pc = 0x273F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F44u;
    // 0x273f48: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x273F44u, 0x273F4Cu)) {
        return;
    }
    ctx->pc = 0x273F4Cu;
label_273f4c:
    // 0x273f4c: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x273f4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_273f50:
    // 0x273f50: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x273f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_273f54:
    // 0x273f54: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x273f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_273f58:
    // 0x273f58: 0x202102d  daddu       $v0, $s0, $v0
    ctx->pc = 0x273f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_273f5c:
    // 0x273f5c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x273f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_273f60:
    // 0x273f60: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x273f60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_273f64:
    // 0x273f64: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x273f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_273f68:
    // 0x273f68: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x273f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
label_273f6c:
    // 0x273f6c: 0xac435480  sw          $v1, 0x5480($v0)
    ctx->pc = 0x273f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 21632), GPR_U32(ctx, 3));
label_273f70:
    // 0x273f70: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x273f70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
label_273f74:
    // 0x273f74: 0xc0c84d8  jal         func_321360
label_273f78:
    if (ctx->pc == 0x273F78u) {
        ctx->pc = 0x273F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F74u;
        // 0x273f78: 0xaeb40008  sw          $s4, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F7Cu;
        goto label_273f7c;
    }
    ctx->pc = 0x273F74u;
    SET_GPR_U32(ctx, 31, 0x273F7Cu);
    ctx->pc = 0x273F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F74u;
    // 0x273f78: 0xaeb40008  sw          $s4, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273F74u, 0x273F7Cu)) {
        return;
    }
    ctx->pc = 0x273F7Cu;
label_273f7c:
    // 0x273f7c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x273f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_273f80:
    // 0x273f80: 0xc0c84e4  jal         func_321390
label_273f84:
    if (ctx->pc == 0x273F84u) {
        ctx->pc = 0x273F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F80u;
        // 0x273f84: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F88u;
        goto label_273f88;
    }
    ctx->pc = 0x273F80u;
    SET_GPR_U32(ctx, 31, 0x273F88u);
    ctx->pc = 0x273F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F80u;
    // 0x273f84: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321390u, 0x273F80u, 0x273F88u)) {
        return;
    }
    ctx->pc = 0x273F88u;
label_273f88:
    // 0x273f88: 0x10000004  b           . + 4 + (0x4 << 2)
label_273f8c:
    if (ctx->pc == 0x273F8Cu) {
        ctx->pc = 0x273F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F88u;
        // 0x273f8c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F90u;
        goto label_273f90;
    }
    ctx->pc = 0x273F88u;
    {
        const bool branch_taken_0x273f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F88u;
        // 0x273f8c: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f88) {
            ctx->pc = 0x273F9Cu;
            goto label_273f9c;
        }
    }
    ctx->pc = 0x273F90u;
label_273f90:
    // 0x273f90: 0xc0c84d8  jal         func_321360
label_273f94:
    if (ctx->pc == 0x273F94u) {
        ctx->pc = 0x273F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273F90u;
        // 0x273f94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273F98u;
        goto label_273f98;
    }
    ctx->pc = 0x273F90u;
    SET_GPR_U32(ctx, 31, 0x273F98u);
    ctx->pc = 0x273F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273F90u;
    // 0x273f94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x273F90u, 0x273F98u)) {
        return;
    }
    ctx->pc = 0x273F98u;
label_273f98:
    // 0x273f98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x273f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_273f9c:
    // 0x273f9c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x273f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_273fa0:
    // 0x273fa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x273fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_273fa4:
    // 0x273fa4: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_273fa8:
    if (ctx->pc == 0x273FA8u) {
        ctx->pc = 0x273FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FA4u;
        // 0x273fa8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273FACu;
        goto label_273fac;
    }
    ctx->pc = 0x273FA4u;
    {
        const bool branch_taken_0x273fa4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x273FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FA4u;
        // 0x273fa8: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fa4) {
            ctx->pc = 0x273F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273f90;
        }
    }
    ctx->pc = 0x273FACu;
label_273fac:
    // 0x273fac: 0x27c75480  addiu       $a3, $fp, 0x5480
    ctx->pc = 0x273facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 21632));
label_273fb0:
    // 0x273fb0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x273fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_273fb4:
    // 0x273fb4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_273fb8:
    // 0x273fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273fbc:
    // 0x273fbc: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x273fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_273fc0:
    // 0x273fc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x273fc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273fc4:
    // 0x273fc4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x273fc4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273fc8:
    // 0x273fc8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x273fc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273fcc:
    // 0x273fcc: 0xc0c92ee  jal         func_324BB8
label_273fd0:
    if (ctx->pc == 0x273FD0u) {
        ctx->pc = 0x273FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FCCu;
        // 0x273fd0: 0x26e45448  addiu       $a0, $s7, 0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273FD4u;
        goto label_273fd4;
    }
    ctx->pc = 0x273FCCu;
    SET_GPR_U32(ctx, 31, 0x273FD4u);
    ctx->pc = 0x273FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FCCu;
    // 0x273fd0: 0x26e45448  addiu       $a0, $s7, 0x5448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x273FCCu, 0x273FD4u)) {
        return;
    }
    ctx->pc = 0x273FD4u;
label_273fd4:
    // 0x273fd4: 0xc0c84d0  jal         func_321340
label_273fd8:
    if (ctx->pc == 0x273FD8u) {
        ctx->pc = 0x273FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FD4u;
        // 0x273fd8: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273FDCu;
        goto label_273fdc;
    }
    ctx->pc = 0x273FD4u;
    SET_GPR_U32(ctx, 31, 0x273FDCu);
    ctx->pc = 0x273FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273FD4u;
    // 0x273fd8: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x273FD4u, 0x273FDCu)) {
        return;
    }
    ctx->pc = 0x273FDCu;
label_273fdc:
    // 0x273fdc: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_273fe0:
    // 0x273fe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_273fe4:
    // 0x273fe4: 0x40f809  jalr        $v0
label_273fe8:
    if (ctx->pc == 0x273FE8u) {
        ctx->pc = 0x273FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FE4u;
        // 0x273fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273FECu;
        goto label_273fec;
    }
    ctx->pc = 0x273FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273FECu);
        ctx->pc = 0x273FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FE4u;
        // 0x273fe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273FE4u, 0x273FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273FECu;
label_273fec:
    // 0x273fec: 0x131ac0  sll         $v1, $s3, 11
    ctx->pc = 0x273fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
label_273ff0:
    // 0x273ff0: 0x2439023  subu        $s2, $s2, $v1
    ctx->pc = 0x273ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_273ff4:
    // 0x273ff4: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_273ff8:
    // 0x273ff8: 0x1240003a  beqz        $s2, . + 4 + (0x3A << 2)
label_273ffc:
    if (ctx->pc == 0x273FFCu) {
        ctx->pc = 0x273FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FF8u;
        // 0x273ffc: 0x3c1e0070  lui         $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274000u;
        goto label_274000;
    }
    ctx->pc = 0x273FF8u;
    {
        const bool branch_taken_0x273ff8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FF8u;
        // 0x273ffc: 0x3c1e0070  lui         $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273ff8) {
            ctx->pc = 0x2740E4u;
            goto label_2740e4;
        }
    }
    ctx->pc = 0x274000u;
label_274000:
    // 0x274000: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x274000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_274004:
    // 0x274004: 0x3c0182d  daddu       $v1, $fp, $zero
    ctx->pc = 0x274004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_274008:
    // 0x274008: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x274008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27400c:
    // 0x27400c: 0xac625480  sw          $v0, 0x5480($v1)
    ctx->pc = 0x27400cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21632), GPR_U32(ctx, 2));
label_274010:
    // 0x274010: 0x3c170070  lui         $s7, 0x70
    ctx->pc = 0x274010u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
label_274014:
    // 0x274014: 0xae270038  sw          $a3, 0x38($s1)
    ctx->pc = 0x274014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 7));
label_274018:
    // 0x274018: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x274018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_27401c:
    // 0x27401c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27401cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_274020:
    // 0x274020: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x274020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_274024:
    // 0x274024: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x274024u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_274028:
    // 0x274028: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x274028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_27402c:
    // 0x27402c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x27402cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5));
label_274030:
    // 0x274030: 0x8f848f8c  lw          $a0, -0x7074($gp)
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
label_274034:
    // 0x274034: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x274034u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_274038:
    // 0x274038: 0xaea60008  sw          $a2, 0x8($s5)
    ctx->pc = 0x274038u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 6));
label_27403c:
    // 0x27403c: 0xc0c84d8  jal         func_321360
label_274040:
    if (ctx->pc == 0x274040u) {
        ctx->pc = 0x274040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27403Cu;
        // 0x274040: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274044u;
        goto label_274044;
    }
    ctx->pc = 0x27403Cu;
    SET_GPR_U32(ctx, 31, 0x274044u);
    ctx->pc = 0x274040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27403Cu;
    // 0x274040: 0xaea30004  sw          $v1, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x27403Cu, 0x274044u)) {
        return;
    }
    ctx->pc = 0x274044u;
label_274044:
    // 0x274044: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x274044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_274048:
    // 0x274048: 0xc0c84e4  jal         func_321390
label_27404c:
    if (ctx->pc == 0x27404Cu) {
        ctx->pc = 0x27404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274048u;
        // 0x27404c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274050u;
        goto label_274050;
    }
    ctx->pc = 0x274048u;
    SET_GPR_U32(ctx, 31, 0x274050u);
    ctx->pc = 0x27404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274048u;
    // 0x27404c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321390u, 0x274048u, 0x274050u)) {
        return;
    }
    ctx->pc = 0x274050u;
label_274050:
    // 0x274050: 0x10000004  b           . + 4 + (0x4 << 2)
label_274054:
    if (ctx->pc == 0x274054u) {
        ctx->pc = 0x274054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274050u;
        // 0x274054: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274058u;
        goto label_274058;
    }
    ctx->pc = 0x274050u;
    {
        const bool branch_taken_0x274050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274050u;
        // 0x274054: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274050) {
            ctx->pc = 0x274064u;
            goto label_274064;
        }
    }
    ctx->pc = 0x274058u;
label_274058:
    // 0x274058: 0xc0c84d8  jal         func_321360
label_27405c:
    if (ctx->pc == 0x27405Cu) {
        ctx->pc = 0x27405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274058u;
        // 0x27405c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274060u;
        goto label_274060;
    }
    ctx->pc = 0x274058u;
    SET_GPR_U32(ctx, 31, 0x274060u);
    ctx->pc = 0x27405Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274058u;
    // 0x27405c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x274058u, 0x274060u)) {
        return;
    }
    ctx->pc = 0x274060u;
label_274060:
    // 0x274060: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x274060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_274064:
    // 0x274064: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x274064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_274068:
    // 0x274068: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x274068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_27406c:
    // 0x27406c: 0x1c40fffa  bgtz        $v0, . + 4 + (-0x6 << 2)
label_274070:
    if (ctx->pc == 0x274070u) {
        ctx->pc = 0x274070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27406Cu;
        // 0x274070: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274074u;
        goto label_274074;
    }
    ctx->pc = 0x27406Cu;
    {
        const bool branch_taken_0x27406c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x274070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27406Cu;
        // 0x274070: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27406c) {
            ctx->pc = 0x274058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274058;
        }
    }
    ctx->pc = 0x274074u;
label_274074:
    // 0x274074: 0x27c75480  addiu       $a3, $fp, 0x5480
    ctx->pc = 0x274074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 21632));
label_274078:
    // 0x274078: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x274078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_27407c:
    // 0x27407c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x27407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_274080:
    // 0x274080: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274084:
    // 0x274084: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x274084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_274088:
    // 0x274088: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x274088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27408c:
    // 0x27408c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x27408cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274090:
    // 0x274090: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x274090u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274094:
    // 0x274094: 0xc0c92ee  jal         func_324BB8
label_274098:
    if (ctx->pc == 0x274098u) {
        ctx->pc = 0x274098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274094u;
        // 0x274098: 0x26e45448  addiu       $a0, $s7, 0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27409Cu;
        goto label_27409c;
    }
    ctx->pc = 0x274094u;
    SET_GPR_U32(ctx, 31, 0x27409Cu);
    ctx->pc = 0x274098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274094u;
    // 0x274098: 0x26e45448  addiu       $a0, $s7, 0x5448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 21576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x274094u, 0x27409Cu)) {
        return;
    }
    ctx->pc = 0x27409Cu;
label_27409c:
    // 0x27409c: 0xc0c84d0  jal         func_321340
label_2740a0:
    if (ctx->pc == 0x2740A0u) {
        ctx->pc = 0x2740A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27409Cu;
        // 0x2740a0: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2740A4u;
        goto label_2740a4;
    }
    ctx->pc = 0x27409Cu;
    SET_GPR_U32(ctx, 31, 0x2740A4u);
    ctx->pc = 0x2740A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27409Cu;
    // 0x2740a0: 0x8f848f8c  lw          $a0, -0x7074($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938508)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x27409Cu, 0x2740A4u)) {
        return;
    }
    ctx->pc = 0x2740A4u;
label_2740a4:
    // 0x2740a4: 0x8ec20014  lw          $v0, 0x14($s6)
    ctx->pc = 0x2740a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_2740a8:
    // 0x2740a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2740a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2740ac:
    // 0x2740ac: 0x40f809  jalr        $v0
label_2740b0:
    if (ctx->pc == 0x2740B0u) {
        ctx->pc = 0x2740B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740ACu;
        // 0x2740b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2740B4u;
        goto label_2740b4;
    }
    ctx->pc = 0x2740ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2740B4u);
        ctx->pc = 0x2740B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740ACu;
        // 0x2740b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2740ACu, 0x2740B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2740B4u;
label_2740b4:
    // 0x2740b4: 0xde230010  ld          $v1, 0x10($s1)
    ctx->pc = 0x2740b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_2740b8:
    // 0x2740b8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2740b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2740bc:
    // 0x2740bc: 0x646207ff  daddiu      $v0, $v1, 0x7FF
    ctx->pc = 0x2740bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
label_2740c0:
    // 0x2740c0: 0xa3202a  slt         $a0, $a1, $v1
    ctx->pc = 0x2740c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2740c4:
    // 0x2740c4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2740c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_2740c8:
    // 0x2740c8: 0x212fb  dsra        $v0, $v0, 11
    ctx->pc = 0x2740c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 11);
label_2740cc:
    // 0x2740cc: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x2740ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
label_2740d0:
    // 0x2740d0: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x2740d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
label_2740d4:
    // 0x2740d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2740d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2740d8:
    // 0x2740d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2740d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2740dc:
    // 0x2740dc: 0x1640ff60  bnez        $s2, . + 4 + (-0xA0 << 2)
label_2740e0:
    if (ctx->pc == 0x2740E0u) {
        ctx->pc = 0x2740E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740DCu;
        // 0x2740e0: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2740E4u;
        goto label_2740e4;
    }
    ctx->pc = 0x2740DCu;
    {
        const bool branch_taken_0x2740dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2740E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2740DCu;
        // 0x2740e0: 0xae23006c  sw          $v1, 0x6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2740dc) {
            ctx->pc = 0x273E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273e60;
        }
    }
    ctx->pc = 0x2740E4u;
label_2740e4:
    // 0x2740e4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2740e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2740e8:
    // 0x2740e8: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2740e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2740ec:
    // 0x2740ec: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2740ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2740f0:
    // 0x2740f0: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2740f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2740f4:
    // 0x2740f4: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2740f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2740f8:
    // 0x2740f8: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2740f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2740fc:
    // 0x2740fc: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2740fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_274100:
    // 0x274100: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x274100u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_274104:
    // 0x274104: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x274104u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_274108:
    // 0x274108: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x274108u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27410c:
    // 0x27410c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27410cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_274110:
    // 0x274110: 0x3e00008  jr          $ra
label_274114:
    if (ctx->pc == 0x274114u) {
        ctx->pc = 0x274114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274110u;
        // 0x274114: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x274118u;
        goto label_fallthrough_0x274110;
    }
    ctx->pc = 0x274110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274110u;
        // 0x274114: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x274110:
    ctx->pc = 0x274118u;
}
