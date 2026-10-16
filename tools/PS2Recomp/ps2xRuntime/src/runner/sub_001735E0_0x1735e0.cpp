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

// Function: sub_001735E0
// Address: 0x1735e0 - 0x1736a8
void sub_001735E0_0x1735e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001735E0_0x1735e0");
#endif

    switch (ctx->pc) {
        case 0x1735fcu: goto label_1735fc;
        case 0x173610u: goto label_173610;
        case 0x173628u: goto label_173628;
        case 0x17364cu: goto label_17364c;
        case 0x173660u: goto label_173660;
        case 0x173680u: goto label_173680;
        default: break;
    }

    ctx->pc = 0x1735e0u;

    // 0x1735e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1735e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1735e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1735e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1735e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1735e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1735ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1735ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1735f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1735f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1735f4: 0xc05d79a  jal         func_175E68
    ctx->pc = 0x1735F4u;
    SET_GPR_U32(ctx, 31, 0x1735FCu);
    ctx->pc = 0x1735F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1735F4u;
    // 0x1735f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175E68u, 0x1735F4u, 0x1735FCu)) {
        return;
    }
    ctx->pc = 0x1735FCu;
label_1735fc:
    // 0x1735fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1735fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x173600: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x173600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173604: 0x8c46f7b0  lw          $a2, -0x850($v0)
    ctx->pc = 0x173604u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6BF7B0u));
    // 0x173608: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x173608u;
    SET_GPR_U32(ctx, 31, 0x173610u);
    ctx->pc = 0x17360Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173608u;
    // 0x17360c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x173608u, 0x173610u)) {
        return;
    }
    ctx->pc = 0x173610u;
label_173610:
    // 0x173610: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173618: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x173618u;
    {
        const bool branch_taken_0x173618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173618u;
        // 0x17361c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173618) {
            ctx->pc = 0x173690u;
            goto label_173690;
        }
    }
    ctx->pc = 0x173620u;
    // 0x173620: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x173620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173624: 0x0  nop
    ctx->pc = 0x173624u;
    // NOP
label_173628:
    // 0x173628: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x173628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17362c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17362Cu;
    {
        const bool branch_taken_0x17362c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17362c) {
            ctx->pc = 0x173630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17362Cu;
            // 0x173630: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173644u;
            goto label_173644;
        }
    }
    ctx->pc = 0x173634u;
    // 0x173634: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x173634u;
    {
        const bool branch_taken_0x173634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x173638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173634u;
        // 0x173638: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173634) {
            ctx->pc = 0x173654u;
            goto label_173654;
        }
    }
    ctx->pc = 0x17363Cu;
    // 0x17363c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x17363Cu;
    {
        const bool branch_taken_0x17363c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17363Cu;
        // 0x173640: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17363c) {
            ctx->pc = 0x17366Cu;
            goto label_17366c;
        }
    }
    ctx->pc = 0x173644u;
label_173644:
    // 0x173644: 0xc081b56  jal         func_206D58
    ctx->pc = 0x173644u;
    SET_GPR_U32(ctx, 31, 0x17364Cu);
    ctx->pc = 0x173648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173644u;
    // 0x173648: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173644u, 0x17364Cu)) {
        return;
    }
    ctx->pc = 0x17364Cu;
label_17364c:
    // 0x17364c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17364Cu;
    {
        const bool branch_taken_0x17364c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17364Cu;
        // 0x173650: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17364c) {
            ctx->pc = 0x173664u;
            goto label_173664;
        }
    }
    ctx->pc = 0x173654u;
label_173654:
    // 0x173654: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x173654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x173658: 0xc081b56  jal         func_206D58
    ctx->pc = 0x173658u;
    SET_GPR_U32(ctx, 31, 0x173660u);
    ctx->pc = 0x17365Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173658u;
    // 0x17365c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x173658u, 0x173660u)) {
        return;
    }
    ctx->pc = 0x173660u;
label_173660:
    // 0x173660: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x173660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
label_173664:
    // 0x173664: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x173664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173668: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x173668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17366c:
    // 0x17366c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17366cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173670: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x173670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173674: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173678: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x173678u;
    SET_GPR_U32(ctx, 31, 0x173680u);
    ctx->pc = 0x17367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173678u;
    // 0x17367c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x173678u, 0x173680u)) {
        return;
    }
    ctx->pc = 0x173680u;
label_173680:
    // 0x173680: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x173680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173684: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173688: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x173688u;
    {
        const bool branch_taken_0x173688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173688u;
        // 0x17368c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173688) {
            ctx->pc = 0x173628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173628;
        }
    }
    ctx->pc = 0x173690u;
label_173690:
    // 0x173690: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x173690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173694: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x173694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17369c: 0x3e00008  jr          $ra
    ctx->pc = 0x17369Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1736A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17369Cu;
        // 0x1736a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17369Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1736A4u;
    // 0x1736a4: 0x0  nop
    ctx->pc = 0x1736a4u;
    // NOP
    ctx->pc = 0x1736a8u;
}
