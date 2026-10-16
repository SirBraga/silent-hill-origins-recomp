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

// Function: sub_002027B8
// Address: 0x2027b8 - 0x202a28
void sub_002027B8_0x2027b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002027B8_0x2027b8");
#endif

    switch (ctx->pc) {
        case 0x2027e4u: goto label_2027e4;
        case 0x202804u: goto label_202804;
        case 0x202818u: goto label_202818;
        case 0x20286cu: goto label_20286c;
        case 0x202888u: goto label_202888;
        case 0x202910u: goto label_202910;
        case 0x20298cu: goto label_20298c;
        case 0x2029b4u: goto label_2029b4;
        case 0x2029c8u: goto label_2029c8;
        case 0x2029dcu: goto label_2029dc;
        default: break;
    }

    ctx->pc = 0x2027b8u;

    // 0x2027b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2027b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2027bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2027bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2027c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2027c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2027c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2027c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2027c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2027cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2027ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2027d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027d4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2027d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2027d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2027d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2027dc: 0xc086f64  jal         func_21BD90
    ctx->pc = 0x2027DCu;
    SET_GPR_U32(ctx, 31, 0x2027E4u);
    ctx->pc = 0x2027E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027DCu;
    // 0x2027e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BD90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BD90u, 0x2027DCu, 0x2027E4u)) {
        return;
    }
    ctx->pc = 0x2027E4u;
label_2027e4:
    // 0x2027e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2027e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027e8: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x2027e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2027ec: 0xae510008  sw          $s1, 0x8($s2)
    ctx->pc = 0x2027ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 17));
    // 0x2027f0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x2027f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x2027f4: 0x24050104  addiu       $a1, $zero, 0x104
    ctx->pc = 0x2027f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x2027f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2027f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027fc: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x2027FCu;
    SET_GPR_U32(ctx, 31, 0x202804u);
    ctx->pc = 0x202800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027FCu;
    // 0x202800: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BE38u, 0x2027FCu, 0x202804u)) {
        return;
    }
    ctx->pc = 0x202804u;
label_202804:
    // 0x202804: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x202804u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x202808: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x202808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x20280c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x20280cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x202810: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x202810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x202814: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202818:
    // 0x202818: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x202818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x20281c: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x20281cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x202820: 0x28830011  slti        $v1, $a0, 0x11
    ctx->pc = 0x202820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x202824: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x202824u;
    {
        const bool branch_taken_0x202824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202824u;
        // 0x202828: 0x2482000f  addiu       $v0, $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202824) {
            ctx->pc = 0x202830u;
            goto label_202830;
        }
    }
    ctx->pc = 0x20282Cu;
    // 0x20282c: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x20282cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_202830:
    // 0x202830: 0x10870004  beq         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x202830u;
    {
        const bool branch_taken_0x202830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x202834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202830u;
        // 0x202834: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202830) {
            ctx->pc = 0x202844u;
            goto label_202844;
        }
    }
    ctx->pc = 0x202838u;
    // 0x202838: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x202838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x20283c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20283cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x202840: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x202840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_202844:
    // 0x202844: 0x2a620041  slti        $v0, $s3, 0x41
    ctx->pc = 0x202844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x202848: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x202848u;
    {
        const bool branch_taken_0x202848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202848u;
        // 0x20284c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202848) {
            ctx->pc = 0x202818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202818;
        }
    }
    ctx->pc = 0x202850u;
    // 0x202850: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x202850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x202854: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x202854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x202858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20285c: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x20285cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x202860: 0x2812  mflo        $a1
    ctx->pc = 0x202860u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x202864: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x202864u;
    SET_GPR_U32(ctx, 31, 0x20286Cu);
    ctx->pc = 0x202868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202864u;
    // 0x202868: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BE38u, 0x202864u, 0x20286Cu)) {
        return;
    }
    ctx->pc = 0x20286Cu;
label_20286c:
    // 0x20286c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x20286cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x202870: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x202870u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x202874: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x202874u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x202878: 0x2409fff0  addiu       $t1, $zero, -0x10
    ctx->pc = 0x202878u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x20287c: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x20287cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x202880: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202884: 0x0  nop
    ctx->pc = 0x202884u;
    // NOP
label_202888:
    // 0x202888: 0x26620003  addiu       $v0, $s3, 0x3
    ctx->pc = 0x202888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x20288c: 0x4a3024  and         $a2, $v0, $t2
    ctx->pc = 0x20288cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x202890: 0x28c30011  slti        $v1, $a2, 0x11
    ctx->pc = 0x202890u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x202894: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x202894u;
    {
        const bool branch_taken_0x202894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202894u;
        // 0x202898: 0x24c2000f  addiu       $v0, $a2, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202894) {
            ctx->pc = 0x2028A0u;
            goto label_2028a0;
        }
    }
    ctx->pc = 0x20289Cu;
    // 0x20289c: 0x493024  and         $a2, $v0, $t1
    ctx->pc = 0x20289cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
