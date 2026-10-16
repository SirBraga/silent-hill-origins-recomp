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

// Function: sub_001D62E8
// Address: 0x1d62e8 - 0x1d6368
void sub_001D62E8_0x1d62e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D62E8_0x1d62e8");
#endif

    switch (ctx->pc) {
        case 0x1d6310u: goto label_1d6310;
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6338u: goto label_1d6338;
        default: break;
    }

    ctx->pc = 0x1d62e8u;

    // 0x1d62e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d62e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d62ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d62ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d62f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d62f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d62f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d62f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62f8: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1d62f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1d62fc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1d62fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1d6300: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6300u;
    {
        const bool branch_taken_0x1d6300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6300) {
            ctx->pc = 0x1D6304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6300u;
            // 0x1d6304: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6314u;
            goto label_1d6314;
        }
    }
    ctx->pc = 0x1D6308u;
    // 0x1d6308: 0xc07596a  jal         func_1D65A8
    ctx->pc = 0x1D6308u;
    SET_GPR_U32(ctx, 31, 0x1D6310u);
    ctx->pc = 0x1D65A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65A8u, 0x1D6308u, 0x1D6310u)) {
        return;
    }
    ctx->pc = 0x1D6310u;
label_1d6310:
    // 0x1d6310: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_1d6314:
    // 0x1d6314: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6314u;
    {
        const bool branch_taken_0x1d6314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6314) {
            ctx->pc = 0x1D6318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6314u;
            // 0x1d6318: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6328u;
            goto label_1d6328;
        }
    }
    ctx->pc = 0x1D631Cu;
    // 0x1d631c: 0xc07596e  jal         func_1D65B8
    ctx->pc = 0x1D631Cu;
    SET_GPR_U32(ctx, 31, 0x1D6324u);
    ctx->pc = 0x1D6320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D631Cu;
    // 0x1d6320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D65B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D65B8u, 0x1D631Cu, 0x1D6324u)) {
        return;
    }
    ctx->pc = 0x1D6324u;
label_1d6324:
    // 0x1d6324: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d6324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_1d6328:
    // 0x1d6328: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d6328u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d632c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D632Cu;
    {
        const bool branch_taken_0x1d632c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1D6330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D632Cu;
        // 0x1d6330: 0xae000090  sw          $zero, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d632c) {
            ctx->pc = 0x1D6358u;
            goto label_1d6358;
        }
    }
    ctx->pc = 0x1D6334u;
    // 0x1d6334: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d6334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6338:
    // 0x1d6338: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1d6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1d633c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d633cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d6340: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d6340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d6344: 0xac400094  sw          $zero, 0x94($v0)
    ctx->pc = 0x1d6344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 0));
    // 0x1d6348: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1d634c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1d634cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d6350: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D6350u;
    {
        const bool branch_taken_0x1d6350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6350u;
        // 0x1d6354: 0x24840098  addiu       $a0, $a0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6350) {
            ctx->pc = 0x1D6338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6338;
        }
    }
    ctx->pc = 0x1D6358u;
label_1d6358:
    // 0x1d6358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d6358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d635c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d635cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6360: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6360u;
        // 0x1d6364: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6368u;
}
