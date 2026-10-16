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

// Function: sub_0011DCA8
// Address: 0x11dca8 - 0x11e0f0
void sub_0011DCA8_0x11dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DCA8_0x11dca8");
#endif

    switch (ctx->pc) {
        case 0x11dca8u: goto label_11dca8;
        case 0x11dcacu: goto label_11dcac;
        case 0x11dcb0u: goto label_11dcb0;
        case 0x11dcb4u: goto label_11dcb4;
        case 0x11dcb8u: goto label_11dcb8;
        case 0x11dcbcu: goto label_11dcbc;
        case 0x11dcc0u: goto label_11dcc0;
        case 0x11dcc4u: goto label_11dcc4;
        case 0x11dcc8u: goto label_11dcc8;
        case 0x11dcccu: goto label_11dccc;
        case 0x11dcd0u: goto label_11dcd0;
        case 0x11dcd4u: goto label_11dcd4;
        case 0x11dcd8u: goto label_11dcd8;
        case 0x11dcdcu: goto label_11dcdc;
        case 0x11dce0u: goto label_11dce0;
        case 0x11dce4u: goto label_11dce4;
        case 0x11dce8u: goto label_11dce8;
        case 0x11dcecu: goto label_11dcec;
        case 0x11dcf0u: goto label_11dcf0;
        case 0x11dcf4u: goto label_11dcf4;
        case 0x11dcf8u: goto label_11dcf8;
        case 0x11dcfcu: goto label_11dcfc;
        case 0x11dd00u: goto label_11dd00;
        case 0x11dd04u: goto label_11dd04;
        case 0x11dd08u: goto label_11dd08;
        case 0x11dd0cu: goto label_11dd0c;
        case 0x11dd10u: goto label_11dd10;
        case 0x11dd14u: goto label_11dd14;
        case 0x11dd18u: goto label_11dd18;
        case 0x11dd1cu: goto label_11dd1c;
        case 0x11dd20u: goto label_11dd20;
        case 0x11dd24u: goto label_11dd24;
        case 0x11dd28u: goto label_11dd28;
        case 0x11dd2cu: goto label_11dd2c;
        case 0x11dd30u: goto label_11dd30;
        case 0x11dd34u: goto label_11dd34;
        case 0x11dd38u: goto label_11dd38;
        case 0x11dd3cu: goto label_11dd3c;
        case 0x11dd40u: goto label_11dd40;
        case 0x11dd44u: goto label_11dd44;
        case 0x11dd48u: goto label_11dd48;
        case 0x11dd4cu: goto label_11dd4c;
        case 0x11dd50u: goto label_11dd50;
        case 0x11dd54u: goto label_11dd54;
        case 0x11dd58u: goto label_11dd58;
        case 0x11dd5cu: goto label_11dd5c;
        case 0x11dd60u: goto label_11dd60;
        case 0x11dd64u: goto label_11dd64;
        case 0x11dd68u: goto label_11dd68;
        case 0x11dd6cu: goto label_11dd6c;
        case 0x11dd70u: goto label_11dd70;
        case 0x11dd74u: goto label_11dd74;
        case 0x11dd78u: goto label_11dd78;
        case 0x11dd7cu: goto label_11dd7c;
        case 0x11dd80u: goto label_11dd80;
        case 0x11dd84u: goto label_11dd84;
        case 0x11dd88u: goto label_11dd88;
        case 0x11dd8cu: goto label_11dd8c;
        case 0x11dd90u: goto label_11dd90;
        case 0x11dd94u: goto label_11dd94;
        case 0x11dd98u: goto label_11dd98;
        case 0x11dd9cu: goto label_11dd9c;
        case 0x11dda0u: goto label_11dda0;
        case 0x11dda4u: goto label_11dda4;
        case 0x11dda8u: goto label_11dda8;
        case 0x11ddacu: goto label_11ddac;
        case 0x11ddb0u: goto label_11ddb0;
        case 0x11ddb4u: goto label_11ddb4;
        case 0x11ddb8u: goto label_11ddb8;
        case 0x11ddbcu: goto label_11ddbc;
        case 0x11ddc0u: goto label_11ddc0;
        case 0x11ddc4u: goto label_11ddc4;
        case 0x11ddc8u: goto label_11ddc8;
        case 0x11ddccu: goto label_11ddcc;
        case 0x11ddd0u: goto label_11ddd0;
        case 0x11ddd4u: goto label_11ddd4;
        case 0x11ddd8u: goto label_11ddd8;
        case 0x11dddcu: goto label_11dddc;
        case 0x11dde0u: goto label_11dde0;
        case 0x11dde4u: goto label_11dde4;
        case 0x11dde8u: goto label_11dde8;
        case 0x11ddecu: goto label_11ddec;
        case 0x11ddf0u: goto label_11ddf0;
        case 0x11ddf4u: goto label_11ddf4;
        case 0x11ddf8u: goto label_11ddf8;
        case 0x11ddfcu: goto label_11ddfc;
        case 0x11de00u: goto label_11de00;
        case 0x11de04u: goto label_11de04;
        case 0x11de08u: goto label_11de08;
        case 0x11de0cu: goto label_11de0c;
        case 0x11de10u: goto label_11de10;
        case 0x11de14u: goto label_11de14;
        case 0x11de18u: goto label_11de18;
        case 0x11de1cu: goto label_11de1c;
        case 0x11de20u: goto label_11de20;
        case 0x11de24u: goto label_11de24;
        case 0x11de28u: goto label_11de28;
        case 0x11de2cu: goto label_11de2c;
        case 0x11de30u: goto label_11de30;
        case 0x11de34u: goto label_11de34;
        case 0x11de38u: goto label_11de38;
        case 0x11de3cu: goto label_11de3c;
        case 0x11de40u: goto label_11de40;
        case 0x11de44u: goto label_11de44;
        case 0x11de48u: goto label_11de48;
        case 0x11de4cu: goto label_11de4c;
        case 0x11de50u: goto label_11de50;
        case 0x11de54u: goto label_11de54;
        case 0x11de58u: goto label_11de58;
        case 0x11de5cu: goto label_11de5c;
        case 0x11de60u: goto label_11de60;
        case 0x11de64u: goto label_11de64;
        case 0x11de68u: goto label_11de68;
        case 0x11de6cu: goto label_11de6c;
        case 0x11de70u: goto label_11de70;
        case 0x11de74u: goto label_11de74;
        case 0x11de78u: goto label_11de78;
        case 0x11de7cu: goto label_11de7c;
        case 0x11de80u: goto label_11de80;
        case 0x11de84u: goto label_11de84;
        case 0x11de88u: goto label_11de88;
        case 0x11de8cu: goto label_11de8c;
        case 0x11de90u: goto label_11de90;
        case 0x11de94u: goto label_11de94;
        case 0x11de98u: goto label_11de98;
        case 0x11de9cu: goto label_11de9c;
        case 0x11dea0u: goto label_11dea0;
        case 0x11dea4u: goto label_11dea4;
        case 0x11dea8u: goto label_11dea8;
        case 0x11deacu: goto label_11deac;
        case 0x11deb0u: goto label_11deb0;
        case 0x11deb4u: goto label_11deb4;
        case 0x11deb8u: goto label_11deb8;
        case 0x11debcu: goto label_11debc;
        case 0x11dec0u: goto label_11dec0;
        case 0x11dec4u: goto label_11dec4;
        case 0x11dec8u: goto label_11dec8;
        case 0x11deccu: goto label_11decc;
        case 0x11ded0u: goto label_11ded0;
        case 0x11ded4u: goto label_11ded4;
        case 0x11ded8u: goto label_11ded8;
        case 0x11dedcu: goto label_11dedc;
        case 0x11dee0u: goto label_11dee0;
        case 0x11dee4u: goto label_11dee4;
        case 0x11dee8u: goto label_11dee8;
        case 0x11deecu: goto label_11deec;
        case 0x11def0u: goto label_11def0;
        case 0x11def4u: goto label_11def4;
        case 0x11def8u: goto label_11def8;
        case 0x11defcu: goto label_11defc;
        case 0x11df00u: goto label_11df00;
        case 0x11df04u: goto label_11df04;
        case 0x11df08u: goto label_11df08;
        case 0x11df0cu: goto label_11df0c;
        case 0x11df10u: goto label_11df10;
        case 0x11df14u: goto label_11df14;
        case 0x11df18u: goto label_11df18;
        case 0x11df1cu: goto label_11df1c;
        case 0x11df20u: goto label_11df20;
        case 0x11df24u: goto label_11df24;
        case 0x11df28u: goto label_11df28;
        case 0x11df2cu: goto label_11df2c;
        case 0x11df30u: goto label_11df30;
        case 0x11df34u: goto label_11df34;
        case 0x11df38u: goto label_11df38;
        case 0x11df3cu: goto label_11df3c;
        case 0x11df40u: goto label_11df40;
        case 0x11df44u: goto label_11df44;
        case 0x11df48u: goto label_11df48;
        case 0x11df4cu: goto label_11df4c;
        case 0x11df50u: goto label_11df50;
        case 0x11df54u: goto label_11df54;
        case 0x11df58u: goto label_11df58;
        case 0x11df5cu: goto label_11df5c;
        case 0x11df60u: goto label_11df60;
        case 0x11df64u: goto label_11df64;
        case 0x11df68u: goto label_11df68;
        case 0x11df6cu: goto label_11df6c;
        case 0x11df70u: goto label_11df70;
        case 0x11df74u: goto label_11df74;
        case 0x11df78u: goto label_11df78;
        case 0x11df7cu: goto label_11df7c;
        case 0x11df80u: goto label_11df80;
        case 0x11df84u: goto label_11df84;
        case 0x11df88u: goto label_11df88;
        case 0x11df8cu: goto label_11df8c;
        case 0x11df90u: goto label_11df90;
        case 0x11df94u: goto label_11df94;
        case 0x11df98u: goto label_11df98;
        case 0x11df9cu: goto label_11df9c;
        case 0x11dfa0u: goto label_11dfa0;
        case 0x11dfa4u: goto label_11dfa4;
        case 0x11dfa8u: goto label_11dfa8;
        case 0x11dfacu: goto label_11dfac;
        case 0x11dfb0u: goto label_11dfb0;
        case 0x11dfb4u: goto label_11dfb4;
        case 0x11dfb8u: goto label_11dfb8;
        case 0x11dfbcu: goto label_11dfbc;
        case 0x11dfc0u: goto label_11dfc0;
        case 0x11dfc4u: goto label_11dfc4;
        case 0x11dfc8u: goto label_11dfc8;
        case 0x11dfccu: goto label_11dfcc;
        case 0x11dfd0u: goto label_11dfd0;
        case 0x11dfd4u: goto label_11dfd4;
        case 0x11dfd8u: goto label_11dfd8;
        case 0x11dfdcu: goto label_11dfdc;
        case 0x11dfe0u: goto label_11dfe0;
        case 0x11dfe4u: goto label_11dfe4;
        case 0x11dfe8u: goto label_11dfe8;
        case 0x11dfecu: goto label_11dfec;
        case 0x11dff0u: goto label_11dff0;
        case 0x11dff4u: goto label_11dff4;
        case 0x11dff8u: goto label_11dff8;
        case 0x11dffcu: goto label_11dffc;
        case 0x11e000u: goto label_11e000;
        case 0x11e004u: goto label_11e004;
        case 0x11e008u: goto label_11e008;
        case 0x11e00cu: goto label_11e00c;
        case 0x11e010u: goto label_11e010;
        case 0x11e014u: goto label_11e014;
        case 0x11e018u: goto label_11e018;
        case 0x11e01cu: goto label_11e01c;
        case 0x11e020u: goto label_11e020;
        case 0x11e024u: goto label_11e024;
        case 0x11e028u: goto label_11e028;
        case 0x11e02cu: goto label_11e02c;
        case 0x11e030u: goto label_11e030;
        case 0x11e034u: goto label_11e034;
        case 0x11e038u: goto label_11e038;
        case 0x11e03cu: goto label_11e03c;
        case 0x11e040u: goto label_11e040;
        case 0x11e044u: goto label_11e044;
        case 0x11e048u: goto label_11e048;
        case 0x11e04cu: goto label_11e04c;
        case 0x11e050u: goto label_11e050;
        case 0x11e054u: goto label_11e054;
        case 0x11e058u: goto label_11e058;
        case 0x11e05cu: goto label_11e05c;
        case 0x11e060u: goto label_11e060;
        case 0x11e064u: goto label_11e064;
        case 0x11e068u: goto label_11e068;
        case 0x11e06cu: goto label_11e06c;
        case 0x11e070u: goto label_11e070;
        case 0x11e074u: goto label_11e074;
        case 0x11e078u: goto label_11e078;
        case 0x11e07cu: goto label_11e07c;
        case 0x11e080u: goto label_11e080;
        case 0x11e084u: goto label_11e084;
        case 0x11e088u: goto label_11e088;
        case 0x11e08cu: goto label_11e08c;
        case 0x11e090u: goto label_11e090;
        case 0x11e094u: goto label_11e094;
        case 0x11e098u: goto label_11e098;
        case 0x11e09cu: goto label_11e09c;
        case 0x11e0a0u: goto label_11e0a0;
        case 0x11e0a4u: goto label_11e0a4;
        case 0x11e0a8u: goto label_11e0a8;
        case 0x11e0acu: goto label_11e0ac;
        case 0x11e0b0u: goto label_11e0b0;
        case 0x11e0b4u: goto label_11e0b4;
        case 0x11e0b8u: goto label_11e0b8;
        case 0x11e0bcu: goto label_11e0bc;
        case 0x11e0c0u: goto label_11e0c0;
        case 0x11e0c4u: goto label_11e0c4;
        case 0x11e0c8u: goto label_11e0c8;
        case 0x11e0ccu: goto label_11e0cc;
        case 0x11e0d0u: goto label_11e0d0;
        case 0x11e0d4u: goto label_11e0d4;
        case 0x11e0d8u: goto label_11e0d8;
        case 0x11e0dcu: goto label_11e0dc;
        case 0x11e0e0u: goto label_11e0e0;
        case 0x11e0e4u: goto label_11e0e4;
        case 0x11e0e8u: goto label_11e0e8;
        case 0x11e0ecu: goto label_11e0ec;
        default: break;
    }

    ctx->pc = 0x11dca8u;

