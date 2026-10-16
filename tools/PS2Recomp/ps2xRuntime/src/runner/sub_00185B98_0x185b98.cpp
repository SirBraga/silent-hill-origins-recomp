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

// Function: sub_00185B98
// Address: 0x185b98 - 0x185be8
void sub_00185B98_0x185b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185B98_0x185b98");
#endif

    switch (ctx->pc) {
        case 0x185b98u: goto label_185b98;
        case 0x185b9cu: goto label_185b9c;
        case 0x185ba0u: goto label_185ba0;
        case 0x185ba4u: goto label_185ba4;
        case 0x185ba8u: goto label_185ba8;
        case 0x185bacu: goto label_185bac;
        case 0x185bb0u: goto label_185bb0;
        case 0x185bb4u: goto label_185bb4;
        case 0x185bb8u: goto label_185bb8;
        case 0x185bbcu: goto label_185bbc;
        case 0x185bc0u: goto label_185bc0;
        case 0x185bc4u: goto label_185bc4;
        case 0x185bc8u: goto label_185bc8;
        case 0x185bccu: goto label_185bcc;
        case 0x185bd0u: goto label_185bd0;
        case 0x185bd4u: goto label_185bd4;
        case 0x185bd8u: goto label_185bd8;
        case 0x185bdcu: goto label_185bdc;
        case 0x185be0u: goto label_185be0;
        case 0x185be4u: goto label_185be4;
        default: break;
    }

    ctx->pc = 0x185b98u;

label_185b98:
    // 0x185b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x185b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_185b9c:
    // 0x185b9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x185b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185ba0:
    // 0x185ba0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_185ba4:
    if (ctx->pc == 0x185BA4u) {
        ctx->pc = 0x185BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA0u;
        // 0x185ba4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BA8u;
        goto label_185ba8;
    }
    ctx->pc = 0x185BA0u;
    {
        const bool branch_taken_0x185ba0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA0u;
        // 0x185ba4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ba0) {
            ctx->pc = 0x185BC0u;
            goto label_185bc0;
        }
    }
    ctx->pc = 0x185BA8u;
label_185ba8:
    // 0x185ba8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x185ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_185bac:
    // 0x185bac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x185bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_185bb0:
    // 0x185bb0: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x185bb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_185bb4:
    // 0x185bb4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x185bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_185bb8:
    // 0x185bb8: 0x60f809  jalr        $v1
label_185bbc:
    if (ctx->pc == 0x185BBCu) {
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BB8u;
        // 0x185bbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BC0u;
        goto label_185bc0;
    }
    ctx->pc = 0x185BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185BC0u);
        ctx->pc = 0x185BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BB8u;
        // 0x185bbc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BB8u, 0x185BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185BC0u;
label_185bc0:
    // 0x185bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185bc4:
    // 0x185bc4: 0x3e00008  jr          $ra
label_185bc8:
    if (ctx->pc == 0x185BC8u) {
        ctx->pc = 0x185BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC4u;
        // 0x185bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BCCu;
        goto label_185bcc;
    }
    ctx->pc = 0x185BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC4u;
        // 0x185bc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185BCCu;
label_185bcc:
    // 0x185bcc: 0x0  nop
    ctx->pc = 0x185bccu;
    // NOP
label_185bd0:
    // 0x185bd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185bd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185bd4:
    // 0x185bd4: 0x0  nop
    ctx->pc = 0x185bd4u;
    // NOP
label_185bd8:
    // 0x185bd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185bdc:
    // 0x185bdc: 0x0  nop
    ctx->pc = 0x185bdcu;
    // NOP
label_185be0:
    // 0x185be0: 0x0  nop
    ctx->pc = 0x185be0u;
    // NOP
label_185be4:
    // 0x185be4: 0x0  nop
    ctx->pc = 0x185be4u;
    // NOP
    ctx->pc = 0x185be8u;
}
