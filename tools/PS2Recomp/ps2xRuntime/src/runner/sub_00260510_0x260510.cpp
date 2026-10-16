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

// Function: sub_00260510
// Address: 0x260510 - 0x260648
void sub_00260510_0x260510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260510_0x260510");
#endif

    switch (ctx->pc) {
        case 0x26053cu: goto label_26053c;
        case 0x260544u: goto label_260544;
        case 0x260550u: goto label_260550;
        case 0x26055cu: goto label_26055c;
        case 0x260564u: goto label_260564;
        case 0x260570u: goto label_260570;
        case 0x26057cu: goto label_26057c;
        case 0x260588u: goto label_260588;
        case 0x260594u: goto label_260594;
        case 0x26059cu: goto label_26059c;
        case 0x2605b8u: goto label_2605b8;
        default: break;
    }

    ctx->pc = 0x260510u;

    // 0x260510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x260510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x260514: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x260514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x260518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x260518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26051c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26051cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x260520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x260524: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x260524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260528: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x260528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x26052c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26052cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260530: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x260530u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x260534: 0xc097f60  jal         func_25FD80
    ctx->pc = 0x260534u;
    SET_GPR_U32(ctx, 31, 0x26053Cu);
    ctx->pc = 0x260538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260534u;
    // 0x260538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FD80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FD80u, 0x260534u, 0x26053Cu)) {
        return;
    }
    ctx->pc = 0x26053Cu;
label_26053c:
    // 0x26053c: 0xc097f90  jal         func_25FE40
    ctx->pc = 0x26053Cu;
    SET_GPR_U32(ctx, 31, 0x260544u);
    ctx->pc = 0x260540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26053Cu;
    // 0x260540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FE40u, 0x26053Cu, 0x260544u)) {
        return;
    }
    ctx->pc = 0x260544u;
label_260544:
    // 0x260544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260548: 0xc097f92  jal         func_25FE48
    ctx->pc = 0x260548u;
    SET_GPR_U32(ctx, 31, 0x260550u);
    ctx->pc = 0x26054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260548u;
    // 0x26054c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FE48u, 0x260548u, 0x260550u)) {
        return;
    }
    ctx->pc = 0x260550u;
label_260550:
    // 0x260550: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260554: 0xc097fa0  jal         func_25FE80
    ctx->pc = 0x260554u;
    SET_GPR_U32(ctx, 31, 0x26055Cu);
    ctx->pc = 0x260558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260554u;
    // 0x260558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FE80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FE80u, 0x260554u, 0x26055Cu)) {
        return;
    }
    ctx->pc = 0x26055Cu;
label_26055c:
    // 0x26055c: 0xc097fea  jal         func_25FFA8
    ctx->pc = 0x26055Cu;
    SET_GPR_U32(ctx, 31, 0x260564u);
    ctx->pc = 0x260560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26055Cu;
    // 0x260560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FFA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FFA8u, 0x26055Cu, 0x260564u)) {
        return;
    }
    ctx->pc = 0x260564u;
label_260564:
    // 0x260564: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x260564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260568: 0xc097ff2  jal         func_25FFC8
    ctx->pc = 0x260568u;
    SET_GPR_U32(ctx, 31, 0x260570u);
    ctx->pc = 0x26056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260568u;
    // 0x26056c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FFC8u, 0x260568u, 0x260570u)) {
        return;
    }
    ctx->pc = 0x260570u;
label_260570:
    // 0x260570: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x260570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260574: 0xc098006  jal         func_260018
    ctx->pc = 0x260574u;
    SET_GPR_U32(ctx, 31, 0x26057Cu);
    ctx->pc = 0x260578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260574u;
    // 0x260578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x260018u, 0x260574u, 0x26057Cu)) {
        return;
    }
    ctx->pc = 0x26057Cu;
label_26057c:
    // 0x26057c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260580: 0xc098044  jal         func_260110
    ctx->pc = 0x260580u;
    SET_GPR_U32(ctx, 31, 0x260588u);
    ctx->pc = 0x260584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260580u;
    // 0x260584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260110u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x260110u, 0x260580u, 0x260588u)) {
        return;
    }
    ctx->pc = 0x260588u;
label_260588:
    // 0x260588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x260588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26058c: 0xc098076  jal         func_2601D8
    ctx->pc = 0x26058Cu;
    SET_GPR_U32(ctx, 31, 0x260594u);
    ctx->pc = 0x260590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26058Cu;
    // 0x260590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2601D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2601D8u, 0x26058Cu, 0x260594u)) {
        return;
    }
    ctx->pc = 0x260594u;
label_260594:
    // 0x260594: 0xc09807c  jal         func_2601F0
    ctx->pc = 0x260594u;
    SET_GPR_U32(ctx, 31, 0x26059Cu);
    ctx->pc = 0x260598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260594u;
    // 0x260598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2601F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2601F0u, 0x260594u, 0x26059Cu)) {
        return;
    }
    ctx->pc = 0x26059Cu;
label_26059c:
    // 0x26059c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x26059cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2605a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2605a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2605a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2605a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2605a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2605a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2605ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2605acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2605b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2605B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2605B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605B0u;
        // 0x2605b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2605B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2605B8u;
label_2605b8:
    // 0x2605b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2605b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2605bc: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x2605bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x2605c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2605c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2605c4: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x2605c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2605c8: 0x8cc3002c  lw          $v1, 0x2C($a2)
    ctx->pc = 0x2605c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x2605cc: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x2605ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2605d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2605d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2605d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2605d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2605d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2605D8u;
    {
        const bool branch_taken_0x2605d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2605DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2605D8u;
        // 0x2605dc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2605d8) {
            ctx->pc = 0x2605F0u;
            goto label_2605f0;
        }
    }
    ctx->pc = 0x2605E0u;
    // 0x2605e0: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x2605e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x2605e4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2605e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2605e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2605e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2605ec: 0x0  nop
    ctx->pc = 0x2605ecu;
    // NOP
label_2605f0:
    // 0x2605f0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2605f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2605f4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2605F4u;
    {
        const bool branch_taken_0x2605f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2605f4) {
            ctx->pc = 0x2605F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2605F4u;
            // 0x2605f8: 0x8cc70034  lw          $a3, 0x34($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26060Cu;
            goto label_26060c;
        }
    }
    ctx->pc = 0x2605FCu;
    // 0x2605fc: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x2605fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x260600: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x260600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x260604: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x260604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
    // 0x260608: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x260608u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_26060c:
    // 0x26060c: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x26060cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
    // 0x260610: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x260610u;
    {
        const bool branch_taken_0x260610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260610) {
            ctx->pc = 0x260614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260610u;
            // 0x260614: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260620u;
            goto label_260620;
        }
    }
    ctx->pc = 0x260618u;
    // 0x260618: 0x3e00008  jr          $ra
    ctx->pc = 0x260618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260618u;
        // 0x26061c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260620u;
label_260620:
    // 0x260620: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x260620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x260624: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x260624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260628: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x260628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26062c: 0xacc50038  sw          $a1, 0x38($a2)
    ctx->pc = 0x26062cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 5));
    // 0x260630: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x260630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x260634: 0x10a20002  beq         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260634u;
    {
        const bool branch_taken_0x260634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x260638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260634u;
        // 0x260638: 0x34e20008  ori         $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260634) {
            ctx->pc = 0x260640u;
            goto label_260640;
        }
    }
    ctx->pc = 0x26063Cu;
    // 0x26063c: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x26063cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
label_260640:
    // 0x260640: 0x3e00008  jr          $ra
    ctx->pc = 0x260640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260640u;
        // 0x260644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260648u;
}
