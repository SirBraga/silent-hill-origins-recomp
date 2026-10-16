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

// Function: sub_001089B8
// Address: 0x1089b8 - 0x108a00
void sub_001089B8_0x1089b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089B8_0x1089b8");
#endif

    switch (ctx->pc) {
        case 0x1089e4u: goto label_1089e4;
        default: break;
    }

    ctx->pc = 0x1089b8u;

    // 0x1089b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1089b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1089bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1089bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1089c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1089c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1089c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1089c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089c8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1089c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1089cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1089CCu;
    {
        const bool branch_taken_0x1089cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089CCu;
        // 0x1089d0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089cc) {
            ctx->pc = 0x1089E4u;
            goto label_1089e4;
        }
    }
    ctx->pc = 0x1089D4u;
    // 0x1089d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1089d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d8: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1089d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x1089dc: 0xc06ca72  jal         func_1B29C8
    ctx->pc = 0x1089DCu;
    SET_GPR_U32(ctx, 31, 0x1089E4u);
    ctx->pc = 0x1089E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089DCu;
    // 0x1089e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B29C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B29C8u, 0x1089DCu, 0x1089E4u)) {
        return;
    }
    ctx->pc = 0x1089E4u;
label_1089e4:
    // 0x1089e4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1089e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1089e8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1089e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1089ec: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1089ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1089f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1089f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1089f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1089f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1089f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1089F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089F8u;
        // 0x1089fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1089F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A00u;
}
