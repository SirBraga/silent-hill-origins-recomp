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

// Function: sub_0019CD28
// Address: 0x19cd28 - 0x19d138
void sub_0019CD28_0x19cd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CD28_0x19cd28");
#endif

    switch (ctx->pc) {
        case 0x19cd28u: goto label_19cd28;
        case 0x19cd2cu: goto label_19cd2c;
        case 0x19cd30u: goto label_19cd30;
        case 0x19cd34u: goto label_19cd34;
        case 0x19cd38u: goto label_19cd38;
        case 0x19cd3cu: goto label_19cd3c;
        case 0x19cd40u: goto label_19cd40;
        case 0x19cd44u: goto label_19cd44;
        case 0x19cd48u: goto label_19cd48;
        case 0x19cd4cu: goto label_19cd4c;
        case 0x19cd50u: goto label_19cd50;
        case 0x19cd54u: goto label_19cd54;
        case 0x19cd58u: goto label_19cd58;
        case 0x19cd5cu: goto label_19cd5c;
        case 0x19cd60u: goto label_19cd60;
        case 0x19cd64u: goto label_19cd64;
        case 0x19cd68u: goto label_19cd68;
        case 0x19cd6cu: goto label_19cd6c;
        case 0x19cd70u: goto label_19cd70;
        case 0x19cd74u: goto label_19cd74;
        case 0x19cd78u: goto label_19cd78;
        case 0x19cd7cu: goto label_19cd7c;
        case 0x19cd80u: goto label_19cd80;
        case 0x19cd84u: goto label_19cd84;
        case 0x19cd88u: goto label_19cd88;
        case 0x19cd8cu: goto label_19cd8c;
        case 0x19cd90u: goto label_19cd90;
        case 0x19cd94u: goto label_19cd94;
        case 0x19cd98u: goto label_19cd98;
        case 0x19cd9cu: goto label_19cd9c;
        case 0x19cda0u: goto label_19cda0;
        case 0x19cda4u: goto label_19cda4;
        case 0x19cda8u: goto label_19cda8;
        case 0x19cdacu: goto label_19cdac;
        case 0x19cdb0u: goto label_19cdb0;
        case 0x19cdb4u: goto label_19cdb4;
        case 0x19cdb8u: goto label_19cdb8;
        case 0x19cdbcu: goto label_19cdbc;
        case 0x19cdc0u: goto label_19cdc0;
        case 0x19cdc4u: goto label_19cdc4;
        case 0x19cdc8u: goto label_19cdc8;
        case 0x19cdccu: goto label_19cdcc;
        case 0x19cdd0u: goto label_19cdd0;
        case 0x19cdd4u: goto label_19cdd4;
        case 0x19cdd8u: goto label_19cdd8;
        case 0x19cddcu: goto label_19cddc;
        case 0x19cde0u: goto label_19cde0;
        case 0x19cde4u: goto label_19cde4;
        case 0x19cde8u: goto label_19cde8;
        case 0x19cdecu: goto label_19cdec;
        case 0x19cdf0u: goto label_19cdf0;
        case 0x19cdf4u: goto label_19cdf4;
        case 0x19cdf8u: goto label_19cdf8;
        case 0x19cdfcu: goto label_19cdfc;
        case 0x19ce00u: goto label_19ce00;
        case 0x19ce04u: goto label_19ce04;
        case 0x19ce08u: goto label_19ce08;
        case 0x19ce0cu: goto label_19ce0c;
        case 0x19ce10u: goto label_19ce10;
        case 0x19ce14u: goto label_19ce14;
        case 0x19ce18u: goto label_19ce18;
        case 0x19ce1cu: goto label_19ce1c;
        case 0x19ce20u: goto label_19ce20;
        case 0x19ce24u: goto label_19ce24;
        case 0x19ce28u: goto label_19ce28;
        case 0x19ce2cu: goto label_19ce2c;
        case 0x19ce30u: goto label_19ce30;
        case 0x19ce34u: goto label_19ce34;
        case 0x19ce38u: goto label_19ce38;
        case 0x19ce3cu: goto label_19ce3c;
        case 0x19ce40u: goto label_19ce40;
        case 0x19ce44u: goto label_19ce44;
        case 0x19ce48u: goto label_19ce48;
        case 0x19ce4cu: goto label_19ce4c;
        case 0x19ce50u: goto label_19ce50;
        case 0x19ce54u: goto label_19ce54;
        case 0x19ce58u: goto label_19ce58;
        case 0x19ce5cu: goto label_19ce5c;
        case 0x19ce60u: goto label_19ce60;
        case 0x19ce64u: goto label_19ce64;
        case 0x19ce68u: goto label_19ce68;
        case 0x19ce6cu: goto label_19ce6c;
        case 0x19ce70u: goto label_19ce70;
        case 0x19ce74u: goto label_19ce74;
        case 0x19ce78u: goto label_19ce78;
        case 0x19ce7cu: goto label_19ce7c;
        case 0x19ce80u: goto label_19ce80;
        case 0x19ce84u: goto label_19ce84;
        case 0x19ce88u: goto label_19ce88;
        case 0x19ce8cu: goto label_19ce8c;
        case 0x19ce90u: goto label_19ce90;
        case 0x19ce94u: goto label_19ce94;
        case 0x19ce98u: goto label_19ce98;
        case 0x19ce9cu: goto label_19ce9c;
        case 0x19cea0u: goto label_19cea0;
        case 0x19cea4u: goto label_19cea4;
        case 0x19cea8u: goto label_19cea8;
        case 0x19ceacu: goto label_19ceac;
        case 0x19ceb0u: goto label_19ceb0;
        case 0x19ceb4u: goto label_19ceb4;
        case 0x19ceb8u: goto label_19ceb8;
        case 0x19cebcu: goto label_19cebc;
        case 0x19cec0u: goto label_19cec0;
        case 0x19cec4u: goto label_19cec4;
        case 0x19cec8u: goto label_19cec8;
        case 0x19ceccu: goto label_19cecc;
        case 0x19ced0u: goto label_19ced0;
        case 0x19ced4u: goto label_19ced4;
        case 0x19ced8u: goto label_19ced8;
        case 0x19cedcu: goto label_19cedc;
        case 0x19cee0u: goto label_19cee0;
        case 0x19cee4u: goto label_19cee4;
        case 0x19cee8u: goto label_19cee8;
        case 0x19ceecu: goto label_19ceec;
        case 0x19cef0u: goto label_19cef0;
        case 0x19cef4u: goto label_19cef4;
        case 0x19cef8u: goto label_19cef8;
        case 0x19cefcu: goto label_19cefc;
        case 0x19cf00u: goto label_19cf00;
        case 0x19cf04u: goto label_19cf04;
        case 0x19cf08u: goto label_19cf08;
        case 0x19cf0cu: goto label_19cf0c;
        case 0x19cf10u: goto label_19cf10;
        case 0x19cf14u: goto label_19cf14;
        case 0x19cf18u: goto label_19cf18;
        case 0x19cf1cu: goto label_19cf1c;
        case 0x19cf20u: goto label_19cf20;
        case 0x19cf24u: goto label_19cf24;
        case 0x19cf28u: goto label_19cf28;
        case 0x19cf2cu: goto label_19cf2c;
        case 0x19cf30u: goto label_19cf30;
        case 0x19cf34u: goto label_19cf34;
        case 0x19cf38u: goto label_19cf38;
        case 0x19cf3cu: goto label_19cf3c;
        case 0x19cf40u: goto label_19cf40;
        case 0x19cf44u: goto label_19cf44;
        case 0x19cf48u: goto label_19cf48;
        case 0x19cf4cu: goto label_19cf4c;
        case 0x19cf50u: goto label_19cf50;
        case 0x19cf54u: goto label_19cf54;
        case 0x19cf58u: goto label_19cf58;
        case 0x19cf5cu: goto label_19cf5c;
        case 0x19cf60u: goto label_19cf60;
        case 0x19cf64u: goto label_19cf64;
        case 0x19cf68u: goto label_19cf68;
        case 0x19cf6cu: goto label_19cf6c;
        case 0x19cf70u: goto label_19cf70;
        case 0x19cf74u: goto label_19cf74;
        case 0x19cf78u: goto label_19cf78;
        case 0x19cf7cu: goto label_19cf7c;
        case 0x19cf80u: goto label_19cf80;
        case 0x19cf84u: goto label_19cf84;
        case 0x19cf88u: goto label_19cf88;
        case 0x19cf8cu: goto label_19cf8c;
        case 0x19cf90u: goto label_19cf90;
        case 0x19cf94u: goto label_19cf94;
        case 0x19cf98u: goto label_19cf98;
        case 0x19cf9cu: goto label_19cf9c;
        case 0x19cfa0u: goto label_19cfa0;
        case 0x19cfa4u: goto label_19cfa4;
        case 0x19cfa8u: goto label_19cfa8;
        case 0x19cfacu: goto label_19cfac;
        case 0x19cfb0u: goto label_19cfb0;
        case 0x19cfb4u: goto label_19cfb4;
        case 0x19cfb8u: goto label_19cfb8;
        case 0x19cfbcu: goto label_19cfbc;
        case 0x19cfc0u: goto label_19cfc0;
        case 0x19cfc4u: goto label_19cfc4;
        case 0x19cfc8u: goto label_19cfc8;
        case 0x19cfccu: goto label_19cfcc;
        case 0x19cfd0u: goto label_19cfd0;
        case 0x19cfd4u: goto label_19cfd4;
        case 0x19cfd8u: goto label_19cfd8;
        case 0x19cfdcu: goto label_19cfdc;
        case 0x19cfe0u: goto label_19cfe0;
        case 0x19cfe4u: goto label_19cfe4;
        case 0x19cfe8u: goto label_19cfe8;
        case 0x19cfecu: goto label_19cfec;
        case 0x19cff0u: goto label_19cff0;
        case 0x19cff4u: goto label_19cff4;
        case 0x19cff8u: goto label_19cff8;
        case 0x19cffcu: goto label_19cffc;
        case 0x19d000u: goto label_19d000;
        case 0x19d004u: goto label_19d004;
        case 0x19d008u: goto label_19d008;
        case 0x19d00cu: goto label_19d00c;
        case 0x19d010u: goto label_19d010;
        case 0x19d014u: goto label_19d014;
        case 0x19d018u: goto label_19d018;
        case 0x19d01cu: goto label_19d01c;
        case 0x19d020u: goto label_19d020;
        case 0x19d024u: goto label_19d024;
        case 0x19d028u: goto label_19d028;
        case 0x19d02cu: goto label_19d02c;
        case 0x19d030u: goto label_19d030;
        case 0x19d034u: goto label_19d034;
        case 0x19d038u: goto label_19d038;
        case 0x19d03cu: goto label_19d03c;
        case 0x19d040u: goto label_19d040;
        case 0x19d044u: goto label_19d044;
        case 0x19d048u: goto label_19d048;
        case 0x19d04cu: goto label_19d04c;
        case 0x19d050u: goto label_19d050;
        case 0x19d054u: goto label_19d054;
        case 0x19d058u: goto label_19d058;
        case 0x19d05cu: goto label_19d05c;
        case 0x19d060u: goto label_19d060;
        case 0x19d064u: goto label_19d064;
        case 0x19d068u: goto label_19d068;
        case 0x19d06cu: goto label_19d06c;
        case 0x19d070u: goto label_19d070;
        case 0x19d074u: goto label_19d074;
        case 0x19d078u: goto label_19d078;
        case 0x19d07cu: goto label_19d07c;
        case 0x19d080u: goto label_19d080;
        case 0x19d084u: goto label_19d084;
        case 0x19d088u: goto label_19d088;
        case 0x19d08cu: goto label_19d08c;
        case 0x19d090u: goto label_19d090;
        case 0x19d094u: goto label_19d094;
        case 0x19d098u: goto label_19d098;
        case 0x19d09cu: goto label_19d09c;
        case 0x19d0a0u: goto label_19d0a0;
        case 0x19d0a4u: goto label_19d0a4;
        case 0x19d0a8u: goto label_19d0a8;
        case 0x19d0acu: goto label_19d0ac;
        case 0x19d0b0u: goto label_19d0b0;
        case 0x19d0b4u: goto label_19d0b4;
        case 0x19d0b8u: goto label_19d0b8;
        case 0x19d0bcu: goto label_19d0bc;
        case 0x19d0c0u: goto label_19d0c0;
        case 0x19d0c4u: goto label_19d0c4;
        case 0x19d0c8u: goto label_19d0c8;
        case 0x19d0ccu: goto label_19d0cc;
        case 0x19d0d0u: goto label_19d0d0;
        case 0x19d0d4u: goto label_19d0d4;
        case 0x19d0d8u: goto label_19d0d8;
        case 0x19d0dcu: goto label_19d0dc;
        case 0x19d0e0u: goto label_19d0e0;
        case 0x19d0e4u: goto label_19d0e4;
        case 0x19d0e8u: goto label_19d0e8;
        case 0x19d0ecu: goto label_19d0ec;
        case 0x19d0f0u: goto label_19d0f0;
        case 0x19d0f4u: goto label_19d0f4;
        case 0x19d0f8u: goto label_19d0f8;
        case 0x19d0fcu: goto label_19d0fc;
        case 0x19d100u: goto label_19d100;
        case 0x19d104u: goto label_19d104;
        case 0x19d108u: goto label_19d108;
        case 0x19d10cu: goto label_19d10c;
        case 0x19d110u: goto label_19d110;
        case 0x19d114u: goto label_19d114;
        case 0x19d118u: goto label_19d118;
        case 0x19d11cu: goto label_19d11c;
        case 0x19d120u: goto label_19d120;
        case 0x19d124u: goto label_19d124;
        case 0x19d128u: goto label_19d128;
        case 0x19d12cu: goto label_19d12c;
        case 0x19d130u: goto label_19d130;
        case 0x19d134u: goto label_19d134;
        default: break;
    }

    ctx->pc = 0x19cd28u;

