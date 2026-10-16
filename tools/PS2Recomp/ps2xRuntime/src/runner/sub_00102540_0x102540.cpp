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

// Function: sub_00102540
// Address: 0x102540 - 0x102578
void sub_00102540_0x102540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102540_0x102540");
#endif

    ctx->pc = 0x102540u;

    // 0x102540: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x102540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x102544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102544u;
    {
        const bool branch_taken_0x102544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102544) {
            ctx->pc = 0x102564u;
            goto label_102564;
        }
    }
    ctx->pc = 0x10254Cu;
    // 0x10254c: 0x8c8202a4  lw          $v0, 0x2A4($a0)
    ctx->pc = 0x10254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 676)));
    // 0x102550: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x102550u;
    {
        const bool branch_taken_0x102550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102550) {
            ctx->pc = 0x102564u;
            goto label_102564;
        }
    }
    ctx->pc = 0x102558u;
    // 0x102558: 0x8c82019c  lw          $v0, 0x19C($a0)
    ctx->pc = 0x102558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x10255c: 0x3e00008  jr          $ra
    ctx->pc = 0x10255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10255Cu;
        // 0x102560: 0xc4400004  lwc1        $f0, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102564u;
label_102564:
    // 0x102564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x102564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x102568: 0x3e00008  jr          $ra
    ctx->pc = 0x102568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102570u;
    // 0x102570: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x102570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102574: 0x0  nop
    ctx->pc = 0x102574u;
    // NOP
    ctx->pc = 0x102578u;
}
