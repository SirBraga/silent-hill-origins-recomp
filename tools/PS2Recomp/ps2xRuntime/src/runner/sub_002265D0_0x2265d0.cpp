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

// Function: sub_002265D0
// Address: 0x2265d0 - 0x226668
void sub_002265D0_0x2265d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002265D0_0x2265d0");
#endif

    switch (ctx->pc) {
        case 0x2265f8u: goto label_2265f8;
        case 0x226614u: goto label_226614;
        case 0x226650u: goto label_226650;
        default: break;
    }

    ctx->pc = 0x2265d0u;

    // 0x2265d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2265d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2265d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2265d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2265d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2265d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2265dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2265dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2265e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2265e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2265e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2265E8u;
    {
        const bool branch_taken_0x2265e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265E8u;
        // 0x2265ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265e8) {
            ctx->pc = 0x2265F8u;
            goto label_2265f8;
        }
    }
    ctx->pc = 0x2265F0u;
    // 0x2265f0: 0xc08999a  jal         func_226668
    ctx->pc = 0x2265F0u;
    SET_GPR_U32(ctx, 31, 0x2265F8u);
    ctx->pc = 0x2265F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265F0u;
    // 0x2265f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x2265F0u, 0x2265F8u)) {
        return;
    }
    ctx->pc = 0x2265F8u;
label_2265f8:
    // 0x2265f8: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2265fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2265fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226600: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x226600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x226604: 0xae300098  sw          $s0, 0x98($s1)
    ctx->pc = 0x226604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 16));
    // 0x226608: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x226608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x22660c: 0xc0897bc  jal         func_225EF0
    ctx->pc = 0x22660Cu;
    SET_GPR_U32(ctx, 31, 0x226614u);
    ctx->pc = 0x226610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22660Cu;
    // 0x226610: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225EF0u, 0x22660Cu, 0x226614u)) {
        return;
    }
    ctx->pc = 0x226614u;
label_226614:
    // 0x226614: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x226614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x226618: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x226618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22661c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22661Cu;
    {
        const bool branch_taken_0x22661c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22661c) {
            ctx->pc = 0x226648u;
            goto label_226648;
        }
    }
    ctx->pc = 0x226624u;
    // 0x226624: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x226624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x226628: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x226628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22662c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22662cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x226630: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x226630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x226634: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x226634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x226638: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x226638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x22663c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x22663cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x226640: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x226640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x226644: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x226644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_226648:
    // 0x226648: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x226648u;
    SET_GPR_U32(ctx, 31, 0x226650u);
    ctx->pc = 0x22664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226648u;
    // 0x22664c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x226648u, 0x226650u)) {
        return;
    }
    ctx->pc = 0x226650u;
label_226650:
    // 0x226650: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226654: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x226654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226658: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226658u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22665c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226660: 0x3e00008  jr          $ra
    ctx->pc = 0x226660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226660u;
        // 0x226664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226668u;
}
