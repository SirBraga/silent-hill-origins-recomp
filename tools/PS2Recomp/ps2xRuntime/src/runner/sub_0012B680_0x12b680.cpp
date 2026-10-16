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

// Function: sub_0012B680
// Address: 0x12b680 - 0x12b6e0
void sub_0012B680_0x12b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B680_0x12b680");
#endif

    switch (ctx->pc) {
        case 0x12b680u: goto label_12b680;
        case 0x12b684u: goto label_12b684;
        case 0x12b688u: goto label_12b688;
        case 0x12b68cu: goto label_12b68c;
        case 0x12b690u: goto label_12b690;
        case 0x12b694u: goto label_12b694;
        case 0x12b698u: goto label_12b698;
        case 0x12b69cu: goto label_12b69c;
        case 0x12b6a0u: goto label_12b6a0;
        case 0x12b6a4u: goto label_12b6a4;
        case 0x12b6a8u: goto label_12b6a8;
        case 0x12b6acu: goto label_12b6ac;
        case 0x12b6b0u: goto label_12b6b0;
        case 0x12b6b4u: goto label_12b6b4;
        case 0x12b6b8u: goto label_12b6b8;
        case 0x12b6bcu: goto label_12b6bc;
        case 0x12b6c0u: goto label_12b6c0;
        case 0x12b6c4u: goto label_12b6c4;
        case 0x12b6c8u: goto label_12b6c8;
        case 0x12b6ccu: goto label_12b6cc;
        case 0x12b6d0u: goto label_12b6d0;
        case 0x12b6d4u: goto label_12b6d4;
        case 0x12b6d8u: goto label_12b6d8;
        case 0x12b6dcu: goto label_12b6dc;
        default: break;
    }

    ctx->pc = 0x12b680u;

label_12b680:
    // 0x12b680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12b684:
    // 0x12b684: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_12b688:
    // 0x12b688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12b68c:
    // 0x12b68c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12b690:
    // 0x12b690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12b694:
    // 0x12b694: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x12b694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_12b698:
    // 0x12b698: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12b698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12b69c:
    // 0x12b69c: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x12b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_12b6a0:
    // 0x12b6a0: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x12b6a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_12b6a4:
    // 0x12b6a4: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x12b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_12b6a8:
    // 0x12b6a8: 0x40f809  jalr        $v0
label_12b6ac:
    if (ctx->pc == 0x12B6ACu) {
        ctx->pc = 0x12B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6A8u;
        // 0x12b6ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6B0u;
        goto label_12b6b0;
    }
    ctx->pc = 0x12B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B6B0u);
        ctx->pc = 0x12B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6A8u;
        // 0x12b6ac: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B6A8u, 0x12B6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12B6B0u;
label_12b6b0:
    // 0x12b6b0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_12b6b4:
    if (ctx->pc == 0x12B6B4u) {
        ctx->pc = 0x12B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6B0u;
        // 0x12b6b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6B8u;
        goto label_12b6b8;
    }
    ctx->pc = 0x12B6B0u;
    {
        const bool branch_taken_0x12b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b6b0) {
            ctx->pc = 0x12B6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B6B0u;
            // 0x12b6b4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B6C8u;
            goto label_12b6c8;
        }
    }
    ctx->pc = 0x12B6B8u;
label_12b6b8:
    // 0x12b6b8: 0x8e020d18  lw          $v0, 0xD18($s0)
    ctx->pc = 0x12b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3352)));
label_12b6bc:
    // 0x12b6bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12b6c0:
    if (ctx->pc == 0x12B6C0u) {
        ctx->pc = 0x12B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6BCu;
        // 0x12b6c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6C4u;
        goto label_12b6c4;
    }
    ctx->pc = 0x12B6BCu;
    {
        const bool branch_taken_0x12b6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6BCu;
        // 0x12b6c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b6bc) {
            ctx->pc = 0x12B6CCu;
            goto label_12b6cc;
        }
    }
    ctx->pc = 0x12B6C4u;
label_12b6c4:
    // 0x12b6c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12b6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12b6c8:
    // 0x12b6c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12b6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12b6cc:
    // 0x12b6cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12b6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12b6d0:
    // 0x12b6d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12b6d4:
    // 0x12b6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b6d8:
    // 0x12b6d8: 0x3e00008  jr          $ra
label_12b6dc:
    if (ctx->pc == 0x12B6DCu) {
        ctx->pc = 0x12B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D8u;
        // 0x12b6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12B6E0u;
        goto label_fallthrough_0x12b6d8;
    }
    ctx->pc = 0x12B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B6D8u;
        // 0x12b6dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x12b6d8:
    ctx->pc = 0x12B6E0u;
}