label_19cd28:
    // 0x19cd28: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x19cd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_19cd2c:
    // 0x19cd2c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x19cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_19cd30:
    // 0x19cd30: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x19cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
label_19cd34:
    // 0x19cd34: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19cd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19cd38:
    // 0x19cd38: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x19cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_19cd3c:
    // 0x19cd3c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x19cd3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19cd40:
    // 0x19cd40: 0x7fb600d0  sq          $s6, 0xD0($sp)
    ctx->pc = 0x19cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 22));
label_19cd44:
    // 0x19cd44: 0x7fb700c0  sq          $s7, 0xC0($sp)
    ctx->pc = 0x19cd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 23));
label_19cd48:
    // 0x19cd48: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x19cd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_19cd4c:
    // 0x19cd4c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x19cd4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19cd50:
    // 0x19cd50: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x19cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_19cd54:
    // 0x19cd54: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x19cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
label_19cd58:
    // 0x19cd58: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x19cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
label_19cd5c:
    // 0x19cd5c: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x19cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
label_19cd60:
    // 0x19cd60: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x19cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_19cd64:
    // 0x19cd64: 0xc080572  jal         func_2015C8
label_19cd68:
    if (ctx->pc == 0x19CD68u) {
        ctx->pc = 0x19CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD64u;
        // 0x19cd68: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD6Cu;
        goto label_19cd6c;
    }
    ctx->pc = 0x19CD64u;
    SET_GPR_U32(ctx, 31, 0x19CD6Cu);
    ctx->pc = 0x19CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD64u;
    // 0x19cd68: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19CD64u, 0x19CD6Cu)) {
        return;
    }
    ctx->pc = 0x19CD6Cu;
