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

// Function: sub_00275158
// Address: 0x275158 - 0x2751e0
void sub_00275158_0x275158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275158_0x275158");
#endif

    switch (ctx->pc) {
        case 0x275158u: goto label_275158;
        case 0x27515cu: goto label_27515c;
        case 0x275160u: goto label_275160;
        case 0x275164u: goto label_275164;
        case 0x275168u: goto label_275168;
        case 0x27516cu: goto label_27516c;
        case 0x275170u: goto label_275170;
        case 0x275174u: goto label_275174;
        case 0x275178u: goto label_275178;
        case 0x27517cu: goto label_27517c;
        case 0x275180u: goto label_275180;
        case 0x275184u: goto label_275184;
        case 0x275188u: goto label_275188;
        case 0x27518cu: goto label_27518c;
        case 0x275190u: goto label_275190;
        case 0x275194u: goto label_275194;
        case 0x275198u: goto label_275198;
        case 0x27519cu: goto label_27519c;
        case 0x2751a0u: goto label_2751a0;
        case 0x2751a4u: goto label_2751a4;
        case 0x2751a8u: goto label_2751a8;
        case 0x2751acu: goto label_2751ac;
        case 0x2751b0u: goto label_2751b0;
        case 0x2751b4u: goto label_2751b4;
        case 0x2751b8u: goto label_2751b8;
        case 0x2751bcu: goto label_2751bc;
        case 0x2751c0u: goto label_2751c0;
        case 0x2751c4u: goto label_2751c4;
        case 0x2751c8u: goto label_2751c8;
        case 0x2751ccu: goto label_2751cc;
        case 0x2751d0u: goto label_2751d0;
        case 0x2751d4u: goto label_2751d4;
        case 0x2751d8u: goto label_2751d8;
        case 0x2751dcu: goto label_2751dc;
        default: break;
    }

    ctx->pc = 0x275158u;

label_275158:
    // 0x275158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27515c:
    // 0x27515c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x27515cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_275160:
    // 0x275160: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
label_275164:
    if (ctx->pc == 0x275164u) {
        ctx->pc = 0x275164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275160u;
        // 0x275164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275168u;
        goto label_275168;
    }
    ctx->pc = 0x275160u;
    {
        const bool branch_taken_0x275160 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x275164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275160u;
        // 0x275164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275160) {
            ctx->pc = 0x2751D4u;
            goto label_2751d4;
        }
    }
    ctx->pc = 0x275168u;
label_275168:
    // 0x275168: 0x8d220030  lw          $v0, 0x30($t1)
    ctx->pc = 0x275168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_27516c:
    // 0x27516c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_275170:
    if (ctx->pc == 0x275170u) {
        ctx->pc = 0x275170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27516Cu;
        // 0x275170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275174u;
        goto label_275174;
    }
    ctx->pc = 0x27516Cu;
    {
        const bool branch_taken_0x27516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27516Cu;
        // 0x275170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27516c) {
            ctx->pc = 0x2751D4u;
            goto label_2751d4;
        }
    }
    ctx->pc = 0x275174u;
label_275174:
    // 0x275174: 0x8d270040  lw          $a3, 0x40($t1)
    ctx->pc = 0x275174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 64)));
label_275178:
    // 0x275178: 0x50e20016  beql        $a3, $v0, . + 4 + (0x16 << 2)
label_27517c:
    if (ctx->pc == 0x27517Cu) {
        ctx->pc = 0x27517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275178u;
        // 0x27517c: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275180u;
        goto label_275180;
    }
    ctx->pc = 0x275178u;
    {
        const bool branch_taken_0x275178 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x275178) {
            ctx->pc = 0x27517Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275178u;
            // 0x27517c: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2751D4u;
            goto label_2751d4;
        }
    }
    ctx->pc = 0x275180u;
label_275180:
    // 0x275180: 0x8d220048  lw          $v0, 0x48($t1)
    ctx->pc = 0x275180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
