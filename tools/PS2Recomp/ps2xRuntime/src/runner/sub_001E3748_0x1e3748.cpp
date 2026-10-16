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

// Function: sub_001E3748
// Address: 0x1e3748 - 0x1e3788
void sub_001E3748_0x1e3748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3748_0x1e3748");
#endif

    switch (ctx->pc) {
        case 0x1e3748u: goto label_1e3748;
        case 0x1e374cu: goto label_1e374c;
        case 0x1e3750u: goto label_1e3750;
        case 0x1e3754u: goto label_1e3754;
        case 0x1e3758u: goto label_1e3758;
        case 0x1e375cu: goto label_1e375c;
        case 0x1e3760u: goto label_1e3760;
        case 0x1e3764u: goto label_1e3764;
        case 0x1e3768u: goto label_1e3768;
        case 0x1e376cu: goto label_1e376c;
        case 0x1e3770u: goto label_1e3770;
        case 0x1e3774u: goto label_1e3774;
        case 0x1e3778u: goto label_1e3778;
        case 0x1e377cu: goto label_1e377c;
        case 0x1e3780u: goto label_1e3780;
        case 0x1e3784u: goto label_1e3784;
        default: break;
    }

    ctx->pc = 0x1e3748u;

label_1e3748:
    // 0x1e3748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e374c:
    // 0x1e374c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e3750:
    // 0x1e3750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e3754:
    // 0x1e3754: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3758:
    // 0x1e3758: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1e375c:
    // 0x1e375c: 0xc09d7cc  jal         func_275F30
label_1e3760:
    if (ctx->pc == 0x1E3760u) {
        ctx->pc = 0x1E3760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E375Cu;
        // 0x1e3760: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3764u;
        goto label_1e3764;
    }
    ctx->pc = 0x1E375Cu;
    SET_GPR_U32(ctx, 31, 0x1E3764u);
    ctx->pc = 0x1E3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E375Cu;
    // 0x1e3760: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275F30u, 0x1E375Cu, 0x1E3764u)) {
        return;
    }
    ctx->pc = 0x1E3764u;
label_1e3764:
    // 0x1e3764: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1e3768:
    // 0x1e3768: 0x40f809  jalr        $v0
label_1e376c:
    if (ctx->pc == 0x1E376Cu) {
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3770u;
        goto label_1e3770;
    }
    ctx->pc = 0x1E3768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E3770u);
        ctx->pc = 0x1E376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3768u;
        // 0x1e376c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3768u, 0x1E3770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E3770u;
label_1e3770:
    // 0x1e3770: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e3770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3774:
    // 0x1e3774: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x1e3774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_1e3778:
    // 0x1e3778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e377c:
    // 0x1e377c: 0x3e00008  jr          $ra
label_1e3780:
    if (ctx->pc == 0x1E3780u) {
        ctx->pc = 0x1E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E377Cu;
        // 0x1e3780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E3784u;
        goto label_1e3784;
    }
    ctx->pc = 0x1E377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E377Cu;
        // 0x1e3780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3784u;
label_1e3784:
    // 0x1e3784: 0x0  nop
    ctx->pc = 0x1e3784u;
    // NOP
    ctx->pc = 0x1e3788u;
}
