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

// Function: sub_00225F50
// Address: 0x225f50 - 0x2260a8
void sub_00225F50_0x225f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225F50_0x225f50");
#endif

    switch (ctx->pc) {
        case 0x225f50u: goto label_225f50;
        case 0x225f54u: goto label_225f54;
        case 0x225f58u: goto label_225f58;
        case 0x225f5cu: goto label_225f5c;
        case 0x225f60u: goto label_225f60;
        case 0x225f64u: goto label_225f64;
        case 0x225f68u: goto label_225f68;
        case 0x225f6cu: goto label_225f6c;
        case 0x225f70u: goto label_225f70;
        case 0x225f74u: goto label_225f74;
        case 0x225f78u: goto label_225f78;
        case 0x225f7cu: goto label_225f7c;
        case 0x225f80u: goto label_225f80;
        case 0x225f84u: goto label_225f84;
        case 0x225f88u: goto label_225f88;
        case 0x225f8cu: goto label_225f8c;
        case 0x225f90u: goto label_225f90;
        case 0x225f94u: goto label_225f94;
        case 0x225f98u: goto label_225f98;
        case 0x225f9cu: goto label_225f9c;
        case 0x225fa0u: goto label_225fa0;
        case 0x225fa4u: goto label_225fa4;
        case 0x225fa8u: goto label_225fa8;
        case 0x225facu: goto label_225fac;
        case 0x225fb0u: goto label_225fb0;
        case 0x225fb4u: goto label_225fb4;
        case 0x225fb8u: goto label_225fb8;
        case 0x225fbcu: goto label_225fbc;
        case 0x225fc0u: goto label_225fc0;
        case 0x225fc4u: goto label_225fc4;
        case 0x225fc8u: goto label_225fc8;
        case 0x225fccu: goto label_225fcc;
        case 0x225fd0u: goto label_225fd0;
        case 0x225fd4u: goto label_225fd4;
        case 0x225fd8u: goto label_225fd8;
        case 0x225fdcu: goto label_225fdc;
        case 0x225fe0u: goto label_225fe0;
        case 0x225fe4u: goto label_225fe4;
        case 0x225fe8u: goto label_225fe8;
        case 0x225fecu: goto label_225fec;
        case 0x225ff0u: goto label_225ff0;
        case 0x225ff4u: goto label_225ff4;
        case 0x225ff8u: goto label_225ff8;
        case 0x225ffcu: goto label_225ffc;
        case 0x226000u: goto label_226000;
        case 0x226004u: goto label_226004;
        case 0x226008u: goto label_226008;
        case 0x22600cu: goto label_22600c;
        case 0x226010u: goto label_226010;
        case 0x226014u: goto label_226014;
        case 0x226018u: goto label_226018;
        case 0x22601cu: goto label_22601c;
        case 0x226020u: goto label_226020;
        case 0x226024u: goto label_226024;
        case 0x226028u: goto label_226028;
        case 0x22602cu: goto label_22602c;
        case 0x226030u: goto label_226030;
        case 0x226034u: goto label_226034;
        case 0x226038u: goto label_226038;
        case 0x22603cu: goto label_22603c;
        case 0x226040u: goto label_226040;
        case 0x226044u: goto label_226044;
        case 0x226048u: goto label_226048;
        case 0x22604cu: goto label_22604c;
        case 0x226050u: goto label_226050;
        case 0x226054u: goto label_226054;
        case 0x226058u: goto label_226058;
        case 0x22605cu: goto label_22605c;
        case 0x226060u: goto label_226060;
        case 0x226064u: goto label_226064;
        case 0x226068u: goto label_226068;
        case 0x22606cu: goto label_22606c;
        case 0x226070u: goto label_226070;
        case 0x226074u: goto label_226074;
        case 0x226078u: goto label_226078;
        case 0x22607cu: goto label_22607c;
        case 0x226080u: goto label_226080;
        case 0x226084u: goto label_226084;
        case 0x226088u: goto label_226088;
        case 0x22608cu: goto label_22608c;
        case 0x226090u: goto label_226090;
        case 0x226094u: goto label_226094;
        case 0x226098u: goto label_226098;
        case 0x22609cu: goto label_22609c;
        case 0x2260a0u: goto label_2260a0;
        case 0x2260a4u: goto label_2260a4;
        default: break;
    }

    ctx->pc = 0x225f50u;

label_225f50:
    // 0x225f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225f54:
    // 0x225f54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x225f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_225f58:
    // 0x225f58: 0x8c633e88  lw          $v1, 0x3E88($v1)
    ctx->pc = 0x225f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16008)));
label_225f5c:
    // 0x225f5c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x225f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
label_225f60:
    // 0x225f60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x225f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_225f64:
    // 0x225f64: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x225f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_225f68:
    // 0x225f68: 0x24c60fc8  addiu       $a2, $a2, 0xFC8
    ctx->pc = 0x225f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4040));
