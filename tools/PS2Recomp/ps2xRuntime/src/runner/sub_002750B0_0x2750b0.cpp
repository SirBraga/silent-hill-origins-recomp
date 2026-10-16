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

// Function: sub_002750B0
// Address: 0x2750b0 - 0x275158
void sub_002750B0_0x2750b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002750B0_0x2750b0");
#endif

    switch (ctx->pc) {
        case 0x2750b0u: goto label_2750b0;
        case 0x2750b4u: goto label_2750b4;
        case 0x2750b8u: goto label_2750b8;
        case 0x2750bcu: goto label_2750bc;
        case 0x2750c0u: goto label_2750c0;
        case 0x2750c4u: goto label_2750c4;
        case 0x2750c8u: goto label_2750c8;
        case 0x2750ccu: goto label_2750cc;
        case 0x2750d0u: goto label_2750d0;
        case 0x2750d4u: goto label_2750d4;
        case 0x2750d8u: goto label_2750d8;
        case 0x2750dcu: goto label_2750dc;
        case 0x2750e0u: goto label_2750e0;
        case 0x2750e4u: goto label_2750e4;
        case 0x2750e8u: goto label_2750e8;
        case 0x2750ecu: goto label_2750ec;
        case 0x2750f0u: goto label_2750f0;
        case 0x2750f4u: goto label_2750f4;
        case 0x2750f8u: goto label_2750f8;
        case 0x2750fcu: goto label_2750fc;
        case 0x275100u: goto label_275100;
        case 0x275104u: goto label_275104;
        case 0x275108u: goto label_275108;
        case 0x27510cu: goto label_27510c;
        case 0x275110u: goto label_275110;
        case 0x275114u: goto label_275114;
        case 0x275118u: goto label_275118;
        case 0x27511cu: goto label_27511c;
        case 0x275120u: goto label_275120;
        case 0x275124u: goto label_275124;
        case 0x275128u: goto label_275128;
        case 0x27512cu: goto label_27512c;
        case 0x275130u: goto label_275130;
        case 0x275134u: goto label_275134;
        case 0x275138u: goto label_275138;
        case 0x27513cu: goto label_27513c;
        case 0x275140u: goto label_275140;
        case 0x275144u: goto label_275144;
        case 0x275148u: goto label_275148;
        case 0x27514cu: goto label_27514c;
        case 0x275150u: goto label_275150;
        case 0x275154u: goto label_275154;
        default: break;
    }

    ctx->pc = 0x2750b0u;

label_2750b0:
    // 0x2750b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2750b4:
    // 0x2750b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2750b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2750b8:
    // 0x2750b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2750b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2750bc:
    // 0x2750bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2750bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2750c0:
    // 0x2750c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2750c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2750c4:
    // 0x2750c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2750c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2750c8:
    // 0x2750c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2750c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2750cc:
    // 0x2750cc: 0xc09ce1c  jal         func_273870
label_2750d0:
    if (ctx->pc == 0x2750D0u) {
        ctx->pc = 0x2750D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750CCu;
        // 0x2750d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750D4u;
        goto label_2750d4;
    }
    ctx->pc = 0x2750CCu;
    SET_GPR_U32(ctx, 31, 0x2750D4u);
    ctx->pc = 0x2750D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2750CCu;
    // 0x2750d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273870u, 0x2750CCu, 0x2750D4u)) {
        return;
    }
    ctx->pc = 0x2750D4u;
label_2750d4:
    // 0x2750d4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2750d8:
    if (ctx->pc == 0x2750D8u) {
        ctx->pc = 0x2750D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750D4u;
        // 0x2750d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750DCu;
        goto label_2750dc;
    }
    ctx->pc = 0x2750D4u;
    {
        const bool branch_taken_0x2750d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2750d4) {
            ctx->pc = 0x2750D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2750D4u;
            // 0x2750d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275134u;
            goto label_275134;
        }
    }
    ctx->pc = 0x2750DCu;
