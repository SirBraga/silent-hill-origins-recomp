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

// Function: sub_0020D688
// Address: 0x20d688 - 0x20d830
void sub_0020D688_0x20d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D688_0x20d688");
#endif

    switch (ctx->pc) {
        case 0x20d6e8u: goto label_20d6e8;
        case 0x20d710u: goto label_20d710;
        case 0x20d714u: goto label_20d714;
        case 0x20d728u: goto label_20d728;
        case 0x20d76cu: goto label_20d76c;
        case 0x20d7b0u: goto label_20d7b0;
        case 0x20d7c8u: goto label_20d7c8;
        case 0x20d7f0u: goto label_20d7f0;
        default: break;
    }

    ctx->pc = 0x20d688u;

    // 0x20d688: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20d688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20d68c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x20d68cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d690: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x20d690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x20d694: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x20d694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x20d698: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d69c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x20d69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x20d6a0: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x20d6a0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6a4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x20d6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x20d6a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20d6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6ac: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20d6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20d6b0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x20d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x20d6b4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x20d6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x20d6b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x20d6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x20d6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d6c0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20d6c4: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x20d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x20d6c8: 0x8e050138  lw          $a1, 0x138($s0)
    ctx->pc = 0x20d6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x20d6cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x20d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d6d0: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x20d6d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20d6d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20d6d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d6d8: 0x90930096  lbu         $s3, 0x96($a0)
    ctx->pc = 0x20d6d8u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x20d6dc: 0x18a00028  blez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x20D6DCu;
    {
        const bool branch_taken_0x20d6dc = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x20D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D6DCu;
        // 0x20d6e0: 0x9055008c  lbu         $s5, 0x8C($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d6dc) {
            ctx->pc = 0x20D780u;
            goto label_20d780;
        }
    }
    ctx->pc = 0x20D6E4u;
    // 0x20d6e4: 0x2a760002  slti        $s6, $s3, 0x2
    ctx->pc = 0x20d6e4u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_20d6e8:
    // 0x20d6e8: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x20d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x20d6ec: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x20d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20d6f0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x20d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20d6f4: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x20d6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20d6f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d6fc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x20d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x20d700: 0x24d40001  addiu       $s4, $a2, 0x1
    ctx->pc = 0x20d700u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x20d704: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d708: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x20d708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d70c: 0x1339021  addu        $s2, $t1, $s3
    ctx->pc = 0x20d70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 19)));
label_20d710:
    // 0x20d710: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x20d710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_20d714:
    // 0x20d714: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20D714u;
    {
        const bool branch_taken_0x20d714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D714u;
        // 0x20d718: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d714) {
            ctx->pc = 0x20D748u;
            goto label_20d748;
        }
    }
    ctx->pc = 0x20D71Cu;
    // 0x20d71c: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x20d71cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d720: 0x1840fffb  blez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20D720u;
    {
        const bool branch_taken_0x20d720 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D720u;
        // 0x20d724: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d720) {
            ctx->pc = 0x20D710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d710;
        }
    }
    ctx->pc = 0x20D728u;
label_20d728:
    // 0x20d728: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x20d728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d72c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x20d730: 0x0  nop
    ctx->pc = 0x20d730u;
    // NOP
    // 0x20d734: 0x0  nop
    ctx->pc = 0x20d734u;
    // NOP
    // 0x20d738: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x20D738u;
    {
        const bool branch_taken_0x20d738 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x20D73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D738u;
        // 0x20d73c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d738) {
            ctx->pc = 0x20D728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d728;
        }
    }
    ctx->pc = 0x20D740u;
    // 0x20d740: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x20D740u;
    {
        const bool branch_taken_0x20d740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D740u;
        // 0x20d744: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d740) {
            ctx->pc = 0x20D714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d714;
        }
    }
    ctx->pc = 0x20D748u;
