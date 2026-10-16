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

// Function: sub_00273560
// Address: 0x273560 - 0x273618
void sub_00273560_0x273560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273560_0x273560");
#endif

    switch (ctx->pc) {
        case 0x273560u: goto label_273560;
        case 0x273564u: goto label_273564;
        case 0x273568u: goto label_273568;
        case 0x27356cu: goto label_27356c;
        case 0x273570u: goto label_273570;
        case 0x273574u: goto label_273574;
        case 0x273578u: goto label_273578;
        case 0x27357cu: goto label_27357c;
        case 0x273580u: goto label_273580;
        case 0x273584u: goto label_273584;
        case 0x273588u: goto label_273588;
        case 0x27358cu: goto label_27358c;
        case 0x273590u: goto label_273590;
        case 0x273594u: goto label_273594;
        case 0x273598u: goto label_273598;
        case 0x27359cu: goto label_27359c;
        case 0x2735a0u: goto label_2735a0;
        case 0x2735a4u: goto label_2735a4;
        case 0x2735a8u: goto label_2735a8;
        case 0x2735acu: goto label_2735ac;
        case 0x2735b0u: goto label_2735b0;
        case 0x2735b4u: goto label_2735b4;
        case 0x2735b8u: goto label_2735b8;
        case 0x2735bcu: goto label_2735bc;
        case 0x2735c0u: goto label_2735c0;
        case 0x2735c4u: goto label_2735c4;
        case 0x2735c8u: goto label_2735c8;
        case 0x2735ccu: goto label_2735cc;
        case 0x2735d0u: goto label_2735d0;
        case 0x2735d4u: goto label_2735d4;
        case 0x2735d8u: goto label_2735d8;
        case 0x2735dcu: goto label_2735dc;
        case 0x2735e0u: goto label_2735e0;
        case 0x2735e4u: goto label_2735e4;
        case 0x2735e8u: goto label_2735e8;
        case 0x2735ecu: goto label_2735ec;
        case 0x2735f0u: goto label_2735f0;
        case 0x2735f4u: goto label_2735f4;
        case 0x2735f8u: goto label_2735f8;
        case 0x2735fcu: goto label_2735fc;
        case 0x273600u: goto label_273600;
        case 0x273604u: goto label_273604;
        case 0x273608u: goto label_273608;
        case 0x27360cu: goto label_27360c;
        case 0x273610u: goto label_273610;
        case 0x273614u: goto label_273614;
        default: break;
    }

    ctx->pc = 0x273560u;

label_273560:
    // 0x273560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_273564:
    // 0x273564: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x273564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_273568:
    // 0x273568: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x273568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_27356c:
    // 0x27356c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27356cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_273570:
    // 0x273570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273574:
    // 0x273574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_273578:
    // 0x273578: 0x244453c8  addiu       $a0, $v0, 0x53C8
    ctx->pc = 0x273578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21448));
label_27357c:
    // 0x27357c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x27357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_273580:
    // 0x273580: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_273584:
    if (ctx->pc == 0x273584u) {
        ctx->pc = 0x273584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273580u;
        // 0x273584: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273588u;
        goto label_273588;
    }
    ctx->pc = 0x273580u;
    {
        const bool branch_taken_0x273580 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x273584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273580u;
        // 0x273584: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273580) {
            ctx->pc = 0x2735B8u;
            goto label_2735b8;
        }
    }
    ctx->pc = 0x273588u;
label_273588:
    // 0x273588: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x273588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_27358c:
    // 0x27358c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_273590:
    // 0x273590: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x273590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_273594:
    // 0x273594: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_273598:
    if (ctx->pc == 0x273598u) {
        ctx->pc = 0x273598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273594u;
        // 0x273598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27359Cu;
        goto label_27359c;
    }
    ctx->pc = 0x273594u;
    {
        const bool branch_taken_0x273594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273594u;
        // 0x273598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273594) {
            ctx->pc = 0x2735BCu;
            goto label_2735bc;
        }
    }
    ctx->pc = 0x27359Cu;
label_27359c:
    // 0x27359c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x27359cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2735a0:
    // 0x2735a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2735a4:
    if (ctx->pc == 0x2735A4u) {
        ctx->pc = 0x2735A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A0u;
        // 0x2735a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735A8u;
        goto label_2735a8;
    }
    ctx->pc = 0x2735A0u;
    {
        const bool branch_taken_0x2735a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2735a0) {
            ctx->pc = 0x2735A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2735A0u;
            // 0x2735a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2735BCu;
            goto label_2735bc;
        }
    }
    ctx->pc = 0x2735A8u;
label_2735a8:
    // 0x2735a8: 0x40f809  jalr        $v0
