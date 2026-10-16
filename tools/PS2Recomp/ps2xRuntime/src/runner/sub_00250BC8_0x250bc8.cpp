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

// Function: sub_00250BC8
// Address: 0x250bc8 - 0x251120
void sub_00250BC8_0x250bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250BC8_0x250bc8");
#endif

    switch (ctx->pc) {
        case 0x250bc8u: goto label_250bc8;
        case 0x250bccu: goto label_250bcc;
        case 0x250bd0u: goto label_250bd0;
        case 0x250bd4u: goto label_250bd4;
        case 0x250bd8u: goto label_250bd8;
        case 0x250bdcu: goto label_250bdc;
        case 0x250be0u: goto label_250be0;
        case 0x250be4u: goto label_250be4;
        case 0x250be8u: goto label_250be8;
        case 0x250becu: goto label_250bec;
        case 0x250bf0u: goto label_250bf0;
        case 0x250bf4u: goto label_250bf4;
        case 0x250bf8u: goto label_250bf8;
        case 0x250bfcu: goto label_250bfc;
        case 0x250c00u: goto label_250c00;
        case 0x250c04u: goto label_250c04;
        case 0x250c08u: goto label_250c08;
        case 0x250c0cu: goto label_250c0c;
        case 0x250c10u: goto label_250c10;
        case 0x250c14u: goto label_250c14;
        case 0x250c18u: goto label_250c18;
        case 0x250c1cu: goto label_250c1c;
        case 0x250c20u: goto label_250c20;
        case 0x250c24u: goto label_250c24;
        case 0x250c28u: goto label_250c28;
        case 0x250c2cu: goto label_250c2c;
        case 0x250c30u: goto label_250c30;
        case 0x250c34u: goto label_250c34;
        case 0x250c38u: goto label_250c38;
        case 0x250c3cu: goto label_250c3c;
        case 0x250c40u: goto label_250c40;
        case 0x250c44u: goto label_250c44;
        case 0x250c48u: goto label_250c48;
        case 0x250c4cu: goto label_250c4c;
        case 0x250c50u: goto label_250c50;
        case 0x250c54u: goto label_250c54;
        case 0x250c58u: goto label_250c58;
        case 0x250c5cu: goto label_250c5c;
        case 0x250c60u: goto label_250c60;
        case 0x250c64u: goto label_250c64;
        case 0x250c68u: goto label_250c68;
        case 0x250c6cu: goto label_250c6c;
        case 0x250c70u: goto label_250c70;
        case 0x250c74u: goto label_250c74;
        case 0x250c78u: goto label_250c78;
        case 0x250c7cu: goto label_250c7c;
        case 0x250c80u: goto label_250c80;
        case 0x250c84u: goto label_250c84;
        case 0x250c88u: goto label_250c88;
        case 0x250c8cu: goto label_250c8c;
        case 0x250c90u: goto label_250c90;
        case 0x250c94u: goto label_250c94;
        case 0x250c98u: goto label_250c98;
        case 0x250c9cu: goto label_250c9c;
        case 0x250ca0u: goto label_250ca0;
        case 0x250ca4u: goto label_250ca4;
        case 0x250ca8u: goto label_250ca8;
        case 0x250cacu: goto label_250cac;
        case 0x250cb0u: goto label_250cb0;
        case 0x250cb4u: goto label_250cb4;
        case 0x250cb8u: goto label_250cb8;
        case 0x250cbcu: goto label_250cbc;
        case 0x250cc0u: goto label_250cc0;
        case 0x250cc4u: goto label_250cc4;
        case 0x250cc8u: goto label_250cc8;
        case 0x250cccu: goto label_250ccc;
        case 0x250cd0u: goto label_250cd0;
        case 0x250cd4u: goto label_250cd4;
        case 0x250cd8u: goto label_250cd8;
        case 0x250cdcu: goto label_250cdc;
        case 0x250ce0u: goto label_250ce0;
        case 0x250ce4u: goto label_250ce4;
        case 0x250ce8u: goto label_250ce8;
        case 0x250cecu: goto label_250cec;
        case 0x250cf0u: goto label_250cf0;
        case 0x250cf4u: goto label_250cf4;
        case 0x250cf8u: goto label_250cf8;
        case 0x250cfcu: goto label_250cfc;
        case 0x250d00u: goto label_250d00;
        case 0x250d04u: goto label_250d04;
        case 0x250d08u: goto label_250d08;
        case 0x250d0cu: goto label_250d0c;
        case 0x250d10u: goto label_250d10;
        case 0x250d14u: goto label_250d14;
        case 0x250d18u: goto label_250d18;
        case 0x250d1cu: goto label_250d1c;
        case 0x250d20u: goto label_250d20;
        case 0x250d24u: goto label_250d24;
        case 0x250d28u: goto label_250d28;
        case 0x250d2cu: goto label_250d2c;
        case 0x250d30u: goto label_250d30;
        case 0x250d34u: goto label_250d34;
        case 0x250d38u: goto label_250d38;
        case 0x250d3cu: goto label_250d3c;
        case 0x250d40u: goto label_250d40;
        case 0x250d44u: goto label_250d44;
        case 0x250d48u: goto label_250d48;
        case 0x250d4cu: goto label_250d4c;
        case 0x250d50u: goto label_250d50;
        case 0x250d54u: goto label_250d54;
        case 0x250d58u: goto label_250d58;
        case 0x250d5cu: goto label_250d5c;
        case 0x250d60u: goto label_250d60;
        case 0x250d64u: goto label_250d64;
        case 0x250d68u: goto label_250d68;
        case 0x250d6cu: goto label_250d6c;
        case 0x250d70u: goto label_250d70;
        case 0x250d74u: goto label_250d74;
        case 0x250d78u: goto label_250d78;
        case 0x250d7cu: goto label_250d7c;
        case 0x250d80u: goto label_250d80;
        case 0x250d84u: goto label_250d84;
        case 0x250d88u: goto label_250d88;
        case 0x250d8cu: goto label_250d8c;
        case 0x250d90u: goto label_250d90;
        case 0x250d94u: goto label_250d94;
        case 0x250d98u: goto label_250d98;
        case 0x250d9cu: goto label_250d9c;
        case 0x250da0u: goto label_250da0;
        case 0x250da4u: goto label_250da4;
        case 0x250da8u: goto label_250da8;
        case 0x250dacu: goto label_250dac;
        case 0x250db0u: goto label_250db0;
        case 0x250db4u: goto label_250db4;
        case 0x250db8u: goto label_250db8;
        case 0x250dbcu: goto label_250dbc;
        case 0x250dc0u: goto label_250dc0;
        case 0x250dc4u: goto label_250dc4;
        case 0x250dc8u: goto label_250dc8;
        case 0x250dccu: goto label_250dcc;
        case 0x250dd0u: goto label_250dd0;
        case 0x250dd4u: goto label_250dd4;
        case 0x250dd8u: goto label_250dd8;
        case 0x250ddcu: goto label_250ddc;
        case 0x250de0u: goto label_250de0;
        case 0x250de4u: goto label_250de4;
        case 0x250de8u: goto label_250de8;
        case 0x250decu: goto label_250dec;
        case 0x250df0u: goto label_250df0;
        case 0x250df4u: goto label_250df4;
        case 0x250df8u: goto label_250df8;
        case 0x250dfcu: goto label_250dfc;
        case 0x250e00u: goto label_250e00;
        case 0x250e04u: goto label_250e04;
        case 0x250e08u: goto label_250e08;
        case 0x250e0cu: goto label_250e0c;
        case 0x250e10u: goto label_250e10;
        case 0x250e14u: goto label_250e14;
        case 0x250e18u: goto label_250e18;
        case 0x250e1cu: goto label_250e1c;
        case 0x250e20u: goto label_250e20;
        case 0x250e24u: goto label_250e24;
        case 0x250e28u: goto label_250e28;
        case 0x250e2cu: goto label_250e2c;
        case 0x250e30u: goto label_250e30;
        case 0x250e34u: goto label_250e34;
        case 0x250e38u: goto label_250e38;
        case 0x250e3cu: goto label_250e3c;
        case 0x250e40u: goto label_250e40;
        case 0x250e44u: goto label_250e44;
        case 0x250e48u: goto label_250e48;
        case 0x250e4cu: goto label_250e4c;
        case 0x250e50u: goto label_250e50;
        case 0x250e54u: goto label_250e54;
        case 0x250e58u: goto label_250e58;
        case 0x250e5cu: goto label_250e5c;
        case 0x250e60u: goto label_250e60;
        case 0x250e64u: goto label_250e64;
        case 0x250e68u: goto label_250e68;
        case 0x250e6cu: goto label_250e6c;
        case 0x250e70u: goto label_250e70;
        case 0x250e74u: goto label_250e74;
        case 0x250e78u: goto label_250e78;
        case 0x250e7cu: goto label_250e7c;
        case 0x250e80u: goto label_250e80;
        case 0x250e84u: goto label_250e84;
        case 0x250e88u: goto label_250e88;
        case 0x250e8cu: goto label_250e8c;
        case 0x250e90u: goto label_250e90;
        case 0x250e94u: goto label_250e94;
        case 0x250e98u: goto label_250e98;
        case 0x250e9cu: goto label_250e9c;
        case 0x250ea0u: goto label_250ea0;
        case 0x250ea4u: goto label_250ea4;
        case 0x250ea8u: goto label_250ea8;
        case 0x250eacu: goto label_250eac;
        case 0x250eb0u: goto label_250eb0;
        case 0x250eb4u: goto label_250eb4;
        case 0x250eb8u: goto label_250eb8;
        case 0x250ebcu: goto label_250ebc;
        case 0x250ec0u: goto label_250ec0;
        case 0x250ec4u: goto label_250ec4;
        case 0x250ec8u: goto label_250ec8;
        case 0x250eccu: goto label_250ecc;
        case 0x250ed0u: goto label_250ed0;
        case 0x250ed4u: goto label_250ed4;
        case 0x250ed8u: goto label_250ed8;
        case 0x250edcu: goto label_250edc;
        case 0x250ee0u: goto label_250ee0;
        case 0x250ee4u: goto label_250ee4;
        case 0x250ee8u: goto label_250ee8;
        case 0x250eecu: goto label_250eec;
        case 0x250ef0u: goto label_250ef0;
        case 0x250ef4u: goto label_250ef4;
        case 0x250ef8u: goto label_250ef8;
        case 0x250efcu: goto label_250efc;
        case 0x250f00u: goto label_250f00;
        case 0x250f04u: goto label_250f04;
        case 0x250f08u: goto label_250f08;
        case 0x250f0cu: goto label_250f0c;
        case 0x250f10u: goto label_250f10;
        case 0x250f14u: goto label_250f14;
        case 0x250f18u: goto label_250f18;
        case 0x250f1cu: goto label_250f1c;
        case 0x250f20u: goto label_250f20;
        case 0x250f24u: goto label_250f24;
        case 0x250f28u: goto label_250f28;
        case 0x250f2cu: goto label_250f2c;
        case 0x250f30u: goto label_250f30;
        case 0x250f34u: goto label_250f34;
        case 0x250f38u: goto label_250f38;
        case 0x250f3cu: goto label_250f3c;
        case 0x250f40u: goto label_250f40;
        case 0x250f44u: goto label_250f44;
        case 0x250f48u: goto label_250f48;
        case 0x250f4cu: goto label_250f4c;
        case 0x250f50u: goto label_250f50;
        case 0x250f54u: goto label_250f54;
        case 0x250f58u: goto label_250f58;
        case 0x250f5cu: goto label_250f5c;
        case 0x250f60u: goto label_250f60;
        case 0x250f64u: goto label_250f64;
        case 0x250f68u: goto label_250f68;
        case 0x250f6cu: goto label_250f6c;
        case 0x250f70u: goto label_250f70;
        case 0x250f74u: goto label_250f74;
        case 0x250f78u: goto label_250f78;
        case 0x250f7cu: goto label_250f7c;
        case 0x250f80u: goto label_250f80;
        case 0x250f84u: goto label_250f84;
        case 0x250f88u: goto label_250f88;
        case 0x250f8cu: goto label_250f8c;
        case 0x250f90u: goto label_250f90;
        case 0x250f94u: goto label_250f94;
        case 0x250f98u: goto label_250f98;
        case 0x250f9cu: goto label_250f9c;
        case 0x250fa0u: goto label_250fa0;
        case 0x250fa4u: goto label_250fa4;
        case 0x250fa8u: goto label_250fa8;
        case 0x250facu: goto label_250fac;
        case 0x250fb0u: goto label_250fb0;
        case 0x250fb4u: goto label_250fb4;
        case 0x250fb8u: goto label_250fb8;
        case 0x250fbcu: goto label_250fbc;
        case 0x250fc0u: goto label_250fc0;
        case 0x250fc4u: goto label_250fc4;
        case 0x250fc8u: goto label_250fc8;
        case 0x250fccu: goto label_250fcc;
        case 0x250fd0u: goto label_250fd0;
        case 0x250fd4u: goto label_250fd4;
        case 0x250fd8u: goto label_250fd8;
        case 0x250fdcu: goto label_250fdc;
        case 0x250fe0u: goto label_250fe0;
        case 0x250fe4u: goto label_250fe4;
        case 0x250fe8u: goto label_250fe8;
        case 0x250fecu: goto label_250fec;
        case 0x250ff0u: goto label_250ff0;
        case 0x250ff4u: goto label_250ff4;
        case 0x250ff8u: goto label_250ff8;
        case 0x250ffcu: goto label_250ffc;
        case 0x251000u: goto label_251000;
        case 0x251004u: goto label_251004;
        case 0x251008u: goto label_251008;
        case 0x25100cu: goto label_25100c;
        case 0x251010u: goto label_251010;
        case 0x251014u: goto label_251014;
        case 0x251018u: goto label_251018;
        case 0x25101cu: goto label_25101c;
        case 0x251020u: goto label_251020;
        case 0x251024u: goto label_251024;
        case 0x251028u: goto label_251028;
        case 0x25102cu: goto label_25102c;
        case 0x251030u: goto label_251030;
        case 0x251034u: goto label_251034;
        case 0x251038u: goto label_251038;
        case 0x25103cu: goto label_25103c;
        case 0x251040u: goto label_251040;
        case 0x251044u: goto label_251044;
        case 0x251048u: goto label_251048;
        case 0x25104cu: goto label_25104c;
        case 0x251050u: goto label_251050;
        case 0x251054u: goto label_251054;
        case 0x251058u: goto label_251058;
        case 0x25105cu: goto label_25105c;
        case 0x251060u: goto label_251060;
        case 0x251064u: goto label_251064;
        case 0x251068u: goto label_251068;
        case 0x25106cu: goto label_25106c;
        case 0x251070u: goto label_251070;
        case 0x251074u: goto label_251074;
        case 0x251078u: goto label_251078;
        case 0x25107cu: goto label_25107c;
        case 0x251080u: goto label_251080;
        case 0x251084u: goto label_251084;
        case 0x251088u: goto label_251088;
        case 0x25108cu: goto label_25108c;
        case 0x251090u: goto label_251090;
        case 0x251094u: goto label_251094;
        case 0x251098u: goto label_251098;
        case 0x25109cu: goto label_25109c;
        case 0x2510a0u: goto label_2510a0;
        case 0x2510a4u: goto label_2510a4;
        case 0x2510a8u: goto label_2510a8;
        case 0x2510acu: goto label_2510ac;
        case 0x2510b0u: goto label_2510b0;
        case 0x2510b4u: goto label_2510b4;
        case 0x2510b8u: goto label_2510b8;
        case 0x2510bcu: goto label_2510bc;
        case 0x2510c0u: goto label_2510c0;
        case 0x2510c4u: goto label_2510c4;
        case 0x2510c8u: goto label_2510c8;
        case 0x2510ccu: goto label_2510cc;
        case 0x2510d0u: goto label_2510d0;
        case 0x2510d4u: goto label_2510d4;
        case 0x2510d8u: goto label_2510d8;
        case 0x2510dcu: goto label_2510dc;
        case 0x2510e0u: goto label_2510e0;
        case 0x2510e4u: goto label_2510e4;
        case 0x2510e8u: goto label_2510e8;
        case 0x2510ecu: goto label_2510ec;
        case 0x2510f0u: goto label_2510f0;
        case 0x2510f4u: goto label_2510f4;
        case 0x2510f8u: goto label_2510f8;
        case 0x2510fcu: goto label_2510fc;
        case 0x251100u: goto label_251100;
        case 0x251104u: goto label_251104;
        case 0x251108u: goto label_251108;
        case 0x25110cu: goto label_25110c;
        case 0x251110u: goto label_251110;
        case 0x251114u: goto label_251114;
        case 0x251118u: goto label_251118;
        case 0x25111cu: goto label_25111c;
        default: break;
    }

    ctx->pc = 0x250bc8u;

