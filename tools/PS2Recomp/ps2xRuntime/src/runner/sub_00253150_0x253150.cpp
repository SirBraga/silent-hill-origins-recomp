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

// Function: sub_00253150
// Address: 0x253150 - 0x2531b0
void sub_00253150_0x253150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253150_0x253150");
#endif

    switch (ctx->pc) {
        case 0x253150u: goto label_253150;
        case 0x253154u: goto label_253154;
        case 0x253158u: goto label_253158;
        case 0x25315cu: goto label_25315c;
        case 0x253160u: goto label_253160;
        case 0x253164u: goto label_253164;
        case 0x253168u: goto label_253168;
        case 0x25316cu: goto label_25316c;
        case 0x253170u: goto label_253170;
        case 0x253174u: goto label_253174;
        case 0x253178u: goto label_253178;
        case 0x25317cu: goto label_25317c;
        case 0x253180u: goto label_253180;
        case 0x253184u: goto label_253184;
        case 0x253188u: goto label_253188;
        case 0x25318cu: goto label_25318c;
        case 0x253190u: goto label_253190;
        case 0x253194u: goto label_253194;
        case 0x253198u: goto label_253198;
        case 0x25319cu: goto label_25319c;
        case 0x2531a0u: goto label_2531a0;
        case 0x2531a4u: goto label_2531a4;
        case 0x2531a8u: goto label_2531a8;
        case 0x2531acu: goto label_2531ac;
        default: break;
    }

    ctx->pc = 0x253150u;

label_253150:
    // 0x253150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_253154:
    // 0x253154: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x253154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_253158:
    // 0x253158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25315c:
    // 0x25315c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25315cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_253160:
    // 0x253160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_253164:
    // 0x253164: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x253164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_253168:
    // 0x253168: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_25316c:
    if (ctx->pc == 0x25316Cu) {
        ctx->pc = 0x25316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253168u;
        // 0x25316c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253170u;
        goto label_253170;
    }
    ctx->pc = 0x253168u;
    {
        const bool branch_taken_0x253168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253168u;
        // 0x25316c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253168) {
            ctx->pc = 0x253198u;
            goto label_253198;
        }
    }
    ctx->pc = 0x253170u;
label_253170:
    // 0x253170: 0x24510fc8  addiu       $s1, $v0, 0xFC8
    ctx->pc = 0x253170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_253174:
    // 0x253174: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x253174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_253178:
    // 0x253178: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x253178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_25317c:
    // 0x25317c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x25317cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_253180:
    // 0x253180: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x253180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_253184:
    // 0x253184: 0x40f809  jalr        $v0
label_253188:
    if (ctx->pc == 0x253188u) {
        ctx->pc = 0x25318Cu;
        goto label_25318c;
    }
    ctx->pc = 0x253184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25318Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253184u, 0x25318Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25318Cu;
label_25318c:
    // 0x25318c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x25318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_253190:
    // 0x253190: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_253194:
    if (ctx->pc == 0x253194u) {
        ctx->pc = 0x253194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253190u;
        // 0x253194: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x253198u;
        goto label_253198;
    }
    ctx->pc = 0x253190u;
    {
        const bool branch_taken_0x253190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x253190) {
            ctx->pc = 0x253194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253190u;
            // 0x253194: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253178;
        }
    }
    ctx->pc = 0x253198u;
label_253198:
    // 0x253198: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x253198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25319c:
    // 0x25319c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25319cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2531a0:
    // 0x2531a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2531a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2531a4:
    // 0x2531a4: 0x3e00008  jr          $ra
label_2531a8:
    if (ctx->pc == 0x2531A8u) {
        ctx->pc = 0x2531A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531A4u;
        // 0x2531a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2531ACu;
        goto label_2531ac;
    }
    ctx->pc = 0x2531A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2531A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2531A4u;
        // 0x2531a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2531A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2531ACu;
label_2531ac:
    // 0x2531ac: 0x0  nop
    ctx->pc = 0x2531acu;
    // NOP
    ctx->pc = 0x2531b0u;
}