label_11dca8:
    // 0x11dca8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x11dca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_11dcac:
    // 0x11dcac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x11dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_11dcb0:
    // 0x11dcb0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x11dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_11dcb4:
    // 0x11dcb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11dcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11dcb8:
    // 0x11dcb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11dcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11dcbc:
    // 0x11dcbc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x11dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_11dcc0:
    // 0x11dcc0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x11dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_11dcc4:
    // 0x11dcc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11dcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_11dcc8:
    // 0x11dcc8: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x11dcc8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_11dccc:
    // 0x11dccc: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x11dcccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_11dcd0:
    // 0x11dcd0: 0xc04469a  jal         func_111A68
label_11dcd4:
    if (ctx->pc == 0x11DCD4u) {
        ctx->pc = 0x11DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCD0u;
        // 0x11dcd4: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DCD8u;
        goto label_11dcd8;
    }
    ctx->pc = 0x11DCD0u;
    SET_GPR_U32(ctx, 31, 0x11DCD8u);
    ctx->pc = 0x11DCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DCD0u;
    // 0x11dcd4: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111A68u, 0x11DCD0u, 0x11DCD8u)) {
        return;
    }
    ctx->pc = 0x11DCD8u;
label_11dcd8:
    // 0x11dcd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_11dcdc:
    // 0x11dcdc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11dcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11dce0:
    // 0x11dce0: 0x8c434500  lw          $v1, 0x4500($v0)
    ctx->pc = 0x11dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17664)));
