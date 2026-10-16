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

// Function: sub_0016F6C0
// Address: 0x16f6c0 - 0x16f790
void sub_0016F6C0_0x16f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F6C0_0x16f6c0");
#endif

    switch (ctx->pc) {
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6f0u: goto label_16f6f0;
        case 0x16f708u: goto label_16f708;
        case 0x16f734u: goto label_16f734;
        case 0x16f74cu: goto label_16f74c;
        case 0x16f768u: goto label_16f768;
        default: break;
    }

    ctx->pc = 0x16f6c0u;

    // 0x16f6c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f6c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16f6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16f6c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16f6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16f6cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16f6ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16f6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16f6d4: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x16F6D4u;
    SET_GPR_U32(ctx, 31, 0x16F6DCu);
    ctx->pc = 0x16F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6D4u;
    // 0x16f6d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x16F6D4u, 0x16F6DCu)) {
        return;
    }
    ctx->pc = 0x16F6DCu;
label_16f6dc:
    // 0x16f6dc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16f6e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f6e4: 0x8c46f718  lw          $a2, -0x8E8($v0)
    ctx->pc = 0x16f6e4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF718u));
    // 0x16f6e8: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x16F6E8u;
    SET_GPR_U32(ctx, 31, 0x16F6F0u);
    ctx->pc = 0x16F6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F6E8u;
    // 0x16f6ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x16F6E8u, 0x16F6F0u)) {
        return;
    }
    ctx->pc = 0x16F6F0u;
label_16f6f0:
    // 0x16f6f0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f6f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f6f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x16F6F8u;
    {
        const bool branch_taken_0x16f6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F6F8u;
        // 0x16f6fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6f8) {
            ctx->pc = 0x16F778u;
            goto label_16f778;
        }
    }
    ctx->pc = 0x16F700u;
    // 0x16f700: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f704: 0x0  nop
    ctx->pc = 0x16f704u;
    // NOP
label_16f708:
    // 0x16f708: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x16f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16f70c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16F70Cu;
    {
        const bool branch_taken_0x16f70c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F70Cu;
        // 0x16f710: 0x24a60008  addiu       $a2, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f70c) {
            ctx->pc = 0x16F724u;
            goto label_16f724;
        }
    }
    ctx->pc = 0x16F714u;
    // 0x16f714: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16F714u;
    {
        const bool branch_taken_0x16f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x16F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F714u;
        // 0x16f718: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f714) {
            ctx->pc = 0x16F73Cu;
            goto label_16f73c;
        }
    }
    ctx->pc = 0x16F71Cu;
    // 0x16f71c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16F71Cu;
    {
        const bool branch_taken_0x16f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F71Cu;
        // 0x16f720: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f71c) {
            ctx->pc = 0x16F754u;
            goto label_16f754;
        }
    }
    ctx->pc = 0x16F724u;
label_16f724:
    // 0x16f724: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x16f728: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x16f728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x16f72c: 0xc07fcf4  jal         func_1FF3D0
    ctx->pc = 0x16F72Cu;
    SET_GPR_U32(ctx, 31, 0x16F734u);
    ctx->pc = 0x16F730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F72Cu;
    // 0x16f730: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF3D0u, 0x16F72Cu, 0x16F734u)) {
        return;
    }
    ctx->pc = 0x16F734u;
label_16f734:
    // 0x16f734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16F734u;
    {
        const bool branch_taken_0x16f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F734u;
        // 0x16f738: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f734) {
            ctx->pc = 0x16F750u;
            goto label_16f750;
        }
    }
    ctx->pc = 0x16F73Cu;
label_16f73c:
    // 0x16f73c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x16f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x16f740: 0x2624004c  addiu       $a0, $s1, 0x4C
    ctx->pc = 0x16f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    // 0x16f744: 0xc07fce0  jal         func_1FF380
    ctx->pc = 0x16F744u;
    SET_GPR_U32(ctx, 31, 0x16F74Cu);
    ctx->pc = 0x16F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F744u;
    // 0x16f748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF380u, 0x16F744u, 0x16F74Cu)) {
        return;
    }
    ctx->pc = 0x16F74Cu;
label_16f74c:
    // 0x16f74c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16f750:
    // 0x16f750: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16f754:
    // 0x16f754: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16f754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f758: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f75c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f760: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x16F760u;
    SET_GPR_U32(ctx, 31, 0x16F768u);
    ctx->pc = 0x16F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F760u;
    // 0x16f764: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x16F760u, 0x16F768u)) {
        return;
    }
    ctx->pc = 0x16F768u;
label_16f768:
    // 0x16f768: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16f768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f76c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f770: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x16F770u;
    {
        const bool branch_taken_0x16f770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F770u;
        // 0x16f774: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f770) {
            ctx->pc = 0x16F708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16f708;
        }
    }
    ctx->pc = 0x16F778u;
label_16f778:
    // 0x16f778: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16f778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f77c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16f77cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f780: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16f780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f784: 0x3e00008  jr          $ra
    ctx->pc = 0x16F784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F784u;
        // 0x16f788: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F78Cu;
    // 0x16f78c: 0x0  nop
    ctx->pc = 0x16f78cu;
    // NOP
    ctx->pc = 0x16f790u;
}
