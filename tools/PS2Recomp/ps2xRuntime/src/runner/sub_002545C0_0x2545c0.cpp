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

// Function: sub_002545C0
// Address: 0x2545c0 - 0x254650
void sub_002545C0_0x2545c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002545C0_0x2545c0");
#endif

    switch (ctx->pc) {
        case 0x2545c0u: goto label_2545c0;
        case 0x2545c4u: goto label_2545c4;
        case 0x2545c8u: goto label_2545c8;
        case 0x2545ccu: goto label_2545cc;
        case 0x2545d0u: goto label_2545d0;
        case 0x2545d4u: goto label_2545d4;
        case 0x2545d8u: goto label_2545d8;
        case 0x2545dcu: goto label_2545dc;
        case 0x2545e0u: goto label_2545e0;
        case 0x2545e4u: goto label_2545e4;
        case 0x2545e8u: goto label_2545e8;
        case 0x2545ecu: goto label_2545ec;
        case 0x2545f0u: goto label_2545f0;
        case 0x2545f4u: goto label_2545f4;
        case 0x2545f8u: goto label_2545f8;
        case 0x2545fcu: goto label_2545fc;
        case 0x254600u: goto label_254600;
        case 0x254604u: goto label_254604;
        case 0x254608u: goto label_254608;
        case 0x25460cu: goto label_25460c;
        case 0x254610u: goto label_254610;
        case 0x254614u: goto label_254614;
        case 0x254618u: goto label_254618;
        case 0x25461cu: goto label_25461c;
        case 0x254620u: goto label_254620;
        case 0x254624u: goto label_254624;
        case 0x254628u: goto label_254628;
        case 0x25462cu: goto label_25462c;
        case 0x254630u: goto label_254630;
        case 0x254634u: goto label_254634;
        case 0x254638u: goto label_254638;
        case 0x25463cu: goto label_25463c;
        case 0x254640u: goto label_254640;
        case 0x254644u: goto label_254644;
        case 0x254648u: goto label_254648;
        case 0x25464cu: goto label_25464c;
        default: break;
    }

    ctx->pc = 0x2545c0u;

label_2545c0:
    // 0x2545c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2545c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2545c4:
    // 0x2545c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2545c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2545c8:
    // 0x2545c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2545c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2545cc:
    // 0x2545cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2545ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2545d0:
    // 0x2545d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2545d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2545d4:
    // 0x2545d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2545d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2545d8:
    // 0x2545d8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_2545dc:
    if (ctx->pc == 0x2545DCu) {
        ctx->pc = 0x2545DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545D8u;
        // 0x2545dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545E0u;
        goto label_2545e0;
    }
    ctx->pc = 0x2545D8u;
    {
        const bool branch_taken_0x2545d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2545DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545D8u;
        // 0x2545dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2545d8) {
            ctx->pc = 0x25460Cu;
            goto label_25460c;
        }
    }
    ctx->pc = 0x2545E0u;
label_2545e0:
    // 0x2545e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2545e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2545e4:
    // 0x2545e4: 0x0  nop
    ctx->pc = 0x2545e4u;
    // NOP
label_2545e8:
    // 0x2545e8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2545e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2545ec:
    // 0x2545ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2545ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2545f0:
    // 0x2545f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2545f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2545f4:
    // 0x2545f4: 0xc095b08  jal         func_256C20
label_2545f8:
    if (ctx->pc == 0x2545F8u) {
        ctx->pc = 0x2545F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2545F4u;
        // 0x2545f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2545FCu;
        goto label_2545fc;
    }
    ctx->pc = 0x2545F4u;
    SET_GPR_U32(ctx, 31, 0x2545FCu);
    ctx->pc = 0x2545F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2545F4u;
    // 0x2545f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256C20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256C20u, 0x2545F4u, 0x2545FCu)) {
        return;
    }
    ctx->pc = 0x2545FCu;
label_2545fc:
    // 0x2545fc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2545fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_254600:
    // 0x254600: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x254600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_254604:
    // 0x254604: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_254608:
    if (ctx->pc == 0x254608u) {
        ctx->pc = 0x254608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254604u;
        // 0x254608: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25460Cu;
        goto label_25460c;
    }
    ctx->pc = 0x254604u;
    {
        const bool branch_taken_0x254604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254604) {
            ctx->pc = 0x254608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254604u;
            // 0x254608: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2545E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2545e8;
        }
    }
    ctx->pc = 0x25460Cu;
label_25460c:
    // 0x25460c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25460cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254610:
    // 0x254610: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_254614:
    if (ctx->pc == 0x254614u) {
        ctx->pc = 0x254614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254610u;
        // 0x254614: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254618u;
        goto label_254618;
    }
    ctx->pc = 0x254610u;
    {
        const bool branch_taken_0x254610 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254610u;
        // 0x254614: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254610) {
            ctx->pc = 0x254628u;
            goto label_254628;
        }
    }
    ctx->pc = 0x254618u;
label_254618:
    // 0x254618: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x254618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_25461c:
    // 0x25461c: 0x40f809  jalr        $v0
label_254620:
    if (ctx->pc == 0x254620u) {
        ctx->pc = 0x254624u;
        goto label_254624;
    }
    ctx->pc = 0x25461Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x254624u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25461Cu, 0x254624u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x254624u;
label_254624:
    // 0x254624: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x254624u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_254628:
    // 0x254628: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x254628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25462c:
    // 0x25462c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25462cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_254630:
    // 0x254630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_254634:
    // 0x254634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_254638:
    // 0x254638: 0x3e00008  jr          $ra
label_25463c:
    if (ctx->pc == 0x25463Cu) {
        ctx->pc = 0x25463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254638u;
        // 0x25463c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254640u;
        goto label_254640;
    }
    ctx->pc = 0x254638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254638u;
        // 0x25463c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254640u;
label_254640:
    // 0x254640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254644:
    // 0x254644: 0x0  nop
    ctx->pc = 0x254644u;
    // NOP
label_254648:
    // 0x254648: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x254648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_25464c:
    // 0x25464c: 0x0  nop
    ctx->pc = 0x25464cu;
    // NOP
    ctx->pc = 0x254650u;
}
