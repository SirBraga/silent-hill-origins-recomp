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

// Function: sub_0017B4C8
// Address: 0x17b4c8 - 0x17b550
void sub_0017B4C8_0x17b4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B4C8_0x17b4c8");
#endif

    switch (ctx->pc) {
        case 0x17b4f8u: goto label_17b4f8;
        case 0x17b524u: goto label_17b524;
        case 0x17b538u: goto label_17b538;
        default: break;
    }

    ctx->pc = 0x17b4c8u;

    // 0x17b4c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17b4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17b4cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17b4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17b4d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b4d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17b4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b4d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x17b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b4dc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B4DCu;
    {
        const bool branch_taken_0x17b4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4DCu;
        // 0x17b4e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4dc) {
            ctx->pc = 0x17B53Cu;
            goto label_17b53c;
        }
    }
    ctx->pc = 0x17B4E4u;
    // 0x17b4e4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x17b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x17b4e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B4E8u;
    {
        const bool branch_taken_0x17b4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4E8u;
        // 0x17b4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4e8) {
            ctx->pc = 0x17B4FCu;
            goto label_17b4fc;
        }
    }
    ctx->pc = 0x17B4F0u;
    // 0x17b4f0: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x17B4F0u;
    SET_GPR_U32(ctx, 31, 0x17B4F8u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x17B4F0u, 0x17B4F8u)) {
        return;
    }
    ctx->pc = 0x17B4F8u;
label_17b4f8:
    // 0x17b4f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17b4f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17b4fc:
    // 0x17b4fc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17B4FCu;
    {
        const bool branch_taken_0x17b4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B4FCu;
        // 0x17b500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4fc) {
            ctx->pc = 0x17B53Cu;
            goto label_17b53c;
        }
    }
    ctx->pc = 0x17B504u;
    // 0x17b504: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17b504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17b508: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x17b508u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x17b50c: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x17b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x17b510: 0x3863001b  xori        $v1, $v1, 0x1B
    ctx->pc = 0x17b510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)27);
    // 0x17b514: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17B514u;
    {
        const bool branch_taken_0x17b514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B514u;
        // 0x17b518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b514) {
            ctx->pc = 0x17B53Cu;
            goto label_17b53c;
        }
    }
    ctx->pc = 0x17B51Cu;
    // 0x17b51c: 0xc08114c  jal         func_204530
    ctx->pc = 0x17B51Cu;
    SET_GPR_U32(ctx, 31, 0x17B524u);
    ctx->pc = 0x17B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B51Cu;
    // 0x17b520: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x204530u, 0x17B51Cu, 0x17B524u)) {
        return;
    }
    ctx->pc = 0x17B524u;
label_17b524:
    // 0x17b524: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17B524u;
    {
        const bool branch_taken_0x17b524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B524u;
        // 0x17b528: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b524) {
            ctx->pc = 0x17B53Cu;
            goto label_17b53c;
        }
    }
    ctx->pc = 0x17B52Cu;
    // 0x17b52c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x17b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x17b530: 0xc08180c  jal         func_206030
    ctx->pc = 0x17B530u;
    SET_GPR_U32(ctx, 31, 0x17B538u);
    ctx->pc = 0x17B534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B530u;
    // 0x17b534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206030u, 0x17B530u, 0x17B538u)) {
        return;
    }
    ctx->pc = 0x17B538u;
label_17b538:
    // 0x17b538: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17b538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17b53c:
    // 0x17b53c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17b53cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b544: 0x3e00008  jr          $ra
    ctx->pc = 0x17B544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B544u;
        // 0x17b548: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B54Cu;
    // 0x17b54c: 0x0  nop
    ctx->pc = 0x17b54cu;
    // NOP
    ctx->pc = 0x17b550u;
}