label_11dce4:
    // 0x11dce4: 0x548300b4  bnel        $a0, $v1, . + 4 + (0xB4 << 2)
label_11dce8:
    if (ctx->pc == 0x11DCE8u) {
        ctx->pc = 0x11DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCE4u;
        // 0x11dce8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DCECu;
        goto label_11dcec;
    }
    ctx->pc = 0x11DCE4u;
    {
        const bool branch_taken_0x11dce4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11dce4) {
            ctx->pc = 0x11DCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DCE4u;
            // 0x11dce8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DFB8u;
            goto label_11dfb8;
        }
    }
    ctx->pc = 0x11DCECu;
label_11dcec:
    // 0x11dcec: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x11dcecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11dcf0:
    // 0x11dcf0: 0x126000f5  beqz        $s3, . + 4 + (0xF5 << 2)
label_11dcf4:
    if (ctx->pc == 0x11DCF4u) {
        ctx->pc = 0x11DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCF0u;
        // 0x11dcf4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DCF8u;
        goto label_11dcf8;
    }
    ctx->pc = 0x11DCF0u;
    {
        const bool branch_taken_0x11dcf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCF0u;
        // 0x11dcf4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcf0) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11DCF8u;
label_11dcf8:
    // 0x11dcf8: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x11dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_11dcfc:
    // 0x11dcfc: 0x108000f3  beqz        $a0, . + 4 + (0xF3 << 2)
label_11dd00:
    if (ctx->pc == 0x11DD00u) {
        ctx->pc = 0x11DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCFCu;
        // 0x11dd00: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD04u;
        goto label_11dd04;
    }
    ctx->pc = 0x11DCFCu;
    {
        const bool branch_taken_0x11dcfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DCFCu;
        // 0x11dd00: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dcfc) {
            ctx->pc = 0x11E0CCu;
            goto label_11e0cc;
        }
    }
    ctx->pc = 0x11DD04u;
label_11dd04:
    // 0x11dd04: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x11dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_11dd08:
    // 0x11dd08: 0x104000f0  beqz        $v0, . + 4 + (0xF0 << 2)
label_11dd0c:
    if (ctx->pc == 0x11DD0Cu) {
        ctx->pc = 0x11DD10u;
        goto label_11dd10;
    }
    ctx->pc = 0x11DD08u;
    {
        const bool branch_taken_0x11dd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd08) {
            ctx->pc = 0x11E0CCu;
            goto label_11e0cc;
        }
    }
    ctx->pc = 0x11DD10u;
label_11dd10:
    // 0x11dd10: 0xc040688  jal         func_101A20
label_11dd14:
    if (ctx->pc == 0x11DD14u) {
        ctx->pc = 0x11DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD10u;
        // 0x11dd14: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD18u;
        goto label_11dd18;
    }
    ctx->pc = 0x11DD10u;
    SET_GPR_U32(ctx, 31, 0x11DD18u);
    ctx->pc = 0x11DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD10u;
    // 0x11dd14: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x11DD10u, 0x11DD18u)) {
        return;
    }
    ctx->pc = 0x11DD18u;
label_11dd18:
    // 0x11dd18: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x11dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_11dd1c:
    // 0x11dd1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11dd1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dd20:
    // 0x11dd20: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x11dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_11dd24:
    // 0x11dd24: 0xc040688  jal         func_101A20
label_11dd28:
    if (ctx->pc == 0x11DD28u) {
        ctx->pc = 0x11DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD24u;
        // 0x11dd28: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD2Cu;
        goto label_11dd2c;
    }
    ctx->pc = 0x11DD24u;
    SET_GPR_U32(ctx, 31, 0x11DD2Cu);
    ctx->pc = 0x11DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD24u;
    // 0x11dd28: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x11DD24u, 0x11DD2Cu)) {
        return;
    }
    ctx->pc = 0x11DD2Cu;
label_11dd2c:
    // 0x11dd2c: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x11dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_11dd30:
    // 0x11dd30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11dd30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dd34:
    // 0x11dd34: 0xc040698  jal         func_101A60
label_11dd38:
    if (ctx->pc == 0x11DD38u) {
        ctx->pc = 0x11DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD34u;
        // 0x11dd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD3Cu;
        goto label_11dd3c;
    }
    ctx->pc = 0x11DD34u;
    SET_GPR_U32(ctx, 31, 0x11DD3Cu);
    ctx->pc = 0x11DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD34u;
    // 0x11dd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x11DD34u, 0x11DD3Cu)) {
        return;
    }
    ctx->pc = 0x11DD3Cu;
