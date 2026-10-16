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

// Function: sub_001AE420
// Address: 0x1ae420 - 0x1ae480
void sub_001AE420_0x1ae420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE420_0x1ae420");
#endif

    switch (ctx->pc) {
        case 0x1ae438u: goto label_1ae438;
        case 0x1ae450u: goto label_1ae450;
        case 0x1ae458u: goto label_1ae458;
        default: break;
    }

    ctx->pc = 0x1ae420u;

    // 0x1ae420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ae424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ae428: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ae428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ae42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ae42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ae430: 0xc0746b2  jal         func_1D1AC8
    ctx->pc = 0x1AE430u;
    SET_GPR_U32(ctx, 31, 0x1AE438u);
    ctx->pc = 0x1AE434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE430u;
    // 0x1ae434: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1AC8u, 0x1AE430u, 0x1AE438u)) {
        return;
    }
    ctx->pc = 0x1AE438u;
label_1ae438:
    // 0x1ae438: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ae438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ae43c: 0x8c508618  lw          $s0, -0x79E8($v0)
    ctx->pc = 0x1ae43cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6F8618u));
    // 0x1ae440: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE440u;
    {
        const bool branch_taken_0x1ae440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ae440) {
            ctx->pc = 0x1AE444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE440u;
            // 0x1ae444: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE46Cu;
            goto label_1ae46c;
        }
    }
    ctx->pc = 0x1AE448u;
    // 0x1ae448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ae448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae44c: 0x0  nop
    ctx->pc = 0x1ae44cu;
    // NOP
label_1ae450:
    // 0x1ae450: 0xc06b396  jal         func_1ACE58
    ctx->pc = 0x1AE450u;
    SET_GPR_U32(ctx, 31, 0x1AE458u);
    ctx->pc = 0x1AE454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE450u;
    // 0x1ae454: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ACE58u, 0x1AE450u, 0x1AE458u)) {
        return;
    }
    ctx->pc = 0x1AE458u;
label_1ae458:
    // 0x1ae458: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1ae458u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ae45c: 0x0  nop
    ctx->pc = 0x1ae45cu;
    // NOP
    // 0x1ae460: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1AE460u;
    {
        const bool branch_taken_0x1ae460 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE460u;
        // 0x1ae464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae460) {
            ctx->pc = 0x1AE450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ae450;
        }
    }
    ctx->pc = 0x1AE468u;
    // 0x1ae468: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ae468u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ae46c:
    // 0x1ae46c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ae46cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ae470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ae474: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE474u;
        // 0x1ae478: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE47Cu;
    // 0x1ae47c: 0x0  nop
    ctx->pc = 0x1ae47cu;
    // NOP
    ctx->pc = 0x1ae480u;
}
