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

// Function: sub_002EF678
// Address: 0x2ef678 - 0x2ef6e0
void sub_002EF678_0x2ef678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF678_0x2ef678");
#endif

    switch (ctx->pc) {
        case 0x2ef678u: goto label_2ef678;
        case 0x2ef67cu: goto label_2ef67c;
        case 0x2ef680u: goto label_2ef680;
        case 0x2ef684u: goto label_2ef684;
        case 0x2ef688u: goto label_2ef688;
        case 0x2ef68cu: goto label_2ef68c;
        case 0x2ef690u: goto label_2ef690;
        case 0x2ef694u: goto label_2ef694;
        case 0x2ef698u: goto label_2ef698;
        case 0x2ef69cu: goto label_2ef69c;
        case 0x2ef6a0u: goto label_2ef6a0;
        case 0x2ef6a4u: goto label_2ef6a4;
        case 0x2ef6a8u: goto label_2ef6a8;
        case 0x2ef6acu: goto label_2ef6ac;
        case 0x2ef6b0u: goto label_2ef6b0;
        case 0x2ef6b4u: goto label_2ef6b4;
        case 0x2ef6b8u: goto label_2ef6b8;
        case 0x2ef6bcu: goto label_2ef6bc;
        case 0x2ef6c0u: goto label_2ef6c0;
        case 0x2ef6c4u: goto label_2ef6c4;
        case 0x2ef6c8u: goto label_2ef6c8;
        case 0x2ef6ccu: goto label_2ef6cc;
        case 0x2ef6d0u: goto label_2ef6d0;
        case 0x2ef6d4u: goto label_2ef6d4;
        case 0x2ef6d8u: goto label_2ef6d8;
        case 0x2ef6dcu: goto label_2ef6dc;
        default: break;
    }

    ctx->pc = 0x2ef678u;

label_2ef678:
    // 0x2ef678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ef678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2ef67c:
    // 0x2ef67c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ef67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ef680:
    // 0x2ef680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef684:
    // 0x2ef684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef688:
    // 0x2ef688: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2ef688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2ef68c:
    // 0x2ef68c: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2ef68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2ef690:
    // 0x2ef690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ef690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2ef694:
    // 0x2ef694: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ef698:
    if (ctx->pc == 0x2EF698u) {
        ctx->pc = 0x2EF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF694u;
        // 0x2ef698: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF69Cu;
        goto label_2ef69c;
    }
    ctx->pc = 0x2EF694u;
    {
        const bool branch_taken_0x2ef694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF694u;
        // 0x2ef698: 0xaca20040  sw          $v0, 0x40($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef694) {
            ctx->pc = 0x2EF6A4u;
            goto label_2ef6a4;
        }
    }
    ctx->pc = 0x2EF69Cu;
label_2ef69c:
    // 0x2ef69c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ef6a0:
    if (ctx->pc == 0x2EF6A0u) {
        ctx->pc = 0x2EF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF69Cu;
        // 0x2ef6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6A4u;
        goto label_2ef6a4;
    }
    ctx->pc = 0x2EF69Cu;
    {
        const bool branch_taken_0x2ef69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF69Cu;
        // 0x2ef6a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef69c) {
            ctx->pc = 0x2EF6B8u;
            goto label_2ef6b8;
        }
    }
    ctx->pc = 0x2EF6A4u;
label_2ef6a4:
    // 0x2ef6a4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2ef6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2ef6a8:
    // 0x2ef6a8: 0x8c6210e4  lw          $v0, 0x10E4($v1)
    ctx->pc = 0x2ef6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4324)));
label_2ef6ac:
    // 0x2ef6ac: 0x40f809  jalr        $v0
label_2ef6b0:
    if (ctx->pc == 0x2EF6B0u) {
        ctx->pc = 0x2EF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6ACu;
        // 0x2ef6b0: 0x8f8490ac  lw          $a0, -0x6F54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6B4u;
        goto label_2ef6b4;
    }
    ctx->pc = 0x2EF6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF6B4u);
        ctx->pc = 0x2EF6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6ACu;
        // 0x2ef6b0: 0x8f8490ac  lw          $a0, -0x6F54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938796)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF6ACu, 0x2EF6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF6B4u;
label_2ef6b4:
    // 0x2ef6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef6b8:
    // 0x2ef6b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2ef6bc:
    if (ctx->pc == 0x2EF6BCu) {
        ctx->pc = 0x2EF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6B8u;
        // 0x2ef6bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6C0u;
        goto label_2ef6c0;
    }
    ctx->pc = 0x2EF6B8u;
    {
        const bool branch_taken_0x2ef6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ef6b8) {
            ctx->pc = 0x2EF6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EF6B8u;
            // 0x2ef6bc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EF6CCu;
            goto label_2ef6cc;
        }
    }
    ctx->pc = 0x2EF6C0u;
label_2ef6c0:
    // 0x2ef6c0: 0xc09d880  jal         func_276200
label_2ef6c4:
    if (ctx->pc == 0x2EF6C4u) {
        ctx->pc = 0x2EF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6C0u;
        // 0x2ef6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6C8u;
        goto label_2ef6c8;
    }
    ctx->pc = 0x2EF6C0u;
    SET_GPR_U32(ctx, 31, 0x2EF6C8u);
    ctx->pc = 0x2EF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF6C0u;
    // 0x2ef6c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276200u, 0x2EF6C0u, 0x2EF6C8u)) {
        return;
    }
    ctx->pc = 0x2EF6C8u;
label_2ef6c8:
    // 0x2ef6c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ef6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef6cc:
    // 0x2ef6cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ef6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ef6d0:
    // 0x2ef6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef6d4:
    // 0x2ef6d4: 0x3e00008  jr          $ra
label_2ef6d8:
    if (ctx->pc == 0x2EF6D8u) {
        ctx->pc = 0x2EF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6D4u;
        // 0x2ef6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF6DCu;
        goto label_2ef6dc;
    }
    ctx->pc = 0x2EF6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF6D4u;
        // 0x2ef6d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF6DCu;
label_2ef6dc:
    // 0x2ef6dc: 0x0  nop
    ctx->pc = 0x2ef6dcu;
    // NOP
    ctx->pc = 0x2ef6e0u;
}
