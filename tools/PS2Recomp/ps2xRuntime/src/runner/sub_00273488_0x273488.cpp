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

// Function: sub_00273488
// Address: 0x273488 - 0x2734d0
void sub_00273488_0x273488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273488_0x273488");
#endif

    switch (ctx->pc) {
        case 0x273488u: goto label_273488;
        case 0x27348cu: goto label_27348c;
        case 0x273490u: goto label_273490;
        case 0x273494u: goto label_273494;
        case 0x273498u: goto label_273498;
        case 0x27349cu: goto label_27349c;
        case 0x2734a0u: goto label_2734a0;
        case 0x2734a4u: goto label_2734a4;
        case 0x2734a8u: goto label_2734a8;
        case 0x2734acu: goto label_2734ac;
        case 0x2734b0u: goto label_2734b0;
        case 0x2734b4u: goto label_2734b4;
        case 0x2734b8u: goto label_2734b8;
        case 0x2734bcu: goto label_2734bc;
        case 0x2734c0u: goto label_2734c0;
        case 0x2734c4u: goto label_2734c4;
        case 0x2734c8u: goto label_2734c8;
        case 0x2734ccu: goto label_2734cc;
        default: break;
    }

    ctx->pc = 0x273488u;

label_273488:
    // 0x273488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x273488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27348c:
    // 0x27348c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_273490:
    // 0x273490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_273494:
    // 0x273494: 0xc09cc18  jal         func_273060
label_273498:
    if (ctx->pc == 0x273498u) {
        ctx->pc = 0x273498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273494u;
        // 0x273498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27349Cu;
        goto label_27349c;
    }
    ctx->pc = 0x273494u;
    SET_GPR_U32(ctx, 31, 0x27349Cu);
    ctx->pc = 0x273498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273494u;
    // 0x273498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273060u, 0x273494u, 0x27349Cu)) {
        return;
    }
    ctx->pc = 0x27349Cu;
label_27349c:
    // 0x27349c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2734a0:
    // 0x2734a0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2734a4:
    if (ctx->pc == 0x2734A4u) {
        ctx->pc = 0x2734A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734A0u;
        // 0x2734a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734A8u;
        goto label_2734a8;
    }
    ctx->pc = 0x2734A0u;
    {
        const bool branch_taken_0x2734a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734A0u;
        // 0x2734a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734a0) {
            ctx->pc = 0x2734BCu;
            goto label_2734bc;
        }
    }
    ctx->pc = 0x2734A8u;
label_2734a8:
    // 0x2734a8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2734a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2734ac:
    // 0x2734ac: 0x40f809  jalr        $v0
label_2734b0:
    if (ctx->pc == 0x2734B0u) {
        ctx->pc = 0x2734B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734ACu;
        // 0x2734b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734B4u;
        goto label_2734b4;
    }
    ctx->pc = 0x2734ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2734B4u);
        ctx->pc = 0x2734B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734ACu;
        // 0x2734b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2734ACu, 0x2734B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2734B4u;
label_2734b4:
    // 0x2734b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2734b8:
    if (ctx->pc == 0x2734B8u) {
        ctx->pc = 0x2734B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734B4u;
        // 0x2734b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734BCu;
        goto label_2734bc;
    }
    ctx->pc = 0x2734B4u;
    {
        const bool branch_taken_0x2734b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2734B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734B4u;
        // 0x2734b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2734b4) {
            ctx->pc = 0x2734C0u;
            goto label_2734c0;
        }
    }
    ctx->pc = 0x2734BCu;
label_2734bc:
    // 0x2734bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2734bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2734c0:
    // 0x2734c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2734c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2734c4:
    // 0x2734c4: 0x3e00008  jr          $ra
label_2734c8:
    if (ctx->pc == 0x2734C8u) {
        ctx->pc = 0x2734C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C4u;
        // 0x2734c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2734CCu;
        goto label_2734cc;
    }
    ctx->pc = 0x2734C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2734C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2734C4u;
        // 0x2734c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2734C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2734CCu;
label_2734cc:
    // 0x2734cc: 0x0  nop
    ctx->pc = 0x2734ccu;
    // NOP
    ctx->pc = 0x2734d0u;
}