label_19cd6c:
    // 0x19cd6c: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x19cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_19cd70:
    // 0x19cd70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_19cd74:
    // 0x19cd74: 0x2442a6a8  addiu       $v0, $v0, -0x5958
    ctx->pc = 0x19cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944424));
label_19cd78:
    // 0x19cd78: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x19cd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_19cd7c:
    // 0x19cd7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19cd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19cd80:
    // 0x19cd80: 0xc0808f0  jal         func_2023C0
label_19cd84:
    if (ctx->pc == 0x19CD84u) {
        ctx->pc = 0x19CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD80u;
        // 0x19cd84: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CD88u;
        goto label_19cd88;
    }
    ctx->pc = 0x19CD80u;
    SET_GPR_U32(ctx, 31, 0x19CD88u);
    ctx->pc = 0x19CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CD80u;
    // 0x19cd84: 0xac62003c  sw          $v0, 0x3C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19CD80u, 0x19CD88u)) {
        return;
    }
    ctx->pc = 0x19CD88u;
label_19cd88:
    // 0x19cd88: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x19cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_19cd8c:
    // 0x19cd8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19cd8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19cd90:
    // 0x19cd90: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x19cd90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
label_19cd94:
    // 0x19cd94: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x19cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_19cd98:
    // 0x19cd98: 0x1ae000be  blez        $s7, . + 4 + (0xBE << 2)
label_19cd9c:
    if (ctx->pc == 0x19CD9Cu) {
        ctx->pc = 0x19CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD98u;
        // 0x19cd9c: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDA0u;
        goto label_19cda0;
    }
    ctx->pc = 0x19CD98u;
    {
        const bool branch_taken_0x19cd98 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x19CD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CD98u;
        // 0x19cd9c: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cd98) {
            ctx->pc = 0x19D094u;
            goto label_19d094;
        }
    }
    ctx->pc = 0x19CDA0u;
label_19cda0:
    // 0x19cda0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19cda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cda4:
    // 0x19cda4: 0x0  nop
    ctx->pc = 0x19cda4u;
    // NOP
label_19cda8:
    // 0x19cda8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x19cda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19cdac:
    // 0x19cdac: 0xc0927be  jal         func_249EF8
label_19cdb0:
    if (ctx->pc == 0x19CDB0u) {
        ctx->pc = 0x19CDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDACu;
        // 0x19cdb0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDB4u;
        goto label_19cdb4;
    }
    ctx->pc = 0x19CDACu;
    SET_GPR_U32(ctx, 31, 0x19CDB4u);
    ctx->pc = 0x19CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CDACu;
    // 0x19cdb0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x19CDACu, 0x19CDB4u)) {
        return;
    }
    ctx->pc = 0x19CDB4u;
label_19cdb4:
    // 0x19cdb4: 0x8fb00080  lw          $s0, 0x80($sp)
    ctx->pc = 0x19cdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_19cdb8:
    // 0x19cdb8: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x19cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_19cdbc:
    // 0x19cdbc: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_19cdc0:
    if (ctx->pc == 0x19CDC0u) {
        ctx->pc = 0x19CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDBCu;
        // 0x19cdc0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDC4u;
        goto label_19cdc4;
    }
    ctx->pc = 0x19CDBCu;
    {
        const bool branch_taken_0x19cdbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDBCu;
        // 0x19cdc0: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdbc) {
            ctx->pc = 0x19CDDCu;
            goto label_19cddc;
        }
    }
    ctx->pc = 0x19CDC4u;
label_19cdc4:
    // 0x19cdc4: 0x8fa40094  lw          $a0, 0x94($sp)
    ctx->pc = 0x19cdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_19cdc8:
    // 0x19cdc8: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x19cdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_19cdcc:
    // 0x19cdcc: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x19cdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_19cdd0:
    // 0x19cdd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19cdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19cdd4:
    // 0x19cdd4: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cdd8:
    if (ctx->pc == 0x19CDD8u) {
        ctx->pc = 0x19CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD4u;
        // 0x19cdd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDDCu;
        goto label_19cddc;
    }
    ctx->pc = 0x19CDD4u;
    {
        const bool branch_taken_0x19cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDD4u;
        // 0x19cdd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cdd4) {
            ctx->pc = 0x19CDF8u;
            goto label_19cdf8;
        }
    }
    ctx->pc = 0x19CDDCu;
label_19cddc:
    // 0x19cddc: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
label_19cde0:
    if (ctx->pc == 0x19CDE0u) {
        ctx->pc = 0x19CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDDCu;
        // 0x19cde0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CDE4u;
        goto label_19cde4;
    }
    ctx->pc = 0x19CDDCu;
    {
        const bool branch_taken_0x19cddc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x19CDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDDCu;
        // 0x19cde0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cddc) {
            ctx->pc = 0x19CE08u;
            goto label_19ce08;
        }
    }
    ctx->pc = 0x19CDE4u;
label_19cde4:
    // 0x19cde4: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x19cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_19cde8:
    // 0x19cde8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19cde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cdec:
    // 0x19cdec: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x19cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_19cdf0:
    // 0x19cdf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19cdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19cdf4:
    // 0x19cdf4: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x19cdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_19cdf8:
    // 0x19cdf8: 0xc093620  jal         func_24D880