label_2750dc:
    // 0x2750dc: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x2750dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2750e0:
    // 0x2750e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2750e4:
    if (ctx->pc == 0x2750E4u) {
        ctx->pc = 0x2750E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750E0u;
        // 0x2750e4: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2750E8u;
        goto label_2750e8;
    }
    ctx->pc = 0x2750E0u;
    {
        const bool branch_taken_0x2750e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2750E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2750E0u;
        // 0x2750e4: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2750e0) {
            ctx->pc = 0x2750F8u;
            goto label_2750f8;
        }
    }
    ctx->pc = 0x2750E8u;
label_2750e8:
    // 0x2750e8: 0x26020fc8  addiu       $v0, $s0, 0xFC8
    ctx->pc = 0x2750e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2750ec:
    // 0x2750ec: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x2750ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_2750f0:
    // 0x2750f0: 0x60f809  jalr        $v1
label_2750f4:
    if (ctx->pc == 0x2750F4u) {
        ctx->pc = 0x2750F8u;
        goto label_2750f8;
    }
    ctx->pc = 0x2750F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2750F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2750F0u, 0x2750F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2750F8u;
label_2750f8:
    // 0x2750f8: 0x26100fc8  addiu       $s0, $s0, 0xFC8
    ctx->pc = 0x2750f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_2750fc:
    // 0x2750fc: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_275100:
    // 0x275100: 0x40f809  jalr        $v0
label_275104:
    if (ctx->pc == 0x275104u) {
        ctx->pc = 0x275104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275100u;
        // 0x275104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275108u;
        goto label_275108;
    }
    ctx->pc = 0x275100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x275108u);
        ctx->pc = 0x275104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275100u;
        // 0x275104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275100u, 0x275108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275108u;
label_275108:
    // 0x275108: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x275108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_27510c:
    // 0x27510c: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_275110:
    // 0x275110: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x275110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_275114:
    // 0x275114: 0x60f809  jalr        $v1
label_275118:
    if (ctx->pc == 0x275118u) {
        ctx->pc = 0x275118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275114u;
        // 0x275118: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27511Cu;
        goto label_27511c;
    }
    ctx->pc = 0x275114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x27511Cu);
        ctx->pc = 0x275118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275114u;
        // 0x275118: 0x34a501be  ori         $a1, $a1, 0x1BE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)446);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275114u, 0x27511Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27511Cu;
label_27511c:
    // 0x27511c: 0x8e0300cc  lw          $v1, 0xCC($s0)
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_275120:
    // 0x275120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x275120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_275124:
    // 0x275124: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x275124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_275128:
    // 0x275128: 0x60f809  jalr        $v1
label_27512c:
    if (ctx->pc == 0x27512Cu) {
        ctx->pc = 0x27512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275128u;
        // 0x27512c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x275130u;
        goto label_275130;
    }
    ctx->pc = 0x275128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x275130u);
        ctx->pc = 0x27512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275128u;
        // 0x27512c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275128u, 0x275130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x275130u;
label_275130:
    // 0x275130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275134:
    // 0x275134: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x275134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_275138:
    // 0x275138: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x275138u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27513c:
    // 0x27513c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27513cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_275140:
    // 0x275140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_275144:
    // 0x275144: 0x3e00008  jr          $ra
label_275148:
    if (ctx->pc == 0x275148u) {
        ctx->pc = 0x275148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275144u;
        // 0x275148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27514Cu;
        goto label_27514c;
    }
    ctx->pc = 0x275144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275144u;
        // 0x275148: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27514Cu;
label_27514c:
    // 0x27514c: 0x0  nop
    ctx->pc = 0x27514cu;
    // NOP
label_275150:
    // 0x275150: 0xac850048  sw          $a1, 0x48($a0)
    ctx->pc = 0x275150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
label_275154:
    // 0x275154: 0x0  nop
    ctx->pc = 0x275154u;
    // NOP
    ctx->pc = 0x275158u;
}