label_11dd3c:
    // 0x11dd3c: 0xae420120  sw          $v0, 0x120($s2)
    ctx->pc = 0x11dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 2));
label_11dd40:
    // 0x11dd40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11dd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11dd44:
    // 0x11dd44: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x11dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_11dd48:
    // 0x11dd48: 0xc040698  jal         func_101A60
label_11dd4c:
    if (ctx->pc == 0x11DD4Cu) {
        ctx->pc = 0x11DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD48u;
        // 0x11dd4c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD50u;
        goto label_11dd50;
    }
    ctx->pc = 0x11DD48u;
    SET_GPR_U32(ctx, 31, 0x11DD50u);
    ctx->pc = 0x11DD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD48u;
    // 0x11dd4c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x11DD48u, 0x11DD50u)) {
        return;
    }
    ctx->pc = 0x11DD50u;
label_11dd50:
    // 0x11dd50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11dd50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11dd54:
    // 0x11dd54: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x11dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_11dd58:
    // 0x11dd58: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
label_11dd5c:
    if (ctx->pc == 0x11DD5Cu) {
        ctx->pc = 0x11DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD58u;
        // 0x11dd5c: 0xae430124  sw          $v1, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD60u;
        goto label_11dd60;
    }
    ctx->pc = 0x11DD58u;
    {
        const bool branch_taken_0x11dd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD58u;
        // 0x11dd5c: 0xae430124  sw          $v1, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd58) {
            ctx->pc = 0x11E0C4u;
            goto label_11e0c4;
        }
    }
    ctx->pc = 0x11DD60u;
label_11dd60:
    // 0x11dd60: 0x106000d9  beqz        $v1, . + 4 + (0xD9 << 2)
label_11dd64:
    if (ctx->pc == 0x11DD64u) {
        ctx->pc = 0x11DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD60u;
        // 0x11dd64: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD68u;
        goto label_11dd68;
    }
    ctx->pc = 0x11DD60u;
    {
        const bool branch_taken_0x11dd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD60u;
        // 0x11dd64: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd60) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11DD68u;
label_11dd68:
    // 0x11dd68: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x11dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_11dd6c:
    // 0x11dd6c: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x11dd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
label_11dd70:
    // 0x11dd70: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x11dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_11dd74:
    // 0x11dd74: 0xae430114  sw          $v1, 0x114($s2)
    ctx->pc = 0x11dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 3));
label_11dd78:
    // 0x11dd78: 0xc04f0cc  jal         func_13C330
label_11dd7c:
    if (ctx->pc == 0x11DD7Cu) {
        ctx->pc = 0x11DD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD78u;
        // 0x11dd7c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DD80u;
        goto label_11dd80;
    }
    ctx->pc = 0x11DD78u;
    SET_GPR_U32(ctx, 31, 0x11DD80u);
    ctx->pc = 0x11DD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD78u;
    // 0x11dd7c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11DD78u, 0x11DD80u)) {
        return;
    }
    ctx->pc = 0x11DD80u;
label_11dd80:
    // 0x11dd80: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x11dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_11dd84:
    // 0x11dd84: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x11dd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_11dd88:
    // 0x11dd88: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x11dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_11dd8c:
    // 0x11dd8c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x11dd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11dd90:
    // 0x11dd90: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x11dd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11dd94:
    // 0x11dd94: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x11dd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_11dd98:
    // 0x11dd98: 0xc04f0f0  jal         func_13C3C0
label_11dd9c:
    if (ctx->pc == 0x11DD9Cu) {
        ctx->pc = 0x11DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD98u;
        // 0x11dd9c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDA0u;
        goto label_11dda0;
    }
    ctx->pc = 0x11DD98u;
    SET_GPR_U32(ctx, 31, 0x11DDA0u);
    ctx->pc = 0x11DD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD98u;
    // 0x11dd9c: 0x8e640024  lw          $a0, 0x24($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x11DD98u, 0x11DDA0u)) {
        return;
    }
    ctx->pc = 0x11DDA0u;
label_11dda0:
    // 0x11dda0: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x11dda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11dda4:
    // 0x11dda4: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x11dda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11dda8:
    // 0x11dda8: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x11dda8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_11ddac:
    // 0x11ddac: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x11ddacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11ddb0:
    // 0x11ddb0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x11ddb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11ddb4:
    // 0x11ddb4: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x11ddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_11ddb8:
    // 0x11ddb8: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x11ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_11ddbc:
    // 0x11ddbc: 0xc04f0cc  jal         func_13C330
label_11ddc0:
    if (ctx->pc == 0x11DDC0u) {
        ctx->pc = 0x11DDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DDBCu;
        // 0x11ddc0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DDC4u;
        goto label_11ddc4;
    }
    ctx->pc = 0x11DDBCu;
    SET_GPR_U32(ctx, 31, 0x11DDC4u);
    ctx->pc = 0x11DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DDBCu;
    // 0x11ddc0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x11DDBCu, 0x11DDC4u)) {
        return;
    }
    ctx->pc = 0x11DDC4u;
label_11ddc4:
    // 0x11ddc4: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x11ddc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_11ddc8:
    // 0x11ddc8: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x11ddc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_11ddcc:
    // 0x11ddcc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x11ddccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_11ddd0:
    // 0x11ddd0: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x11ddd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11ddd4:
    // 0x11ddd4: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x11ddd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11ddd8:
    // 0x11ddd8: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x11ddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_11dddc:
    // 0x11dddc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11dddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11dde0:
    // 0x11dde0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x11dde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_11dde4:
    // 0x11dde4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x11dde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_11dde8:
    // 0x11dde8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x11dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_11ddec:
    // 0x11ddec: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x11ddecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11ddf0:
    // 0x11ddf0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x11ddf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11ddf4:
    // 0x11ddf4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x11ddf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_11ddf8:
    // 0x11ddf8: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x11ddf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11ddfc:
    // 0x11ddfc: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x11ddfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11de00:
    // 0x11de00: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x11de00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_11de04:
    // 0x11de04: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x11de04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11de08:
    // 0x11de08: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x11de08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11de0c:
    // 0x11de0c: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x11de0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
label_11de10:
    // 0x11de10: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x11de10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_11de14:
    // 0x11de14: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x11de14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_11de18:
    // 0x11de18: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x11de18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_11de1c:
    // 0x11de1c: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x11de1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_11de20:
    // 0x11de20: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x11de20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11de24:
    // 0x11de24: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x11de24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11de28:
    // 0x11de28: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x11de28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
label_11de2c:
    // 0x11de2c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x11de2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_11de30:
    // 0x11de30: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x11de30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_11de34:
    // 0x11de34: 0xc66c0008  lwc1        $f12, 0x8($s3)
    ctx->pc = 0x11de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11de38:
    // 0x11de38: 0xc04789c  jal         func_11E270