label_250bc8:
    // 0x250bc8: 0x27bdfdd0  addiu       $sp, $sp, -0x230
    ctx->pc = 0x250bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966736));
label_250bcc:
    // 0x250bcc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x250bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250bd0:
    // 0x250bd0: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x250bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
label_250bd4:
    // 0x250bd4: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x250bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_250bd8:
    // 0x250bd8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x250bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250bdc:
    // 0x250bdc: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x250bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
label_250be0:
    // 0x250be0: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x250be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
label_250be4:
    // 0x250be4: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x250be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
label_250be8:
    // 0x250be8: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x250be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
label_250bec:
    // 0x250bec: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x250becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
label_250bf0:
    // 0x250bf0: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x250bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
label_250bf4:
    // 0x250bf4: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x250bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_250bf8:
    // 0x250bf8: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x250bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_250bfc:
    // 0x250bfc: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x250bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_250c00:
    // 0x250c00: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x250c00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_250c04:
    // 0x250c04: 0x32e20002  andi        $v0, $s7, 0x2
    ctx->pc = 0x250c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)2);
label_250c08:
    // 0x250c08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_250c0c:
    if (ctx->pc == 0x250C0Cu) {
        ctx->pc = 0x250C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C08u;
        // 0x250c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C10u;
        goto label_250c10;
    }
    ctx->pc = 0x250C08u;
    {
        const bool branch_taken_0x250c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C08u;
        // 0x250c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c08) {
            ctx->pc = 0x250C20u;
            goto label_250c20;
        }
    }
    ctx->pc = 0x250C10u;
