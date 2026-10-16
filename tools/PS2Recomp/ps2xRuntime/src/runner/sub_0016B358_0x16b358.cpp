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

// Function: sub_0016B358
// Address: 0x16b358 - 0x16b3b0
void sub_0016B358_0x16b358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B358_0x16b358");
#endif

    switch (ctx->pc) {
        case 0x16b36cu: goto label_16b36c;
        case 0x16b38cu: goto label_16b38c;
        case 0x16b394u: goto label_16b394;
        default: break;
    }

    ctx->pc = 0x16b358u;

    // 0x16b358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b35c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b360: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b364: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16B364u;
    SET_GPR_U32(ctx, 31, 0x16B36Cu);
    ctx->pc = 0x16B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B364u;
    // 0x16b368: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16B364u, 0x16B36Cu)) {
        return;
    }
    ctx->pc = 0x16B36Cu;
label_16b36c:
    // 0x16b36c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16b36cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16b370: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16b370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16b374: 0x24634760  addiu       $v1, $v1, 0x4760
    ctx->pc = 0x16b374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18272));
    // 0x16b378: 0x24424718  addiu       $v0, $v0, 0x4718
    ctx->pc = 0x16b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18200));
    // 0x16b37c: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16b380: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16b384: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16B384u;
    SET_GPR_U32(ctx, 31, 0x16B38Cu);
    ctx->pc = 0x16B388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B384u;
    // 0x16b388: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16B384u, 0x16B38Cu)) {
        return;
    }
    ctx->pc = 0x16B38Cu;
label_16b38c:
    // 0x16b38c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16B38Cu;
    SET_GPR_U32(ctx, 31, 0x16B394u);
    ctx->pc = 0x16B390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B38Cu;
    // 0x16b390: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16B38Cu, 0x16B394u)) {
        return;
    }
    ctx->pc = 0x16B394u;
label_16b394:
    // 0x16b394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b398: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16b398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b39c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x16b39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    // 0x16b3a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b3a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x16B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3A8u;
        // 0x16b3ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B3B0u;
}