label_11de3c:
    if (ctx->pc == 0x11DE3Cu) {
        ctx->pc = 0x11DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE38u;
        // 0x11de3c: 0xc66d000c  lwc1        $f13, 0xC($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE40u;
        goto label_11de40;
    }
    ctx->pc = 0x11DE38u;
    SET_GPR_U32(ctx, 31, 0x11DE40u);
    ctx->pc = 0x11DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE38u;
    // 0x11de3c: 0xc66d000c  lwc1        $f13, 0xC($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E270u, 0x11DE38u, 0x11DE40u)) {
        return;
    }
    ctx->pc = 0x11DE40u;
label_11de40:
    // 0x11de40: 0x104000a1  beqz        $v0, . + 4 + (0xA1 << 2)
label_11de44:
    if (ctx->pc == 0x11DE44u) {
        ctx->pc = 0x11DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE40u;
        // 0x11de44: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE48u;
        goto label_11de48;
    }
    ctx->pc = 0x11DE40u;
    {
        const bool branch_taken_0x11de40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE40u;
        // 0x11de44: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11de40) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11DE48u;
label_11de48:
    // 0x11de48: 0xc047986  jal         func_11E618
label_11de4c:
    if (ctx->pc == 0x11DE4Cu) {
        ctx->pc = 0x11DE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DE48u;
        // 0x11de4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DE50u;
        goto label_11de50;
    }
    ctx->pc = 0x11DE48u;
    SET_GPR_U32(ctx, 31, 0x11DE50u);
    ctx->pc = 0x11DE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE48u;
    // 0x11de4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11E618u, 0x11DE48u, 0x11DE50u)) {
        return;
    }
    ctx->pc = 0x11DE50u;
label_11de50:
    // 0x11de50: 0x264200f0  addiu       $v0, $s2, 0xF0
    ctx->pc = 0x11de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_11de54:
    // 0x11de54: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x11de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_11de58:
    // 0x11de58: 0xc64000f0  lwc1        $f0, 0xF0($s2)
    ctx->pc = 0x11de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11de5c:
    // 0x11de5c: 0xc64100e0  lwc1        $f1, 0xE0($s2)
    ctx->pc = 0x11de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11de60:
    // 0x11de60: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11de60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11de64:
    // 0x11de64: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x11de64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_11de68:
    // 0x11de68: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x11de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11de6c:
    // 0x11de6c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x11de6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11de70:
    // 0x11de70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11de70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_11de74:
    // 0x11de74: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x11de74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_11de78:
    // 0x11de78: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x11de78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11de7c:
    // 0x11de7c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x11de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11de80:
    // 0x11de80: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x11de80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_11de84:
    // 0x11de84: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x11de84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_11de88:
    // 0x11de88: 0x6ba40047  ldl         $a0, 0x47($sp)
    ctx->pc = 0x11de88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_11de8c:
    // 0x11de8c: 0x6fa40040  ldr         $a0, 0x40($sp)
    ctx->pc = 0x11de8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_11de90:
    // 0x11de90: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x11de90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_11de94:
    // 0x11de94: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x11de94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11de98:
    // 0x11de98: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x11de98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_11de9c:
    // 0x11de9c: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x11de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_11dea0:
    // 0x11dea0: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x11dea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11dea4:
    // 0x11dea4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x11dea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11dea8:
    // 0x11dea8: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x11dea8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_11deac:
    // 0x11deac: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x11deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11deb0:
    // 0x11deb0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x11deb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_11deb4:
    // 0x11deb4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x11deb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_11deb8:
    // 0x11deb8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x11deb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_11debc:
    // 0x11debc: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x11debcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_11dec0:
    // 0x11dec0: 0x0  nop
    ctx->pc = 0x11dec0u;
    // NOP
label_11dec4:
    // 0x11dec4: 0x0  nop
    ctx->pc = 0x11dec4u;
    // NOP
label_11dec8:
    // 0x11dec8: 0x460c0304  c1          0xC0304
    ctx->pc = 0x11dec8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[12]);
label_11decc:
    // 0x11decc: 0xe64c00d8  swc1        $f12, 0xD8($s2)
    ctx->pc = 0x11deccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 216), bits); }
label_11ded0:
    // 0x11ded0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x11ded0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_11ded4:
    // 0x11ded4: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x11ded4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
label_11ded8:
    // 0x11ded8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x11ded8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_11dedc:
    // 0x11dedc: 0xc64000d4  lwc1        $f0, 0xD4($s2)
    ctx->pc = 0x11dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11dee0:
    // 0x11dee0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x11dee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_11dee4:
    // 0x11dee4: 0x0  nop
    ctx->pc = 0x11dee4u;
    // NOP
label_11dee8:
    // 0x11dee8: 0x0  nop
    ctx->pc = 0x11dee8u;
    // NOP
label_11deec:
    // 0x11deec: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x11deecu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[12]);
label_11def0:
    // 0x11def0: 0xc09b008  jal         func_26C020
label_11def4:
    if (ctx->pc == 0x11DEF4u) {
        ctx->pc = 0x11DEF8u;
        goto label_11def8;
    }
    ctx->pc = 0x11DEF0u;
    SET_GPR_U32(ctx, 31, 0x11DEF8u);
    ctx->pc = 0x26C020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C020u, 0x11DEF0u, 0x11DEF8u)) {
        return;
    }
    ctx->pc = 0x11DEF8u;
label_11def8:
    // 0x11def8: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x11def8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_11defc:
    // 0x11defc: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x11defcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_11df00:
    // 0x11df00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x11df00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11df04:
    // 0x11df04: 0x0  nop
    ctx->pc = 0x11df04u;
    // NOP
label_11df08:
    // 0x11df08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x11df08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_11df0c:
    // 0x11df0c: 0xe64000dc  swc1        $f0, 0xDC($s2)
    ctx->pc = 0x11df0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 220), bits); }
label_11df10:
    // 0x11df10: 0xc6740010  lwc1        $f20, 0x10($s3)
    ctx->pc = 0x11df10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11df14:
    // 0x11df14: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x11df14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11df18:
    // 0x11df18: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x11df18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11df1c:
    // 0x11df1c: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x11df1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_11df20:
    // 0x11df20: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x11df20u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_11df24:
    // 0x11df24: 0xc09b164  jal         func_26C590
label_11df28:
    if (ctx->pc == 0x11DF28u) {
        ctx->pc = 0x11DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF24u;
        // 0x11df28: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DF2Cu;
        goto label_11df2c;
    }
    ctx->pc = 0x11DF24u;
    SET_GPR_U32(ctx, 31, 0x11DF2Cu);
    ctx->pc = 0x11DF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF24u;
    // 0x11df28: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x11DF24u, 0x11DF2Cu)) {
        return;
    }
    ctx->pc = 0x11DF2Cu;
