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

// Function: sub_00167138
// Address: 0x167138 - 0x167198
void sub_00167138_0x167138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167138_0x167138");
#endif

    switch (ctx->pc) {
        case 0x167160u: goto label_167160;
        case 0x167180u: goto label_167180;
        default: break;
    }

    ctx->pc = 0x167138u;

    // 0x167138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16713c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x167140: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x167140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x167144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x167144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167148: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16714c: 0x8c648670  lw          $a0, -0x7990($v1)
    ctx->pc = 0x16714cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x338670u));
    // 0x167150: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x167154: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x167154) {
            ctx->pc = 0x167178u;
            goto label_167178;
        }
    }
    ctx->pc = 0x16715Cu;
    // 0x16715c: 0x8c84006c  lw          $a0, 0x6C($a0)
    ctx->pc = 0x16715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_167160:
    // 0x167160: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x167160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x167164: 0x0  nop
    ctx->pc = 0x167164u;
    // NOP
    // 0x167168: 0x0  nop
    ctx->pc = 0x167168u;
    // NOP
    // 0x16716c: 0x0  nop
    ctx->pc = 0x16716cu;
    // NOP
    // 0x167170: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x167170u;
    {
        const bool branch_taken_0x167170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x167170) {
            ctx->pc = 0x167174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167170u;
            // 0x167174: 0x8c84006c  lw          $a0, 0x6C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167160;
        }
    }
    ctx->pc = 0x167178u;
label_167178:
    // 0x167178: 0xc05989e  jal         func_166278
    ctx->pc = 0x167178u;
    SET_GPR_U32(ctx, 31, 0x167180u);
    ctx->pc = 0x166278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x166278u, 0x167178u, 0x167180u)) {
        return;
    }
    ctx->pc = 0x167180u;
label_167180:
    // 0x167180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167188: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16718c: 0x3e00008  jr          $ra
    ctx->pc = 0x16718Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16718Cu;
        // 0x167190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16718Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167194u;
    // 0x167194: 0x0  nop
    ctx->pc = 0x167194u;
    // NOP
    ctx->pc = 0x167198u;
}