label_250c10:
    // 0x250c10: 0xc0941ce  jal         func_250738
label_250c14:
    if (ctx->pc == 0x250C14u) {
        ctx->pc = 0x250C18u;
        goto label_250c18;
    }
    ctx->pc = 0x250C10u;
    SET_GPR_U32(ctx, 31, 0x250C18u);
    ctx->pc = 0x250738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x250738u, 0x250C10u, 0x250C18u)) {
        return;
    }
    ctx->pc = 0x250C18u;
label_250c18:
    // 0x250c18: 0x10000135  b           . + 4 + (0x135 << 2)
label_250c1c:
    if (ctx->pc == 0x250C1Cu) {
        ctx->pc = 0x250C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C18u;
        // 0x250c1c: 0x7bb00210  lq          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C20u;
        goto label_250c20;
    }
    ctx->pc = 0x250C18u;
    {
        const bool branch_taken_0x250c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C18u;
        // 0x250c1c: 0x7bb00210  lq          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c18) {
            ctx->pc = 0x2510F0u;
            goto label_2510f0;
        }
    }
    ctx->pc = 0x250C20u;
label_250c20:
    // 0x250c20: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x250c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
label_250c24:
    // 0x250c24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_250c28:
    if (ctx->pc == 0x250C28u) {
        ctx->pc = 0x250C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C24u;
        // 0x250c28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C2Cu;
        goto label_250c2c;
    }
    ctx->pc = 0x250C24u;
    {
        const bool branch_taken_0x250c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C24u;
        // 0x250c28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c24) {
            ctx->pc = 0x250C60u;
            goto label_250c60;
        }
    }
    ctx->pc = 0x250C2Cu;
label_250c2c:
    // 0x250c2c: 0x8e84001c  lw          $a0, 0x1C($s4)
    ctx->pc = 0x250c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_250c30:
    // 0x250c30: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_250c34:
    if (ctx->pc == 0x250C34u) {
        ctx->pc = 0x250C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C30u;
        // 0x250c34: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C38u;
        goto label_250c38;
    }
    ctx->pc = 0x250C30u;
    {
        const bool branch_taken_0x250c30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x250C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C30u;
        // 0x250c34: 0x42180  sll         $a0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c30) {
            ctx->pc = 0x250C60u;
            goto label_250c60;
        }
    }
    ctx->pc = 0x250C38u;
label_250c38:
    // 0x250c38: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x250c38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_250c3c:
    // 0x250c3c: 0x32e56000  andi        $a1, $s7, 0x6000
    ctx->pc = 0x250c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)24576);
label_250c40:
    // 0x250c40: 0x24036000  addiu       $v1, $zero, 0x6000
    ctx->pc = 0x250c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
label_250c44:
    // 0x250c44: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x250c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_250c48:
    // 0x250c48: 0x32fe2000  andi        $fp, $s7, 0x2000
    ctx->pc = 0x250c48u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8192);
label_250c4c:
    // 0x250c4c: 0x14a30024  bne         $a1, $v1, . + 4 + (0x24 << 2)
label_250c50:
    if (ctx->pc == 0x250C50u) {
        ctx->pc = 0x250C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C4Cu;
        // 0x250c50: 0x44b021  addu        $s6, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C54u;
        goto label_250c54;
    }
    ctx->pc = 0x250C4Cu;
    {
        const bool branch_taken_0x250c4c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x250C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C4Cu;
        // 0x250c50: 0x44b021  addu        $s6, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c4c) {
            ctx->pc = 0x250CE0u;
            goto label_250ce0;
        }
    }
    ctx->pc = 0x250C54u;
label_250c54:
    // 0x250c54: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x250c54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_250c58:
    // 0x250c58: 0x10000021  b           . + 4 + (0x21 << 2)
label_250c5c:
    if (ctx->pc == 0x250C5Cu) {
        ctx->pc = 0x250C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C58u;
        // 0x250c5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C60u;
        goto label_250c60;
    }
    ctx->pc = 0x250C58u;
    {
        const bool branch_taken_0x250c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C58u;
        // 0x250c5c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c58) {
            ctx->pc = 0x250CE0u;
            goto label_250ce0;
        }
    }
    ctx->pc = 0x250C60u;
