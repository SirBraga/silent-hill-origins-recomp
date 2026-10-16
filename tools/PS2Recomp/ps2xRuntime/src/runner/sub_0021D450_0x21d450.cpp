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

// Function: sub_0021D450
// Address: 0x21d450 - 0x21d4a0
void sub_0021D450_0x21d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D450_0x21d450");
#endif

    ctx->pc = 0x21d450u;

    // 0x21d450: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x21d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x21d454: 0x8c8501ac  lw          $a1, 0x1AC($a0)
    ctx->pc = 0x21d454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 428)));
    // 0x21d458: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x21d458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21d45c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21D45Cu;
    {
        const bool branch_taken_0x21d45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D45Cu;
        // 0x21d460: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d45c) {
            ctx->pc = 0x21D470u;
            goto label_21d470;
        }
    }
    ctx->pc = 0x21D464u;
    // 0x21d464: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d468: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21D468u;
    {
        const bool branch_taken_0x21d468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D468u;
        // 0x21d46c: 0xaca2001c  sw          $v0, 0x1C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d468) {
            ctx->pc = 0x21D490u;
            goto label_21d490;
        }
    }
    ctx->pc = 0x21D470u;
label_21d470:
    // 0x21d470: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x21d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x21d474: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21d474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21d478: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D478u;
    {
        const bool branch_taken_0x21d478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D478u;
        // 0x21d47c: 0x8c82014c  lw          $v0, 0x14C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d478) {
            ctx->pc = 0x21D488u;
            goto label_21d488;
        }
    }
    ctx->pc = 0x21D480u;
    // 0x21d480: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D480u;
    {
        const bool branch_taken_0x21d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D480u;
        // 0x21d484: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d480) {
            ctx->pc = 0x21D48Cu;
            goto label_21d48c;
        }
    }
    ctx->pc = 0x21D488u;
label_21d488:
    // 0x21d488: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21d48c:
    // 0x21d48c: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x21d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_21d490:
    // 0x21d490: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x21d490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x21d494: 0x3e00008  jr          $ra
    ctx->pc = 0x21D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D494u;
        // 0x21d498: 0xaca00014  sw          $zero, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D49Cu;
    // 0x21d49c: 0x0  nop
    ctx->pc = 0x21d49cu;
    // NOP
    ctx->pc = 0x21d4a0u;
}
