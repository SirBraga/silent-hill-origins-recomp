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

// Function: sub_0027DF50
// Address: 0x27df50 - 0x27e180
void sub_0027DF50_0x27df50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DF50_0x27df50");
#endif

    switch (ctx->pc) {
        case 0x27df50u: goto label_27df50;
        case 0x27df54u: goto label_27df54;
        case 0x27df58u: goto label_27df58;
        case 0x27df5cu: goto label_27df5c;
        case 0x27df60u: goto label_27df60;
        case 0x27df64u: goto label_27df64;
        case 0x27df68u: goto label_27df68;
        case 0x27df6cu: goto label_27df6c;
        case 0x27df70u: goto label_27df70;
        case 0x27df74u: goto label_27df74;
        case 0x27df78u: goto label_27df78;
        case 0x27df7cu: goto label_27df7c;
        case 0x27df80u: goto label_27df80;
        case 0x27df84u: goto label_27df84;
        case 0x27df88u: goto label_27df88;
        case 0x27df8cu: goto label_27df8c;
        case 0x27df90u: goto label_27df90;
        case 0x27df94u: goto label_27df94;
        case 0x27df98u: goto label_27df98;
        case 0x27df9cu: goto label_27df9c;
        case 0x27dfa0u: goto label_27dfa0;
        case 0x27dfa4u: goto label_27dfa4;
        case 0x27dfa8u: goto label_27dfa8;
        case 0x27dfacu: goto label_27dfac;
        case 0x27dfb0u: goto label_27dfb0;
        case 0x27dfb4u: goto label_27dfb4;
        case 0x27dfb8u: goto label_27dfb8;
        case 0x27dfbcu: goto label_27dfbc;
        case 0x27dfc0u: goto label_27dfc0;
        case 0x27dfc4u: goto label_27dfc4;
        case 0x27dfc8u: goto label_27dfc8;
        case 0x27dfccu: goto label_27dfcc;
        case 0x27dfd0u: goto label_27dfd0;
        case 0x27dfd4u: goto label_27dfd4;
        case 0x27dfd8u: goto label_27dfd8;
        case 0x27dfdcu: goto label_27dfdc;
        case 0x27dfe0u: goto label_27dfe0;
        case 0x27dfe4u: goto label_27dfe4;
        case 0x27dfe8u: goto label_27dfe8;
        case 0x27dfecu: goto label_27dfec;
        case 0x27dff0u: goto label_27dff0;
        case 0x27dff4u: goto label_27dff4;
        case 0x27dff8u: goto label_27dff8;
        case 0x27dffcu: goto label_27dffc;
        case 0x27e000u: goto label_27e000;
        case 0x27e004u: goto label_27e004;
        case 0x27e008u: goto label_27e008;
        case 0x27e00cu: goto label_27e00c;
        case 0x27e010u: goto label_27e010;
        case 0x27e014u: goto label_27e014;
        case 0x27e018u: goto label_27e018;
        case 0x27e01cu: goto label_27e01c;
        case 0x27e020u: goto label_27e020;
        case 0x27e024u: goto label_27e024;
        case 0x27e028u: goto label_27e028;
        case 0x27e02cu: goto label_27e02c;
        case 0x27e030u: goto label_27e030;
        case 0x27e034u: goto label_27e034;
        case 0x27e038u: goto label_27e038;
        case 0x27e03cu: goto label_27e03c;
        case 0x27e040u: goto label_27e040;
        case 0x27e044u: goto label_27e044;
        case 0x27e048u: goto label_27e048;
        case 0x27e04cu: goto label_27e04c;
        case 0x27e050u: goto label_27e050;
        case 0x27e054u: goto label_27e054;
        case 0x27e058u: goto label_27e058;
        case 0x27e05cu: goto label_27e05c;
        case 0x27e060u: goto label_27e060;
        case 0x27e064u: goto label_27e064;
        case 0x27e068u: goto label_27e068;
        case 0x27e06cu: goto label_27e06c;
        case 0x27e070u: goto label_27e070;
        case 0x27e074u: goto label_27e074;
        case 0x27e078u: goto label_27e078;
        case 0x27e07cu: goto label_27e07c;
        case 0x27e080u: goto label_27e080;
        case 0x27e084u: goto label_27e084;
        case 0x27e088u: goto label_27e088;
        case 0x27e08cu: goto label_27e08c;
        case 0x27e090u: goto label_27e090;
        case 0x27e094u: goto label_27e094;
        case 0x27e098u: goto label_27e098;
        case 0x27e09cu: goto label_27e09c;
        case 0x27e0a0u: goto label_27e0a0;
        case 0x27e0a4u: goto label_27e0a4;
        case 0x27e0a8u: goto label_27e0a8;
        case 0x27e0acu: goto label_27e0ac;
        case 0x27e0b0u: goto label_27e0b0;
        case 0x27e0b4u: goto label_27e0b4;
        case 0x27e0b8u: goto label_27e0b8;
        case 0x27e0bcu: goto label_27e0bc;
        case 0x27e0c0u: goto label_27e0c0;
        case 0x27e0c4u: goto label_27e0c4;
        case 0x27e0c8u: goto label_27e0c8;
        case 0x27e0ccu: goto label_27e0cc;
        case 0x27e0d0u: goto label_27e0d0;
        case 0x27e0d4u: goto label_27e0d4;
        case 0x27e0d8u: goto label_27e0d8;
        case 0x27e0dcu: goto label_27e0dc;
        case 0x27e0e0u: goto label_27e0e0;
        case 0x27e0e4u: goto label_27e0e4;
        case 0x27e0e8u: goto label_27e0e8;
        case 0x27e0ecu: goto label_27e0ec;
        case 0x27e0f0u: goto label_27e0f0;
        case 0x27e0f4u: goto label_27e0f4;
        case 0x27e0f8u: goto label_27e0f8;
        case 0x27e0fcu: goto label_27e0fc;
        case 0x27e100u: goto label_27e100;
        case 0x27e104u: goto label_27e104;
        case 0x27e108u: goto label_27e108;
        case 0x27e10cu: goto label_27e10c;
        case 0x27e110u: goto label_27e110;
        case 0x27e114u: goto label_27e114;
        case 0x27e118u: goto label_27e118;
        case 0x27e11cu: goto label_27e11c;
        case 0x27e120u: goto label_27e120;
        case 0x27e124u: goto label_27e124;
        case 0x27e128u: goto label_27e128;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e130u: goto label_27e130;
        case 0x27e134u: goto label_27e134;
        case 0x27e138u: goto label_27e138;
        case 0x27e13cu: goto label_27e13c;
        case 0x27e140u: goto label_27e140;
        case 0x27e144u: goto label_27e144;
        case 0x27e148u: goto label_27e148;
        case 0x27e14cu: goto label_27e14c;
        case 0x27e150u: goto label_27e150;
        case 0x27e154u: goto label_27e154;
        case 0x27e158u: goto label_27e158;
        case 0x27e15cu: goto label_27e15c;
        case 0x27e160u: goto label_27e160;
        case 0x27e164u: goto label_27e164;
        case 0x27e168u: goto label_27e168;
        case 0x27e16cu: goto label_27e16c;
        case 0x27e170u: goto label_27e170;
        case 0x27e174u: goto label_27e174;
        case 0x27e178u: goto label_27e178;
        case 0x27e17cu: goto label_27e17c;
        default: break;
    }

    ctx->pc = 0x27df50u;