label_250c60:
    // 0x250c60: 0x32e24000  andi        $v0, $s7, 0x4000
    ctx->pc = 0x250c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16384);
label_250c64:
    // 0x250c64: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_250c68:
    if (ctx->pc == 0x250C68u) {
        ctx->pc = 0x250C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C64u;
        // 0x250c68: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C6Cu;
        goto label_250c6c;
    }
    ctx->pc = 0x250C64u;
    {
        const bool branch_taken_0x250c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C64u;
        // 0x250c68: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c64) {
            ctx->pc = 0x250CD0u;
            goto label_250cd0;
        }
    }
    ctx->pc = 0x250C6Cu;
label_250c6c:
    // 0x250c6c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x250c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_250c70:
    // 0x250c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250c74:
    // 0x250c74: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x250c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_250c78:
    // 0x250c78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_250c7c:
    // 0x250c7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_250c80:
    // 0x250c80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_250c84:
    // 0x250c84: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x250c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_250c88:
    // 0x250c88: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x250c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_250c8c:
    // 0x250c8c: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x250c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_250c90:
    // 0x250c90: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x250c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_250c94:
    // 0x250c94: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x250c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_250c98:
    // 0x250c98: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x250c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_250c9c:
    // 0x250c9c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x250c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_250ca0:
    // 0x250ca0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x250ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_250ca4:
    // 0x250ca4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x250ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_250ca8:
    // 0x250ca8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x250ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_250cac:
    // 0x250cac: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x250cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_250cb0:
    // 0x250cb0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x250cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_250cb4:
    // 0x250cb4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x250cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_250cb8:
    // 0x250cb8: 0x32fe2000  andi        $fp, $s7, 0x2000
    ctx->pc = 0x250cb8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8192);
label_250cbc:
    // 0x250cbc: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_250cc0:
    if (ctx->pc == 0x250CC0u) {
        ctx->pc = 0x250CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CBCu;
        // 0x250cc0: 0x27b60040  addiu       $s6, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CC4u;
        goto label_250cc4;
    }
    ctx->pc = 0x250CBCu;
    {
        const bool branch_taken_0x250cbc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CBCu;
        // 0x250cc0: 0x27b60040  addiu       $s6, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cbc) {
            ctx->pc = 0x250CE0u;
            goto label_250ce0;
        }
    }
    ctx->pc = 0x250CC4u;
label_250cc4:
    // 0x250cc4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x250cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250cc8:
    // 0x250cc8: 0x10000005  b           . + 4 + (0x5 << 2)
label_250ccc:
    if (ctx->pc == 0x250CCCu) {
        ctx->pc = 0x250CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CC8u;
        // 0x250ccc: 0x8e860014  lw          $a2, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CD0u;
        goto label_250cd0;
    }
    ctx->pc = 0x250CC8u;
    {
        const bool branch_taken_0x250cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CC8u;
        // 0x250ccc: 0x8e860014  lw          $a2, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cc8) {
            ctx->pc = 0x250CE0u;
            goto label_250ce0;
        }
    }
    ctx->pc = 0x250CD0u;
label_250cd0:
    // 0x250cd0: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x250cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250cd4:
    // 0x250cd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x250cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250cd8:
    // 0x250cd8: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x250cd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_250cdc:
    // 0x250cdc: 0x32fe2000  andi        $fp, $s7, 0x2000
    ctx->pc = 0x250cdcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)8192);
label_250ce0:
    // 0x250ce0: 0x11000045  beqz        $t0, . + 4 + (0x45 << 2)
label_250ce4:
    if (ctx->pc == 0x250CE4u) {
        ctx->pc = 0x250CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CE0u;
        // 0x250ce4: 0x27b10084  addiu       $s1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CE8u;
        goto label_250ce8;
    }
    ctx->pc = 0x250CE0u;
    {
        const bool branch_taken_0x250ce0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CE0u;
        // 0x250ce4: 0x27b10084  addiu       $s1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ce0) {
            ctx->pc = 0x250DF8u;
            goto label_250df8;
        }
    }
    ctx->pc = 0x250CE8u;
label_250ce8:
    // 0x250ce8: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
label_250cec:
    if (ctx->pc == 0x250CECu) {
        ctx->pc = 0x250CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CE8u;
        // 0x250cec: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CF0u;
        goto label_250cf0;
    }
    ctx->pc = 0x250CE8u;
    {
        const bool branch_taken_0x250ce8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CE8u;
        // 0x250cec: 0x8fa3000c  lw          $v1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ce8) {
            ctx->pc = 0x250DA8u;
            goto label_250da8;
        }
    }
    ctx->pc = 0x250CF0u;
label_250cf0:
    // 0x250cf0: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x250cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_250cf4:
    // 0x250cf4: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
label_250cf8:
    if (ctx->pc == 0x250CF8u) {
        ctx->pc = 0x250CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CF4u;
        // 0x250cf8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CFCu;
        goto label_250cfc;
    }
    ctx->pc = 0x250CF4u;
    {
        const bool branch_taken_0x250cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CF4u;
        // 0x250cf8: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cf4) {
            ctx->pc = 0x250DACu;
            goto label_250dac;
        }
    }
    ctx->pc = 0x250CFCu;
label_250cfc:
    // 0x250cfc: 0xc089850  jal         func_226140
label_250d00:
    if (ctx->pc == 0x250D00u) {
        ctx->pc = 0x250D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CFCu;
        // 0x250d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D04u;
        goto label_250d04;
    }
    ctx->pc = 0x250CFCu;
    SET_GPR_U32(ctx, 31, 0x250D04u);
    ctx->pc = 0x250D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250CFCu;
    // 0x250d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226140u, 0x250CFCu, 0x250D04u)) {
        return;
    }
    ctx->pc = 0x250D04u;
label_250d04:
    // 0x250d04: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_250d08:
    if (ctx->pc == 0x250D08u) {
        ctx->pc = 0x250D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D04u;
        // 0x250d08: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D0Cu;
        goto label_250d0c;
    }
    ctx->pc = 0x250D04u;
    {
        const bool branch_taken_0x250d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250d04) {
            ctx->pc = 0x250D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250D04u;
            // 0x250d08: 0x7a030010  lq          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250D38u;
            goto label_250d38;
        }
    }
    ctx->pc = 0x250D0Cu;
label_250d0c:
    // 0x250d0c: 0xc08994a  jal         func_226528
label_250d10:
    if (ctx->pc == 0x250D10u) {
        ctx->pc = 0x250D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D0Cu;
        // 0x250d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D14u;
        goto label_250d14;
    }
    ctx->pc = 0x250D0Cu;
    SET_GPR_U32(ctx, 31, 0x250D14u);
    ctx->pc = 0x250D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D0Cu;
    // 0x250d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x250D0Cu, 0x250D14u)) {
        return;
    }
    ctx->pc = 0x250D14u;
label_250d14:
    // 0x250d14: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x250d14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_250d18:
    // 0x250d18: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x250d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_250d1c:
    // 0x250d1c: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x250d1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_250d20:
    // 0x250d20: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x250d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_250d24:
    // 0x250d24: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x250d24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_250d28:
    // 0x250d28: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x250d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_250d2c:
    // 0x250d2c: 0x78440030  lq          $a0, 0x30($v0)
    ctx->pc = 0x250d2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_250d30:
    // 0x250d30: 0x10000031  b           . + 4 + (0x31 << 2)