label_11df2c:
    // 0x11df2c: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x11df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11df30:
    // 0x11df30: 0x4616a302  mul.s       $f12, $f20, $f22
    ctx->pc = 0x11df30u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
label_11df34:
    // 0x11df34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11df34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11df38:
    // 0x11df38: 0xc09b164  jal         func_26C590
label_11df3c:
    if (ctx->pc == 0x11DF3Cu) {
        ctx->pc = 0x11DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF38u;
        // 0x11df3c: 0xe6410118  swc1        $f1, 0x118($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DF40u;
        goto label_11df40;
    }
    ctx->pc = 0x11DF38u;
    SET_GPR_U32(ctx, 31, 0x11DF40u);
    ctx->pc = 0x11DF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF38u;
    // 0x11df3c: 0xe6410118  swc1        $f1, 0x118($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 280), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x11DF38u, 0x11DF40u)) {
        return;
    }
    ctx->pc = 0x11DF40u;
label_11df40:
    // 0x11df40: 0xc64100d8  lwc1        $f1, 0xD8($s2)
    ctx->pc = 0x11df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_11df44:
    // 0x11df44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11df44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11df48:
    // 0x11df48: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x11df48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_11df4c:
    // 0x11df4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11df4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_11df50:
    // 0x11df50: 0xe641011c  swc1        $f1, 0x11C($s2)
    ctx->pc = 0x11df50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 284), bits); }
label_11df54:
    // 0x11df54: 0xc047b48  jal         func_11ED20
label_11df58:
    if (ctx->pc == 0x11DF58u) {
        ctx->pc = 0x11DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF54u;
        // 0x11df58: 0xc66c0010  lwc1        $f12, 0x10($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DF5Cu;
        goto label_11df5c;
    }
    ctx->pc = 0x11DF54u;
    SET_GPR_U32(ctx, 31, 0x11DF5Cu);
    ctx->pc = 0x11DF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF54u;
    // 0x11df58: 0xc66c0010  lwc1        $f12, 0x10($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11ED20u, 0x11DF54u, 0x11DF5Cu)) {
        return;
    }
    ctx->pc = 0x11DF5Cu;
label_11df5c:
    // 0x11df5c: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x11df5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11df60:
    // 0x11df60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11df64:
    // 0x11df64: 0xc047b8a  jal         func_11EE28
label_11df68:
    if (ctx->pc == 0x11DF68u) {
        ctx->pc = 0x11DF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF64u;
        // 0x11df68: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DF6Cu;
        goto label_11df6c;
    }
    ctx->pc = 0x11DF64u;
    SET_GPR_U32(ctx, 31, 0x11DF6Cu);
    ctx->pc = 0x11DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF64u;
    // 0x11df68: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11EE28u, 0x11DF64u, 0x11DF6Cu)) {
        return;
    }
    ctx->pc = 0x11DF6Cu;
label_11df6c:
    // 0x11df6c: 0xc66c0018  lwc1        $f12, 0x18($s3)
    ctx->pc = 0x11df6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11df70:
    // 0x11df70: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x11df70u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_11df74:
    // 0x11df74: 0xc047bbe  jal         func_11EEF8
label_11df78:
    if (ctx->pc == 0x11DF78u) {
        ctx->pc = 0x11DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF74u;
        // 0x11df78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DF7Cu;
        goto label_11df7c;
    }
    ctx->pc = 0x11DF74u;
    SET_GPR_U32(ctx, 31, 0x11DF7Cu);
    ctx->pc = 0x11DF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DF74u;
    // 0x11df78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11EEF8u, 0x11DF74u, 0x11DF7Cu)) {
        return;
    }
    ctx->pc = 0x11DF7Cu;
label_11df7c:
    // 0x11df7c: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x11df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_11df80:
    // 0x11df80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x11df80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_11df84:
    // 0x11df84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11df84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11df88:
    // 0x11df88: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x11df88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_11df8c:
    // 0x11df8c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x11df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_11df90:
    // 0x11df90: 0x40f809  jalr        $v0
label_11df94:
    if (ctx->pc == 0x11DF94u) {
        ctx->pc = 0x11DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF90u;
        // 0x11df94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DF98u;
        goto label_11df98;
    }
    ctx->pc = 0x11DF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DF98u);
        ctx->pc = 0x11DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DF90u;
        // 0x11df94: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DF90u, 0x11DF98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11DF98u;
label_11df98:
    // 0x11df98: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x11df98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_11df9c:
    // 0x11df9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11df9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11dfa0:
    // 0x11dfa0: 0xc044eea  jal         func_113BA8
label_11dfa4:
    if (ctx->pc == 0x11DFA4u) {
        ctx->pc = 0x11DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFA0u;
        // 0x11dfa4: 0x8c64830c  lw          $a0, -0x7CF4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFA8u;
        goto label_11dfa8;
    }
    ctx->pc = 0x11DFA0u;
    SET_GPR_U32(ctx, 31, 0x11DFA8u);
    ctx->pc = 0x11DFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFA0u;
    // 0x11dfa4: 0x8c64830c  lw          $a0, -0x7CF4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113BA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113BA8u, 0x11DFA0u, 0x11DFA8u)) {
        return;
    }
    ctx->pc = 0x11DFA8u;
label_11dfa8:
    // 0x11dfa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11dfac:
    // 0x11dfac: 0x10000045  b           . + 4 + (0x45 << 2)
label_11dfb0:
    if (ctx->pc == 0x11DFB0u) {
        ctx->pc = 0x11DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFACu;
        // 0x11dfb0: 0xae420128  sw          $v0, 0x128($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFB4u;
        goto label_11dfb4;
    }
    ctx->pc = 0x11DFACu;
    {
        const bool branch_taken_0x11dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFACu;
        // 0x11dfb0: 0xae420128  sw          $v0, 0x128($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfac) {
            ctx->pc = 0x11E0C4u;
            goto label_11e0c4;
        }
    }
    ctx->pc = 0x11DFB4u;
label_11dfb4:
    // 0x11dfb4: 0x0  nop
    ctx->pc = 0x11dfb4u;
    // NOP
label_11dfb8:
    // 0x11dfb8: 0x8c434508  lw          $v1, 0x4508($v0)
    ctx->pc = 0x11dfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17672)));
label_11dfbc:
    // 0x11dfbc: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
label_11dfc0:
    if (ctx->pc == 0x11DFC0u) {
        ctx->pc = 0x11DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFBCu;
        // 0x11dfc0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFC4u;
        goto label_11dfc4;
    }
    ctx->pc = 0x11DFBCu;
    {
        const bool branch_taken_0x11dfbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFBCu;
        // 0x11dfc0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfbc) {
            ctx->pc = 0x11E024u;
            goto label_11e024;
        }
    }
    ctx->pc = 0x11DFC4u;
