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

// Function: sub_001D6368
// Address: 0x1d6368 - 0x1d63f8
void sub_001D6368_0x1d6368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6368_0x1d6368");
#endif

    switch (ctx->pc) {
        case 0x1d6390u: goto label_1d6390;
        case 0x1d63a4u: goto label_1d63a4;
        case 0x1d63b8u: goto label_1d63b8;
        default: break;
    }

    ctx->pc = 0x1d6368u;

    // 0x1d6368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d636c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d6370: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d6374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6378: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1d6378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1d637c: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d6380: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6380u;
    {
        const bool branch_taken_0x1d6380 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6380) {
            ctx->pc = 0x1D6384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6380u;
            // 0x1d6384: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6394u;
            goto label_1d6394;
        }
    }
    ctx->pc = 0x1D6388u;
    // 0x1d6388: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D6388u;
    SET_GPR_U32(ctx, 31, 0x1D6390u);
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D6388u, 0x1D6390u)) {
        return;
    }
    ctx->pc = 0x1D6390u;
label_1d6390:
    // 0x1d6390: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1d6390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1d6394:
    // 0x1d6394: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6394u;
    {
        const bool branch_taken_0x1d6394 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6394) {
            ctx->pc = 0x1D6398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6394u;
            // 0x1d6398: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D63A8u;
            goto label_1d63a8;
        }
    }
    ctx->pc = 0x1D639Cu;
    // 0x1d639c: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D639Cu;
    SET_GPR_U32(ctx, 31, 0x1D63A4u);
    ctx->pc = 0x1D63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D639Cu;
    // 0x1d63a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D639Cu, 0x1D63A4u)) {
        return;
    }
    ctx->pc = 0x1D63A4u;
label_1d63a4:
    // 0x1d63a4: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1d63a8:
    // 0x1d63a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d63a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d63ac: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D63ACu;
    {
        const bool branch_taken_0x1d63ac = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63ACu;
        // 0x1d63b0: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63ac) {
            ctx->pc = 0x1D63D8u;
            goto label_1d63d8;
        }
    }
    ctx->pc = 0x1D63B4u;
    // 0x1d63b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d63b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d63b8:
    // 0x1d63b8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1d63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1d63bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d63bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d63c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d63c4: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d63c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x1d63c8: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1d63cc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d63ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d63d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D63D0u;
    {
        const bool branch_taken_0x1d63d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D63D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63D0u;
        // 0x1d63d4: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63d0) {
            ctx->pc = 0x1D63B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d63b8;
        }
    }
    ctx->pc = 0x1D63D8u;
label_1d63d8:
    // 0x1d63d8: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1d63d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1d63dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d63dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d63e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d63e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d63e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D63E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D63E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D63E4u;
        // 0x1d63e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D63E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D63ECu;
    // 0x1d63ec: 0x0  nop
    ctx->pc = 0x1d63ecu;
    // NOP
    // 0x1d63f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d63f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d63f4: 0x0  nop
    ctx->pc = 0x1d63f4u;
    // NOP
    ctx->pc = 0x1d63f8u;
}
