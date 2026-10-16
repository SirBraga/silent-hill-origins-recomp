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

// Function: sub_0025B698
// Address: 0x25b698 - 0x25b738
void sub_0025B698_0x25b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B698_0x25b698");
#endif

    switch (ctx->pc) {
        case 0x25b698u: goto label_25b698;
        case 0x25b69cu: goto label_25b69c;
        case 0x25b6a0u: goto label_25b6a0;
        case 0x25b6a4u: goto label_25b6a4;
        case 0x25b6a8u: goto label_25b6a8;
        case 0x25b6acu: goto label_25b6ac;
        case 0x25b6b0u: goto label_25b6b0;
        case 0x25b6b4u: goto label_25b6b4;
        case 0x25b6b8u: goto label_25b6b8;
        case 0x25b6bcu: goto label_25b6bc;
        case 0x25b6c0u: goto label_25b6c0;
        case 0x25b6c4u: goto label_25b6c4;
        case 0x25b6c8u: goto label_25b6c8;
        case 0x25b6ccu: goto label_25b6cc;
        case 0x25b6d0u: goto label_25b6d0;
        case 0x25b6d4u: goto label_25b6d4;
        case 0x25b6d8u: goto label_25b6d8;
        case 0x25b6dcu: goto label_25b6dc;
        case 0x25b6e0u: goto label_25b6e0;
        case 0x25b6e4u: goto label_25b6e4;
        case 0x25b6e8u: goto label_25b6e8;
        case 0x25b6ecu: goto label_25b6ec;
        case 0x25b6f0u: goto label_25b6f0;
        case 0x25b6f4u: goto label_25b6f4;
        case 0x25b6f8u: goto label_25b6f8;
        case 0x25b6fcu: goto label_25b6fc;
        case 0x25b700u: goto label_25b700;
        case 0x25b704u: goto label_25b704;
        case 0x25b708u: goto label_25b708;
        case 0x25b70cu: goto label_25b70c;
        case 0x25b710u: goto label_25b710;
        case 0x25b714u: goto label_25b714;
        case 0x25b718u: goto label_25b718;
        case 0x25b71cu: goto label_25b71c;
        case 0x25b720u: goto label_25b720;
        case 0x25b724u: goto label_25b724;
        case 0x25b728u: goto label_25b728;
        case 0x25b72cu: goto label_25b72c;
        case 0x25b730u: goto label_25b730;
        case 0x25b734u: goto label_25b734;
        default: break;
    }

    ctx->pc = 0x25b698u;

label_25b698:
    // 0x25b698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_25b69c:
    // 0x25b69c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25b69cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b6a0:
    // 0x25b6a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25b6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25b6a4:
    // 0x25b6a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25b6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_25b6a8:
    // 0x25b6a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25b6a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25b6ac:
    // 0x25b6ac: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_25b6b0:
    if (ctx->pc == 0x25B6B0u) {
        ctx->pc = 0x25B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6ACu;
        // 0x25b6b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6B4u;
        goto label_25b6b4;
    }
    ctx->pc = 0x25B6ACu;
    {
        const bool branch_taken_0x25b6ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6ACu;
        // 0x25b6b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6ac) {
            ctx->pc = 0x25B71Cu;
            goto label_25b71c;
        }
    }
    ctx->pc = 0x25B6B4u;
label_25b6b4:
    // 0x25b6b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25b6b8:
    // 0x25b6b8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_25b6bc:
    if (ctx->pc == 0x25B6BCu) {
        ctx->pc = 0x25B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6B8u;
        // 0x25b6bc: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6C0u;
        goto label_25b6c0;
    }
    ctx->pc = 0x25B6B8u;
    {
        const bool branch_taken_0x25b6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b6b8) {
            ctx->pc = 0x25B6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25B6B8u;
            // 0x25b6bc: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25B6D4u;
            goto label_25b6d4;
        }
    }
    ctx->pc = 0x25B6C0u;
label_25b6c0:
    // 0x25b6c0: 0xc09624c  jal         func_258930
label_25b6c4:
    if (ctx->pc == 0x25B6C4u) {
        ctx->pc = 0x25B6C8u;
        goto label_25b6c8;
    }
    ctx->pc = 0x25B6C0u;
    SET_GPR_U32(ctx, 31, 0x25B6C8u);
    ctx->pc = 0x258930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258930u, 0x25B6C0u, 0x25B6C8u)) {
        return;
    }
    ctx->pc = 0x25B6C8u;
label_25b6c8:
    // 0x25b6c8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x25b6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_25b6cc:
    // 0x25b6cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_25b6d0:
    if (ctx->pc == 0x25B6D0u) {
        ctx->pc = 0x25B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6CCu;
        // 0x25b6d0: 0x24421268  addiu       $v0, $v0, 0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6D4u;
        goto label_25b6d4;
    }
    ctx->pc = 0x25B6CCu;
    {
        const bool branch_taken_0x25b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6CCu;
        // 0x25b6d0: 0x24421268  addiu       $v0, $v0, 0x1268 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6cc) {
            ctx->pc = 0x25B720u;
            goto label_25b720;
        }
    }
    ctx->pc = 0x25B6D4u;
