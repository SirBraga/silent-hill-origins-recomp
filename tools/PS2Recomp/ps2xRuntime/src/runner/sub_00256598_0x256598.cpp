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

// Function: sub_00256598
// Address: 0x256598 - 0x256620
void sub_00256598_0x256598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256598_0x256598");
#endif

    switch (ctx->pc) {
        case 0x256598u: goto label_256598;
        case 0x25659cu: goto label_25659c;
        case 0x2565a0u: goto label_2565a0;
        case 0x2565a4u: goto label_2565a4;
        case 0x2565a8u: goto label_2565a8;
        case 0x2565acu: goto label_2565ac;
        case 0x2565b0u: goto label_2565b0;
        case 0x2565b4u: goto label_2565b4;
        case 0x2565b8u: goto label_2565b8;
        case 0x2565bcu: goto label_2565bc;
        case 0x2565c0u: goto label_2565c0;
        case 0x2565c4u: goto label_2565c4;
        case 0x2565c8u: goto label_2565c8;
        case 0x2565ccu: goto label_2565cc;
        case 0x2565d0u: goto label_2565d0;
        case 0x2565d4u: goto label_2565d4;
        case 0x2565d8u: goto label_2565d8;
        case 0x2565dcu: goto label_2565dc;
        case 0x2565e0u: goto label_2565e0;
        case 0x2565e4u: goto label_2565e4;
        case 0x2565e8u: goto label_2565e8;
        case 0x2565ecu: goto label_2565ec;
        case 0x2565f0u: goto label_2565f0;
        case 0x2565f4u: goto label_2565f4;
        case 0x2565f8u: goto label_2565f8;
        case 0x2565fcu: goto label_2565fc;
        case 0x256600u: goto label_256600;
        case 0x256604u: goto label_256604;
        case 0x256608u: goto label_256608;
        case 0x25660cu: goto label_25660c;
        case 0x256610u: goto label_256610;
        case 0x256614u: goto label_256614;
        case 0x256618u: goto label_256618;
        case 0x25661cu: goto label_25661c;
        default: break;
    }

    ctx->pc = 0x256598u;

label_256598:
    // 0x256598: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x256598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25659c:
    // 0x25659c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x25659cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2565a0:
    // 0x2565a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2565a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2565a4:
    // 0x2565a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2565a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2565a8:
    // 0x2565a8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2565a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2565ac:
    // 0x2565ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2565acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2565b0:
    // 0x2565b0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2565b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2565b4:
    // 0x2565b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2565b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2565b8:
    // 0x2565b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2565b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2565bc:
    // 0x2565bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2565bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2565c0:
    // 0x2565c0: 0x8e320024  lw          $s2, 0x24($s1)
    ctx->pc = 0x2565c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2565c4:
    // 0x2565c4: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_2565c8:
    if (ctx->pc == 0x2565C8u) {
        ctx->pc = 0x2565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565C4u;
        // 0x2565c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565CCu;
        goto label_2565cc;
    }
    ctx->pc = 0x2565C4u;
    {
        const bool branch_taken_0x2565c4 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x2565C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565C4u;
        // 0x2565c8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565c4) {
            ctx->pc = 0x2565F8u;
            goto label_2565f8;
        }
    }
    ctx->pc = 0x2565CCu;
label_2565cc:
    // 0x2565cc: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2565ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2565d0:
    // 0x2565d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2565d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2565d4:
    // 0x2565d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2565d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2565d8:
    // 0x2565d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2565d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2565dc:
    // 0x2565dc: 0x280f809  jalr        $s4
label_2565e0:
    if (ctx->pc == 0x2565E0u) {
        ctx->pc = 0x2565E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565DCu;
        // 0x2565e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565E4u;
        goto label_2565e4;
    }
    ctx->pc = 0x2565DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2565E4u);
        ctx->pc = 0x2565E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565DCu;
        // 0x2565e0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2565DCu, 0x2565E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2565E4u;
label_2565e4:
    // 0x2565e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2565e8:
    if (ctx->pc == 0x2565E8u) {
        ctx->pc = 0x2565E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565E4u;
        // 0x2565e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565ECu;
        goto label_2565ec;
    }
    ctx->pc = 0x2565E4u;
    {
        const bool branch_taken_0x2565e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2565E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565E4u;
        // 0x2565e8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2565e4) {
            ctx->pc = 0x2565F8u;
            goto label_2565f8;
        }
    }
    ctx->pc = 0x2565ECu;
label_2565ec:
    // 0x2565ec: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2565ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2565f0:
    // 0x2565f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_2565f4:
    if (ctx->pc == 0x2565F4u) {
        ctx->pc = 0x2565F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2565F0u;
        // 0x2565f4: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2565F8u;
        goto label_2565f8;
    }
    ctx->pc = 0x2565F0u;
    {
        const bool branch_taken_0x2565f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2565f0) {
            ctx->pc = 0x2565F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2565F0u;
            // 0x2565f4: 0x8e230020  lw          $v1, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2565D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2565d0;
        }
    }
    ctx->pc = 0x2565F8u;
label_2565f8:
    // 0x2565f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2565f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2565fc:
    // 0x2565fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2565fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_256600:
    // 0x256600: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x256600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_256604:
    // 0x256604: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x256604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_256608:
    // 0x256608: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x256608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25660c:
    // 0x25660c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x25660cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_256610:
    // 0x256610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x256610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_256614:
    // 0x256614: 0x3e00008  jr          $ra
label_256618:
    if (ctx->pc == 0x256618u) {
        ctx->pc = 0x256618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256614u;
        // 0x256618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25661Cu;
        goto label_25661c;
    }
    ctx->pc = 0x256614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256614u;
        // 0x256618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25661Cu;
label_25661c:
    // 0x25661c: 0x0  nop
    ctx->pc = 0x25661cu;
    // NOP
    ctx->pc = 0x256620u;
}
