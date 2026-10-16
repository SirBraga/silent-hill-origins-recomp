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

// Function: sub_001D9638
// Address: 0x1d9638 - 0x1d96b8
void sub_001D9638_0x1d9638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9638_0x1d9638");
#endif

    switch (ctx->pc) {
        case 0x1d9668u: goto label_1d9668;
        case 0x1d968cu: goto label_1d968c;
        default: break;
    }

    ctx->pc = 0x1d9638u;

    // 0x1d9638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d9638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d963c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d963cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9640: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d9640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d9644: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d9644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9648: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d9648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d964c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d964cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9650: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d9650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1d9654: 0x245189e0  addiu       $s1, $v0, -0x7620
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
    // 0x1d9658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d965c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D965Cu;
    {
        const bool branch_taken_0x1d965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D965Cu;
        // 0x1d9660: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d965c) {
            ctx->pc = 0x1D966Cu;
            goto label_1d966c;
        }
    }
    ctx->pc = 0x1D9664u;
    // 0x1d9664: 0x0  nop
    ctx->pc = 0x1d9664u;
    // NOP
label_1d9668:
    // 0x1d9668: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d9668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d966c:
    // 0x1d966c: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9670: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9670u;
    {
        const bool branch_taken_0x1d9670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9670) {
            ctx->pc = 0x1D9674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9670u;
            // 0x1d9674: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D969Cu;
            goto label_1d969c;
        }
    }
    ctx->pc = 0x1D9678u;
    // 0x1d9678: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d9678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d967c: 0x5080fffa  beql        $a0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D967Cu;
    {
        const bool branch_taken_0x1d967c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d967c) {
            ctx->pc = 0x1D9680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D967Cu;
            // 0x1d9680: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9668;
        }
    }
    ctx->pc = 0x1D9684u;
    // 0x1d9684: 0xc0b747a  jal         func_2DD1E8
    ctx->pc = 0x1D9684u;
    SET_GPR_U32(ctx, 31, 0x1D968Cu);
    ctx->pc = 0x1D9688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9684u;
    // 0x1d9688: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD1E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD1E8u, 0x1D9684u, 0x1D968Cu)) {
        return;
    }
    ctx->pc = 0x1D968Cu;
label_1d968c:
    // 0x1d968c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d968cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9690: 0x1060fff5  beqz        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D9690u;
    {
        const bool branch_taken_0x1d9690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9690u;
        // 0x1d9694: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9690) {
            ctx->pc = 0x1D9668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9668;
        }
    }
    ctx->pc = 0x1D9698u;
    // 0x1d9698: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d9698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d969c:
    // 0x1d969c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1d969cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d96a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d96a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d96a4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d96a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d96a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d96a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d96ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D96ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D96B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96ACu;
        // 0x1d96b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D96ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D96B4u;
    // 0x1d96b4: 0x0  nop
    ctx->pc = 0x1d96b4u;
    // NOP
    ctx->pc = 0x1d96b8u;
}