label_225f6c:
    // 0x225f6c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x225f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_225f70:
    // 0x225f70: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x225f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_225f74:
    // 0x225f74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x225f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_225f78:
    // 0x225f78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x225f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_225f7c:
    // 0x225f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225f80:
    // 0x225f80: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225f80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225f84:
    // 0x225f84: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x225f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_225f88:
    // 0x225f88: 0x8cc20118  lw          $v0, 0x118($a2)
    ctx->pc = 0x225f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 280)));
label_225f8c:
    // 0x225f8c: 0x34a5000e  ori         $a1, $a1, 0xE
    ctx->pc = 0x225f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
label_225f90:
    // 0x225f90: 0x40f809  jalr        $v0
label_225f94:
    if (ctx->pc == 0x225F94u) {
        ctx->pc = 0x225F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F90u;
        // 0x225f94: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225F98u;
        goto label_225f98;
    }
    ctx->pc = 0x225F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x225F98u);
        ctx->pc = 0x225F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F90u;
        // 0x225f94: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225F90u, 0x225F98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225F98u;
label_225f98:
    // 0x225f98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225f9c:
    // 0x225f9c: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
label_225fa0:
    if (ctx->pc == 0x225FA0u) {
        ctx->pc = 0x225FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F9Cu;
        // 0x225fa0: 0x233980a  movz        $s3, $s1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FA4u;
        goto label_225fa4;
    }
    ctx->pc = 0x225F9Cu;
    {
        const bool branch_taken_0x225f9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x225FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225F9Cu;
        // 0x225fa0: 0x233980a  movz        $s3, $s1, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225f9c) {
            ctx->pc = 0x225FBCu;
            goto label_225fbc;
        }
    }
    ctx->pc = 0x225FA4u;
label_225fa4:
    // 0x225fa4: 0x10000038  b           . + 4 + (0x38 << 2)
label_225fa8:
    if (ctx->pc == 0x225FA8u) {
        ctx->pc = 0x225FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FA4u;
        // 0x225fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FACu;
        goto label_225fac;
    }
    ctx->pc = 0x225FA4u;
    {
        const bool branch_taken_0x225fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FA4u;
        // 0x225fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fa4) {
            ctx->pc = 0x226088u;
            goto label_226088;
        }
    }
    ctx->pc = 0x225FACu;
label_225fac:
    // 0x225fac: 0xc089926  jal         func_226498
label_225fb0:
    if (ctx->pc == 0x225FB0u) {
        ctx->pc = 0x225FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FACu;
        // 0x225fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FB4u;
        goto label_225fb4;
    }
    ctx->pc = 0x225FACu;
    SET_GPR_U32(ctx, 31, 0x225FB4u);
    ctx->pc = 0x225FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225FACu;
    // 0x225fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226498u, 0x225FACu, 0x225FB4u)) {
        return;
    }
    ctx->pc = 0x225FB4u;
label_225fb4:
    // 0x225fb4: 0x10000034  b           . + 4 + (0x34 << 2)
label_225fb8:
    if (ctx->pc == 0x225FB8u) {
        ctx->pc = 0x225FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FB4u;
        // 0x225fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225FBCu;
        goto label_225fbc;
    }
    ctx->pc = 0x225FB4u;
    {
        const bool branch_taken_0x225fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225FB4u;
        // 0x225fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225fb4) {
            ctx->pc = 0x226088u;
            goto label_226088;
        }
    }
    ctx->pc = 0x225FBCu;
label_225fbc:
    // 0x225fbc: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x225fbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_225fc0:
    // 0x225fc0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x225fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_225fc4:
    // 0x225fc4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x225fc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_225fc8:
    // 0x225fc8: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x225fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_225fcc:
    // 0x225fcc: 0x92420002  lbu         $v0, 0x2($s2)
    ctx->pc = 0x225fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_225fd0:
    // 0x225fd0: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x225fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_225fd4:
    // 0x225fd4: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x225fd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_225fd8:
    // 0x225fd8: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x225fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_225fdc:
    // 0x225fdc: 0x26220090  addiu       $v0, $s1, 0x90
    ctx->pc = 0x225fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_225fe0:
    // 0x225fe0: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x225fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
label_225fe4:
    // 0x225fe4: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x225fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_225fe8:
    // 0x225fe8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x225fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_225fec:
    // 0x225fec: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x225fecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_225ff0:
    // 0x225ff0: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x225ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_225ff4:
    // 0x225ff4: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x225ff4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_225ff8:
    // 0x225ff8: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x225ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
label_225ffc:
    // 0x225ffc: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x225ffcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_226000:
    // 0x226000: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x226000u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
label_226004:
    // 0x226004: 0x7a430040  lq          $v1, 0x40($s2)
    ctx->pc = 0x226004u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_226008:
    // 0x226008: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x226008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_22600c:
    // 0x22600c: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x22600cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
label_226010:
    // 0x226010: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x226010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_226014:
    // 0x226014: 0xae3300a0  sw          $s3, 0xA0($s1)
    ctx->pc = 0x226014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 19));
