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

// Function: sub_0029D130
// Address: 0x29d130 - 0x29d1b0
void sub_0029D130_0x29d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D130_0x29d130");
#endif

    switch (ctx->pc) {
        case 0x29d130u: goto label_29d130;
        case 0x29d134u: goto label_29d134;
        case 0x29d138u: goto label_29d138;
        case 0x29d13cu: goto label_29d13c;
        case 0x29d140u: goto label_29d140;
        case 0x29d144u: goto label_29d144;
        case 0x29d148u: goto label_29d148;
        case 0x29d14cu: goto label_29d14c;
        case 0x29d150u: goto label_29d150;
        case 0x29d154u: goto label_29d154;
        case 0x29d158u: goto label_29d158;
        case 0x29d15cu: goto label_29d15c;
        case 0x29d160u: goto label_29d160;
        case 0x29d164u: goto label_29d164;
        case 0x29d168u: goto label_29d168;
        case 0x29d16cu: goto label_29d16c;
        case 0x29d170u: goto label_29d170;
        case 0x29d174u: goto label_29d174;
        case 0x29d178u: goto label_29d178;
        case 0x29d17cu: goto label_29d17c;
        case 0x29d180u: goto label_29d180;
        case 0x29d184u: goto label_29d184;
        case 0x29d188u: goto label_29d188;
        case 0x29d18cu: goto label_29d18c;
        case 0x29d190u: goto label_29d190;
        case 0x29d194u: goto label_29d194;
        case 0x29d198u: goto label_29d198;
        case 0x29d19cu: goto label_29d19c;
        case 0x29d1a0u: goto label_29d1a0;
        case 0x29d1a4u: goto label_29d1a4;
        case 0x29d1a8u: goto label_29d1a8;
        case 0x29d1acu: goto label_29d1ac;
        default: break;
    }

    ctx->pc = 0x29d130u;

label_29d130:
    // 0x29d130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29d134:
    // 0x29d134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29d138:
    // 0x29d138: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29d13c:
    // 0x29d13c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d140:
    // 0x29d140: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29d144:
    // 0x29d144: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29d148:
    // 0x29d148: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x29d148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_29d14c:
    // 0x29d14c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29d150:
    if (ctx->pc == 0x29D150u) {
        ctx->pc = 0x29D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D14Cu;
        // 0x29d150: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D154u;
        goto label_29d154;
    }
    ctx->pc = 0x29D14Cu;
    {
        const bool branch_taken_0x29d14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D14Cu;
        // 0x29d150: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d14c) {
            ctx->pc = 0x29D16Cu;
            goto label_29d16c;
        }
    }
    ctx->pc = 0x29D154u;
label_29d154:
    // 0x29d154: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x29d154u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_29d158:
    // 0x29d158: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_29d15c:
    if (ctx->pc == 0x29D15Cu) {
        ctx->pc = 0x29D15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D158u;
        // 0x29d15c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D160u;
        goto label_29d160;
    }
    ctx->pc = 0x29D158u;
    {
        const bool branch_taken_0x29d158 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29d158) {
            ctx->pc = 0x29D15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D158u;
            // 0x29d15c: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D170u;
            goto label_29d170;
        }
    }
    ctx->pc = 0x29D160u;
label_29d160:
    // 0x29d160: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x29d160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29d164:
    // 0x29d164: 0x10000006  b           . + 4 + (0x6 << 2)
label_29d168:
    if (ctx->pc == 0x29D168u) {
        ctx->pc = 0x29D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D164u;
        // 0x29d168: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D16Cu;
        goto label_29d16c;
    }
    ctx->pc = 0x29D164u;
    {
        const bool branch_taken_0x29d164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D164u;
        // 0x29d168: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d164) {
            ctx->pc = 0x29D180u;
            goto label_29d180;
        }
    }
    ctx->pc = 0x29D16Cu;
label_29d16c:
    // 0x29d16c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29d16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29d170:
    // 0x29d170: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x29d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29d174:
    // 0x29d174: 0x40f809  jalr        $v0
label_29d178:
    if (ctx->pc == 0x29D178u) {
        ctx->pc = 0x29D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D174u;
        // 0x29d178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D17Cu;
        goto label_29d17c;
    }
    ctx->pc = 0x29D174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29D17Cu);
        ctx->pc = 0x29D178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D174u;
        // 0x29d178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D174u, 0x29D17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29D17Cu;
label_29d17c:
    // 0x29d17c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d180:
    // 0x29d180: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29d184:
    // 0x29d184: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
label_29d188:
    if (ctx->pc == 0x29D188u) {
        ctx->pc = 0x29D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D184u;
        // 0x29d188: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D18Cu;
        goto label_29d18c;
    }
    ctx->pc = 0x29D184u;
    {
        const bool branch_taken_0x29d184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D184u;
        // 0x29d188: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d184) {
            ctx->pc = 0x29D198u;
            goto label_29d198;
        }
    }
    ctx->pc = 0x29D18Cu;
label_29d18c:
    // 0x29d18c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29d18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29d190:
    // 0x29d190: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29d190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_29d194:
    // 0x29d194: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29d194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29d198:
    // 0x29d198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29d19c:
    // 0x29d19c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x29d19cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29d1a0:
    // 0x29d1a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d1a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29d1a4:
    // 0x29d1a4: 0x3e00008  jr          $ra
label_29d1a8:
    if (ctx->pc == 0x29D1A8u) {
        ctx->pc = 0x29D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1A4u;
        // 0x29d1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D1ACu;
        goto label_29d1ac;
    }
    ctx->pc = 0x29D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D1A4u;
        // 0x29d1a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D1ACu;
label_29d1ac:
    // 0x29d1ac: 0x0  nop
    ctx->pc = 0x29d1acu;
    // NOP
    ctx->pc = 0x29d1b0u;
}