label_27df50:
    // 0x27df50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_27df54:
    // 0x27df54: 0x8f8287f0  lw          $v0, -0x7810($gp)
    ctx->pc = 0x27df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936560)));
label_27df58:
    // 0x27df58: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x27df58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_27df5c:
    // 0x27df5c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x27df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_27df60:
    // 0x27df60: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x27df60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27df64:
    // 0x27df64: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x27df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_27df68:
    // 0x27df68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27df68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27df6c:
    // 0x27df6c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x27df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_27df70:
    // 0x27df70: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x27df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_27df74:
    // 0x27df74: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x27df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_27df78:
    // 0x27df78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x27df78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_27df7c:
    // 0x27df7c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x27df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_27df80:
    // 0x27df80: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x27df80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27df84:
    // 0x27df84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x27df84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27df88:
    // 0x27df88: 0xc092782  jal         func_249E08
label_27df8c:
    if (ctx->pc == 0x27DF8Cu) {
        ctx->pc = 0x27DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF88u;
        // 0x27df8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DF90u;
        goto label_27df90;
    }
    ctx->pc = 0x27DF88u;
    SET_GPR_U32(ctx, 31, 0x27DF90u);
    ctx->pc = 0x27DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF88u;
    // 0x27df8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27DF88u, 0x27DF90u)) {
        return;
    }
    ctx->pc = 0x27DF90u;