label_19cdfc:
    if (ctx->pc == 0x19CDFCu) {
        ctx->pc = 0x19CDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CDF8u;
        // 0x19cdfc: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE00u;
        goto label_19ce00;
    }
    ctx->pc = 0x19CDF8u;
    SET_GPR_U32(ctx, 31, 0x19CE00u);
    ctx->pc = 0x19CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CDF8u;
    // 0x19cdfc: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x19CDF8u, 0x19CE00u)) {
        return;
    }
    ctx->pc = 0x19CE00u;
label_19ce00:
    // 0x19ce00: 0x1000009d  b           . + 4 + (0x9D << 2)
label_19ce04:
    if (ctx->pc == 0x19CE04u) {
        ctx->pc = 0x19CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE00u;
        // 0x19ce04: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE08u;
        goto label_19ce08;
    }
    ctx->pc = 0x19CE00u;
    {
        const bool branch_taken_0x19ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE00u;
        // 0x19ce04: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce00) {
            ctx->pc = 0x19D078u;
            goto label_19d078;
        }
    }
    ctx->pc = 0x19CE08u;
label_19ce08:
    // 0x19ce08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ce08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19ce0c:
    // 0x19ce0c: 0x8c518170  lw          $s1, -0x7E90($v0)
    ctx->pc = 0x19ce0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294934896)));
label_19ce10:
    // 0x19ce10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19ce10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ce14:
    // 0x19ce14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19ce14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19ce18:
    // 0x19ce18: 0xc080302  jal         func_200C08
label_19ce1c:
    if (ctx->pc == 0x19CE1Cu) {
        ctx->pc = 0x19CE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE18u;
        // 0x19ce1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE20u;
        goto label_19ce20;
    }
    ctx->pc = 0x19CE18u;
    SET_GPR_U32(ctx, 31, 0x19CE20u);
    ctx->pc = 0x19CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CE18u;
    // 0x19ce1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200C08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200C08u, 0x19CE18u, 0x19CE20u)) {
        return;
    }
    ctx->pc = 0x19CE20u;
label_19ce20:
    // 0x19ce20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x19ce20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ce24:
    // 0x19ce24: 0x24020a04  addiu       $v0, $zero, 0xA04
    ctx->pc = 0x19ce24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
label_19ce28:
    // 0x19ce28: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19ce2c:
    if (ctx->pc == 0x19CE2Cu) {
        ctx->pc = 0x19CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE28u;
        // 0x19ce2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE30u;
        goto label_19ce30;
    }
    ctx->pc = 0x19CE28u;
    {
        const bool branch_taken_0x19ce28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE28u;
        // 0x19ce2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce28) {
            ctx->pc = 0x19CE68u;
            goto label_19ce68;
        }
    }
    ctx->pc = 0x19CE30u;
label_19ce30:
    // 0x19ce30: 0x2e020a05  sltiu       $v0, $s0, 0xA05
    ctx->pc = 0x19ce30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2565) ? 1 : 0);
label_19ce34:
    // 0x19ce34: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ce38:
    if (ctx->pc == 0x19CE38u) {
        ctx->pc = 0x19CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE34u;
        // 0x19ce38: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE3Cu;
        goto label_19ce3c;
    }
    ctx->pc = 0x19CE34u;
    {
        const bool branch_taken_0x19ce34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE34u;
        // 0x19ce38: 0x2404002b  addiu       $a0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce34) {
            ctx->pc = 0x19CE4Cu;
            goto label_19ce4c;
        }
    }
    ctx->pc = 0x19CE3Cu;
label_19ce3c:
    // 0x19ce3c: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
label_19ce40:
    if (ctx->pc == 0x19CE40u) {
        ctx->pc = 0x19CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE3Cu;
        // 0x19ce40: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE44u;
        goto label_19ce44;
    }
    ctx->pc = 0x19CE3Cu;
    {
        const bool branch_taken_0x19ce3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x19CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE3Cu;
        // 0x19ce40: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce3c) {
            ctx->pc = 0x19CE60u;
            goto label_19ce60;
        }
    }
    ctx->pc = 0x19CE44u;
label_19ce44:
    // 0x19ce44: 0x1000000f  b           . + 4 + (0xF << 2)
label_19ce48:
    if (ctx->pc == 0x19CE48u) {
        ctx->pc = 0x19CE4Cu;
        goto label_19ce4c;
    }
    ctx->pc = 0x19CE44u;
    {
        const bool branch_taken_0x19ce44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce44) {
            ctx->pc = 0x19CE84u;
            goto label_19ce84;
        }
    }
    ctx->pc = 0x19CE4Cu;
label_19ce4c:
    // 0x19ce4c: 0x24050a0a  addiu       $a1, $zero, 0xA0A
    ctx->pc = 0x19ce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
label_19ce50:
    // 0x19ce50: 0x12050009  beq         $s0, $a1, . + 4 + (0x9 << 2)
label_19ce54:
    if (ctx->pc == 0x19CE54u) {
        ctx->pc = 0x19CE58u;
        goto label_19ce58;
    }
    ctx->pc = 0x19CE50u;
    {
        const bool branch_taken_0x19ce50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x19ce50) {
            ctx->pc = 0x19CE78u;
            goto label_19ce78;
        }
    }
    ctx->pc = 0x19CE58u;
label_19ce58:
    // 0x19ce58: 0x1000000a  b           . + 4 + (0xA << 2)
label_19ce5c:
    if (ctx->pc == 0x19CE5Cu) {
        ctx->pc = 0x19CE60u;
        goto label_19ce60;
    }
    ctx->pc = 0x19CE58u;
    {
        const bool branch_taken_0x19ce58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce58) {
            ctx->pc = 0x19CE84u;
            goto label_19ce84;
        }
    }
    ctx->pc = 0x19CE60u;
label_19ce60:
    // 0x19ce60: 0x10000008  b           . + 4 + (0x8 << 2)
label_19ce64:
    if (ctx->pc == 0x19CE64u) {
        ctx->pc = 0x19CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE60u;
        // 0x19ce64: 0x24436290  addiu       $v1, $v0, 0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE68u;
        goto label_19ce68;
    }
    ctx->pc = 0x19CE60u;
    {
        const bool branch_taken_0x19ce60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE60u;
        // 0x19ce64: 0x24436290  addiu       $v1, $v0, 0x6290 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce60) {
            ctx->pc = 0x19CE84u;
            goto label_19ce84;
        }
    }
    ctx->pc = 0x19CE68u;
label_19ce68:
    // 0x19ce68: 0xc0776d8  jal         func_1DDB60
label_19ce6c:
    if (ctx->pc == 0x19CE6Cu) {
        ctx->pc = 0x19CE70u;
        goto label_19ce70;
    }
    ctx->pc = 0x19CE68u;
    SET_GPR_U32(ctx, 31, 0x19CE70u);
    ctx->pc = 0x1DDB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDB60u, 0x19CE68u, 0x19CE70u)) {
        return;
    }
    ctx->pc = 0x19CE70u;
label_19ce70:
    // 0x19ce70: 0x10000004  b           . + 4 + (0x4 << 2)
