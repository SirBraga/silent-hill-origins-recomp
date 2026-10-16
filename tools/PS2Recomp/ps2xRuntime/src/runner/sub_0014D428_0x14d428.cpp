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

// Function: sub_0014D428
// Address: 0x14d428 - 0x14d4a8
void sub_0014D428_0x14d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D428_0x14d428");
#endif

    switch (ctx->pc) {
        case 0x14d460u: goto label_14d460;
        case 0x14d474u: goto label_14d474;
        default: break;
    }

    ctx->pc = 0x14d428u;

    // 0x14d428: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d42c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x14d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x14d430: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14d430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14d434: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14d434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14d438: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d43c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d440: 0x8c438908  lw          $v1, -0x76F8($v0)
    ctx->pc = 0x14d440u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8908u));
    // 0x14d444: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x14d444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14d448: 0x14c30011  bne         $a2, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14D448u;
    {
        const bool branch_taken_0x14d448 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D448u;
        // 0x14d44c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d448) {
            ctx->pc = 0x14D490u;
            goto label_14d490;
        }
    }
    ctx->pc = 0x14D450u;
    // 0x14d450: 0x8e420158  lw          $v0, 0x158($s2)
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x14d454: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14D454u;
    {
        const bool branch_taken_0x14d454 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D454u;
        // 0x14d458: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d454) {
            ctx->pc = 0x14D48Cu;
            goto label_14d48c;
        }
    }
    ctx->pc = 0x14D45Cu;
    // 0x14d45c: 0x2650015c  addiu       $s0, $s2, 0x15C
    ctx->pc = 0x14d45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 348));
label_14d460:
    // 0x14d460: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14d464: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D464u;
    {
        const bool branch_taken_0x14d464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d464) {
            ctx->pc = 0x14D468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D464u;
            // 0x14d468: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D478u;
            goto label_14d478;
        }
    }
    ctx->pc = 0x14D46Cu;
    // 0x14d46c: 0xc0410c8  jal         func_104320
    ctx->pc = 0x14D46Cu;
    SET_GPR_U32(ctx, 31, 0x14D474u);
    ctx->pc = 0x14D470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D46Cu;
    // 0x14d470: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104320u, 0x14D46Cu, 0x14D474u)) {
        return;
    }
    ctx->pc = 0x14D474u;
label_14d474:
    // 0x14d474: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14d474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_14d478:
    // 0x14d478: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14d478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x14d47c: 0x8e420158  lw          $v0, 0x158($s2)
    ctx->pc = 0x14d47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x14d480: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x14d480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14d484: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x14D484u;
    {
        const bool branch_taken_0x14d484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D484u;
        // 0x14d488: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d484) {
            ctx->pc = 0x14D460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d460;
        }
    }
    ctx->pc = 0x14D48Cu;
label_14d48c:
    // 0x14d48c: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x14d48cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
label_14d490:
    // 0x14d490: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d494: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d498: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14d498u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d49c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d4a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4A0u;
        // 0x14d4a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D4A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D4A8u;
}
