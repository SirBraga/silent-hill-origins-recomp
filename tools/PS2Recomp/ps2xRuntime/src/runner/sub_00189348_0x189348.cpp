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

// Function: sub_00189348
// Address: 0x189348 - 0x189390
void sub_00189348_0x189348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189348_0x189348");
#endif

    switch (ctx->pc) {
        case 0x18935cu: goto label_18935c;
        default: break;
    }

    ctx->pc = 0x189348u;

    // 0x189348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18934c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189354: 0xc062540  jal         func_189500
    ctx->pc = 0x189354u;
    SET_GPR_U32(ctx, 31, 0x18935Cu);
    ctx->pc = 0x189358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189354u;
    // 0x189358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189500u, 0x189354u, 0x18935Cu)) {
        return;
    }
    ctx->pc = 0x18935Cu;
label_18935c:
    // 0x18935c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18935Cu;
    {
        const bool branch_taken_0x18935c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x189360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18935Cu;
        // 0x189360: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18935c) {
            ctx->pc = 0x189380u;
            goto label_189380;
        }
    }
    ctx->pc = 0x189364u;
    // 0x189364: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x189364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x189368: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x189368u;
    {
        const bool branch_taken_0x189368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189368u;
        // 0x18936c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189368) {
            ctx->pc = 0x189384u;
            goto label_189384;
        }
    }
    ctx->pc = 0x189370u;
    // 0x189370: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x189370u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x189374: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x189374u;
    {
        const bool branch_taken_0x189374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189374u;
        // 0x189378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189374) {
            ctx->pc = 0x189384u;
            goto label_189384;
        }
    }
    ctx->pc = 0x18937Cu;
    // 0x18937c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18937cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_189380:
    // 0x189380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189384:
    // 0x189384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189388: 0x3e00008  jr          $ra
    ctx->pc = 0x189388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189388u;
        // 0x18938c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189390u;
}