label_11dfc4:
    // 0x11dfc4: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x11dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_11dfc8:
    // 0x11dfc8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_11dfcc:
    if (ctx->pc == 0x11DFCCu) {
        ctx->pc = 0x11DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFC8u;
        // 0x11dfcc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFD0u;
        goto label_11dfd0;
    }
    ctx->pc = 0x11DFC8u;
    {
        const bool branch_taken_0x11dfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFC8u;
        // 0x11dfcc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dfc8) {
            ctx->pc = 0x11E0C4u;
            goto label_11e0c4;
        }
    }
    ctx->pc = 0x11DFD0u;
label_11dfd0:
    // 0x11dfd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11dfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11dfd4:
    // 0x11dfd4: 0xc044f16  jal         func_113C58
label_11dfd8:
    if (ctx->pc == 0x11DFD8u) {
        ctx->pc = 0x11DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFD4u;
        // 0x11dfd8: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFDCu;
        goto label_11dfdc;
    }
    ctx->pc = 0x11DFD4u;
    SET_GPR_U32(ctx, 31, 0x11DFDCu);
    ctx->pc = 0x11DFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFD4u;
    // 0x11dfd8: 0x8c44830c  lw          $a0, -0x7CF4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113C58u, 0x11DFD4u, 0x11DFDCu)) {
        return;
    }
    ctx->pc = 0x11DFDCu;
label_11dfdc:
    // 0x11dfdc: 0x2644008c  addiu       $a0, $s2, 0x8C
    ctx->pc = 0x11dfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 140));
label_11dfe0:
    // 0x11dfe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dfe4:
    // 0x11dfe4: 0xc0c493d  jal         func_3124F4
label_11dfe8:
    if (ctx->pc == 0x11DFE8u) {
        ctx->pc = 0x11DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFE4u;
        // 0x11dfe8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFECu;
        goto label_11dfec;
    }
    ctx->pc = 0x11DFE4u;
    SET_GPR_U32(ctx, 31, 0x11DFECu);
    ctx->pc = 0x11DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFE4u;
    // 0x11dfe8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11DFE4u, 0x11DFECu)) {
        return;
    }
    ctx->pc = 0x11DFECu;
label_11dfec:
    // 0x11dfec: 0x264400a4  addiu       $a0, $s2, 0xA4
    ctx->pc = 0x11dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 164));
label_11dff0:
    // 0x11dff0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11dff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11dff4:
    // 0x11dff4: 0xc0c493d  jal         func_3124F4
label_11dff8:
    if (ctx->pc == 0x11DFF8u) {
        ctx->pc = 0x11DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DFF4u;
        // 0x11dff8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11DFFCu;
        goto label_11dffc;
    }
    ctx->pc = 0x11DFF4u;
    SET_GPR_U32(ctx, 31, 0x11DFFCu);
    ctx->pc = 0x11DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DFF4u;
    // 0x11dff8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11DFF4u, 0x11DFFCu)) {
        return;
    }
    ctx->pc = 0x11DFFCu;
label_11dffc:
    // 0x11dffc: 0x264400bc  addiu       $a0, $s2, 0xBC
    ctx->pc = 0x11dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 188));
label_11e000:
    // 0x11e000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11e000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e004:
    // 0x11e004: 0xc0c493d  jal         func_3124F4
label_11e008:
    if (ctx->pc == 0x11E008u) {
        ctx->pc = 0x11E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E004u;
        // 0x11e008: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E00Cu;
        goto label_11e00c;
    }
    ctx->pc = 0x11E004u;
    SET_GPR_U32(ctx, 31, 0x11E00Cu);
    ctx->pc = 0x11E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E004u;
    // 0x11e008: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11E004u, 0x11E00Cu)) {
        return;
    }
    ctx->pc = 0x11E00Cu;
label_11e00c:
    // 0x11e00c: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x11e00cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
label_11e010:
    // 0x11e010: 0xae400118  sw          $zero, 0x118($s2)
    ctx->pc = 0x11e010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 0));
label_11e014:
    // 0x11e014: 0xae40011c  sw          $zero, 0x11C($s2)
    ctx->pc = 0x11e014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 284), GPR_U32(ctx, 0));
label_11e018:
    // 0x11e018: 0xae400120  sw          $zero, 0x120($s2)
    ctx->pc = 0x11e018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
label_11e01c:
    // 0x11e01c: 0x10000029  b           . + 4 + (0x29 << 2)
label_11e020:
    if (ctx->pc == 0x11E020u) {
        ctx->pc = 0x11E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E01Cu;
        // 0x11e020: 0xae400124  sw          $zero, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E024u;
        goto label_11e024;
    }
    ctx->pc = 0x11E01Cu;
    {
        const bool branch_taken_0x11e01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E01Cu;
        // 0x11e020: 0xae400124  sw          $zero, 0x124($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e01c) {
            ctx->pc = 0x11E0C4u;
            goto label_11e0c4;
        }
    }
    ctx->pc = 0x11E024u;
label_11e024:
    // 0x11e024: 0x8c4344f0  lw          $v1, 0x44F0($v0)
    ctx->pc = 0x11e024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17648)));
label_11e028:
    // 0x11e028: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_11e02c:
    if (ctx->pc == 0x11E02Cu) {
        ctx->pc = 0x11E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E028u;
        // 0x11e02c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E030u;
        goto label_11e030;
    }
    ctx->pc = 0x11E028u;
    {
        const bool branch_taken_0x11e028 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E028u;
        // 0x11e02c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e028) {
            ctx->pc = 0x11E054u;
            goto label_11e054;
        }
    }
    ctx->pc = 0x11E030u;
label_11e030:
    // 0x11e030: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11e030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11e034:
    // 0x11e034: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_11e038:
    if (ctx->pc == 0x11E038u) {
        ctx->pc = 0x11E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E034u;
        // 0x11e038: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E03Cu;
        goto label_11e03c;
    }
    ctx->pc = 0x11E034u;
    {
        const bool branch_taken_0x11e034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E034u;
        // 0x11e038: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e034) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11E03Cu;
label_11e03c:
    // 0x11e03c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x11e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11e040:
    // 0x11e040: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e044:
    // 0x11e044: 0xc047b48  jal         func_11ED20
label_11e048:
    if (ctx->pc == 0x11E048u) {
        ctx->pc = 0x11E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E044u;
        // 0x11e048: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E04Cu;
        goto label_11e04c;
    }
    ctx->pc = 0x11E044u;
    SET_GPR_U32(ctx, 31, 0x11E04Cu);
    ctx->pc = 0x11E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E044u;
    // 0x11e048: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ED20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11ED20u, 0x11E044u, 0x11E04Cu)) {
        return;
    }
    ctx->pc = 0x11E04Cu;