label_19ce74:
    if (ctx->pc == 0x19CE74u) {
        ctx->pc = 0x19CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE70u;
        // 0x19ce74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE78u;
        goto label_19ce78;
    }
    ctx->pc = 0x19CE70u;
    {
        const bool branch_taken_0x19ce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE70u;
        // 0x19ce74: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce70) {
            ctx->pc = 0x19CE84u;
            goto label_19ce84;
        }
    }
    ctx->pc = 0x19CE78u;
label_19ce78:
    // 0x19ce78: 0xc07b834  jal         func_1EE0D0
label_19ce7c:
    if (ctx->pc == 0x19CE7Cu) {
        ctx->pc = 0x19CE80u;
        goto label_19ce80;
    }
    ctx->pc = 0x19CE78u;
    SET_GPR_U32(ctx, 31, 0x19CE80u);
    ctx->pc = 0x1EE0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE0D0u, 0x19CE78u, 0x19CE80u)) {
        return;
    }
    ctx->pc = 0x19CE80u;
label_19ce80:
    // 0x19ce80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19ce80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19ce84:
    // 0x19ce84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_19ce88:
    if (ctx->pc == 0x19CE88u) {
        ctx->pc = 0x19CE8Cu;
        goto label_19ce8c;
    }
    ctx->pc = 0x19CE84u;
    {
        const bool branch_taken_0x19ce84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ce84) {
            ctx->pc = 0x19CE94u;
            goto label_19ce94;
        }
    }
    ctx->pc = 0x19CE8Cu;
label_19ce8c:
    // 0x19ce8c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19ce90:
    // 0x19ce90: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x19ce90u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_19ce94:
    // 0x19ce94: 0x12600020  beqz        $s3, . + 4 + (0x20 << 2)
label_19ce98:
    if (ctx->pc == 0x19CE98u) {
        ctx->pc = 0x19CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE94u;
        // 0x19ce98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CE9Cu;
        goto label_19ce9c;
    }
    ctx->pc = 0x19CE94u;
    {
        const bool branch_taken_0x19ce94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CE94u;
        // 0x19ce98: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ce94) {
            ctx->pc = 0x19CF18u;
            goto label_19cf18;
        }
    }
    ctx->pc = 0x19CE9Cu;
label_19ce9c:
    // 0x19ce9c: 0x2445a460  addiu       $a1, $v0, -0x5BA0
    ctx->pc = 0x19ce9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943840));
label_19cea0:
    // 0x19cea0: 0x24020a04  addiu       $v0, $zero, 0xA04
    ctx->pc = 0x19cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
label_19cea4:
    // 0x19cea4: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
label_19cea8:
    if (ctx->pc == 0x19CEA8u) {
        ctx->pc = 0x19CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA4u;
        // 0x19cea8: 0x2e020a05  sltiu       $v0, $s0, 0xA05 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2565) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEACu;
        goto label_19ceac;
    }
    ctx->pc = 0x19CEA4u;
    {
        const bool branch_taken_0x19cea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEA4u;
        // 0x19cea8: 0x2e020a05  sltiu       $v0, $s0, 0xA05 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2565) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cea4) {
            ctx->pc = 0x19CEE4u;
            goto label_19cee4;
        }
    }
    ctx->pc = 0x19CEACu;
label_19ceac:
    // 0x19ceac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19ceb0:
    if (ctx->pc == 0x19CEB0u) {
        ctx->pc = 0x19CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEACu;
        // 0x19ceb0: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEB4u;
        goto label_19ceb4;
    }
    ctx->pc = 0x19CEACu;
    {
        const bool branch_taken_0x19ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEACu;
        // 0x19ceb0: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceac) {
            ctx->pc = 0x19CEC4u;
            goto label_19cec4;
        }
    }
    ctx->pc = 0x19CEB4u;
label_19ceb4:
    // 0x19ceb4: 0x12030008  beq         $s0, $v1, . + 4 + (0x8 << 2)
label_19ceb8:
    if (ctx->pc == 0x19CEB8u) {
        ctx->pc = 0x19CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB4u;
        // 0x19ceb8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEBCu;
        goto label_19cebc;
    }
    ctx->pc = 0x19CEB4u;
    {
        const bool branch_taken_0x19ceb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x19CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEB4u;
        // 0x19ceb8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceb4) {
            ctx->pc = 0x19CED8u;
            goto label_19ced8;
        }
    }
    ctx->pc = 0x19CEBCu;
label_19cebc:
    // 0x19cebc: 0x1000000f  b           . + 4 + (0xF << 2)
label_19cec0:
    if (ctx->pc == 0x19CEC0u) {
        ctx->pc = 0x19CEC4u;
        goto label_19cec4;
    }
    ctx->pc = 0x19CEBCu;
    {
        const bool branch_taken_0x19cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cebc) {
            ctx->pc = 0x19CEFCu;
            goto label_19cefc;
        }
    }
    ctx->pc = 0x19CEC4u;
label_19cec4:
    // 0x19cec4: 0x24040a0a  addiu       $a0, $zero, 0xA0A
    ctx->pc = 0x19cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2570));
label_19cec8:
    // 0x19cec8: 0x1204000a  beq         $s0, $a0, . + 4 + (0xA << 2)
label_19cecc:
    if (ctx->pc == 0x19CECCu) {
        ctx->pc = 0x19CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEC8u;
        // 0x19cecc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CED0u;
        goto label_19ced0;
    }
    ctx->pc = 0x19CEC8u;
    {
        const bool branch_taken_0x19cec8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x19CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEC8u;
        // 0x19cecc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cec8) {
            ctx->pc = 0x19CEF4u;
            goto label_19cef4;
        }
    }
    ctx->pc = 0x19CED0u;
label_19ced0:
    // 0x19ced0: 0x1000000a  b           . + 4 + (0xA << 2)
label_19ced4:
    if (ctx->pc == 0x19CED4u) {
        ctx->pc = 0x19CED8u;
        goto label_19ced8;
    }
    ctx->pc = 0x19CED0u;
    {
        const bool branch_taken_0x19ced0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ced0) {
            ctx->pc = 0x19CEFCu;
            goto label_19cefc;
        }
    }
    ctx->pc = 0x19CED8u;
label_19ced8:
    // 0x19ced8: 0x8e320018  lw          $s2, 0x18($s1)
    ctx->pc = 0x19ced8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_19cedc:
    // 0x19cedc: 0x10000007  b           . + 4 + (0x7 << 2)
label_19cee0:
    if (ctx->pc == 0x19CEE0u) {
        ctx->pc = 0x19CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEDCu;
        // 0x19cee0: 0x2445a468  addiu       $a1, $v0, -0x5B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEE4u;
        goto label_19cee4;
    }
    ctx->pc = 0x19CEDCu;
    {
        const bool branch_taken_0x19cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEDCu;
        // 0x19cee0: 0x2445a468  addiu       $a1, $v0, -0x5B98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cedc) {
            ctx->pc = 0x19CEFCu;
            goto label_19cefc;
        }
    }
    ctx->pc = 0x19CEE4u;
