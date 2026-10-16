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

// Function: sub_0019C520
// Address: 0x19c520 - 0x19c5a8
void sub_0019C520_0x19c520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C520_0x19c520");
#endif

    switch (ctx->pc) {
        case 0x19c554u: goto label_19c554;
        case 0x19c55cu: goto label_19c55c;
        case 0x19c57cu: goto label_19c57c;
        case 0x19c598u: goto label_19c598;
        default: break;
    }

    ctx->pc = 0x19c520u;

    // 0x19c520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c524: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19c524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19c528: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c52c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c530: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x19c530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x19c534: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x19c534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19c538: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19C538u;
    {
        const bool branch_taken_0x19c538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C538u;
        // 0x19c53c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c538) {
            ctx->pc = 0x19C564u;
            goto label_19c564;
        }
    }
    ctx->pc = 0x19C540u;
    // 0x19c540: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x19c540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19c544: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x19C544u;
    {
        const bool branch_taken_0x19c544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c544) {
            ctx->pc = 0x19C548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C544u;
            // 0x19c548: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C59Cu;
            goto label_19c59c;
        }
    }
    ctx->pc = 0x19C54Cu;
    // 0x19c54c: 0xc0ba768  jal         func_2E9DA0
    ctx->pc = 0x19C54Cu;
    SET_GPR_U32(ctx, 31, 0x19C554u);
    ctx->pc = 0x2E9DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9DA0u, 0x19C54Cu, 0x19C554u)) {
        return;
    }
    ctx->pc = 0x19C554u;
label_19c554:
    // 0x19c554: 0xc0ba774  jal         func_2E9DD0
    ctx->pc = 0x19C554u;
    SET_GPR_U32(ctx, 31, 0x19C55Cu);
    ctx->pc = 0x19C558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C554u;
    // 0x19c558: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9DD0u, 0x19C554u, 0x19C55Cu)) {
        return;
    }
    ctx->pc = 0x19C55Cu;
label_19c55c:
    // 0x19c55c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x19C55Cu;
    {
        const bool branch_taken_0x19c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C55Cu;
        // 0x19c560: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c55c) {
            ctx->pc = 0x19C59Cu;
            goto label_19c59c;
        }
    }
    ctx->pc = 0x19C564u;
label_19c564:
    // 0x19c564: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x19c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19c568: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C568u;
    {
        const bool branch_taken_0x19c568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c568) {
            ctx->pc = 0x19C56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C568u;
            // 0x19c56c: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C584u;
            goto label_19c584;
        }
    }
    ctx->pc = 0x19C570u;
    // 0x19c570: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x19c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19c574: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x19C574u;
    SET_GPR_U32(ctx, 31, 0x19C57Cu);
    ctx->pc = 0x19C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C574u;
    // 0x19c578: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x19C574u, 0x19C57Cu)) {
        return;
    }
    ctx->pc = 0x19C57Cu;
label_19c57c:
    // 0x19c57c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19C57Cu;
    {
        const bool branch_taken_0x19c57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C57Cu;
        // 0x19c580: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c57c) {
            ctx->pc = 0x19C59Cu;
            goto label_19c59c;
        }
    }
    ctx->pc = 0x19C584u;
label_19c584:
    // 0x19c584: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C584u;
    {
        const bool branch_taken_0x19c584 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x19c584) {
            ctx->pc = 0x19C588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C584u;
            // 0x19c588: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C59Cu;
            goto label_19c59c;
        }
    }
    ctx->pc = 0x19C58Cu;
    // 0x19c58c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x19c58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x19c590: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x19C590u;
    SET_GPR_U32(ctx, 31, 0x19C598u);
    ctx->pc = 0x19C594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C590u;
    // 0x19c594: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x19C590u, 0x19C598u)) {
        return;
    }
    ctx->pc = 0x19C598u;
label_19c598:
    // 0x19c598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c59c:
    // 0x19c59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C5A0u;
        // 0x19c5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5A8u;
}