label_11e04c:
    // 0x11e04c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_11e050:
    if (ctx->pc == 0x11E050u) {
        ctx->pc = 0x11E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E04Cu;
        // 0x11e050: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E054u;
        goto label_11e054;
    }
    ctx->pc = 0x11E04Cu;
    {
        const bool branch_taken_0x11e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E04Cu;
        // 0x11e050: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e04c) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11E054u;
label_11e054:
    // 0x11e054: 0x8c4344f8  lw          $v1, 0x44F8($v0)
    ctx->pc = 0x11e054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17656)));
label_11e058:
    // 0x11e058: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_11e05c:
    if (ctx->pc == 0x11E05Cu) {
        ctx->pc = 0x11E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E058u;
        // 0x11e05c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E060u;
        goto label_11e060;
    }
    ctx->pc = 0x11E058u;
    {
        const bool branch_taken_0x11e058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E058u;
        // 0x11e05c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e058) {
            ctx->pc = 0x11E084u;
            goto label_11e084;
        }
    }
    ctx->pc = 0x11E060u;
label_11e060:
    // 0x11e060: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11e060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11e064:
    // 0x11e064: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_11e068:
    if (ctx->pc == 0x11E068u) {
        ctx->pc = 0x11E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E064u;
        // 0x11e068: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E06Cu;
        goto label_11e06c;
    }
    ctx->pc = 0x11E064u;
    {
        const bool branch_taken_0x11e064 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E064u;
        // 0x11e068: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e064) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11E06Cu;
label_11e06c:
    // 0x11e06c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x11e06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11e070:
    // 0x11e070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11e070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_11e074:
    // 0x11e074: 0xc047b8a  jal         func_11EE28
label_11e078:
    if (ctx->pc == 0x11E078u) {
        ctx->pc = 0x11E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E074u;
        // 0x11e078: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E07Cu;
        goto label_11e07c;
    }
    ctx->pc = 0x11E074u;
    SET_GPR_U32(ctx, 31, 0x11E07Cu);
    ctx->pc = 0x11E078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E074u;
    // 0x11e078: 0xc4ac0000  lwc1        $f12, 0x0($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11EE28u, 0x11E074u, 0x11E07Cu)) {
        return;
    }
    ctx->pc = 0x11E07Cu;
label_11e07c:
    // 0x11e07c: 0x10000012  b           . + 4 + (0x12 << 2)
label_11e080:
    if (ctx->pc == 0x11E080u) {
        ctx->pc = 0x11E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E07Cu;
        // 0x11e080: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E084u;
        goto label_11e084;
    }
    ctx->pc = 0x11E07Cu;
    {
        const bool branch_taken_0x11e07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E07Cu;
        // 0x11e080: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e07c) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11E084u;
label_11e084:
    // 0x11e084: 0x8c4344e8  lw          $v1, 0x44E8($v0)
    ctx->pc = 0x11e084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17640)));
label_11e088:
    // 0x11e088: 0x5483000f  bnel        $a0, $v1, . + 4 + (0xF << 2)
label_11e08c:
    if (ctx->pc == 0x11E08Cu) {
        ctx->pc = 0x11E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E088u;
        // 0x11e08c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E090u;
        goto label_11e090;
    }
    ctx->pc = 0x11E088u;
    {
        const bool branch_taken_0x11e088 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x11e088) {
            ctx->pc = 0x11E08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E088u;
            // 0x11e08c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11E090u;
label_11e090:
    // 0x11e090: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11e090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11e094:
    // 0x11e094: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_11e098:
    if (ctx->pc == 0x11E098u) {
        ctx->pc = 0x11E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E094u;
        // 0x11e098: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E09Cu;
        goto label_11e09c;
    }
    ctx->pc = 0x11E094u;
    {
        const bool branch_taken_0x11e094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E094u;
        // 0x11e098: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e094) {
            ctx->pc = 0x11E0C8u;
            goto label_11e0c8;
        }
    }
    ctx->pc = 0x11E09Cu;
label_11e09c:
    // 0x11e09c: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x11e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_11e0a0:
    // 0x11e0a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11e0a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11e0a4:
    // 0x11e0a4: 0x0  nop
    ctx->pc = 0x11e0a4u;
    // NOP
label_11e0a8:
    // 0x11e0a8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x11e0a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11e0ac:
    // 0x11e0ac: 0x0  nop
    ctx->pc = 0x11e0acu;
    // NOP
label_11e0b0:
    // 0x11e0b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_11e0b4:
    if (ctx->pc == 0x11E0B4u) {
        ctx->pc = 0x11E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0B0u;
        // 0x11e0b4: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E0B8u;
        goto label_11e0b8;
    }
    ctx->pc = 0x11E0B0u;
    {
        const bool branch_taken_0x11e0b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0B0u;
        // 0x11e0b4: 0x7bb10090  lq          $s1, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e0b0) {
            ctx->pc = 0x11E0CCu;
            goto label_11e0cc;
        }
    }
    ctx->pc = 0x11E0B8u;
label_11e0b8:
    // 0x11e0b8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x11e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_11e0bc:
    // 0x11e0bc: 0xc047bbe  jal         func_11EEF8
label_11e0c0:
    if (ctx->pc == 0x11E0C0u) {
        ctx->pc = 0x11E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0BCu;
        // 0x11e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E0C4u;
        goto label_11e0c4;
    }
    ctx->pc = 0x11E0BCu;
    SET_GPR_U32(ctx, 31, 0x11E0C4u);
    ctx->pc = 0x11E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11E0BCu;
    // 0x11e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11EEF8u, 0x11E0BCu, 0x11E0C4u)) {
        return;
    }
    ctx->pc = 0x11E0C4u;
label_11e0c4:
    // 0x11e0c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x11e0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_11e0c8:
    // 0x11e0c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x11e0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_11e0cc:
    // 0x11e0cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x11e0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_11e0d0:
    // 0x11e0d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x11e0d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_11e0d4:
    // 0x11e0d4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11e0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11e0d8:
    // 0x11e0d8: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x11e0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_11e0dc:
    // 0x11e0dc: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x11e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_11e0e0:
    // 0x11e0e0: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x11e0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11e0e4:
    // 0x11e0e4: 0x3e00008  jr          $ra
label_11e0e8:
    if (ctx->pc == 0x11E0E8u) {
        ctx->pc = 0x11E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0E4u;
        // 0x11e0e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11E0ECu;
        goto label_11e0ec;
    }
    ctx->pc = 0x11E0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E0E4u;
        // 0x11e0e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11E0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11E0ECu;
label_11e0ec:
    // 0x11e0ec: 0x0  nop
    ctx->pc = 0x11e0ecu;
    // NOP
    ctx->pc = 0x11e0f0u;
}