label_19cee4:
    // 0x19cee4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19cee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_19cee8:
    // 0x19cee8: 0x8e32001c  lw          $s2, 0x1C($s1)
    ctx->pc = 0x19cee8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19ceec:
    // 0x19ceec: 0x10000003  b           . + 4 + (0x3 << 2)
label_19cef0:
    if (ctx->pc == 0x19CEF0u) {
        ctx->pc = 0x19CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEECu;
        // 0x19cef0: 0x2445a470  addiu       $a1, $v0, -0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CEF4u;
        goto label_19cef4;
    }
    ctx->pc = 0x19CEECu;
    {
        const bool branch_taken_0x19ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEECu;
        // 0x19cef0: 0x2445a470  addiu       $a1, $v0, -0x5B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ceec) {
            ctx->pc = 0x19CEFCu;
            goto label_19cefc;
        }
    }
    ctx->pc = 0x19CEF4u;
label_19cef4:
    // 0x19cef4: 0x8e320020  lw          $s2, 0x20($s1)
    ctx->pc = 0x19cef4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_19cef8:
    // 0x19cef8: 0x2445a478  addiu       $a1, $v0, -0x5B88
    ctx->pc = 0x19cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943864));
label_19cefc:
    // 0x19cefc: 0x12530006  beq         $s2, $s3, . + 4 + (0x6 << 2)
label_19cf00:
    if (ctx->pc == 0x19CF00u) {
        ctx->pc = 0x19CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEFCu;
        // 0x19cf00: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF04u;
        goto label_19cf04;
    }
    ctx->pc = 0x19CEFCu;
    {
        const bool branch_taken_0x19cefc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x19CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CEFCu;
        // 0x19cf00: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cefc) {
            ctx->pc = 0x19CF18u;
            goto label_19cf18;
        }
    }
    ctx->pc = 0x19CF04u;
label_19cf04:
    // 0x19cf04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x19cf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19cf08:
    // 0x19cf08: 0x2484a480  addiu       $a0, $a0, -0x5B80
    ctx->pc = 0x19cf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943872));
label_19cf0c:
    // 0x19cf0c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19cf0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19cf10:
    // 0x19cf10: 0xc041e86  jal         func_107A18
label_19cf14:
    if (ctx->pc == 0x19CF14u) {
        ctx->pc = 0x19CF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF10u;
        // 0x19cf14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF18u;
        goto label_19cf18;
    }
    ctx->pc = 0x19CF10u;
    SET_GPR_U32(ctx, 31, 0x19CF18u);
    ctx->pc = 0x19CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF10u;
    // 0x19cf14: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A18u, 0x19CF10u, 0x19CF18u)) {
        return;
    }
    ctx->pc = 0x19CF18u;
label_19cf18:
    // 0x19cf18: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x19cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_19cf1c:
    // 0x19cf1c: 0x38420023  xori        $v0, $v0, 0x23
    ctx->pc = 0x19cf1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)35);
label_19cf20:
    // 0x19cf20: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x19cf20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_19cf24:
    // 0x19cf24: 0x56800006  bnel        $s4, $zero, . + 4 + (0x6 << 2)
label_19cf28:
    if (ctx->pc == 0x19CF28u) {
        ctx->pc = 0x19CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF24u;
        // 0x19cf28: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF2Cu;
        goto label_19cf2c;
    }
    ctx->pc = 0x19CF24u;
    {
        const bool branch_taken_0x19cf24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cf24) {
            ctx->pc = 0x19CF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CF24u;
            // 0x19cf28: 0x8e830010  lw          $v1, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CF40u;
            goto label_19cf40;
        }
    }
    ctx->pc = 0x19CF2Cu;
label_19cf2c:
    // 0x19cf2c: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x19cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_19cf30:
    // 0x19cf30: 0xc093620  jal         func_24D880
label_19cf34:
    if (ctx->pc == 0x19CF34u) {
        ctx->pc = 0x19CF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF30u;
        // 0x19cf34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF38u;
        goto label_19cf38;
    }
    ctx->pc = 0x19CF30u;
    SET_GPR_U32(ctx, 31, 0x19CF38u);
    ctx->pc = 0x19CF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CF30u;
    // 0x19cf34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D880u, 0x19CF30u, 0x19CF38u)) {
        return;
    }
    ctx->pc = 0x19CF38u;
label_19cf38:
    // 0x19cf38: 0x1000004f  b           . + 4 + (0x4F << 2)
label_19cf3c:
    if (ctx->pc == 0x19CF3Cu) {
        ctx->pc = 0x19CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF38u;
        // 0x19cf3c: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF40u;
        goto label_19cf40;
    }
    ctx->pc = 0x19CF38u;
    {
        const bool branch_taken_0x19cf38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF38u;
        // 0x19cf3c: 0x8fa20084  lw          $v0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cf38) {
            ctx->pc = 0x19D078u;
            goto label_19d078;
        }
    }
    ctx->pc = 0x19CF40u;
label_19cf40:
    // 0x19cf40: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x19cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_19cf44:
    // 0x19cf44: 0x8c530278  lw          $s3, 0x278($v0)
    ctx->pc = 0x19cf44u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
label_19cf48:
    // 0x19cf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19cf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cf4c:
    // 0x19cf4c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x19cf4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_19cf50:
    // 0x19cf50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19cf50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cf54:
    // 0x19cf54: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x19cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19cf58:
    // 0x19cf58: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x19cf58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19cf5c:
    // 0x19cf5c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x19cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_19cf60:
    // 0x19cf60: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x19cf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_19cf64:
    // 0x19cf64: 0x8c710284  lw          $s1, 0x284($v1)
    ctx->pc = 0x19cf64u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_19cf68:
    // 0x19cf68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19cf68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19cf6c:
    // 0x19cf6c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x19cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_19cf70:
    // 0x19cf70: 0x40f809  jalr        $v0
label_19cf74:
    if (ctx->pc == 0x19CF74u) {
        ctx->pc = 0x19CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF70u;
        // 0x19cf74: 0x8c720280  lw          $s2, 0x280($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CF78u;
        goto label_19cf78;
    }
    ctx->pc = 0x19CF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19CF78u);
        ctx->pc = 0x19CF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CF70u;
        // 0x19cf74: 0x8c720280  lw          $s2, 0x280($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CF70u, 0x19CF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19CF78u;
label_19cf78:
    // 0x19cf78: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x19cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_19cf7c:
    // 0x19cf7c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x19cf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_19cf80:
    // 0x19cf80: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x19cf80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_19cf84:
    // 0x19cf84: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x19cf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_19cf88:
    // 0x19cf88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19cf8c:
    // 0x19cf8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x19cf8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19cf90:
    // 0x19cf90: 0xac540038  sw          $s4, 0x38($v0)
    ctx->pc = 0x19cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 20));
label_19cf94:
    // 0x19cf94: 0x8ca20284  lw          $v0, 0x284($a1)
    ctx->pc = 0x19cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 644)));