label_27df90:
    // 0x27df90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_27df94:
    if (ctx->pc == 0x27DF94u) {
        ctx->pc = 0x27DF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF90u;
        // 0x27df94: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DF98u;
        goto label_27df98;
    }
    ctx->pc = 0x27DF90u;
    {
        const bool branch_taken_0x27df90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27df90) {
            ctx->pc = 0x27DF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DF90u;
            // 0x27df94: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFA0u;
            goto label_27dfa0;
        }
    }
    ctx->pc = 0x27DF98u;
label_27df98:
    // 0x27df98: 0x10000068  b           . + 4 + (0x68 << 2)
label_27df9c:
    if (ctx->pc == 0x27DF9Cu) {
        ctx->pc = 0x27DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF98u;
        // 0x27df9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DFA0u;
        goto label_27dfa0;
    }
    ctx->pc = 0x27DF98u;
    {
        const bool branch_taken_0x27df98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF98u;
        // 0x27df9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df98) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27DFA0u;
label_27dfa0:
    // 0x27dfa0: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_27dfa4:
    if (ctx->pc == 0x27DFA4u) {
        ctx->pc = 0x27DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFA0u;
        // 0x27dfa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DFA8u;
        goto label_27dfa8;
    }
    ctx->pc = 0x27DFA0u;
    {
        const bool branch_taken_0x27dfa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFA0u;
        // 0x27dfa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfa0) {
            ctx->pc = 0x27E138u;
            goto label_27e138;
        }
    }
    ctx->pc = 0x27DFA8u;
label_27dfa8:
    // 0x27dfa8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x27dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_27dfac:
    // 0x27dfac: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x27dfacu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27dfb0:
    // 0x27dfb0: 0x24560fc8  addiu       $s6, $v0, 0xFC8
    ctx->pc = 0x27dfb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_27dfb4:
    // 0x27dfb4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dfb8:
    // 0x27dfb8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x27dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27dfbc:
    // 0x27dfbc: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x27dfbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_27dfc0:
    // 0x27dfc0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x27dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27dfc4:
    // 0x27dfc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_27dfc8:
    if (ctx->pc == 0x27DFC8u) {
        ctx->pc = 0x27DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFC4u;
        // 0x27dfc8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DFCCu;
        goto label_27dfcc;
    }
    ctx->pc = 0x27DFC4u;
    {
        const bool branch_taken_0x27dfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27dfc4) {
            ctx->pc = 0x27DFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27DFC4u;
            // 0x27dfc8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27DFE0u;
            goto label_27dfe0;
        }
    }
    ctx->pc = 0x27DFCCu;
label_27dfcc:
    // 0x27dfcc: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x27dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_27dfd0:
    // 0x27dfd0: 0x40f809  jalr        $v0
label_27dfd4:
    if (ctx->pc == 0x27DFD4u) {
        ctx->pc = 0x27DFD8u;
        goto label_27dfd8;
    }
    ctx->pc = 0x27DFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27DFD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27DFD0u, 0x27DFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27DFD8u;
label_27dfd8:
    // 0x27dfd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27dfdc:
    // 0x27dfdc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x27dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_27dfe0:
    // 0x27dfe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27dfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27dfe4:
    // 0x27dfe4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x27dfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_27dfe8:
    // 0x27dfe8: 0xc092782  jal         func_249E08
