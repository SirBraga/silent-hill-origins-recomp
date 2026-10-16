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

// Function: sub_001EC150
// Address: 0x1ec150 - 0x1ec1d0
void sub_001EC150_0x1ec150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC150_0x1ec150");
#endif

    switch (ctx->pc) {
        case 0x1ec150u: goto label_1ec150;
        case 0x1ec154u: goto label_1ec154;
        case 0x1ec158u: goto label_1ec158;
        case 0x1ec15cu: goto label_1ec15c;
        case 0x1ec160u: goto label_1ec160;
        case 0x1ec164u: goto label_1ec164;
        case 0x1ec168u: goto label_1ec168;
        case 0x1ec16cu: goto label_1ec16c;
        case 0x1ec170u: goto label_1ec170;
        case 0x1ec174u: goto label_1ec174;
        case 0x1ec178u: goto label_1ec178;
        case 0x1ec17cu: goto label_1ec17c;
        case 0x1ec180u: goto label_1ec180;
        case 0x1ec184u: goto label_1ec184;
        case 0x1ec188u: goto label_1ec188;
        case 0x1ec18cu: goto label_1ec18c;
        case 0x1ec190u: goto label_1ec190;
        case 0x1ec194u: goto label_1ec194;
        case 0x1ec198u: goto label_1ec198;
        case 0x1ec19cu: goto label_1ec19c;
        case 0x1ec1a0u: goto label_1ec1a0;
        case 0x1ec1a4u: goto label_1ec1a4;
        case 0x1ec1a8u: goto label_1ec1a8;
        case 0x1ec1acu: goto label_1ec1ac;
        case 0x1ec1b0u: goto label_1ec1b0;
        case 0x1ec1b4u: goto label_1ec1b4;
        case 0x1ec1b8u: goto label_1ec1b8;
        case 0x1ec1bcu: goto label_1ec1bc;
        case 0x1ec1c0u: goto label_1ec1c0;
        case 0x1ec1c4u: goto label_1ec1c4;
        case 0x1ec1c8u: goto label_1ec1c8;
        case 0x1ec1ccu: goto label_1ec1cc;
        default: break;
    }

    ctx->pc = 0x1ec150u;

label_1ec150:
    // 0x1ec150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1ec154:
    // 0x1ec154: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ec154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1ec158:
    // 0x1ec158: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1ec158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1ec15c:
    // 0x1ec15c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ec15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec160:
    // 0x1ec160: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ec160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1ec164:
    // 0x1ec164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ec164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec168:
    // 0x1ec168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ec168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ec16c:
    // 0x1ec16c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ec16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ec170:
    // 0x1ec170: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_1ec174:
    if (ctx->pc == 0x1EC174u) {
        ctx->pc = 0x1EC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC170u;
        // 0x1ec174: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC178u;
        goto label_1ec178;
    }
    ctx->pc = 0x1EC170u;
    {
        const bool branch_taken_0x1ec170 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC170u;
        // 0x1ec174: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec170) {
            ctx->pc = 0x1EC1A4u;
            goto label_1ec1a4;
        }
    }
    ctx->pc = 0x1EC178u;
label_1ec178:
    // 0x1ec178: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1ec178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ec17c:
    // 0x1ec17c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1ec180:
    if (ctx->pc == 0x1EC180u) {
        ctx->pc = 0x1EC180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC17Cu;
        // 0x1ec180: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC184u;
        goto label_1ec184;
    }
    ctx->pc = 0x1EC17Cu;
    {
        const bool branch_taken_0x1ec17c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec17c) {
            ctx->pc = 0x1EC180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EC17Cu;
            // 0x1ec180: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EC194u;
            goto label_1ec194;
        }
    }
    ctx->pc = 0x1EC184u;
label_1ec184:
    // 0x1ec184: 0xc07af52  jal         func_1EBD48
label_1ec188:
    if (ctx->pc == 0x1EC188u) {
        ctx->pc = 0x1EC18Cu;
        goto label_1ec18c;
    }
    ctx->pc = 0x1EC184u;
    SET_GPR_U32(ctx, 31, 0x1EC18Cu);
    ctx->pc = 0x1EBD48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EBD48u, 0x1EC184u, 0x1EC18Cu)) {
        return;
    }
    ctx->pc = 0x1EC18Cu;
label_1ec18c:
    // 0x1ec18c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ec18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1ec190:
    // 0x1ec190: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1ec190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1ec194:
    // 0x1ec194: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ec194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ec198:
    // 0x1ec198: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ec198u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ec19c:
    // 0x1ec19c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1ec1a0:
    if (ctx->pc == 0x1EC1A0u) {
        ctx->pc = 0x1EC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC19Cu;
        // 0x1ec1a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC1A4u;
        goto label_1ec1a4;
    }
    ctx->pc = 0x1EC19Cu;
    {
        const bool branch_taken_0x1ec19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC19Cu;
        // 0x1ec1a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec19c) {
            ctx->pc = 0x1EC178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec178;
        }
    }
    ctx->pc = 0x1EC1A4u;
label_1ec1a4:
    // 0x1ec1a4: 0xc0932d4  jal         func_24CB50
label_1ec1a8:
    if (ctx->pc == 0x1EC1A8u) {
        ctx->pc = 0x1EC1ACu;
        goto label_1ec1ac;
    }
    ctx->pc = 0x1EC1A4u;
    SET_GPR_U32(ctx, 31, 0x1EC1ACu);
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EC1A4u, 0x1EC1ACu)) {
        return;
    }
    ctx->pc = 0x1EC1ACu;
label_1ec1ac:
    // 0x1ec1ac: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ec1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ec1b0:
    // 0x1ec1b0: 0x60f809  jalr        $v1
label_1ec1b4:
    if (ctx->pc == 0x1EC1B4u) {
        ctx->pc = 0x1EC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1B0u;
        // 0x1ec1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC1B8u;
        goto label_1ec1b8;
    }
    ctx->pc = 0x1EC1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EC1B8u);
        ctx->pc = 0x1EC1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1B0u;
        // 0x1ec1b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1B0u, 0x1EC1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EC1B8u;
label_1ec1b8:
    // 0x1ec1b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ec1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec1bc:
    // 0x1ec1bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ec1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec1c0:
    // 0x1ec1c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1ec1c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec1c4:
    // 0x1ec1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ec1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec1c8:
    // 0x1ec1c8: 0x3e00008  jr          $ra
label_1ec1cc:
    if (ctx->pc == 0x1EC1CCu) {
        ctx->pc = 0x1EC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1C8u;
        // 0x1ec1cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EC1D0u;
        goto label_fallthrough_0x1ec1c8;
    }
    ctx->pc = 0x1EC1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EC1C8u;
        // 0x1ec1cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ec1c8:
    ctx->pc = 0x1EC1D0u;
}