label_250d34:
    if (ctx->pc == 0x250D34u) {
        ctx->pc = 0x250D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D30u;
        // 0x250d34: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D38u;
        goto label_250d38;
    }
    ctx->pc = 0x250D30u;
    {
        const bool branch_taken_0x250d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D30u;
        // 0x250d34: 0x7fa40030  sq          $a0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d30) {
            ctx->pc = 0x250DF8u;
            goto label_250df8;
        }
    }
    ctx->pc = 0x250D38u;
label_250d38:
    // 0x250d38: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x250d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_250d3c:
    // 0x250d3c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x250d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_250d40:
    // 0x250d40: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x250d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_250d44:
    // 0x250d44: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x250d44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_250d48:
    // 0x250d48: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x250d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_250d4c:
    // 0x250d4c: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x250d4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
label_250d50:
    // 0x250d50: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x250d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_250d54:
    // 0x250d54: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x250d54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_250d58:
    // 0x250d58: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_250d5c:
    if (ctx->pc == 0x250D5Cu) {
        ctx->pc = 0x250D60u;
        goto label_250d60;
    }
    ctx->pc = 0x250D58u;
    {
        const bool branch_taken_0x250d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x250d58) {
            ctx->pc = 0x250DF8u;
            goto label_250df8;
        }
    }
    ctx->pc = 0x250D60u;
label_250d60:
    // 0x250d60: 0x7ba80000  lq          $t0, 0x0($sp)
    ctx->pc = 0x250d60u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_250d64:
    // 0x250d64: 0x0  nop
    ctx->pc = 0x250d64u;
    // NOP
label_250d68:
    // 0x250d68: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x250d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_250d6c:
    // 0x250d6c: 0x7ba70010  lq          $a3, 0x10($sp)
    ctx->pc = 0x250d6cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_250d70:
    // 0x250d70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_250d74:
    // 0x250d74: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x250d74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_250d78:
    // 0x250d78: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x250d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_250d7c:
    // 0x250d7c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x250d7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_250d80:
    // 0x250d80: 0x7fa80100  sq          $t0, 0x100($sp)
    ctx->pc = 0x250d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 8));
label_250d84:
    // 0x250d84: 0x7fa70110  sq          $a3, 0x110($sp)
    ctx->pc = 0x250d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 7));
label_250d88:
    // 0x250d88: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x250d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
label_250d8c:
    // 0x250d8c: 0xc092d9c  jal         func_24B670
label_250d90:
    if (ctx->pc == 0x250D90u) {
        ctx->pc = 0x250D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D8Cu;
        // 0x250d90: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D94u;
        goto label_250d94;
    }
    ctx->pc = 0x250D8Cu;
    SET_GPR_U32(ctx, 31, 0x250D94u);
    ctx->pc = 0x250D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D8Cu;
    // 0x250d90: 0x7fa20130  sq          $v0, 0x130($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x250D8Cu, 0x250D94u)) {
        return;
    }
    ctx->pc = 0x250D94u;
label_250d94:
    // 0x250d94: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x250d94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_250d98:
    // 0x250d98: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_250d9c:
    if (ctx->pc == 0x250D9Cu) {
        ctx->pc = 0x250D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D98u;
        // 0x250d9c: 0x7ba80000  lq          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DA0u;
        goto label_250da0;
    }
    ctx->pc = 0x250D98u;
    {
        const bool branch_taken_0x250d98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x250D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D98u;
        // 0x250d9c: 0x7ba80000  lq          $t0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d98) {
            ctx->pc = 0x250D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250d68;
        }
    }
    ctx->pc = 0x250DA0u;
label_250da0:
    // 0x250da0: 0x10000015  b           . + 4 + (0x15 << 2)
label_250da4:
    if (ctx->pc == 0x250DA4u) {
        ctx->pc = 0x250DA8u;
        goto label_250da8;
    }
    ctx->pc = 0x250DA0u;
    {
        const bool branch_taken_0x250da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250da0) {
            ctx->pc = 0x250DF8u;
            goto label_250df8;
        }
    }
    ctx->pc = 0x250DA8u;
label_250da8:
    // 0x250da8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x250da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_250dac:
    // 0x250dac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x250dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_250db0:
    // 0x250db0: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x250db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_250db4:
    // 0x250db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_250db8:
    // 0x250db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x250db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_250dbc:
    // 0x250dbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x250dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_250dc0:
    // 0x250dc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x250dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_250dc4:
    // 0x250dc4: 0x27b10084  addiu       $s1, $sp, 0x84
    ctx->pc = 0x250dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_250dc8:
    // 0x250dc8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x250dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_250dcc:
    // 0x250dcc: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x250dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_250dd0:
    // 0x250dd0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x250dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_250dd4:
    // 0x250dd4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x250dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_250dd8:
    // 0x250dd8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x250dd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_250ddc:
    // 0x250ddc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x250ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_250de0:
    // 0x250de0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x250de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_250de4:
    // 0x250de4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x250de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_250de8:
    // 0x250de8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x250de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_250dec:
    // 0x250dec: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x250decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_250df0:
    // 0x250df0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x250df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_250df4:
    // 0x250df4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x250df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_250df8:
    // 0x250df8: 0x53c0001d  beql        $fp, $zero, . + 4 + (0x1D << 2)
label_250dfc:
    if (ctx->pc == 0x250DFCu) {
        ctx->pc = 0x250DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DF8u;
        // 0x250dfc: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E00u;
        goto label_250e00;
    }
    ctx->pc = 0x250DF8u;
    {
        const bool branch_taken_0x250df8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x250df8) {
            ctx->pc = 0x250DFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250DF8u;
            // 0x250dfc: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250E70u;
            goto label_250e70;
        }
    }
    ctx->pc = 0x250E00u;
label_250e00:
    // 0x250e00: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x250e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250e04:
    // 0x250e04: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x250e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_250e08:
    // 0x250e08: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x250e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_250e0c:
    // 0x250e0c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x250e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_250e10:
    // 0x250e10: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_250e14:
    if (ctx->pc == 0x250E14u) {
        ctx->pc = 0x250E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E10u;
        // 0x250e14: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E18u;
        goto label_250e18;
    }
    ctx->pc = 0x250E10u;
    {
        const bool branch_taken_0x250e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250e10) {
            ctx->pc = 0x250E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250E10u;
            // 0x250e14: 0x8e820020  lw          $v0, 0x20($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250E70u;
            goto label_250e70;
        }
    }
    ctx->pc = 0x250E18u;
label_250e18:
    // 0x250e18: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x250e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_250e1c:
    // 0x250e1c: 0x8ca31084  lw          $v1, 0x1084($a1)
    ctx->pc = 0x250e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4228)));
label_250e20:
    // 0x250e20: 0x24a61084  addiu       $a2, $a1, 0x1084
    ctx->pc = 0x250e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4228));
label_250e24:
    // 0x250e24: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x250e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_250e28:
    // 0x250e28: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x250e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250e2c:
    // 0x250e2c: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x250e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_250e30:
    // 0x250e30: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x250e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
label_250e34:
    // 0x250e34: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x250e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250e38:
    // 0x250e38: 0x8ca61084  lw          $a2, 0x1084($a1)
    ctx->pc = 0x250e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4228)));
