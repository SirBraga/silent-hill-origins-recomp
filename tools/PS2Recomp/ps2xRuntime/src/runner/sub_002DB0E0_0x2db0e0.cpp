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

// Function: sub_002DB0E0
// Address: 0x2db0e0 - 0x2db148
void sub_002DB0E0_0x2db0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB0E0_0x2db0e0");
#endif

    switch (ctx->pc) {
        case 0x2db134u: goto label_2db134;
        default: break;
    }

    ctx->pc = 0x2db0e0u;

    // 0x2db0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2db0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2db0e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2db0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db0ec: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2db0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2db0f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB0F0u;
    {
        const bool branch_taken_0x2db0f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0F0u;
        // 0x2db0f4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0f0) {
            ctx->pc = 0x2DB104u;
            goto label_2db104;
        }
    }
    ctx->pc = 0x2DB0F8u;
    // 0x2db0f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0fc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DB0FCu;
    {
        const bool branch_taken_0x2db0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0FCu;
        // 0x2db100: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0fc) {
            ctx->pc = 0x2DB138u;
            goto label_2db138;
        }
    }
    ctx->pc = 0x2DB104u;
label_2db104:
    // 0x2db104: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2db108: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2db108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2db10c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2db10cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2db110: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2db110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2db114: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2db114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2db118: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2db118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2db11c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2db11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2db120: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2db120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2db124: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB124u;
    {
        const bool branch_taken_0x2db124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB124u;
        // 0x2db128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db124) {
            ctx->pc = 0x2DB138u;
            goto label_2db138;
        }
    }
    ctx->pc = 0x2DB12Cu;
    // 0x2db12c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2DB12Cu;
    SET_GPR_U32(ctx, 31, 0x2DB134u);
    ctx->pc = 0x2DB130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB12Cu;
    // 0x2db130: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DB12Cu, 0x2DB134u)) {
        return;
    }
    ctx->pc = 0x2DB134u;
label_2db134:
    // 0x2db134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2db134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db138:
    // 0x2db138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db13c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB13Cu;
        // 0x2db140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB144u;
    // 0x2db144: 0x0  nop
    ctx->pc = 0x2db144u;
    // NOP
    ctx->pc = 0x2db148u;
}