label_27dfec:
    if (ctx->pc == 0x27DFECu) {
        ctx->pc = 0x27DFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFE8u;
        // 0x27dfec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DFF0u;
        goto label_27dff0;
    }
    ctx->pc = 0x27DFE8u;
    SET_GPR_U32(ctx, 31, 0x27DFF0u);
    ctx->pc = 0x27DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFE8u;
    // 0x27dfec: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27DFE8u, 0x27DFF0u)) {
        return;
    }
    ctx->pc = 0x27DFF0u;
label_27dff0:
    // 0x27dff0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_27dff4:
    if (ctx->pc == 0x27DFF4u) {
        ctx->pc = 0x27DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFF0u;
        // 0x27dff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27DFF8u;
        goto label_27dff8;
    }
    ctx->pc = 0x27DFF0u;
    {
        const bool branch_taken_0x27dff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFF0u;
        // 0x27dff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dff0) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27DFF8u;
label_27dff8:
    // 0x27dff8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x27dff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_27dffc:
    // 0x27dffc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_27e000:
    if (ctx->pc == 0x27E000u) {
        ctx->pc = 0x27E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFFCu;
        // 0x27e000: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E004u;
        goto label_27e004;
    }
    ctx->pc = 0x27DFFCu;
    {
        const bool branch_taken_0x27dffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFFCu;
        // 0x27e000: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dffc) {
            ctx->pc = 0x27E014u;
            goto label_27e014;
        }
    }
    ctx->pc = 0x27E004u;
label_27e004:
    // 0x27e004: 0xc0935aa  jal         func_24D6A8
label_27e008:
    if (ctx->pc == 0x27E008u) {
        ctx->pc = 0x27E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E004u;
        // 0x27e008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E00Cu;
        goto label_27e00c;
    }
    ctx->pc = 0x27E004u;
    SET_GPR_U32(ctx, 31, 0x27E00Cu);
    ctx->pc = 0x27E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E004u;
    // 0x27e008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x27E004u, 0x27E00Cu)) {
        return;
    }
    ctx->pc = 0x27E00Cu;
label_27e00c:
    // 0x27e00c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_27e010:
    if (ctx->pc == 0x27E010u) {
        ctx->pc = 0x27E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E00Cu;
        // 0x27e010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E014u;
        goto label_27e014;
    }
    ctx->pc = 0x27E00Cu;
    {
        const bool branch_taken_0x27e00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E00Cu;
        // 0x27e010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e00c) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E014u;
label_27e014:
    // 0x27e014: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27e014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27e018:
    // 0x27e018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e01c:
    // 0x27e01c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27e01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27e020:
    // 0x27e020: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x27e020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27e024:
    // 0x27e024: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x27e024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_27e028:
    // 0x27e028: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x27e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_27e02c:
    // 0x27e02c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x27e02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_27e030:
    // 0x27e030: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x27e030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_27e034:
    // 0x27e034: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x27e034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_27e038:
    // 0x27e038: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x27e038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e03c:
    // 0x27e03c: 0xc092782  jal         func_249E08
label_27e040:
    if (ctx->pc == 0x27E040u) {
        ctx->pc = 0x27E040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E03Cu;
        // 0x27e040: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E044u;
        goto label_27e044;
    }
    ctx->pc = 0x27E03Cu;
    SET_GPR_U32(ctx, 31, 0x27E044u);
    ctx->pc = 0x27E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E03Cu;
    // 0x27e040: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x27E03Cu, 0x27E044u)) {
        return;
    }
    ctx->pc = 0x27E044u;
label_27e044:
    // 0x27e044: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
label_27e048:
    if (ctx->pc == 0x27E048u) {
        ctx->pc = 0x27E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E044u;
        // 0x27e048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E04Cu;
        goto label_27e04c;
    }
    ctx->pc = 0x27E044u;
    {
        const bool branch_taken_0x27e044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E044u;
        // 0x27e048: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e044) {
            ctx->pc = 0x27DF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27df98;
        }
    }
    ctx->pc = 0x27E04Cu;
