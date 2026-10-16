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

// Function: sub_00140110
// Address: 0x140110 - 0x140168
void sub_00140110_0x140110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140110_0x140110");
#endif

    switch (ctx->pc) {
        case 0x140124u: goto label_140124;
        case 0x14014cu: goto label_14014c;
        default: break;
    }

    ctx->pc = 0x140110u;

    // 0x140110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14011c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x14011Cu;
    SET_GPR_U32(ctx, 31, 0x140124u);
    ctx->pc = 0x140120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14011Cu;
    // 0x140120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x14011Cu, 0x140124u)) {
        return;
    }
    ctx->pc = 0x140124u;
label_140124:
    // 0x140124: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x140124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x140128: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x140128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14012c: 0x24630a18  addiu       $v1, $v1, 0xA18
    ctx->pc = 0x14012cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2584));
    // 0x140130: 0x24420a38  addiu       $v0, $v0, 0xA38
    ctx->pc = 0x140130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2616));
    // 0x140134: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x140134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x140138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14013c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x14013cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x140140: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x140140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x140144: 0xc04ff30  jal         func_13FCC0
    ctx->pc = 0x140144u;
    SET_GPR_U32(ctx, 31, 0x14014Cu);
    ctx->pc = 0x140148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140144u;
    // 0x140148: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13FCC0u, 0x140144u, 0x14014Cu)) {
        return;
    }
    ctx->pc = 0x14014Cu;
label_14014c:
    // 0x14014c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x140150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140154: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x140154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    // 0x140158: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14015c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14015cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140160: 0x3e00008  jr          $ra
    ctx->pc = 0x140160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140160u;
        // 0x140164: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140168u;
}
