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

// Function: sub_0020CB60
// Address: 0x20cb60 - 0x20cc58
void sub_0020CB60_0x20cb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CB60_0x20cb60");
#endif

    switch (ctx->pc) {
        case 0x20cb60u: goto label_20cb60;
        case 0x20cb64u: goto label_20cb64;
        case 0x20cb68u: goto label_20cb68;
        case 0x20cb6cu: goto label_20cb6c;
        case 0x20cb70u: goto label_20cb70;
        case 0x20cb74u: goto label_20cb74;
        case 0x20cb78u: goto label_20cb78;
        case 0x20cb7cu: goto label_20cb7c;
        case 0x20cb80u: goto label_20cb80;
        case 0x20cb84u: goto label_20cb84;
        case 0x20cb88u: goto label_20cb88;
        case 0x20cb8cu: goto label_20cb8c;
        case 0x20cb90u: goto label_20cb90;
        case 0x20cb94u: goto label_20cb94;
        case 0x20cb98u: goto label_20cb98;
        case 0x20cb9cu: goto label_20cb9c;
        case 0x20cba0u: goto label_20cba0;
        case 0x20cba4u: goto label_20cba4;
        case 0x20cba8u: goto label_20cba8;
        case 0x20cbacu: goto label_20cbac;
        case 0x20cbb0u: goto label_20cbb0;
        case 0x20cbb4u: goto label_20cbb4;
        case 0x20cbb8u: goto label_20cbb8;
        case 0x20cbbcu: goto label_20cbbc;
        case 0x20cbc0u: goto label_20cbc0;
        case 0x20cbc4u: goto label_20cbc4;
        case 0x20cbc8u: goto label_20cbc8;
        case 0x20cbccu: goto label_20cbcc;
        case 0x20cbd0u: goto label_20cbd0;
        case 0x20cbd4u: goto label_20cbd4;
        case 0x20cbd8u: goto label_20cbd8;
        case 0x20cbdcu: goto label_20cbdc;
        case 0x20cbe0u: goto label_20cbe0;
        case 0x20cbe4u: goto label_20cbe4;
        case 0x20cbe8u: goto label_20cbe8;
        case 0x20cbecu: goto label_20cbec;
        case 0x20cbf0u: goto label_20cbf0;
        case 0x20cbf4u: goto label_20cbf4;
        case 0x20cbf8u: goto label_20cbf8;
        case 0x20cbfcu: goto label_20cbfc;
        case 0x20cc00u: goto label_20cc00;
        case 0x20cc04u: goto label_20cc04;
        case 0x20cc08u: goto label_20cc08;
        case 0x20cc0cu: goto label_20cc0c;
        case 0x20cc10u: goto label_20cc10;
        case 0x20cc14u: goto label_20cc14;
        case 0x20cc18u: goto label_20cc18;
        case 0x20cc1cu: goto label_20cc1c;
        case 0x20cc20u: goto label_20cc20;
        case 0x20cc24u: goto label_20cc24;
        case 0x20cc28u: goto label_20cc28;
        case 0x20cc2cu: goto label_20cc2c;
        case 0x20cc30u: goto label_20cc30;
        case 0x20cc34u: goto label_20cc34;
        case 0x20cc38u: goto label_20cc38;
        case 0x20cc3cu: goto label_20cc3c;
        case 0x20cc40u: goto label_20cc40;
        case 0x20cc44u: goto label_20cc44;
        case 0x20cc48u: goto label_20cc48;
        case 0x20cc4cu: goto label_20cc4c;
        case 0x20cc50u: goto label_20cc50;
        case 0x20cc54u: goto label_20cc54;
        default: break;
    }

    ctx->pc = 0x20cb60u;

label_20cb60:
    // 0x20cb60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20cb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_20cb64:
    // 0x20cb64: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x20cb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_20cb68:
    // 0x20cb68: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x20cb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_20cb6c:
    // 0x20cb6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20cb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20cb70:
    // 0x20cb70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20cb70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20cb74:
    // 0x20cb74: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x20cb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_20cb78:
    // 0x20cb78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20cb78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20cb7c:
    // 0x20cb7c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_20cb80:
    // 0x20cb80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20cb84:
    // 0x20cb84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x20cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20cb88:
    // 0x20cb88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20cb8c:
    // 0x20cb8c: 0x40f809  jalr        $v0
label_20cb90:
    if (ctx->pc == 0x20CB90u) {
        ctx->pc = 0x20CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB8Cu;
        // 0x20cb90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CB94u;
        goto label_20cb94;
    }
    ctx->pc = 0x20CB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CB94u);
        ctx->pc = 0x20CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB8Cu;
        // 0x20cb90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB8Cu, 0x20CB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CB94u;
label_20cb94:
    // 0x20cb94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x20cb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20cb98:
    // 0x20cb98: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_20cb9c:
    // 0x20cb9c: 0xae5301b0  sw          $s3, 0x1B0($s2)
    ctx->pc = 0x20cb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 432), GPR_U32(ctx, 19));
label_20cba0:
    // 0x20cba0: 0x2442cc58  addiu       $v0, $v0, -0x33A8
    ctx->pc = 0x20cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954072));
label_20cba4:
    // 0x20cba4: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x20cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_20cba8:
    // 0x20cba8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x20cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_20cbac:
    // 0x20cbac: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x20cbacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_20cbb0:
    // 0x20cbb0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x20cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_20cbb4:
    // 0x20cbb4: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_20cbb8:
    if (ctx->pc == 0x20CBB8u) {
        ctx->pc = 0x20CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBB4u;
        // 0x20cbb8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CBBCu;
        goto label_20cbbc;
    }
    ctx->pc = 0x20CBB4u;
    {
        const bool branch_taken_0x20cbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20cbb4) {
            ctx->pc = 0x20CBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CBB4u;
            // 0x20cbb8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CC40u;
            goto label_20cc40;
        }
    }
    ctx->pc = 0x20CBBCu;