label_27e04c:
    // 0x27e04c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x27e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_27e050:
    // 0x27e050: 0xc0935aa  jal         func_24D6A8
label_27e054:
    if (ctx->pc == 0x27E054u) {
        ctx->pc = 0x27E054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E050u;
        // 0x27e054: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E058u;
        goto label_27e058;
    }
    ctx->pc = 0x27E050u;
    SET_GPR_U32(ctx, 31, 0x27E058u);
    ctx->pc = 0x27E054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E050u;
    // 0x27e054: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x27E050u, 0x27E058u)) {
        return;
    }
    ctx->pc = 0x27E058u;
label_27e058:
    // 0x27e058: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_27e05c:
    if (ctx->pc == 0x27E05Cu) {
        ctx->pc = 0x27E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E058u;
        // 0x27e05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E060u;
        goto label_27e060;
    }
    ctx->pc = 0x27E058u;
    {
        const bool branch_taken_0x27e058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E058u;
        // 0x27e05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e058) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E060u;
label_27e060:
    // 0x27e060: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x27e060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e064:
    // 0x27e064: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
label_27e068:
    if (ctx->pc == 0x27E068u) {
        ctx->pc = 0x27E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E064u;
        // 0x27e068: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E06Cu;
        goto label_27e06c;
    }
    ctx->pc = 0x27E064u;
    {
        const bool branch_taken_0x27e064 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E064u;
        // 0x27e068: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e064) {
            ctx->pc = 0x27E114u;
            goto label_27e114;
        }
    }
    ctx->pc = 0x27E06Cu;
label_27e06c:
    // 0x27e06c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27e070:
    // 0x27e070: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x27e070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27e074:
    // 0x27e074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27e078:
    if (ctx->pc == 0x27E078u) {
        ctx->pc = 0x27E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E074u;
        // 0x27e078: 0xd50018  mult        $zero, $a2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E07Cu;
        goto label_27e07c;
    }
    ctx->pc = 0x27E074u;
    {
        const bool branch_taken_0x27e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E074u;
        // 0x27e078: 0xd50018  mult        $zero, $a2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e074) {
            ctx->pc = 0x27E094u;
            goto label_27e094;
        }
    }
    ctx->pc = 0x27E07Cu;
label_27e07c:
    // 0x27e07c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x27e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_27e080:
    // 0x27e080: 0x3012  mflo        $a2
    ctx->pc = 0x27e080u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_27e084:
    // 0x27e084: 0xc09275c  jal         func_249D70
label_27e088:
    if (ctx->pc == 0x27E088u) {
        ctx->pc = 0x27E088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E084u;
        // 0x27e088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E08Cu;
        goto label_27e08c;
    }
    ctx->pc = 0x27E084u;
    SET_GPR_U32(ctx, 31, 0x27E08Cu);
    ctx->pc = 0x27E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E084u;
    // 0x27e088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x27E084u, 0x27E08Cu)) {
        return;
    }
    ctx->pc = 0x27E08Cu;
label_27e08c:
    // 0x27e08c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_27e090:
    if (ctx->pc == 0x27E090u) {
        ctx->pc = 0x27E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E08Cu;
        // 0x27e090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E094u;
        goto label_27e094;
    }
    ctx->pc = 0x27E08Cu;
    {
        const bool branch_taken_0x27e08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E08Cu;
        // 0x27e090: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e08c) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E094u;
label_27e094:
    // 0x27e094: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27e094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27e098:
    // 0x27e098: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x27e098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_27e09c:
    // 0x27e09c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27e0a0:
    if (ctx->pc == 0x27E0A0u) {
        ctx->pc = 0x27E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E09Cu;
        // 0x27e0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0A4u;
        goto label_27e0a4;
    }
    ctx->pc = 0x27E09Cu;
    {
        const bool branch_taken_0x27e09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E09Cu;
        // 0x27e0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e09c) {
            ctx->pc = 0x27E0C0u;
            goto label_27e0c0;
        }
    }
    ctx->pc = 0x27E0A4u;
