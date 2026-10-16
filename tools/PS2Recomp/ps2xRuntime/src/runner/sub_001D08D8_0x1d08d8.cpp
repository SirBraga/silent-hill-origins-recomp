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

// Function: sub_001D08D8
// Address: 0x1d08d8 - 0x1d0930
void sub_001D08D8_0x1d08d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D08D8_0x1d08d8");
#endif

    switch (ctx->pc) {
        case 0x1d08f8u: goto label_1d08f8;
        case 0x1d0910u: goto label_1d0910;
        default: break;
    }

    ctx->pc = 0x1d08d8u;

    // 0x1d08d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d08d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d08dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d08dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d08e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d08e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d08e4: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D08E4u;
    {
        const bool branch_taken_0x1d08e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08E4u;
        // 0x1d08e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08e4) {
            ctx->pc = 0x1D0918u;
            goto label_1d0918;
        }
    }
    ctx->pc = 0x1D08ECu;
    // 0x1d08ec: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d08ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d08f0: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D08F0u;
    SET_GPR_U32(ctx, 31, 0x1D08F8u);
    ctx->pc = 0x1D08F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D08F0u;
    // 0x1d08f4: 0x24a50a18  addiu       $a1, $a1, 0xA18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D08F0u, 0x1D08F8u)) {
        return;
    }
    ctx->pc = 0x1D08F8u;
label_1d08f8:
    // 0x1d08f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D08F8u;
    {
        const bool branch_taken_0x1d08f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D08FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D08F8u;
        // 0x1d08fc: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d08f8) {
            ctx->pc = 0x1D091Cu;
            goto label_1d091c;
        }
    }
    ctx->pc = 0x1D0900u;
    // 0x1d0900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0904: 0x24c60930  addiu       $a2, $a2, 0x930
    ctx->pc = 0x1d0904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2352));
    // 0x1d0908: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0908u;
    SET_GPR_U32(ctx, 31, 0x1D0910u);
    ctx->pc = 0x1D090Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0908u;
    // 0x1d090c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0908u, 0x1D0910u)) {
        return;
    }
    ctx->pc = 0x1D0910u;
label_1d0910:
    // 0x1d0910: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0910u;
    {
        const bool branch_taken_0x1d0910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0910u;
        // 0x1d0914: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0910) {
            ctx->pc = 0x1D0920u;
            goto label_1d0920;
        }
    }
    ctx->pc = 0x1D0918u;
label_1d0918:
    // 0x1d0918: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d091c:
    // 0x1d091c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d091cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0920:
    // 0x1d0920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0924: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0928: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0928u;
        // 0x1d092c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0930u;
}