label_250e3c:
    // 0x250e3c: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x250e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_250e40:
    // 0x250e40: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x250e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_250e44:
    // 0x250e44: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x250e44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_250e48:
    // 0x250e48: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x250e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250e4c:
    // 0x250e4c: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x250e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_250e50:
    // 0x250e50: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x250e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_250e54:
    // 0x250e54: 0xaca21084  sw          $v0, 0x1084($a1)
    ctx->pc = 0x250e54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4228), GPR_U32(ctx, 2));
label_250e58:
    // 0x250e58: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x250e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_250e5c:
    // 0x250e5c: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x250e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_250e60:
    // 0x250e60: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x250e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_250e64:
    // 0x250e64: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x250e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_250e68:
    // 0x250e68: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x250e68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
label_250e6c:
    // 0x250e6c: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x250e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_250e70:
    // 0x250e70: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x250e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_250e74:
    // 0x250e74: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x250e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_250e78:
    // 0x250e78: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x250e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
label_250e7c:
    // 0x250e7c: 0x2451004c  addiu       $s1, $v0, 0x4C
    ctx->pc = 0x250e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_250e80:
    // 0x250e80: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x250e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_250e84:
    // 0x250e84: 0xafa40174  sw          $a0, 0x174($sp)
    ctx->pc = 0x250e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 4));
label_250e88:
    // 0x250e88: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x250e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_250e8c:
    // 0x250e8c: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x250e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_250e90:
    // 0x250e90: 0x8e950010  lw          $s5, 0x10($s4)
    ctx->pc = 0x250e90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_250e94:
    // 0x250e94: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
label_250e98:
    if (ctx->pc == 0x250E98u) {
        ctx->pc = 0x250E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E94u;
        // 0x250e98: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E9Cu;
        goto label_250e9c;
    }
    ctx->pc = 0x250E94u;
    {
        const bool branch_taken_0x250e94 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x250E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E94u;
        // 0x250e98: 0x8e920008  lw          $s2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e94) {
            ctx->pc = 0x2510E8u;
            goto label_2510e8;
        }
    }
    ctx->pc = 0x250E9Cu;
label_250e9c:
    // 0x250e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_250ea0:
    // 0x250ea0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x250ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_250ea4:
    // 0x250ea4: 0x0  nop
    ctx->pc = 0x250ea4u;
    // NOP
label_250ea8:
    // 0x250ea8: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x250ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_250eac:
    // 0x250eac: 0x8fa20174  lw          $v0, 0x174($sp)
    ctx->pc = 0x250eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_250eb0:
    // 0x250eb0: 0x24631120  addiu       $v1, $v1, 0x1120
    ctx->pc = 0x250eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4384));
label_250eb4:
    // 0x250eb4: 0x14430042  bne         $v0, $v1, . + 4 + (0x42 << 2)
label_250eb8:
    if (ctx->pc == 0x250EB8u) {
        ctx->pc = 0x250EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EB4u;
        // 0x250eb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EBCu;
        goto label_250ebc;
    }
    ctx->pc = 0x250EB4u;
    {
        const bool branch_taken_0x250eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x250EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EB4u;
        // 0x250eb8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250eb4) {
            ctx->pc = 0x250FC0u;
            goto label_250fc0;
        }
    }
    ctx->pc = 0x250EBCu;
label_250ebc:
    // 0x250ebc: 0xc626000c  lwc1        $f6, 0xC($s1)
    ctx->pc = 0x250ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_250ec0:
    // 0x250ec0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x250ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_250ec4:
    // 0x250ec4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x250ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250ec8:
    // 0x250ec8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x250ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250ecc:
    // 0x250ecc: 0x46063082  mul.s       $f2, $f6, $f6
    ctx->pc = 0x250eccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_250ed0:
    // 0x250ed0: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x250ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_250ed4:
    // 0x250ed4: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x250ed4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_250ed8:
    // 0x250ed8: 0x460001c2  mul.s       $f7, $f0, $f0
    ctx->pc = 0x250ed8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_250edc:
    // 0x250edc: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x250edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_250ee0:
    // 0x250ee0: 0x460022c2  mul.s       $f11, $f4, $f0
    ctx->pc = 0x250ee0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_250ee4:
    // 0x250ee4: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x250ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_250ee8:
    // 0x250ee8: 0x460030c2  mul.s       $f3, $f6, $f0
    ctx->pc = 0x250ee8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_250eec:
    // 0x250eec: 0xe7a50140  swc1        $f5, 0x140($sp)
    ctx->pc = 0x250eecu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_250ef0:
    // 0x250ef0: 0x46012242  mul.s       $f9, $f4, $f1
    ctx->pc = 0x250ef0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_250ef4:
    // 0x250ef4: 0xe7a70148  swc1        $f7, 0x148($sp)
    ctx->pc = 0x250ef4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_250ef8:
    // 0x250ef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x250ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_250efc:
    // 0x250efc: 0xe7ab0168  swc1        $f11, 0x168($sp)
    ctx->pc = 0x250efcu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_250f00:
    // 0x250f00: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x250f00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
label_250f04:
    // 0x250f04: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x250f04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_250f08:
    // 0x250f08: 0x46022a80  add.s       $f10, $f5, $f2
    ctx->pc = 0x250f08u;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_250f0c:
    // 0x250f0c: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x250f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_250f10:
    // 0x250f10: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x250f10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_250f14:
    // 0x250f14: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x250f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_250f18:
    // 0x250f18: 0x46072940  add.s       $f5, $f5, $f7
    ctx->pc = 0x250f18u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[7]);
label_250f1c:
    // 0x250f1c: 0xe7a90160  swc1        $f9, 0x160($sp)
    ctx->pc = 0x250f1cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_250f20:
    // 0x250f20: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x250f20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_250f24:
    // 0x250f24: 0xe7a40164  swc1        $f4, 0x164($sp)
    ctx->pc = 0x250f24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_250f28:
    // 0x250f28: 0x46040200  add.s       $f8, $f0, $f4
    ctx->pc = 0x250f28u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_250f2c:
    // 0x250f2c: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x250f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_250f30:
    // 0x250f30: 0x460b0981  sub.s       $f6, $f1, $f11
    ctx->pc = 0x250f30u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_250f34:
    // 0x250f34: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x250f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_250f38:
    // 0x250f38: 0x460919c1  sub.s       $f7, $f3, $f9
    ctx->pc = 0x250f38u;
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_250f3c:
    // 0x250f3c: 0xafa00138  sw          $zero, 0x138($sp)
    ctx->pc = 0x250f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 0));
label_250f40:
    // 0x250f40: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x250f40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_250f44:
    // 0x250f44: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x250f44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_250f48:
    // 0x250f48: 0x460a5280  add.s       $f10, $f10, $f10
    ctx->pc = 0x250f48u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[10]);
label_250f4c:
    // 0x250f4c: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x250f4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_250f50:
    // 0x250f50: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x250f50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_250f54:
    // 0x250f54: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x250f54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_250f58:
    // 0x250f58: 0x4602a081  sub.s       $f2, $f20, $f2
    ctx->pc = 0x250f58u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_250f5c:
    // 0x250f5c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x250f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_250f60:
    // 0x250f60: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x250f60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_250f64:
    // 0x250f64: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x250f64u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_250f68:
    // 0x250f68: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x250f68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_250f6c:
    // 0x250f6c: 0x4605a141  sub.s       $f5, $f20, $f5
    ctx->pc = 0x250f6cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