label_20cbbc:
    // 0x20cbbc: 0x8e470138  lw          $a3, 0x138($s2)
    ctx->pc = 0x20cbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 312)));
label_20cbc0:
    // 0x20cbc0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_20cbc4:
    if (ctx->pc == 0x20CBC4u) {
        ctx->pc = 0x20CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBC0u;
        // 0x20cbc4: 0xae670010  sw          $a3, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CBC8u;
        goto label_20cbc8;
    }
    ctx->pc = 0x20CBC0u;
    {
        const bool branch_taken_0x20cbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBC0u;
        // 0x20cbc4: 0xae670010  sw          $a3, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cbc0) {
            ctx->pc = 0x20CC14u;
            goto label_20cc14;
        }
    }
    ctx->pc = 0x20CBC8u;
label_20cbc8:
    // 0x20cbc8: 0x8e510070  lw          $s1, 0x70($s2)
    ctx->pc = 0x20cbc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_20cbcc:
    // 0x20cbcc: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x20cbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
label_20cbd0:
    // 0x20cbd0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x20cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_20cbd4:
    // 0x20cbd4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20cbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_20cbd8:
    // 0x20cbd8: 0x9e440074  lwu         $a0, 0x74($s2)
    ctx->pc = 0x20cbd8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_20cbdc:
    // 0x20cbdc: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x20cbdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_20cbe0:
    // 0x20cbe0: 0xc084868  jal         func_2121A0
label_20cbe4:
    if (ctx->pc == 0x20CBE4u) {
        ctx->pc = 0x20CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CBE0u;
        // 0x20cbe4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CBE8u;
        goto label_20cbe8;
    }
    ctx->pc = 0x20CBE0u;
    SET_GPR_U32(ctx, 31, 0x20CBE8u);
    ctx->pc = 0x20CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CBE0u;
    // 0x20cbe4: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121A0u, 0x20CBE0u, 0x20CBE8u)) {
        return;
    }
    ctx->pc = 0x20CBE8u;
label_20cbe8:
    // 0x20cbe8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x20cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20cbec:
    // 0x20cbec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20cbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20cbf0:
    // 0x20cbf0: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x20cbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20cbf4:
    // 0x20cbf4: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x20cbf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_20cbf8:
    // 0x20cbf8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x20cbf8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_20cbfc:
    // 0x20cbfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x20cbfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20cc00:
    // 0x20cc00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20cc04:
    // 0x20cc04: 0x60f809  jalr        $v1
label_20cc08:
    if (ctx->pc == 0x20CC08u) {
        ctx->pc = 0x20CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC04u;
        // 0x20cc08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC0Cu;
        goto label_20cc0c;
    }
    ctx->pc = 0x20CC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20CC0Cu);
        ctx->pc = 0x20CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC04u;
        // 0x20cc08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC04u, 0x20CC0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CC0Cu;
label_20cc0c:
    // 0x20cc0c: 0x1000000b  b           . + 4 + (0xB << 2)
label_20cc10:
    if (ctx->pc == 0x20CC10u) {
        ctx->pc = 0x20CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC0Cu;
        // 0x20cc10: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC14u;
        goto label_20cc14;
    }
    ctx->pc = 0x20CC0Cu;
    {
        const bool branch_taken_0x20cc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC0Cu;
        // 0x20cc10: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cc0c) {
            ctx->pc = 0x20CC3Cu;
            goto label_20cc3c;
        }
    }
    ctx->pc = 0x20CC14u;
label_20cc14:
    // 0x20cc14: 0x8e420070  lw          $v0, 0x70($s2)
    ctx->pc = 0x20cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_20cc18:
    // 0x20cc18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20cc18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20cc1c:
    // 0x20cc1c: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x20cc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_20cc20:
    // 0x20cc20: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x20cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_20cc24:
    // 0x20cc24: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x20cc24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20cc28:
    // 0x20cc28: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20cc2c:
    // 0x20cc2c: 0x3012  mflo        $a2
    ctx->pc = 0x20cc2cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_20cc30:
    // 0x20cc30: 0x40f809  jalr        $v0
label_20cc34:
    if (ctx->pc == 0x20CC34u) {
        ctx->pc = 0x20CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC30u;
        // 0x20cc34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC38u;
        goto label_20cc38;
    }
    ctx->pc = 0x20CC30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20CC38u);
        ctx->pc = 0x20CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC30u;
        // 0x20cc34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC30u, 0x20CC38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20CC38u;
label_20cc38:
    // 0x20cc38: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x20cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_20cc3c:
    // 0x20cc3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x20cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20cc40:
    // 0x20cc40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20cc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20cc44:
    // 0x20cc44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20cc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20cc48:
    // 0x20cc48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x20cc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20cc4c:
    // 0x20cc4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20cc50:
    // 0x20cc50: 0x3e00008  jr          $ra
label_20cc54:
    if (ctx->pc == 0x20CC54u) {
        ctx->pc = 0x20CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC50u;
        // 0x20cc54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20CC58u;
        goto label_fallthrough_0x20cc50;
    }
    ctx->pc = 0x20CC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CC50u;
        // 0x20cc54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20cc50:
    ctx->pc = 0x20CC58u;
}
