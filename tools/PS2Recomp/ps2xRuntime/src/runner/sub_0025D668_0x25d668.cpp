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

// Function: sub_0025D668
// Address: 0x25d668 - 0x25d6d0
void sub_0025D668_0x25d668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D668_0x25d668");
#endif

    switch (ctx->pc) {
        case 0x25d668u: goto label_25d668;
        case 0x25d66cu: goto label_25d66c;
        case 0x25d670u: goto label_25d670;
        case 0x25d674u: goto label_25d674;
        case 0x25d678u: goto label_25d678;
        case 0x25d67cu: goto label_25d67c;
        case 0x25d680u: goto label_25d680;
        case 0x25d684u: goto label_25d684;
        case 0x25d688u: goto label_25d688;
        case 0x25d68cu: goto label_25d68c;
        case 0x25d690u: goto label_25d690;
        case 0x25d694u: goto label_25d694;
        case 0x25d698u: goto label_25d698;
        case 0x25d69cu: goto label_25d69c;
        case 0x25d6a0u: goto label_25d6a0;
        case 0x25d6a4u: goto label_25d6a4;
        case 0x25d6a8u: goto label_25d6a8;
        case 0x25d6acu: goto label_25d6ac;
        case 0x25d6b0u: goto label_25d6b0;
        case 0x25d6b4u: goto label_25d6b4;
        case 0x25d6b8u: goto label_25d6b8;
        case 0x25d6bcu: goto label_25d6bc;
        case 0x25d6c0u: goto label_25d6c0;
        case 0x25d6c4u: goto label_25d6c4;
        case 0x25d6c8u: goto label_25d6c8;
        case 0x25d6ccu: goto label_25d6cc;
        default: break;
    }

    ctx->pc = 0x25d668u;

label_25d668:
    // 0x25d668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25d66c:
    // 0x25d66c: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x25d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
label_25d670:
    // 0x25d670: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25d674:
    // 0x25d674: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25d678:
    // 0x25d678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25d678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25d67c:
    // 0x25d67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25d680:
    // 0x25d680: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x25d680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_25d684:
    // 0x25d684: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25d684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25d688:
    // 0x25d688: 0x40f809  jalr        $v0
label_25d68c:
    if (ctx->pc == 0x25D68Cu) {
        ctx->pc = 0x25D690u;
        goto label_25d690;
    }
    ctx->pc = 0x25D688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25D690u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D688u, 0x25D690u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25D690u;
label_25d690:
    // 0x25d690: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25d694:
    if (ctx->pc == 0x25D694u) {
        ctx->pc = 0x25D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D690u;
        // 0x25d694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D698u;
        goto label_25d698;
    }
    ctx->pc = 0x25D690u;
    {
        const bool branch_taken_0x25d690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D690u;
        // 0x25d694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d690) {
            ctx->pc = 0x25D6BCu;
            goto label_25d6bc;
        }
    }
    ctx->pc = 0x25D698u;
label_25d698:
    // 0x25d698: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x25d698u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25d69c:
    // 0x25d69c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_25d6a0:
    if (ctx->pc == 0x25D6A0u) {
        ctx->pc = 0x25D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D69Cu;
        // 0x25d6a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6A4u;
        goto label_25d6a4;
    }
    ctx->pc = 0x25D69Cu;
    {
        const bool branch_taken_0x25d69c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D69Cu;
        // 0x25d6a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d69c) {
            ctx->pc = 0x25D6BCu;
            goto label_25d6bc;
        }
    }
    ctx->pc = 0x25D6A4u;
label_25d6a4:
    // 0x25d6a4: 0xc097500  jal         func_25D400
label_25d6a8:
    if (ctx->pc == 0x25D6A8u) {
        ctx->pc = 0x25D6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6A4u;
        // 0x25d6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6ACu;
        goto label_25d6ac;
    }
    ctx->pc = 0x25D6A4u;
    SET_GPR_U32(ctx, 31, 0x25D6ACu);
    ctx->pc = 0x25D6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6A4u;
    // 0x25d6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D400u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D400u, 0x25D6A4u, 0x25D6ACu)) {
        return;
    }
    ctx->pc = 0x25D6ACu;
label_25d6ac:
    // 0x25d6ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25d6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25d6b0:
    // 0x25d6b0: 0xc097516  jal         func_25D458
label_25d6b4:
    if (ctx->pc == 0x25D6B4u) {
        ctx->pc = 0x25D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6B0u;
        // 0x25d6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6B8u;
        goto label_25d6b8;
    }
    ctx->pc = 0x25D6B0u;
    SET_GPR_U32(ctx, 31, 0x25D6B8u);
    ctx->pc = 0x25D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D6B0u;
    // 0x25d6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25D458u, 0x25D6B0u, 0x25D6B8u)) {
        return;
    }
    ctx->pc = 0x25D6B8u;
label_25d6b8:
    // 0x25d6b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25d6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25d6bc:
    // 0x25d6bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d6bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25d6c0:
    // 0x25d6c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d6c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25d6c4:
    // 0x25d6c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d6c8:
    // 0x25d6c8: 0x3e00008  jr          $ra
label_25d6cc:
    if (ctx->pc == 0x25D6CCu) {
        ctx->pc = 0x25D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6C8u;
        // 0x25d6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25D6D0u;
        goto label_fallthrough_0x25d6c8;
    }
    ctx->pc = 0x25D6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6C8u;
        // 0x25d6cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25d6c8:
    ctx->pc = 0x25D6D0u;
}
