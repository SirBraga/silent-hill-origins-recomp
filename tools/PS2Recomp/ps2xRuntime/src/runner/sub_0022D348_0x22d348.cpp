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

// Function: sub_0022D348
// Address: 0x22d348 - 0x22d380
void sub_0022D348_0x22d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D348_0x22d348");
#endif

    switch (ctx->pc) {
        case 0x22d364u: goto label_22d364;
        case 0x22d370u: goto label_22d370;
        default: break;
    }

    ctx->pc = 0x22d348u;

    // 0x22d348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d34c: 0x8f8683f8  lw          $a2, -0x7C08($gp)
    ctx->pc = 0x22d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935544)));
    // 0x22d350: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22d354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d358: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22d358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d35c: 0xc08b4aa  jal         func_22D2A8
    ctx->pc = 0x22D35Cu;
    SET_GPR_U32(ctx, 31, 0x22D364u);
    ctx->pc = 0x22D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D35Cu;
    // 0x22d360: 0x8e054000  lw          $a1, 0x4000($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16384)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D2A8u, 0x22D35Cu, 0x22D364u)) {
        return;
    }
    ctx->pc = 0x22D364u;
label_22d364:
    // 0x22d364: 0x8e044004  lw          $a0, 0x4004($s0)
    ctx->pc = 0x22d364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16388)));
    // 0x22d368: 0xc093106  jal         func_24C418
    ctx->pc = 0x22D368u;
    SET_GPR_U32(ctx, 31, 0x22D370u);
    ctx->pc = 0x22D36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22D368u;
    // 0x22d36c: 0xae004000  sw          $zero, 0x4000($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16384), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C418u, 0x22D368u, 0x22D370u)) {
        return;
    }
    ctx->pc = 0x22D370u;
label_22d370:
    // 0x22d370: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d378: 0x3e00008  jr          $ra
    ctx->pc = 0x22D378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22D378u;
        // 0x22d37c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22D378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22D380u;
}