label_2028a0:
    // 0x2028a0: 0x10c70004  beq         $a2, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2028A0u;
    {
        const bool branch_taken_0x2028a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x2028A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028A0u;
        // 0x2028a4: 0x8e42001c  lw          $v0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028a0) {
            ctx->pc = 0x2028B4u;
            goto label_2028b4;
        }
    }
    ctx->pc = 0x2028A8u;
    // 0x2028a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2028a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2028ac: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x2028acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
    // 0x2028b0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2028b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2028b4:
    // 0x2028b4: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x2028b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2028b8: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2028b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2028bc: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x2028bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2028c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2028c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2028c4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x2028c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2028c8: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x2028c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x2028cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2028ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2028d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2028d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2028d4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2028d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2028d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2028d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2028dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2028dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2028e0: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x2028e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x2028e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2028e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2028e8: 0x2a620041  slti        $v0, $s3, 0x41
    ctx->pc = 0x2028e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)65) ? 1 : 0);
    // 0x2028ec: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2028ECu;
    {
        const bool branch_taken_0x2028ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2028F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028ECu;
        // 0x2028f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028ec) {
            ctx->pc = 0x202888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202888;
        }
    }
    ctx->pc = 0x2028F4u;
    // 0x2028f4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2028f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2028f8: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2028F8u;
    {
        const bool branch_taken_0x2028f8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2028FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028F8u;
        // 0x2028fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2028f8) {
            ctx->pc = 0x202980u;
            goto label_202980;
        }
    }
    ctx->pc = 0x202900u;
    // 0x202900: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x202900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x202904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x202904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20290c: 0x0  nop
    ctx->pc = 0x20290cu;
    // NOP
label_202910:
    // 0x202910: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x202910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202914: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x202914u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x202918: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x202918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20291c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x20291cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x202920: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x202920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202924: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x202924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x202928: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x202928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x20292c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x20292cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202930: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x202930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x202934: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x202934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x202938: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x202938u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20293c: 0x50470001  beql        $v0, $a3, . + 4 + (0x1 << 2)
    ctx->pc = 0x20293Cu;
    {
        const bool branch_taken_0x20293c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x20293c) {
            ctx->pc = 0x202940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20293Cu;
            // 0x202940: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x202944u;
            goto label_202944;
        }
    }
    ctx->pc = 0x202944u;
label_202944:
    // 0x202944: 0x2012  mflo        $a0
    ctx->pc = 0x202944u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x202948: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x202948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x20294c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x20294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202950: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x202950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x202954: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x202954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x202958: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x202958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x20295c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x20295cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x202960: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x202960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x202964: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x202964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202968: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x202968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20296c: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20296cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x202970: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x202970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x202974: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x202974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x202978: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x202978u;
    {
        const bool branch_taken_0x202978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202978u;
        // 0x20297c: 0x24a5001c  addiu       $a1, $a1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202978) {
            ctx->pc = 0x202910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202910;
        }
    }
    ctx->pc = 0x202980u;
label_202980:
    // 0x202980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x202980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202984: 0xc086fea  jal         func_21BFA8
    ctx->pc = 0x202984u;
    SET_GPR_U32(ctx, 31, 0x20298Cu);
    ctx->pc = 0x202988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202984u;
    // 0x202988: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BFA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BFA8u, 0x202984u, 0x20298Cu)) {
        return;
    }
    ctx->pc = 0x20298Cu;
label_20298c:
    // 0x20298c: 0x24030208  addiu       $v1, $zero, 0x208
    ctx->pc = 0x20298cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x202990: 0x2442fff1  addiu       $v0, $v0, -0xF
    ctx->pc = 0x202990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967281));
    // 0x202994: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x202994u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x202998: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x202998u;
    {
        const bool branch_taken_0x202998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202998) {
            ctx->pc = 0x20299Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202998u;
            // 0x20299c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029A0u;
            goto label_2029a0;
        }
    }
    ctx->pc = 0x2029A0u;
label_2029a0:
    // 0x2029a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2029a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029a4: 0x1012  mflo        $v0
    ctx->pc = 0x2029a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2029a8: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x2029a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2029ac: 0xc086f8e  jal         func_21BE38
    ctx->pc = 0x2029ACu;
    SET_GPR_U32(ctx, 31, 0x2029B4u);
    ctx->pc = 0x2029B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029ACu;
    // 0x2029b0: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BE38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BE38u, 0x2029ACu, 0x2029B4u)) {
        return;
    }
    ctx->pc = 0x2029B4u;
label_2029b4:
    // 0x2029b4: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x2029b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2029b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2029b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029bc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2029bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2029c0: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2029C0u;
    {
        const bool branch_taken_0x2029c0 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2029C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029C0u;
        // 0x2029c4: 0xae400018  sw          $zero, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029c0) {
            ctx->pc = 0x202A04u;
            goto label_202a04;
        }
    }
    ctx->pc = 0x2029C8u;
label_2029c8:
    // 0x2029c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2029c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2029cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2029ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2029d0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2029d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2029d4: 0xc086f6a  jal         func_21BDA8
    ctx->pc = 0x2029D4u;
    SET_GPR_U32(ctx, 31, 0x2029DCu);
    ctx->pc = 0x2029D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2029D4u;
    // 0x2029d8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21BDA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21BDA8u, 0x2029D4u, 0x2029DCu)) {
        return;
    }
    ctx->pc = 0x2029DCu;
label_2029dc:
    // 0x2029dc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2029DCu;
    {
        const bool branch_taken_0x2029dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2029dc) {
            ctx->pc = 0x2029E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2029DCu;
            // 0x2029e0: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2029F4u;
            goto label_2029f4;
        }
    }
    ctx->pc = 0x2029E4u;
    // 0x2029e4: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x2029e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2029e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2029e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2029ec: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x2029ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x2029f0: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x2029f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2029f4:
    // 0x2029f4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2029f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2029f8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2029f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2029fc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2029FCu;
    {
        const bool branch_taken_0x2029fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2029FCu;
        // 0x202a00: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2029fc) {
            ctx->pc = 0x2029C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2029c8;
        }
    }
    ctx->pc = 0x202A04u;
label_202a04:
    // 0x202a04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x202a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202a08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x202a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x202a0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x202a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x202a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202a14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x202a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x202A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202A1Cu;
        // 0x202a20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202A24u;
    // 0x202a24: 0x0  nop
    ctx->pc = 0x202a24u;
    // NOP
    ctx->pc = 0x202a28u;
}
