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

// Function: sub_00171FD0
// Address: 0x171fd0 - 0x172028
void sub_00171FD0_0x171fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171FD0_0x171fd0");
#endif

    switch (ctx->pc) {
        case 0x172004u: goto label_172004;
        default: break;
    }

    ctx->pc = 0x171fd0u;

    // 0x171fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171fd4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171fd8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171fdc: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x171fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x171fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171fe8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x171fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x171fec: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x171ff0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x171ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x171ff4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ff8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x171ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x171ffc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x171FFCu;
    SET_GPR_U32(ctx, 31, 0x172004u);
    ctx->pc = 0x172000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FFCu;
    // 0x172000: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x171FFCu, 0x172004u)) {
        return;
    }
    ctx->pc = 0x172004u;
label_172004:
    // 0x172004: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x172004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x172008: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x172008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17200c: 0x246357d0  addiu       $v1, $v1, 0x57D0
    ctx->pc = 0x17200cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22480));
    // 0x172010: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x172010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x172014: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x172014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x172018: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17201c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172020: 0x3e00008  jr          $ra
    ctx->pc = 0x172020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172020u;
        // 0x172024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172028u;
}