label_25b6d4:
    // 0x25b6d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25b6d8:
    if (ctx->pc == 0x25B6D8u) {
        ctx->pc = 0x25B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6D4u;
        // 0x25b6d8: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6DCu;
        goto label_25b6dc;
    }
    ctx->pc = 0x25B6D4u;
    {
        const bool branch_taken_0x25b6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6D4u;
        // 0x25b6d8: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6d4) {
            ctx->pc = 0x25B6ECu;
            goto label_25b6ec;
        }
    }
    ctx->pc = 0x25B6DCu;
label_25b6dc:
    // 0x25b6dc: 0x24421268  addiu       $v0, $v0, 0x1268
    ctx->pc = 0x25b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4712));
label_25b6e0:
    // 0x25b6e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x25b6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_25b6e4:
    // 0x25b6e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_25b6e8:
    if (ctx->pc == 0x25B6E8u) {
        ctx->pc = 0x25B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6E4u;
        // 0x25b6e8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B6ECu;
        goto label_25b6ec;
    }
    ctx->pc = 0x25B6E4u;
    {
        const bool branch_taken_0x25b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6E4u;
        // 0x25b6e8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b6e4) {
            ctx->pc = 0x25B6F4u;
            goto label_25b6f4;
        }
    }
    ctx->pc = 0x25B6ECu;
label_25b6ec:
    // 0x25b6ec: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x25b6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_25b6f0:
    // 0x25b6f0: 0x2442b3d8  addiu       $v0, $v0, -0x4C28
    ctx->pc = 0x25b6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947800));
label_25b6f4:
    // 0x25b6f4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25b6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_25b6f8:
    // 0x25b6f8: 0x40f809  jalr        $v0
label_25b6fc:
    if (ctx->pc == 0x25B6FCu) {
        ctx->pc = 0x25B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6F8u;
        // 0x25b6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B700u;
        goto label_25b700;
    }
    ctx->pc = 0x25B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B700u);
        ctx->pc = 0x25B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B6F8u;
        // 0x25b6fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B6F8u, 0x25B700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B700u;
label_25b700:
    // 0x25b700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25b700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25b704:
    // 0x25b704: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_25b708:
    if (ctx->pc == 0x25B708u) {
        ctx->pc = 0x25B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B704u;
        // 0x25b708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B70Cu;
        goto label_25b70c;
    }
    ctx->pc = 0x25B704u;
    {
        const bool branch_taken_0x25b704 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B704u;
        // 0x25b708: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b704) {
            ctx->pc = 0x25B720u;
            goto label_25b720;
        }
    }
    ctx->pc = 0x25B70Cu;
label_25b70c:
    // 0x25b70c: 0xc09624c  jal         func_258930
label_25b710:
    if (ctx->pc == 0x25B710u) {
        ctx->pc = 0x25B710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B70Cu;
        // 0x25b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B714u;
        goto label_25b714;
    }
    ctx->pc = 0x25B70Cu;
    SET_GPR_U32(ctx, 31, 0x25B714u);
    ctx->pc = 0x25B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B70Cu;
    // 0x25b710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x258930u, 0x25B70Cu, 0x25B714u)) {
        return;
    }
    ctx->pc = 0x25B714u;
label_25b714:
    // 0x25b714: 0x10000002  b           . + 4 + (0x2 << 2)
label_25b718:
    if (ctx->pc == 0x25B718u) {
        ctx->pc = 0x25B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B714u;
        // 0x25b718: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B71Cu;
        goto label_25b71c;
    }
    ctx->pc = 0x25B714u;
    {
        const bool branch_taken_0x25b714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B714u;
        // 0x25b718: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b714) {
            ctx->pc = 0x25B720u;
            goto label_25b720;
        }
    }
    ctx->pc = 0x25B71Cu;
label_25b71c:
    // 0x25b71c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25b71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25b720:
    // 0x25b720: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25b720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25b724:
    // 0x25b724: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25b724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25b728:
    // 0x25b728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25b72c:
    // 0x25b72c: 0x3e00008  jr          $ra
label_25b730:
    if (ctx->pc == 0x25B730u) {
        ctx->pc = 0x25B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B72Cu;
        // 0x25b730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B734u;
        goto label_25b734;
    }
    ctx->pc = 0x25B72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B72Cu;
        // 0x25b730: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B734u;
label_25b734:
    // 0x25b734: 0x0  nop
    ctx->pc = 0x25b734u;
    // NOP
    ctx->pc = 0x25b738u;
}