label_250f70:
    // 0x250f70: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x250f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_250f74:
    // 0x250f74: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x250f74u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_250f78:
    // 0x250f78: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x250f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_250f7c:
    // 0x250f7c: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x250f7cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_250f80:
    // 0x250f80: 0xe7a60110  swc1        $f6, 0x110($sp)
    ctx->pc = 0x250f80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_250f84:
    // 0x250f84: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x250f84u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_250f88:
    // 0x250f88: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x250f88u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_250f8c:
    // 0x250f8c: 0x460aa281  sub.s       $f10, $f20, $f10
    ctx->pc = 0x250f8cu;
    ctx->f[10] = FPU_SUB_S(ctx->f[20], ctx->f[10]);
label_250f90:
    // 0x250f90: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x250f90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_250f94:
    // 0x250f94: 0xe7a80120  swc1        $f8, 0x120($sp)
    ctx->pc = 0x250f94u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_250f98:
    // 0x250f98: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x250f98u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_250f9c:
    // 0x250f9c: 0xe7aa0128  swc1        $f10, 0x128($sp)
    ctx->pc = 0x250f9cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_250fa0:
    // 0x250fa0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x250fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250fa4:
    // 0x250fa4: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x250fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_250fa8:
    // 0x250fa8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x250fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_250fac:
    // 0x250fac: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x250facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_250fb0:
    // 0x250fb0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x250fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_250fb4:
    // 0x250fb4: 0x10000004  b           . + 4 + (0x4 << 2)
label_250fb8:
    if (ctx->pc == 0x250FB8u) {
        ctx->pc = 0x250FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FB4u;
        // 0x250fb8: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FBCu;
        goto label_250fbc;
    }
    ctx->pc = 0x250FB4u;
    {
        const bool branch_taken_0x250fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FB4u;
        // 0x250fb8: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fb4) {
            ctx->pc = 0x250FC8u;
            goto label_250fc8;
        }
    }
    ctx->pc = 0x250FBCu;
label_250fbc:
    // 0x250fbc: 0x0  nop
    ctx->pc = 0x250fbcu;
    // NOP
label_250fc0:
    // 0x250fc0: 0x40f809  jalr        $v0
label_250fc4:
    if (ctx->pc == 0x250FC4u) {
        ctx->pc = 0x250FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FC0u;
        // 0x250fc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FC8u;
        goto label_250fc8;
    }
    ctx->pc = 0x250FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250FC8u);
        ctx->pc = 0x250FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FC0u;
        // 0x250fc4: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250FC0u, 0x250FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250FC8u;
label_250fc8:
    // 0x250fc8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x250fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_250fcc:
    // 0x250fcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x250fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_250fd0:
    // 0x250fd0: 0xc092d9c  jal         func_24B670
label_250fd4:
    if (ctx->pc == 0x250FD4u) {
        ctx->pc = 0x250FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FD0u;
        // 0x250fd4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FD8u;
        goto label_250fd8;
    }
    ctx->pc = 0x250FD0u;
    SET_GPR_U32(ctx, 31, 0x250FD8u);
    ctx->pc = 0x250FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250FD0u;
    // 0x250fd4: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x250FD0u, 0x250FD8u)) {
        return;
    }
    ctx->pc = 0x250FD8u;
label_250fd8:
    // 0x250fd8: 0x8eb0000c  lw          $s0, 0xC($s5)
    ctx->pc = 0x250fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_250fdc:
    // 0x250fdc: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_250fe0:
    if (ctx->pc == 0x250FE0u) {
        ctx->pc = 0x250FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FDCu;
        // 0x250fe0: 0x32e21000  andi        $v0, $s7, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FE4u;
        goto label_250fe4;
    }
    ctx->pc = 0x250FDCu;
    {
        const bool branch_taken_0x250fdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FDCu;
        // 0x250fe0: 0x32e21000  andi        $v0, $s7, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fdc) {
            ctx->pc = 0x25106Cu;
            goto label_25106c;
        }
    }
    ctx->pc = 0x250FE4u;
label_250fe4:
    // 0x250fe4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_250fe8:
    if (ctx->pc == 0x250FE8u) {
        ctx->pc = 0x250FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FE4u;
        // 0x250fe8: 0x7ba20100  lq          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FECu;
        goto label_250fec;
    }
    ctx->pc = 0x250FE4u;
    {
        const bool branch_taken_0x250fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FE4u;
        // 0x250fe8: 0x7ba20100  lq          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fe4) {
            ctx->pc = 0x251014u;
            goto label_251014;
        }
    }
    ctx->pc = 0x250FECu;
label_250fec:
    // 0x250fec: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x250fecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_250ff0:
    // 0x250ff0: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x250ff0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_250ff4:
    // 0x250ff4: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x250ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_250ff8:
    // 0x250ff8: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x250ff8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_250ffc:
    // 0x250ffc: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x250ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_251000:
    // 0x251000: 0x7ba30130  lq          $v1, 0x130($sp)
    ctx->pc = 0x251000u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_251004:
    // 0x251004: 0x17c00005  bnez        $fp, . + 4 + (0x5 << 2)
label_251008:
    if (ctx->pc == 0x251008u) {
        ctx->pc = 0x251008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251004u;
        // 0x251008: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25100Cu;
        goto label_25100c;
    }
    ctx->pc = 0x251004u;
    {
        const bool branch_taken_0x251004 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x251008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251004u;
        // 0x251008: 0x7e030040  sq          $v1, 0x40($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251004) {
            ctx->pc = 0x25101Cu;
            goto label_25101c;
        }
    }
    ctx->pc = 0x25100Cu;
label_25100c:
    // 0x25100c: 0xc08992e  jal         func_2264B8
label_251010:
    if (ctx->pc == 0x251010u) {
        ctx->pc = 0x251010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25100Cu;
        // 0x251010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251014u;
        goto label_251014;
    }
    ctx->pc = 0x25100Cu;
    SET_GPR_U32(ctx, 31, 0x251014u);
    ctx->pc = 0x251010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25100Cu;
    // 0x251010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x25100Cu, 0x251014u)) {
        return;
    }
    ctx->pc = 0x251014u;
label_251014:
    // 0x251014: 0x53c00016  beql        $fp, $zero, . + 4 + (0x16 << 2)
label_251018:
    if (ctx->pc == 0x251018u) {
        ctx->pc = 0x251018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251014u;
        // 0x251018: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25101Cu;
        goto label_25101c;
    }
    ctx->pc = 0x251014u;
    {
        const bool branch_taken_0x251014 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x251014) {
            ctx->pc = 0x251018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251014u;
            // 0x251018: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251070u;
            goto label_251070;
        }
    }
    ctx->pc = 0x25101Cu;
label_25101c:
    // 0x25101c: 0x32e24000  andi        $v0, $s7, 0x4000
    ctx->pc = 0x25101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)16384);
label_251020:
    // 0x251020: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_251024:
    if (ctx->pc == 0x251024u) {
        ctx->pc = 0x251024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251020u;
        // 0x251024: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251028u;
        goto label_251028;
    }
    ctx->pc = 0x251020u;
    {
        const bool branch_taken_0x251020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251020u;
        // 0x251024: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251020) {
            ctx->pc = 0x25103Cu;
            goto label_25103c;
        }
    }
    ctx->pc = 0x251028u;
label_251028:
    // 0x251028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x251028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25102c:
    // 0x25102c: 0xc092d9c  jal         func_24B670
label_251030:
    if (ctx->pc == 0x251030u) {
        ctx->pc = 0x251030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25102Cu;
        // 0x251030: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251034u;
        goto label_251034;
    }
    ctx->pc = 0x25102Cu;
    SET_GPR_U32(ctx, 31, 0x251034u);
    ctx->pc = 0x251030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25102Cu;
    // 0x251030: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x25102Cu, 0x251034u)) {
        return;
    }
    ctx->pc = 0x251034u;