label_20d748:
    // 0x20d748: 0x56c00009  bnel        $s6, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x20D748u;
    {
        const bool branch_taken_0x20d748 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x20d748) {
            ctx->pc = 0x20D74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D748u;
            // 0x20d74c: 0x8e020138  lw          $v0, 0x138($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D770u;
            goto label_20d770;
        }
    }
    ctx->pc = 0x20D750u;
    // 0x20d750: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x20d750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20d754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d758: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x20d758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20d75c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x20d75cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d760: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x20d760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20d764: 0xc084874  jal         func_2121D0
    ctx->pc = 0x20D764u;
    SET_GPR_U32(ctx, 31, 0x20D76Cu);
    ctx->pc = 0x20D768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D764u;
    // 0x20d768: 0x2668ffff  addiu       $t0, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121D0u, 0x20D764u, 0x20D76Cu)) {
        return;
    }
    ctx->pc = 0x20D76Cu;
label_20d76c:
    // 0x20d76c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x20d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_20d770:
    // 0x20d770: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x20d770u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d774: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x20d774u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d778: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x20D778u;
    {
        const bool branch_taken_0x20d778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D778u;
        // 0x20d77c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d778) {
            ctx->pc = 0x20D6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d6e8;
        }
    }
    ctx->pc = 0x20D780u;
label_20d780:
    // 0x20d780: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x20d780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x20d784: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x20d784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20d788: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x20d788u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20d78c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20d78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d790: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x20d790u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d794: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x20d794u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d798: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x20d798u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d79c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x20d79cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d7a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x20D7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7A4u;
        // 0x20d7a8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D7ACu;
    // 0x20d7ac: 0x0  nop
    ctx->pc = 0x20d7acu;
    // NOP
label_20d7b0:
    // 0x20d7b0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x20d7b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d7b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d7b8: 0x8d220138  lw          $v0, 0x138($t1)
    ctx->pc = 0x20d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 312)));
    // 0x20d7bc: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20D7BCu;
    {
        const bool branch_taken_0x20d7bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D7BCu;
        // 0x20d7c0: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d7bc) {
            ctx->pc = 0x20D824u;
            goto label_20d824;
        }
    }
    ctx->pc = 0x20D7C4u;
    // 0x20d7c4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x20d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_20d7c8:
    // 0x20d7c8: 0x8d240070  lw          $a0, 0x70($t1)
    ctx->pc = 0x20d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 112)));
    // 0x20d7cc: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x20d7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20d7d0: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x20d7d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20d7d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d7d8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x20d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20d7dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d7e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20d7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d7e4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20d7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20d7e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x20D7E8u;
    {
        const bool branch_taken_0x20d7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d7e8) {
            ctx->pc = 0x20D7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20D7E8u;
            // 0x20d7ec: 0x8d220138  lw          $v0, 0x138($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20D814u;
            goto label_20d814;
        }
    }
    ctx->pc = 0x20D7F0u;
label_20d7f0:
    // 0x20d7f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x20d7f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20d7f4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d7f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d7fc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d800: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d804: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20d804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20d808: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D808u;
    {
        const bool branch_taken_0x20d808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D808u;
        // 0x20d80c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d808) {
            ctx->pc = 0x20D7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d7f0;
        }
    }
    ctx->pc = 0x20D810u;
    // 0x20d810: 0x8d220138  lw          $v0, 0x138($t1)
    ctx->pc = 0x20d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 312)));
label_20d814:
    // 0x20d814: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x20d814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d818: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20d818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d81c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20D81Cu;
    {
        const bool branch_taken_0x20d81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D81Cu;
        // 0x20d820: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d81c) {
            ctx->pc = 0x20D7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d7c8;
        }
    }
    ctx->pc = 0x20D824u;
label_20d824:
    // 0x20d824: 0x3e00008  jr          $ra
    ctx->pc = 0x20D824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D82Cu;
    // 0x20d82c: 0x0  nop
    ctx->pc = 0x20d82cu;
    // NOP
    ctx->pc = 0x20d830u;
}
