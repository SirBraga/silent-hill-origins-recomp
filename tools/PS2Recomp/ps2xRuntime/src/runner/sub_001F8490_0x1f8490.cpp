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

// Function: sub_001F8490
// Address: 0x1f8490 - 0x1f84e8
void sub_001F8490_0x1f8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8490_0x1f8490");
#endif

    switch (ctx->pc) {
        case 0x1f84a4u: goto label_1f84a4;
        case 0x1f84b8u: goto label_1f84b8;
        case 0x1f84c8u: goto label_1f84c8;
        default: break;
    }

    ctx->pc = 0x1f8490u;

    // 0x1f8490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f849c: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x1F849Cu;
    SET_GPR_U32(ctx, 31, 0x1F84A4u);
    ctx->pc = 0x1F84A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F849Cu;
    // 0x1f84a0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x1F849Cu, 0x1F84A4u)) {
        return;
    }
    ctx->pc = 0x1F84A4u;
label_1f84a4:
    // 0x1f84a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f84a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84a8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F84A8u;
    {
        const bool branch_taken_0x1f84a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F84ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84A8u;
        // 0x1f84ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f84a8) {
            ctx->pc = 0x1F84BCu;
            goto label_1f84bc;
        }
    }
    ctx->pc = 0x1F84B0u;
    // 0x1f84b0: 0xc07e10c  jal         func_1F8430
    ctx->pc = 0x1F84B0u;
    SET_GPR_U32(ctx, 31, 0x1F84B8u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F84B0u, 0x1F84B8u)) {
        return;
    }
    ctx->pc = 0x1F84B8u;
label_1f84b8:
    // 0x1f84b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f84b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f84bc:
    // 0x1f84bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f84bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84c0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1F84C0u;
    SET_GPR_U32(ctx, 31, 0x1F84C8u);
    ctx->pc = 0x1F84C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F84C0u;
    // 0x1f84c4: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1F84C0u, 0x1F84C8u)) {
        return;
    }
    ctx->pc = 0x1F84C8u;
label_1f84c8:
    // 0x1f84c8: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x1f84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1f84cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f84ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f84d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1f84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1f84d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f84d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f84d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f84d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f84dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F84DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F84E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F84DCu;
        // 0x1f84e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F84DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F84E4u;
    // 0x1f84e4: 0x0  nop
    ctx->pc = 0x1f84e4u;
    // NOP
    ctx->pc = 0x1f84e8u;
}