label_27e0a4:
    // 0x27e0a4: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e0a8:
    // 0x27e0a8: 0xd50018  mult        $zero, $a2, $s5
    ctx->pc = 0x27e0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_27e0ac:
    // 0x27e0ac: 0x3012  mflo        $a2
    ctx->pc = 0x27e0acu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_27e0b0:
    // 0x27e0b0: 0xc09275c  jal         func_249D70
label_27e0b4:
    if (ctx->pc == 0x27E0B4u) {
        ctx->pc = 0x27E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0B0u;
        // 0x27e0b4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0B8u;
        goto label_27e0b8;
    }
    ctx->pc = 0x27E0B0u;
    SET_GPR_U32(ctx, 31, 0x27E0B8u);
    ctx->pc = 0x27E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0B0u;
    // 0x27e0b4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x27E0B0u, 0x27E0B8u)) {
        return;
    }
    ctx->pc = 0x27E0B8u;
label_27e0b8:
    // 0x27e0b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_27e0bc:
    if (ctx->pc == 0x27E0BCu) {
        ctx->pc = 0x27E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0B8u;
        // 0x27e0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0C0u;
        goto label_27e0c0;
    }
    ctx->pc = 0x27E0B8u;
    {
        const bool branch_taken_0x27e0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0B8u;
        // 0x27e0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0b8) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E0C0u;
label_27e0c0:
    // 0x27e0c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27e0c4:
    // 0x27e0c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x27e0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_27e0c8:
    // 0x27e0c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27e0cc:
    if (ctx->pc == 0x27E0CCu) {
        ctx->pc = 0x27E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0C8u;
        // 0x27e0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0D0u;
        goto label_27e0d0;
    }
    ctx->pc = 0x27E0C8u;
    {
        const bool branch_taken_0x27e0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0C8u;
        // 0x27e0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0c8) {
            ctx->pc = 0x27E0E8u;
            goto label_27e0e8;
        }
    }
    ctx->pc = 0x27E0D0u;
label_27e0d0:
    // 0x27e0d0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x27e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e0d4:
    // 0x27e0d4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x27e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_27e0d8:
    // 0x27e0d8: 0xc0935aa  jal         func_24D6A8
label_27e0dc:
    if (ctx->pc == 0x27E0DCu) {
        ctx->pc = 0x27E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0D8u;
        // 0x27e0dc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0E0u;
        goto label_27e0e0;
    }
    ctx->pc = 0x27E0D8u;
    SET_GPR_U32(ctx, 31, 0x27E0E0u);
    ctx->pc = 0x27E0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E0D8u;
    // 0x27e0dc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x27E0D8u, 0x27E0E0u)) {
        return;
    }
    ctx->pc = 0x27E0E0u;
label_27e0e0:
    // 0x27e0e0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_27e0e4:
    if (ctx->pc == 0x27E0E4u) {
        ctx->pc = 0x27E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0E0u;
        // 0x27e0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0E8u;
        goto label_27e0e8;
    }
    ctx->pc = 0x27E0E0u;
    {
        const bool branch_taken_0x27e0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0E0u;
        // 0x27e0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0e0) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E0E8u;
label_27e0e8:
    // 0x27e0e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27e0ec:
    // 0x27e0ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x27e0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_27e0f0:
    // 0x27e0f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27e0f4:
    if (ctx->pc == 0x27E0F4u) {
        ctx->pc = 0x27E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0F0u;
        // 0x27e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E0F8u;
        goto label_27e0f8;
    }
    ctx->pc = 0x27E0F0u;
    {
        const bool branch_taken_0x27e0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0F0u;
        // 0x27e0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0f0) {
            ctx->pc = 0x27E110u;
            goto label_27e110;
        }
    }
    ctx->pc = 0x27E0F8u;
label_27e0f8:
    // 0x27e0f8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x27e0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_27e0fc:
    // 0x27e0fc: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x27e0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_27e100:
    // 0x27e100: 0xc09275c  jal         func_249D70
