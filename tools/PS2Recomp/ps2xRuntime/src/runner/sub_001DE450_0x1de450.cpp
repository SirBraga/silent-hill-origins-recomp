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

// Function: sub_001DE450
// Address: 0x1de450 - 0x1de4d8
void sub_001DE450_0x1de450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE450_0x1de450");
#endif

    switch (ctx->pc) {
        case 0x1de470u: goto label_1de470;
        case 0x1de478u: goto label_1de478;
        case 0x1de480u: goto label_1de480;
        case 0x1de488u: goto label_1de488;
        default: break;
    }

    ctx->pc = 0x1de450u;

    // 0x1de450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1de450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1de454: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1de454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1de458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1de458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1de45c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1de45cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de460: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DE460u;
    {
        const bool branch_taken_0x1de460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE460u;
        // 0x1de464: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de460) {
            ctx->pc = 0x1DE490u;
            goto label_1de490;
        }
    }
    ctx->pc = 0x1DE468u;
    // 0x1de468: 0xc092974  jal         func_24A5D0
    ctx->pc = 0x1DE468u;
    SET_GPR_U32(ctx, 31, 0x1DE470u);
    ctx->pc = 0x24A5D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D0u, 0x1DE468u, 0x1DE470u)) {
        return;
    }
    ctx->pc = 0x1DE470u;
label_1de470:
    // 0x1de470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE470u;
    {
        const bool branch_taken_0x1de470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE470u;
        // 0x1de474: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de470) {
            ctx->pc = 0x1DE480u;
            goto label_1de480;
        }
    }
    ctx->pc = 0x1DE478u;
label_1de478:
    // 0x1de478: 0xc0bbc32  jal         func_2EF0C8
    ctx->pc = 0x1DE478u;
    SET_GPR_U32(ctx, 31, 0x1DE480u);
    ctx->pc = 0x1DE47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE478u;
    // 0x1de47c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF0C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF0C8u, 0x1DE478u, 0x1DE480u)) {
        return;
    }
    ctx->pc = 0x1DE480u;
label_1de480:
    // 0x1de480: 0xc092976  jal         func_24A5D8
    ctx->pc = 0x1DE480u;
    SET_GPR_U32(ctx, 31, 0x1DE488u);
    ctx->pc = 0x1DE484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE480u;
    // 0x1de484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A5D8u, 0x1DE480u, 0x1DE488u)) {
        return;
    }
    ctx->pc = 0x1DE488u;
label_1de488:
    // 0x1de488: 0x5602fffb  bnel        $s0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DE488u;
    {
        const bool branch_taken_0x1de488 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de488) {
            ctx->pc = 0x1DE48Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE488u;
            // 0x1de48c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de478;
        }
    }
    ctx->pc = 0x1DE490u;
label_1de490:
    // 0x1de490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1de490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1de494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1de498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de49c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE49Cu;
        // 0x1de4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE4A4u;
    // 0x1de4a4: 0x0  nop
    ctx->pc = 0x1de4a4u;
    // NOP
    // 0x1de4a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1de4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1de4ac: 0x0  nop
    ctx->pc = 0x1de4acu;
    // NOP
    // 0x1de4b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1de4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1de4b4: 0x0  nop
    ctx->pc = 0x1de4b4u;
    // NOP
    // 0x1de4b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1de4bc: 0x0  nop
    ctx->pc = 0x1de4bcu;
    // NOP
    // 0x1de4c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1de4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1de4c4: 0x0  nop
    ctx->pc = 0x1de4c4u;
    // NOP
    // 0x1de4c8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1de4cc: 0x0  nop
    ctx->pc = 0x1de4ccu;
    // NOP
    // 0x1de4d0: 0x0  nop
    ctx->pc = 0x1de4d0u;
    // NOP
    // 0x1de4d4: 0x0  nop
    ctx->pc = 0x1de4d4u;
    // NOP
    ctx->pc = 0x1de4d8u;
}