label_19cf98:
    // 0x19cf98: 0x8c830278  lw          $v1, 0x278($a0)
    ctx->pc = 0x19cf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 632)));
label_19cf9c:
    // 0x19cf9c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x19cf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_19cfa0:
    // 0x19cfa0: 0x8ca40280  lw          $a0, 0x280($a1)
    ctx->pc = 0x19cfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 640)));
label_19cfa4:
    // 0x19cfa4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x19cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_19cfa8:
    // 0x19cfa8: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x19cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_19cfac:
    // 0x19cfac: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x19cfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_19cfb0:
    // 0x19cfb0: 0x922023  subu        $a0, $a0, $s2
    ctx->pc = 0x19cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_19cfb4:
    // 0x19cfb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_19cfb8:
    // 0x19cfb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19cfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19cfbc:
    // 0x19cfbc: 0xc3302a  slt         $a2, $a2, $v1
    ctx->pc = 0x19cfbcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_19cfc0:
    // 0x19cfc0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x19cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_19cfc4:
    // 0x19cfc4: 0x6180a  movz        $v1, $zero, $a2
    ctx->pc = 0x19cfc4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_19cfc8:
    // 0x19cfc8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x19cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_19cfcc:
    // 0x19cfcc: 0xae85000c  sw          $a1, 0xC($s4)
    ctx->pc = 0x19cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 5));
label_19cfd0:
    // 0x19cfd0: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x19cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
label_19cfd4:
    // 0x19cfd4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x19cfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cfd8:
    // 0x19cfd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_19cfdc:
    // 0x19cfdc: 0xac820160  sw          $v0, 0x160($a0)
    ctx->pc = 0x19cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
label_19cfe0:
    // 0x19cfe0: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x19cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
label_19cfe4:
    // 0x19cfe4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19cfe8:
    // 0x19cfe8: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x19cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_19cfec:
    // 0x19cfec: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x19cfecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_19cff0:
    // 0x19cff0: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x19cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_19cff4:
    // 0x19cff4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x19cff4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_19cff8:
    // 0x19cff8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x19cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_19cffc:
    // 0x19cffc: 0x40f809  jalr        $v0
label_19d000:
    if (ctx->pc == 0x19D000u) {
        ctx->pc = 0x19D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFFCu;
        // 0x19d000: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D004u;
        goto label_19d004;
    }
    ctx->pc = 0x19CFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D004u);
        ctx->pc = 0x19D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CFFCu;
        // 0x19d000: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CFFCu, 0x19D004u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D004u;
label_19d004:
    // 0x19d004: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x19d004u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19d008:
    // 0x19d008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19d008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d00c:
    // 0x19d00c: 0xc0808b8  jal         func_2022E0
label_19d010:
    if (ctx->pc == 0x19D010u) {
        ctx->pc = 0x19D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D00Cu;
        // 0x19d010: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D014u;
        goto label_19d014;
    }
    ctx->pc = 0x19D00Cu;
    SET_GPR_U32(ctx, 31, 0x19D014u);
    ctx->pc = 0x19D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D00Cu;
    // 0x19d010: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19D00Cu, 0x19D014u)) {
        return;
    }
    ctx->pc = 0x19D014u;
label_19d014:
    // 0x19d014: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_19d018:
    if (ctx->pc == 0x19D018u) {
        ctx->pc = 0x19D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D014u;
        // 0x19d018: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D01Cu;
        goto label_19d01c;
    }
    ctx->pc = 0x19D014u;
    {
        const bool branch_taken_0x19d014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D014u;
        // 0x19d018: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d014) {
            ctx->pc = 0x19D068u;
            goto label_19d068;
        }
    }
    ctx->pc = 0x19D01Cu;
label_19d01c:
    // 0x19d01c: 0x2452108c  addiu       $s2, $v0, 0x108C
    ctx->pc = 0x19d01cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_19d020:
    // 0x19d020: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x19d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_19d024:
    // 0x19d024: 0x40f809  jalr        $v0
label_19d028:
    if (ctx->pc == 0x19D028u) {
        ctx->pc = 0x19D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D024u;
        // 0x19d028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D02Cu;
        goto label_19d02c;
    }
    ctx->pc = 0x19D024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D02Cu);
        ctx->pc = 0x19D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D024u;
        // 0x19d028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D024u, 0x19D02Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D02Cu;
label_19d02c:
    // 0x19d02c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_19d030:
    if (ctx->pc == 0x19D030u) {
        ctx->pc = 0x19D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D02Cu;
        // 0x19d030: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D034u;
        goto label_19d034;
    }
    ctx->pc = 0x19D02Cu;
    {
        const bool branch_taken_0x19d02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d02c) {
            ctx->pc = 0x19D030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D02Cu;
            // 0x19d030: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D06Cu;
            goto label_19d06c;
        }
    }
    ctx->pc = 0x19D034u;
label_19d034:
    // 0x19d034: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x19d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_19d038:
    // 0x19d038: 0x40f809  jalr        $v0
label_19d03c:
    if (ctx->pc == 0x19D03Cu) {
        ctx->pc = 0x19D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D038u;
        // 0x19d03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D040u;
        goto label_19d040;
    }
    ctx->pc = 0x19D038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D040u);
        ctx->pc = 0x19D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D038u;
        // 0x19d03c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D038u, 0x19D040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D040u;
label_19d040:
    // 0x19d040: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x19d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d044:
    // 0x19d044: 0xc0808f0  jal         func_2023C0
label_19d048:
    if (ctx->pc == 0x19D048u) {
        ctx->pc = 0x19D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D044u;
        // 0x19d048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D04Cu;
        goto label_19d04c;
    }
    ctx->pc = 0x19D044u;
    SET_GPR_U32(ctx, 31, 0x19D04Cu);
    ctx->pc = 0x19D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D044u;
    // 0x19d048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19D044u, 0x19D04Cu)) {
        return;
    }
    ctx->pc = 0x19D04Cu;
label_19d04c:
    // 0x19d04c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x19d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_19d050:
    // 0x19d050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19d054:
    // 0x19d054: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x19d054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_19d058:
    // 0x19d058: 0x40f809  jalr        $v0
label_19d05c:
    if (ctx->pc == 0x19D05Cu) {
        ctx->pc = 0x19D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D058u;
        // 0x19d05c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D060u;
        goto label_19d060;
    }
    ctx->pc = 0x19D058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19D060u);
        ctx->pc = 0x19D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D058u;
        // 0x19d05c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D058u, 0x19D060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19D060u;
label_19d060:
    // 0x19d060: 0x10000003  b           . + 4 + (0x3 << 2)
label_19d064:
    if (ctx->pc == 0x19D064u) {
        ctx->pc = 0x19D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D060u;
        // 0x19d064: 0x27c20001  addiu       $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D068u;
        goto label_19d068;
    }
    ctx->pc = 0x19D060u;
    {
        const bool branch_taken_0x19d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D060u;
        // 0x19d064: 0x27c20001  addiu       $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d060) {
            ctx->pc = 0x19D070u;
            goto label_19d070;
        }
    }
    ctx->pc = 0x19D068u;