label_2735ac:
    if (ctx->pc == 0x2735ACu) {
        ctx->pc = 0x2735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A8u;
        // 0x2735ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735B0u;
        goto label_2735b0;
    }
    ctx->pc = 0x2735A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2735B0u);
        ctx->pc = 0x2735ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735A8u;
        // 0x2735ac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2735A8u, 0x2735B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2735B0u;
label_2735b0:
    // 0x2735b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2735b4:
    if (ctx->pc == 0x2735B4u) {
        ctx->pc = 0x2735B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735B0u;
        // 0x2735b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735B8u;
        goto label_2735b8;
    }
    ctx->pc = 0x2735B0u;
    {
        const bool branch_taken_0x2735b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735B0u;
        // 0x2735b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735b0) {
            ctx->pc = 0x2735BCu;
            goto label_2735bc;
        }
    }
    ctx->pc = 0x2735B8u;
label_2735b8:
    // 0x2735b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2735b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2735bc:
    // 0x2735bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2735c0:
    if (ctx->pc == 0x2735C0u) {
        ctx->pc = 0x2735C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735BCu;
        // 0x2735c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735C4u;
        goto label_2735c4;
    }
    ctx->pc = 0x2735BCu;
    {
        const bool branch_taken_0x2735bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2735C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735BCu;
        // 0x2735c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735bc) {
            ctx->pc = 0x273600u;
            goto label_273600;
        }
    }
    ctx->pc = 0x2735C4u;
label_2735c4:
    // 0x2735c4: 0xc09cd86  jal         func_273618
label_2735c8:
    if (ctx->pc == 0x2735C8u) {
        ctx->pc = 0x2735C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735C4u;
        // 0x2735c8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735CCu;
        goto label_2735cc;
    }
    ctx->pc = 0x2735C4u;
    SET_GPR_U32(ctx, 31, 0x2735CCu);
    ctx->pc = 0x2735C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735C4u;
    // 0x2735c8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x273618u, 0x2735C4u, 0x2735CCu)) {
        return;
    }
    ctx->pc = 0x2735CCu;
label_2735cc:
    // 0x2735cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2735d0:
    if (ctx->pc == 0x2735D0u) {
        ctx->pc = 0x2735D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735CCu;
        // 0x2735d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735D4u;
        goto label_2735d4;
    }
    ctx->pc = 0x2735CCu;
    {
        const bool branch_taken_0x2735cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2735D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735CCu;
        // 0x2735d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2735cc) {
            ctx->pc = 0x273600u;
            goto label_273600;
        }
    }
    ctx->pc = 0x2735D4u;
label_2735d4:
    // 0x2735d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2735d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2735d8:
    // 0x2735d8: 0xc09d414  jal         func_275050
label_2735dc:
    if (ctx->pc == 0x2735DCu) {
        ctx->pc = 0x2735DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2735D8u;
        // 0x2735dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2735E0u;
        goto label_2735e0;
    }
    ctx->pc = 0x2735D8u;
    SET_GPR_U32(ctx, 31, 0x2735E0u);
    ctx->pc = 0x2735DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2735D8u;
    // 0x2735dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275050u, 0x2735D8u, 0x2735E0u)) {
        return;
    }
    ctx->pc = 0x2735E0u;
label_2735e0:
    // 0x2735e0: 0x262553c8  addiu       $a1, $s1, 0x53C8
    ctx->pc = 0x2735e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21448));
label_2735e4:
    // 0x2735e4: 0x8e2453c8  lw          $a0, 0x53C8($s1)
    ctx->pc = 0x2735e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21448)));
label_2735e8:
    // 0x2735e8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2735e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2735ec:
    // 0x2735ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2735ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2735f0:
    // 0x2735f0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2735f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_2735f4:
    // 0x2735f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2735f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2735f8:
    // 0x2735f8: 0xae3053c8  sw          $s0, 0x53C8($s1)
    ctx->pc = 0x2735f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 21448), GPR_U32(ctx, 16));
label_2735fc:
    // 0x2735fc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2735fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_273600:
    // 0x273600: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x273600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_273604:
    // 0x273604: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x273604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_273608:
    // 0x273608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27360c:
    // 0x27360c: 0x3e00008  jr          $ra
label_273610:
    if (ctx->pc == 0x273610u) {
        ctx->pc = 0x273610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27360Cu;
        // 0x273610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273614u;
        goto label_273614;
    }
    ctx->pc = 0x27360Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27360Cu;
        // 0x273610: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27360Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273614u;
label_273614:
    // 0x273614: 0x0  nop
    ctx->pc = 0x273614u;
    // NOP
    ctx->pc = 0x273618u;
}
