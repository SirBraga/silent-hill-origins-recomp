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

// Function: sub_0029A860
// Address: 0x29a860 - 0x29a890
void sub_0029A860_0x29a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A860_0x29a860");
#endif

    switch (ctx->pc) {
        case 0x29a860u: goto label_29a860;
        case 0x29a864u: goto label_29a864;
        case 0x29a868u: goto label_29a868;
        case 0x29a86cu: goto label_29a86c;
        case 0x29a870u: goto label_29a870;
        case 0x29a874u: goto label_29a874;
        case 0x29a878u: goto label_29a878;
        case 0x29a87cu: goto label_29a87c;
        case 0x29a880u: goto label_29a880;
        case 0x29a884u: goto label_29a884;
        case 0x29a888u: goto label_29a888;
        case 0x29a88cu: goto label_29a88c;
        default: break;
    }

    ctx->pc = 0x29a860u;

label_29a860:
    // 0x29a860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29a864:
    // 0x29a864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29a868:
    // 0x29a868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29a86c:
    // 0x29a86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a870:
    // 0x29a870: 0xa0f809  jalr        $a1
label_29a874:
    if (ctx->pc == 0x29A874u) {
        ctx->pc = 0x29A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A870u;
        // 0x29a874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A878u;
        goto label_29a878;
    }
    ctx->pc = 0x29A870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29A878u);
        ctx->pc = 0x29A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A870u;
        // 0x29a874: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A870u, 0x29A878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A878u;
label_29a878:
    // 0x29a878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a87c:
    // 0x29a87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a880:
    // 0x29a880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a884:
    // 0x29a884: 0x3e00008  jr          $ra
label_29a888:
    if (ctx->pc == 0x29A888u) {
        ctx->pc = 0x29A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A884u;
        // 0x29a888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A88Cu;
        goto label_29a88c;
    }
    ctx->pc = 0x29A884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A884u;
        // 0x29a888: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A88Cu;
label_29a88c:
    // 0x29a88c: 0x0  nop
    ctx->pc = 0x29a88cu;
    // NOP
    ctx->pc = 0x29a890u;
}
