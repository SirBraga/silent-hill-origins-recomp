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

// Function: sub_00317828
// Address: 0x317828 - 0x3178c8
void sub_00317828_0x317828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317828_0x317828");
#endif

    switch (ctx->pc) {
        case 0x317860u: goto label_317860;
        case 0x3178b8u: goto label_3178b8;
        default: break;
    }

    ctx->pc = 0x317828u;

    // 0x317828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x317828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31782c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x31782cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317830: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x317830u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x317834: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x317834u;
    {
        const bool branch_taken_0x317834 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x317838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317834u;
        // 0x317838: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317834) {
            ctx->pc = 0x317848u;
            goto label_317848;
        }
    }
    ctx->pc = 0x31783Cu;
    // 0x31783c: 0x41823  negu        $v1, $a0
    ctx->pc = 0x31783cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x317840: 0x38c2000a  xori        $v0, $a2, 0xA
    ctx->pc = 0x317840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
    // 0x317844: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x317844u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_317848:
    // 0x317848: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x317848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31784c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x31784cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317850: 0x244b7038  addiu       $t3, $v0, 0x7038
    ctx->pc = 0x317850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 28728));
    // 0x317854: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x317854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317858: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x317858u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x31785c: 0x0  nop
    ctx->pc = 0x31785cu;
    // NOP
label_317860:
    // 0x317860: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x317860u;
    {
        const bool branch_taken_0x317860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x317860) {
            ctx->pc = 0x317864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317860u;
            // 0x317864: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x317868u;
            goto label_317868;
        }
    }
    ctx->pc = 0x317868u;
label_317868:
    // 0x317868: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x317868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x31786c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x31786cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x317870: 0x1810  mfhi        $v1
    ctx->pc = 0x317870u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x317874: 0x2012  mflo        $a0
    ctx->pc = 0x317874u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x317878: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x317878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x31787c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x31787cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317880: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x317880u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317884: 0x50c80001  beql        $a2, $t0, . + 4 + (0x1 << 2)
    ctx->pc = 0x317884u;
    {
        const bool branch_taken_0x317884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x317884) {
            ctx->pc = 0x317888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317884u;
            // 0x317888: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31788Cu;
            goto label_31788c;
        }
    }
    ctx->pc = 0x31788Cu;
label_31788c:
    // 0x31788c: 0x5480fff4  bnel        $a0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x31788Cu;
    {
        const bool branch_taken_0x31788c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x31788c) {
            ctx->pc = 0x317890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31788Cu;
            // 0x317890: 0x86001b  divu        $zero, $a0, $a2 (Delay Slot)
            { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x317860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317860;
        }
    }
    ctx->pc = 0x317894u;
    // 0x317894: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x317894u;
    {
        const bool branch_taken_0x317894 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x317898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x317894u;
        // 0x317898: 0x1271821  addu        $v1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317894) {
            ctx->pc = 0x3178A8u;
            goto label_3178a8;
        }
    }
    ctx->pc = 0x31789Cu;
    // 0x31789c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x31789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3178a0: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x3178a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3178a4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3178a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3178a8:
    // 0x3178a8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3178a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3178ac: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x3178acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3178b0: 0xc0c5dec  jal         func_3177B0
    ctx->pc = 0x3178B0u;
    SET_GPR_U32(ctx, 31, 0x3178B8u);
    ctx->pc = 0x3178B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3178B0u;
    // 0x3178b4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3177B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3177B0u, 0x3178B0u, 0x3178B8u)) {
        return;
    }
    ctx->pc = 0x3178B8u;
label_3178b8:
    // 0x3178b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3178b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3178bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3178BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3178C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3178BCu;
        // 0x3178c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3178BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3178C4u;
    // 0x3178c4: 0x0  nop
    ctx->pc = 0x3178c4u;
    // NOP
    ctx->pc = 0x3178c8u;
}
