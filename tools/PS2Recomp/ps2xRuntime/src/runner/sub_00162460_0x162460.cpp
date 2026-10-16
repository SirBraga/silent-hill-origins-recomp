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

// Function: sub_00162460
// Address: 0x162460 - 0x1624d0
void sub_00162460_0x162460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162460_0x162460");
#endif

    switch (ctx->pc) {
        case 0x1624acu: goto label_1624ac;
        case 0x1624b8u: goto label_1624b8;
        default: break;
    }

    ctx->pc = 0x162460u;

    // 0x162460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162464: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x162464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x162468: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x162468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16246c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x162470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x162470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x162474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16247c: 0x244238e8  addiu       $v0, $v0, 0x38E8
    ctx->pc = 0x16247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14568));
    // 0x162480: 0x24633908  addiu       $v1, $v1, 0x3908
    ctx->pc = 0x162480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14600));
    // 0x162484: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x162484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x162488: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x162488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x16248c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x16248cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x162490: 0x8c62865c  lw          $v0, -0x79A4($v1)
    ctx->pc = 0x162490u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33865Cu));
    // 0x162494: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162494u;
    {
        const bool branch_taken_0x162494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x162498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162494u;
        // 0x162498: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162494) {
            ctx->pc = 0x1624A0u;
            goto label_1624a0;
        }
    }
    ctx->pc = 0x16249Cu;
    // 0x16249c: 0xac60865c  sw          $zero, -0x79A4($v1)
    ctx->pc = 0x16249cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294936156), GPR_U32(ctx, 0));
label_1624a0:
    // 0x1624a0: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x1624a4: 0xc07924c  jal         func_1E4930
    ctx->pc = 0x1624A4u;
    SET_GPR_U32(ctx, 31, 0x1624ACu);
    ctx->pc = 0x1624A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1624A4u;
    // 0x1624a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4930u, 0x1624A4u, 0x1624ACu)) {
        return;
    }
    ctx->pc = 0x1624ACu;
label_1624ac:
    // 0x1624ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1624acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624b0: 0xc04f084  jal         func_13C210
    ctx->pc = 0x1624B0u;
    SET_GPR_U32(ctx, 31, 0x1624B8u);
    ctx->pc = 0x1624B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1624B0u;
    // 0x1624b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1624B0u, 0x1624B8u)) {
        return;
    }
    ctx->pc = 0x1624B8u;
label_1624b8:
    // 0x1624b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1624b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1624bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1624bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1624c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1624c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1624c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1624C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1624C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624C4u;
        // 0x1624c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1624C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1624CCu;
    // 0x1624cc: 0x0  nop
    ctx->pc = 0x1624ccu;
    // NOP
    ctx->pc = 0x1624d0u;
}