label_275184:
    // 0x275184: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_275188:
    if (ctx->pc == 0x275188u) {
        ctx->pc = 0x275188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275184u;
        // 0x275188: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27518Cu;
        goto label_27518c;
    }
    ctx->pc = 0x275184u;
    {
        const bool branch_taken_0x275184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275184u;
        // 0x275188: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275184) {
            ctx->pc = 0x2751CCu;
            goto label_2751cc;
        }
    }
    ctx->pc = 0x27518Cu;
label_27518c:
    // 0x27518c: 0x54e20006  bnel        $a3, $v0, . + 4 + (0x6 << 2)
label_275190:
    if (ctx->pc == 0x275190u) {
        ctx->pc = 0x275190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27518Cu;
        // 0x275190: 0x8d250044  lw          $a1, 0x44($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275194u;
        goto label_275194;
    }
    ctx->pc = 0x27518Cu;
    {
        const bool branch_taken_0x27518c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x27518c) {
            ctx->pc = 0x275190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27518Cu;
            // 0x275190: 0x8d250044  lw          $a1, 0x44($t1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2751A8u;
            goto label_2751a8;
        }
    }
    ctx->pc = 0x275194u;
label_275194:
    // 0x275194: 0xdd220010  ld          $v0, 0x10($t1)
    ctx->pc = 0x275194u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 16)));
label_275198:
    // 0x275198: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x275198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
label_27519c:
    // 0x27519c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x27519cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2751a0:
    // 0x2751a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2751a4:
    if (ctx->pc == 0x2751A4u) {
        ctx->pc = 0x2751A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751A0u;
        // 0x2751a4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751A8u;
        goto label_2751a8;
    }
    ctx->pc = 0x2751A0u;
    {
        const bool branch_taken_0x2751a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751A0u;
        // 0x2751a4: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751a0) {
            ctx->pc = 0x2751ACu;
            goto label_2751ac;
        }
    }
    ctx->pc = 0x2751A8u;
label_2751a8:
    // 0x2751a8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2751a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2751ac:
    // 0x2751ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2751acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2751b0:
    // 0x2751b0: 0x8d230048  lw          $v1, 0x48($t1)
    ctx->pc = 0x2751b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 72)));
label_2751b4:
    // 0x2751b4: 0x8c860038  lw          $a2, 0x38($a0)
    ctx->pc = 0x2751b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2751b8:
    // 0x2751b8: 0x8c88004c  lw          $t0, 0x4C($a0)
    ctx->pc = 0x2751b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2751bc:
    // 0x2751bc: 0x60f809  jalr        $v1
label_2751c0:
    if (ctx->pc == 0x2751C0u) {
        ctx->pc = 0x2751C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751BCu;
        // 0x2751c0: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751C4u;
        goto label_2751c4;
    }
    ctx->pc = 0x2751BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2751C4u);
        ctx->pc = 0x2751C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751BCu;
        // 0x2751c0: 0xad220040  sw          $v0, 0x40($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751BCu, 0x2751C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2751C4u;
label_2751c4:
    // 0x2751c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2751c8:
    if (ctx->pc == 0x2751C8u) {
        ctx->pc = 0x2751C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751C4u;
        // 0x2751c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751CCu;
        goto label_2751cc;
    }
    ctx->pc = 0x2751C4u;
    {
        const bool branch_taken_0x2751c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2751C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751C4u;
        // 0x2751c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2751c4) {
            ctx->pc = 0x2751D8u;
            goto label_2751d8;
        }
    }
    ctx->pc = 0x2751CCu;
label_2751cc:
    // 0x2751cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2751ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2751d0:
    // 0x2751d0: 0xad220040  sw          $v0, 0x40($t1)
    ctx->pc = 0x2751d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 64), GPR_U32(ctx, 2));
label_2751d4:
    // 0x2751d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2751d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2751d8:
    // 0x2751d8: 0x3e00008  jr          $ra
label_2751dc:
    if (ctx->pc == 0x2751DCu) {
        ctx->pc = 0x2751DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751D8u;
        // 0x2751dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2751E0u;
        goto label_fallthrough_0x2751d8;
    }
    ctx->pc = 0x2751D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2751DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2751D8u;
        // 0x2751dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2751D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2751d8:
    ctx->pc = 0x2751E0u;
}