label_251034:
    // 0x251034: 0x1000000a  b           . + 4 + (0xA << 2)
label_251038:
    if (ctx->pc == 0x251038u) {
        ctx->pc = 0x251038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251034u;
        // 0x251038: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25103Cu;
        goto label_25103c;
    }
    ctx->pc = 0x251034u;
    {
        const bool branch_taken_0x251034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251034u;
        // 0x251038: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251034) {
            ctx->pc = 0x251060u;
            goto label_251060;
        }
    }
    ctx->pc = 0x25103Cu;
label_25103c:
    // 0x25103c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x25103cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_251040:
    // 0x251040: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x251040u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
label_251044:
    // 0x251044: 0x7a430010  lq          $v1, 0x10($s2)
    ctx->pc = 0x251044u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_251048:
    // 0x251048: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x251048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
label_25104c:
    // 0x25104c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x25104cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_251050:
    // 0x251050: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x251050u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
label_251054:
    // 0x251054: 0x7a430030  lq          $v1, 0x30($s2)
    ctx->pc = 0x251054u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_251058:
    // 0x251058: 0x7e030080  sq          $v1, 0x80($s0)
    ctx->pc = 0x251058u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 3));
label_25105c:
    // 0x25105c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x25105cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_251060:
    // 0x251060: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x251060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
label_251064:
    // 0x251064: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x251064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_251068:
    // 0x251068: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x251068u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_25106c:
    // 0x25106c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x25106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_251070:
    // 0x251070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x251070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_251074:
    // 0x251074: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x251074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_251078:
    // 0x251078: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_25107c:
    if (ctx->pc == 0x25107Cu) {
        ctx->pc = 0x25107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251078u;
        // 0x25107c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251080u;
        goto label_251080;
    }
    ctx->pc = 0x251078u;
    {
        const bool branch_taken_0x251078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251078u;
        // 0x25107c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251078) {
            ctx->pc = 0x2510A8u;
            goto label_2510a8;
        }
    }
    ctx->pc = 0x251080u;
label_251080:
    // 0x251080: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_251084:
    if (ctx->pc == 0x251084u) {
        ctx->pc = 0x251084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251080u;
        // 0x251084: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251088u;
        goto label_251088;
    }
    ctx->pc = 0x251080u;
    {
        const bool branch_taken_0x251080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251080u;
        // 0x251084: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251080) {
            ctx->pc = 0x251098u;
            goto label_251098;
        }
    }
    ctx->pc = 0x251088u;
label_251088:
    // 0x251088: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_25108c:
    if (ctx->pc == 0x25108Cu) {
        ctx->pc = 0x25108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251088u;
        // 0x25108c: 0x8fa30178  lw          $v1, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251090u;
        goto label_251090;
    }
    ctx->pc = 0x251088u;
    {
        const bool branch_taken_0x251088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251088u;
        // 0x25108c: 0x8fa30178  lw          $v1, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251088) {
            ctx->pc = 0x2510BCu;
            goto label_2510bc;
        }
    }
    ctx->pc = 0x251090u;
label_251090:
    // 0x251090: 0x1000000d  b           . + 4 + (0xD << 2)
label_251094:
    if (ctx->pc == 0x251094u) {
        ctx->pc = 0x251094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251090u;
        // 0x251094: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251098u;
        goto label_251098;
    }
    ctx->pc = 0x251090u;
    {
        const bool branch_taken_0x251090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251090u;
        // 0x251094: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251090) {
            ctx->pc = 0x2510C8u;
            goto label_2510c8;
        }
    }
    ctx->pc = 0x251098u;
label_251098:
    // 0x251098: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_25109c:
    if (ctx->pc == 0x25109Cu) {
        ctx->pc = 0x25109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251098u;
        // 0x25109c: 0x8fa30178  lw          $v1, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510A0u;
        goto label_2510a0;
    }
    ctx->pc = 0x251098u;
    {
        const bool branch_taken_0x251098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251098u;
        // 0x25109c: 0x8fa30178  lw          $v1, 0x178($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251098) {
            ctx->pc = 0x2510B4u;
            goto label_2510b4;
        }
    }
    ctx->pc = 0x2510A0u;
label_2510a0:
    // 0x2510a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2510a4:
    if (ctx->pc == 0x2510A4u) {
        ctx->pc = 0x2510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510A0u;
        // 0x2510a4: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510A8u;
        goto label_2510a8;
    }
    ctx->pc = 0x2510A0u;
    {
        const bool branch_taken_0x2510a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510A0u;
        // 0x2510a4: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510a0) {
            ctx->pc = 0x2510C8u;
            goto label_2510c8;
        }
    }
    ctx->pc = 0x2510A8u;
label_2510a8:
    // 0x2510a8: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x2510a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_2510ac:
    // 0x2510ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_2510b0:
    if (ctx->pc == 0x2510B0u) {
        ctx->pc = 0x2510B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ACu;
        // 0x2510b0: 0x8e760000  lw          $s6, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510B4u;
        goto label_2510b4;
    }
    ctx->pc = 0x2510ACu;
    {
        const bool branch_taken_0x2510ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ACu;
        // 0x2510b0: 0x8e760000  lw          $s6, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510ac) {
            ctx->pc = 0x2510C0u;
            goto label_2510c0;
        }
    }
    ctx->pc = 0x2510B4u;
label_2510b4:
    // 0x2510b4: 0xae760000  sw          $s6, 0x0($s3)
    ctx->pc = 0x2510b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
label_2510b8:
    // 0x2510b8: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2510b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2510bc:
    // 0x2510bc: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2510bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2510c0:
    // 0x2510c0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x2510c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_2510c4:
    // 0x2510c4: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x2510c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_2510c8:
    // 0x2510c8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2510c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2510cc:
    // 0x2510cc: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x2510ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_2510d0:
    // 0x2510d0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2510d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2510d4:
    // 0x2510d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2510d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2510d8:
    // 0x2510d8: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x2510d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_2510dc:
    // 0x2510dc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2510dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2510e0:
    // 0x2510e0: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
label_2510e4:
    if (ctx->pc == 0x2510E4u) {
        ctx->pc = 0x2510E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510E0u;
        // 0x2510e4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510E8u;
        goto label_2510e8;
    }
    ctx->pc = 0x2510E0u;
    {
        const bool branch_taken_0x2510e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2510E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510E0u;
        // 0x2510e4: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510e0) {
            ctx->pc = 0x250EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250ea8;
        }
    }
    ctx->pc = 0x2510E8u;
label_2510e8:
    // 0x2510e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2510e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2510ec:
    // 0x2510ec: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x2510ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_2510f0:
    // 0x2510f0: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x2510f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_2510f4:
    // 0x2510f4: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x2510f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_2510f8:
    // 0x2510f8: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x2510f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_2510fc:
    // 0x2510fc: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x2510fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_251100:
    // 0x251100: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x251100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_251104:
    // 0x251104: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x251104u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_251108:
    // 0x251108: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x251108u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_25110c:
    // 0x25110c: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x25110cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_251110:
    // 0x251110: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x251110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_251114:
    // 0x251114: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x251114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_251118:
    // 0x251118: 0x3e00008  jr          $ra
label_25111c:
    if (ctx->pc == 0x25111Cu) {
        ctx->pc = 0x25111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251118u;
        // 0x25111c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251120u;
        goto label_fallthrough_0x251118;
    }
    ctx->pc = 0x251118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251118u;
        // 0x25111c: 0x27bd0230  addiu       $sp, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x251118:
    ctx->pc = 0x251120u;
}