label_19d068:
    // 0x19d068: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x19d068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_19d06c:
    // 0x19d06c: 0x27c20001  addiu       $v0, $fp, 0x1
    ctx->pc = 0x19d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_19d070:
    // 0x19d070: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x19d070u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19d074:
    // 0x19d074: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x19d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_19d078:
    // 0x19d078: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x19d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_19d07c:
    // 0x19d07c: 0x2e2b823  subu        $s7, $s7, $v0
    ctx->pc = 0x19d07cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_19d080:
    // 0x19d080: 0x1ee0ff49  bgtz        $s7, . + 4 + (-0xB7 << 2)
label_19d084:
    if (ctx->pc == 0x19D084u) {
        ctx->pc = 0x19D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D080u;
        // 0x19d084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D088u;
        goto label_19d088;
    }
    ctx->pc = 0x19D080u;
    {
        const bool branch_taken_0x19d080 = (GPR_S64(ctx, 23) > 0);
        ctx->pc = 0x19D084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D080u;
        // 0x19d084: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d080) {
            ctx->pc = 0x19CDA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cda8;
        }
    }
    ctx->pc = 0x19D088u;
label_19d088:
    // 0x19d088: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x19d088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_19d08c:
    // 0x19d08c: 0x14a0ff47  bnez        $a1, . + 4 + (-0xB9 << 2)
label_19d090:
    if (ctx->pc == 0x19D090u) {
        ctx->pc = 0x19D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D08Cu;
        // 0x19d090: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D094u;
        goto label_19d094;
    }
    ctx->pc = 0x19D08Cu;
    {
        const bool branch_taken_0x19d08c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D08Cu;
        // 0x19d090: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d08c) {
            ctx->pc = 0x19CDACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19cdac;
        }
    }
    ctx->pc = 0x19D094u;
label_19d094:
    // 0x19d094: 0x13c00018  beqz        $fp, . + 4 + (0x18 << 2)
label_19d098:
    if (ctx->pc == 0x19D098u) {
        ctx->pc = 0x19D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D094u;
        // 0x19d098: 0x1e2080  sll         $a0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D09Cu;
        goto label_19d09c;
    }
    ctx->pc = 0x19D094u;
    {
        const bool branch_taken_0x19d094 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D094u;
        // 0x19d098: 0x1e2080  sll         $a0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d094) {
            ctx->pc = 0x19D0F8u;
            goto label_19d0f8;
        }
    }
    ctx->pc = 0x19D09Cu;
label_19d09c:
    // 0x19d09c: 0xaede0000  sw          $fp, 0x0($s6)
    ctx->pc = 0x19d09cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 30));
label_19d0a0:
    // 0x19d0a0: 0xc080924  jal         func_202490
label_19d0a4:
    if (ctx->pc == 0x19D0A4u) {
        ctx->pc = 0x19D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0A0u;
        // 0x19d0a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0A8u;
        goto label_19d0a8;
    }
    ctx->pc = 0x19D0A0u;
    SET_GPR_U32(ctx, 31, 0x19D0A8u);
    ctx->pc = 0x19D0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D0A0u;
    // 0x19d0a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x19D0A0u, 0x19D0A8u)) {
        return;
    }
    ctx->pc = 0x19D0A8u;
label_19d0a8:
    // 0x19d0a8: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x19d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_19d0ac:
    // 0x19d0ac: 0x13c00012  beqz        $fp, . + 4 + (0x12 << 2)
label_19d0b0:
    if (ctx->pc == 0x19D0B0u) {
        ctx->pc = 0x19D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0ACu;
        // 0x19d0b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0B4u;
        goto label_19d0b4;
    }
    ctx->pc = 0x19D0ACu;
    {
        const bool branch_taken_0x19d0ac = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0ACu;
        // 0x19d0b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0ac) {
            ctx->pc = 0x19D0F8u;
            goto label_19d0f8;
        }
    }
    ctx->pc = 0x19D0B4u;
label_19d0b4:
    // 0x19d0b4: 0x0  nop
    ctx->pc = 0x19d0b4u;
    // NOP
label_19d0b8:
    // 0x19d0b8: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x19d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_19d0bc:
    // 0x19d0bc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x19d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_19d0c0:
    // 0x19d0c0: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x19d0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_19d0c4:
    // 0x19d0c4: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x19d0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_19d0c8:
    // 0x19d0c8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x19d0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19d0cc:
    // 0x19d0cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19d0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19d0d0:
    // 0x19d0d0: 0x30a700ff  andi        $a3, $a1, 0xFF
    ctx->pc = 0x19d0d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_19d0d4:
    // 0x19d0d4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x19d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_19d0d8:
    // 0x19d0d8: 0xfe282b  sltu        $a1, $a3, $fp
    ctx->pc = 0x19d0d8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_19d0dc:
    // 0x19d0dc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x19d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_19d0e0:
    // 0x19d0e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x19d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_19d0e4:
    // 0x19d0e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x19d0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19d0e8:
    // 0x19d0e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19d0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19d0ec:
    // 0x19d0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19d0f0:
    // 0x19d0f0: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_19d0f4:
    if (ctx->pc == 0x19D0F4u) {
        ctx->pc = 0x19D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0F0u;
        // 0x19d0f4: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D0F8u;
        goto label_19d0f8;
    }
    ctx->pc = 0x19D0F0u;
    {
        const bool branch_taken_0x19d0f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D0F0u;
        // 0x19d0f4: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d0f0) {
            ctx->pc = 0x19D0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19d0b8;
        }
    }
    ctx->pc = 0x19D0F8u;
label_19d0f8:
    // 0x19d0f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x19d0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_19d0fc:
    // 0x19d0fc: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x19d0fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_19d100:
    // 0x19d100: 0xac560018  sw          $s6, 0x18($v0)
    ctx->pc = 0x19d100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 22));
label_19d104:
    // 0x19d104: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x19d104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_19d108:
    // 0x19d108: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x19d108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_19d10c:
    // 0x19d10c: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x19d10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_19d110:
    // 0x19d110: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x19d110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_19d114:
    // 0x19d114: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x19d114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_19d118:
    // 0x19d118: 0x7bb600d0  lq          $s6, 0xD0($sp)
    ctx->pc = 0x19d118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_19d11c:
    // 0x19d11c: 0x7bb700c0  lq          $s7, 0xC0($sp)
    ctx->pc = 0x19d11cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_19d120:
    // 0x19d120: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x19d120u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_19d124:
    // 0x19d124: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x19d124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19d128:
    // 0x19d128: 0x3e00008  jr          $ra
label_19d12c:
    if (ctx->pc == 0x19D12Cu) {
        ctx->pc = 0x19D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D128u;
        // 0x19d12c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19D130u;
        goto label_19d130;
    }
    ctx->pc = 0x19D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D128u;
        // 0x19d12c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D130u;
label_19d130:
    // 0x19d130: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19d134:
    // 0x19d134: 0x0  nop
    ctx->pc = 0x19d134u;
    // NOP
    ctx->pc = 0x19d138u;
}
