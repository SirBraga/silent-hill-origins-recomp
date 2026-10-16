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

// Function: sub_001DB878
// Address: 0x1db878 - 0x1db8f0
void sub_001DB878_0x1db878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DB878_0x1db878");
#endif

    switch (ctx->pc) {
        case 0x1db8c0u: goto label_1db8c0;
        default: break;
    }

    ctx->pc = 0x1db878u;

    // 0x1db878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db87c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1db87cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db880: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DB880u;
    {
        const bool branch_taken_0x1db880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB880u;
        // 0x1db884: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db880) {
            ctx->pc = 0x1DB8C0u;
            goto label_1db8c0;
        }
    }
    ctx->pc = 0x1DB888u;
    // 0x1db888: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1DB888u;
    {
        const bool branch_taken_0x1db888 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1DB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB888u;
        // 0x1db88c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db888) {
            ctx->pc = 0x1DB8C0u;
            goto label_1db8c0;
        }
    }
    ctx->pc = 0x1DB890u;
    // 0x1db890: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DB890u;
    {
        const bool branch_taken_0x1db890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB890u;
        // 0x1db894: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db890) {
            ctx->pc = 0x1DB8C4u;
            goto label_1db8c4;
        }
    }
    ctx->pc = 0x1DB898u;
    // 0x1db898: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB898u;
    {
        const bool branch_taken_0x1db898 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB898u;
        // 0x1db89c: 0x3c05001e  lui         $a1, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db898) {
            ctx->pc = 0x1DB8A8u;
            goto label_1db8a8;
        }
    }
    ctx->pc = 0x1DB8A0u;
    // 0x1db8a0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB8A0u;
    {
        const bool branch_taken_0x1db8a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db8a0) {
            ctx->pc = 0x1DB8C4u;
            goto label_1db8c4;
        }
    }
    ctx->pc = 0x1DB8A8u;
label_1db8a8:
    // 0x1db8a8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x1db8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x1db8ac: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1db8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1db8b0: 0x24a5bf78  addiu       $a1, $a1, -0x4088
    ctx->pc = 0x1db8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950776));
    // 0x1db8b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1db8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1db8b8: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DB8B8u;
    SET_GPR_U32(ctx, 31, 0x1DB8C0u);
    ctx->pc = 0x1DB8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB8B8u;
    // 0x1db8bc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DB8B8u, 0x1DB8C0u)) {
        return;
    }
    ctx->pc = 0x1DB8C0u;
label_1db8c0:
    // 0x1db8c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1db8c4:
    // 0x1db8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB8C4u;
        // 0x1db8c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB8CCu;
    // 0x1db8cc: 0x0  nop
    ctx->pc = 0x1db8ccu;
    // NOP
    // 0x1db8d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1db8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1db8d4: 0x0  nop
    ctx->pc = 0x1db8d4u;
    // NOP
    // 0x1db8d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1db8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db8dc: 0x0  nop
    ctx->pc = 0x1db8dcu;
    // NOP
    // 0x1db8e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1db8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db8e4: 0x0  nop
    ctx->pc = 0x1db8e4u;
    // NOP
    // 0x1db8e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1db8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1db8ec: 0x0  nop
    ctx->pc = 0x1db8ecu;
    // NOP
    ctx->pc = 0x1db8f0u;
}
