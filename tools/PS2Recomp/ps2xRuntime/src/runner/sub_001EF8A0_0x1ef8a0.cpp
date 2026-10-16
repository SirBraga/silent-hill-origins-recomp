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

// Function: sub_001EF8A0
// Address: 0x1ef8a0 - 0x1ef8e0
void sub_001EF8A0_0x1ef8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF8A0_0x1ef8a0");
#endif

    switch (ctx->pc) {
        case 0x1ef8bcu: goto label_1ef8bc;
        case 0x1ef8c4u: goto label_1ef8c4;
        case 0x1ef8ccu: goto label_1ef8cc;
        default: break;
    }

    ctx->pc = 0x1ef8a0u;

    // 0x1ef8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ef8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ef8a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ef8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef8a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ef8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ef8ac: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1ef8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ef8b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef8b4: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1EF8B4u;
    SET_GPR_U32(ctx, 31, 0x1EF8BCu);
    ctx->pc = 0x1EF8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8B4u;
    // 0x1ef8b8: 0x3c10006b  lui         $s0, 0x6B (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1EF8B4u, 0x1EF8BCu)) {
        return;
    }
    ctx->pc = 0x1EF8BCu;
label_1ef8bc:
    // 0x1ef8bc: 0xc07be52  jal         func_1EF948
    ctx->pc = 0x1EF8BCu;
    SET_GPR_U32(ctx, 31, 0x1EF8C4u);
    ctx->pc = 0x1EF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8BCu;
    // 0x1ef8c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF948u, 0x1EF8BCu, 0x1EF8C4u)) {
        return;
    }
    ctx->pc = 0x1EF8C4u;
label_1ef8c4:
    // 0x1ef8c4: 0xc07c2e2  jal         func_1F0B88
    ctx->pc = 0x1EF8C4u;
    SET_GPR_U32(ctx, 31, 0x1EF8CCu);
    ctx->pc = 0x1EF8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF8C4u;
    // 0x1ef8c8: 0xae024120  sw          $v0, 0x4120($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F0B88u, 0x1EF8C4u, 0x1EF8CCu)) {
        return;
    }
    ctx->pc = 0x1EF8CCu;
label_1ef8cc:
    // 0x1ef8cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ef8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef8d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8D4u;
        // 0x1ef8d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF8DCu;
    // 0x1ef8dc: 0x0  nop
    ctx->pc = 0x1ef8dcu;
    // NOP
    ctx->pc = 0x1ef8e0u;
}