label_226018:
    // 0x226018: 0xae5100a0  sw          $s1, 0xA0($s2)
    ctx->pc = 0x226018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 17));
label_22601c:
    // 0x22601c: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x22601cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_226020:
    // 0x226020: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
label_226024:
    if (ctx->pc == 0x226024u) {
        ctx->pc = 0x226024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226020u;
        // 0x226024: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226028u;
        goto label_226028;
    }
    ctx->pc = 0x226020u;
    {
        const bool branch_taken_0x226020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x226020) {
            ctx->pc = 0x226024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226020u;
            // 0x226024: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226064u;
            goto label_226064;
        }
    }
    ctx->pc = 0x226028u;
label_226028:
    // 0x226028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22602c:
    // 0x22602c: 0x0  nop
    ctx->pc = 0x22602cu;
    // NOP
label_226030:
    // 0x226030: 0xc0897d4  jal         func_225F50
label_226034:
    if (ctx->pc == 0x226034u) {
        ctx->pc = 0x226034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226030u;
        // 0x226034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226038u;
        goto label_226038;
    }
    ctx->pc = 0x226030u;
    SET_GPR_U32(ctx, 31, 0x226038u);
    ctx->pc = 0x226034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226030u;
    // 0x226034: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F50u;
    goto label_225f50;
    ctx->pc = 0x226038u;
label_226038:
    // 0x226038: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x226038u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22603c:
    // 0x22603c: 0x1060ffdb  beqz        $v1, . + 4 + (-0x25 << 2)
label_226040:
    if (ctx->pc == 0x226040u) {
        ctx->pc = 0x226044u;
        goto label_226044;
    }
    ctx->pc = 0x22603Cu;
    {
        const bool branch_taken_0x22603c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22603c) {
            ctx->pc = 0x225FACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225fac;
        }
    }
    ctx->pc = 0x226044u;
label_226044:
    // 0x226044: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x226044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
label_226048:
    // 0x226048: 0xac62009c  sw          $v0, 0x9C($v1)
    ctx->pc = 0x226048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 2));
label_22604c:
    // 0x22604c: 0xae230098  sw          $v1, 0x98($s1)
    ctx->pc = 0x22604cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
label_226050:
    // 0x226050: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x226050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_226054:
    // 0x226054: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x226054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_226058:
    // 0x226058: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_22605c:
    if (ctx->pc == 0x22605Cu) {
        ctx->pc = 0x22605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226058u;
        // 0x22605c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226060u;
        goto label_226060;
    }
    ctx->pc = 0x226058u;
    {
        const bool branch_taken_0x226058 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226058u;
        // 0x22605c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226058) {
            ctx->pc = 0x226030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_226030;
        }
    }
    ctx->pc = 0x226060u;
label_226060:
    // 0x226060: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
label_226064:
    // 0x226064: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226068:
    // 0x226068: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x226068u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
label_22606c:
    // 0x22606c: 0xc093958  jal         func_24E560
label_226070:
    if (ctx->pc == 0x226070u) {
        ctx->pc = 0x226070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22606Cu;
        // 0x226070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226074u;
        goto label_226074;
    }
    ctx->pc = 0x22606Cu;
    SET_GPR_U32(ctx, 31, 0x226074u);
    ctx->pc = 0x226070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22606Cu;
    // 0x226070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x22606Cu, 0x226074u)) {
        return;
    }
    ctx->pc = 0x226074u;
label_226074:
    // 0x226074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226078:
    // 0x226078: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x226078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22607c:
    // 0x22607c: 0xc093996  jal         func_24E658
label_226080:
    if (ctx->pc == 0x226080u) {
        ctx->pc = 0x226080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22607Cu;
        // 0x226080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226084u;
        goto label_226084;
    }
    ctx->pc = 0x22607Cu;
    SET_GPR_U32(ctx, 31, 0x226084u);
    ctx->pc = 0x226080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22607Cu;
    // 0x226080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E658u, 0x22607Cu, 0x226084u)) {
        return;
    }
    ctx->pc = 0x226084u;
label_226084:
    // 0x226084: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226088:
    // 0x226088: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x226088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22608c:
    // 0x22608c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x22608cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226090:
    // 0x226090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x226090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226094:
    // 0x226094: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x226094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226098:
    // 0x226098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22609c:
    // 0x22609c: 0x3e00008  jr          $ra
label_2260a0:
    if (ctx->pc == 0x2260A0u) {
        ctx->pc = 0x2260A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22609Cu;
        // 0x2260a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2260A4u;
        goto label_2260a4;
    }
    ctx->pc = 0x22609Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2260A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22609Cu;
        // 0x2260a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22609Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2260A4u;
label_2260a4:
    // 0x2260a4: 0x0  nop
    ctx->pc = 0x2260a4u;
    // NOP
    ctx->pc = 0x2260a8u;
}