label_27e104:
    if (ctx->pc == 0x27E104u) {
        ctx->pc = 0x27E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E100u;
        // 0x27e104: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E108u;
        goto label_27e108;
    }
    ctx->pc = 0x27E100u;
    SET_GPR_U32(ctx, 31, 0x27E108u);
    ctx->pc = 0x27E104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E100u;
    // 0x27e104: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x27E100u, 0x27E108u)) {
        return;
    }
    ctx->pc = 0x27E108u;
label_27e108:
    // 0x27e108: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_27e10c:
    if (ctx->pc == 0x27E10Cu) {
        ctx->pc = 0x27E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E108u;
        // 0x27e10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E110u;
        goto label_27e110;
    }
    ctx->pc = 0x27E108u;
    {
        const bool branch_taken_0x27e108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E108u;
        // 0x27e10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e108) {
            ctx->pc = 0x27E13Cu;
            goto label_27e13c;
        }
    }
    ctx->pc = 0x27E110u;
label_27e110:
    // 0x27e110: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x27e110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_27e114:
    // 0x27e114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e118:
    // 0x27e118: 0xc09275c  jal         func_249D70
label_27e11c:
    if (ctx->pc == 0x27E11Cu) {
        ctx->pc = 0x27E11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E118u;
        // 0x27e11c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E120u;
        goto label_27e120;
    }
    ctx->pc = 0x27E118u;
    SET_GPR_U32(ctx, 31, 0x27E120u);
    ctx->pc = 0x27E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E118u;
    // 0x27e11c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x27E118u, 0x27E120u)) {
        return;
    }
    ctx->pc = 0x27E120u;
label_27e120:
    // 0x27e120: 0x1040ff9d  beqz        $v0, . + 4 + (-0x63 << 2)
label_27e124:
    if (ctx->pc == 0x27E124u) {
        ctx->pc = 0x27E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E120u;
        // 0x27e124: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E128u;
        goto label_27e128;
    }
    ctx->pc = 0x27E120u;
    {
        const bool branch_taken_0x27e120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E120u;
        // 0x27e124: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e120) {
            ctx->pc = 0x27DF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27df98;
        }
    }
    ctx->pc = 0x27E128u;
label_27e128:
    // 0x27e128: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x27e128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27e12c:
    // 0x27e12c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x27e12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27e130:
    // 0x27e130: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_27e134:
    if (ctx->pc == 0x27E134u) {
        ctx->pc = 0x27E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E130u;
        // 0x27e134: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E138u;
        goto label_27e138;
    }
    ctx->pc = 0x27E130u;
    {
        const bool branch_taken_0x27e130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E130u;
        // 0x27e134: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e130) {
            ctx->pc = 0x27DFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27dfb8;
        }
    }
    ctx->pc = 0x27E138u;
label_27e138:
    // 0x27e138: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x27e138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e13c:
    // 0x27e13c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x27e13cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_27e140:
    // 0x27e140: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x27e140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_27e144:
    // 0x27e144: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x27e144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27e148:
    // 0x27e148: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x27e148u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27e14c:
    // 0x27e14c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x27e14cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27e150:
    // 0x27e150: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x27e150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27e154:
    // 0x27e154: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x27e154u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27e158:
    // 0x27e158: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27e158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27e15c:
    // 0x27e15c: 0x3e00008  jr          $ra
label_27e160:
    if (ctx->pc == 0x27E160u) {
        ctx->pc = 0x27E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E15Cu;
        // 0x27e160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27E164u;
        goto label_27e164;
    }
    ctx->pc = 0x27E15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E15Cu;
        // 0x27e160: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E164u;
label_27e164:
    // 0x27e164: 0x0  nop
    ctx->pc = 0x27e164u;
    // NOP
label_27e168:
    // 0x27e168: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x27e168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_27e16c:
    // 0x27e16c: 0x0  nop
    ctx->pc = 0x27e16cu;
    // NOP
label_27e170:
    // 0x27e170: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x27e170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27e174:
    // 0x27e174: 0x0  nop
    ctx->pc = 0x27e174u;
    // NOP
label_27e178:
    // 0x27e178: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x27e178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27e17c:
    // 0x27e17c: 0x0  nop
    ctx->pc = 0x27e17cu;
    // NOP
    ctx->pc = 0x27e180u;
}
