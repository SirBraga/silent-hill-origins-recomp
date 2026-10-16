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

// Function: sub_00195310
// Address: 0x195310 - 0x1953c8
void sub_00195310_0x195310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195310_0x195310");
#endif

    switch (ctx->pc) {
        case 0x195340u: goto label_195340;
        case 0x195360u: goto label_195360;
        case 0x195380u: goto label_195380;
        case 0x1953a0u: goto label_1953a0;
        default: break;
    }

    ctx->pc = 0x195310u;

    // 0x195310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195314: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x195314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x195318: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x195318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19531c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x195320: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x195320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x195324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195328: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x195328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x19532c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195330: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x195330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x195334: 0x24a59ae0  addiu       $a1, $a1, -0x6520
    ctx->pc = 0x195334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941408));
    // 0x195338: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x195338u;
    SET_GPR_U32(ctx, 31, 0x195340u);
    ctx->pc = 0x19533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195338u;
    // 0x19533c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x195338u, 0x195340u)) {
        return;
    }
    ctx->pc = 0x195340u;
label_195340:
    // 0x195340: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195340u;
    {
        const bool branch_taken_0x195340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195340u;
        // 0x195344: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195340) {
            ctx->pc = 0x195350u;
            goto label_195350;
        }
    }
    ctx->pc = 0x195348u;
    // 0x195348: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x195348u;
    {
        const bool branch_taken_0x195348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195348u;
        // 0x19534c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195348) {
            ctx->pc = 0x1953A8u;
            goto label_1953a8;
        }
    }
    ctx->pc = 0x195350u;
label_195350:
    // 0x195350: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195354: 0x24a59ae8  addiu       $a1, $a1, -0x6518
    ctx->pc = 0x195354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941416));
    // 0x195358: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x195358u;
    SET_GPR_U32(ctx, 31, 0x195360u);
    ctx->pc = 0x19535Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195358u;
    // 0x19535c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x195358u, 0x195360u)) {
        return;
    }
    ctx->pc = 0x195360u;
label_195360:
    // 0x195360: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195360u;
    {
        const bool branch_taken_0x195360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195360u;
        // 0x195364: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195360) {
            ctx->pc = 0x195370u;
            goto label_195370;
        }
    }
    ctx->pc = 0x195368u;
    // 0x195368: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x195368u;
    {
        const bool branch_taken_0x195368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195368u;
        // 0x19536c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195368) {
            ctx->pc = 0x1953A8u;
            goto label_1953a8;
        }
    }
    ctx->pc = 0x195370u;
label_195370:
    // 0x195370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195374: 0x24a59af0  addiu       $a1, $a1, -0x6510
    ctx->pc = 0x195374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941424));
    // 0x195378: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x195378u;
    SET_GPR_U32(ctx, 31, 0x195380u);
    ctx->pc = 0x19537Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195378u;
    // 0x19537c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x195378u, 0x195380u)) {
        return;
    }
    ctx->pc = 0x195380u;
label_195380:
    // 0x195380: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195380u;
    {
        const bool branch_taken_0x195380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195380u;
        // 0x195384: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195380) {
            ctx->pc = 0x195390u;
            goto label_195390;
        }
    }
    ctx->pc = 0x195388u;
    // 0x195388: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x195388u;
    {
        const bool branch_taken_0x195388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195388u;
        // 0x19538c: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195388) {
            ctx->pc = 0x1953A8u;
            goto label_1953a8;
        }
    }
    ctx->pc = 0x195390u;
label_195390:
    // 0x195390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195394: 0x24a59af8  addiu       $a1, $a1, -0x6508
    ctx->pc = 0x195394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941432));
    // 0x195398: 0xc065c7c  jal         func_1971F0
    ctx->pc = 0x195398u;
    SET_GPR_U32(ctx, 31, 0x1953A0u);
    ctx->pc = 0x19539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195398u;
    // 0x19539c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971F0u, 0x195398u, 0x1953A0u)) {
        return;
    }
    ctx->pc = 0x1953A0u;
label_1953a0:
    // 0x1953a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1953a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1953a4: 0x62900b  movn        $s2, $v1, $v0
    ctx->pc = 0x1953a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
label_1953a8:
    // 0x1953a8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1953a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1953ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1953acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1953b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1953b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1953b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1953b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1953b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1953b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1953bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1953BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1953BCu;
        // 0x1953c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1953BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1953C4u;
    // 0x1953c4: 0x0  nop
    ctx->pc = 0x1953c4u;
    // NOP
    ctx->pc = 0x1953c8u;
}
