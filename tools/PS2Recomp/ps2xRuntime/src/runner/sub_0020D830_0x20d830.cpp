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

// Function: sub_0020D830
// Address: 0x20d830 - 0x20d9f8
void sub_0020D830_0x20d830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020D830_0x20d830");
#endif

    switch (ctx->pc) {
        case 0x20d868u: goto label_20d868;
        case 0x20d8a0u: goto label_20d8a0;
        case 0x20d8d4u: goto label_20d8d4;
        case 0x20d908u: goto label_20d908;
        case 0x20d920u: goto label_20d920;
        case 0x20d970u: goto label_20d970;
        default: break;
    }

    ctx->pc = 0x20d830u;

    // 0x20d830: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20d830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20d834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x20d834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d838: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x20d838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x20d83c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20d83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d840: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x20d840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x20d844: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20d844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d848: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x20d848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x20d84c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x20d84cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d850: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20d850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20d854: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20d854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x20d858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20d858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20d85c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x20d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x20d860: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20D860u;
    {
        const bool branch_taken_0x20d860 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D860u;
        // 0x20d864: 0x8cf20000  lw          $s2, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d860) {
            ctx->pc = 0x20D8E8u;
            goto label_20d8e8;
        }
    }
    ctx->pc = 0x20D868u;
label_20d868:
    // 0x20d868: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20d868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x20d86c: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x20d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20d870: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x20d870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x20d874: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x20d874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x20d878: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20d878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d87c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20d880: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20d880u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d884: 0x25130001  addiu       $s3, $t0, 0x1
    ctx->pc = 0x20d884u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d888: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20d888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d88c: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x20d88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20d890: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20d890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20d894: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20D894u;
    {
        const bool branch_taken_0x20d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D894u;
        // 0x20d898: 0x24b10002  addiu       $s1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d894) {
            ctx->pc = 0x20D8C0u;
            goto label_20d8c0;
        }
    }
    ctx->pc = 0x20D89Cu;
    // 0x20d89c: 0x0  nop
    ctx->pc = 0x20d89cu;
    // NOP
label_20d8a0:
    // 0x20d8a0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x20d8a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20d8a4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20d8a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d8a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d8ac: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20d8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d8b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d8b4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x20d8b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x20d8b8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x20D8B8u;
    {
        const bool branch_taken_0x20d8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8B8u;
        // 0x20d8bc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8b8) {
            ctx->pc = 0x20D8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d8a0;
        }
    }
    ctx->pc = 0x20D8C0u;
label_20d8c0:
    // 0x20d8c0: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x20d8c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20d8c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20d8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20d8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20d8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8cc: 0xc084874  jal         func_2121D0
    ctx->pc = 0x20D8CCu;
    SET_GPR_U32(ctx, 31, 0x20D8D4u);
    ctx->pc = 0x20D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20D8CCu;
    // 0x20d8d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2121D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2121D0u, 0x20D8CCu, 0x20D8D4u)) {
        return;
    }
    ctx->pc = 0x20D8D4u;
label_20d8d4:
    // 0x20d8d4: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x20d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x20d8d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20d8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d8dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x20d8dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d8e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x20D8E0u;
    {
        const bool branch_taken_0x20d8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D8E0u;
        // 0x20d8e4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d8e0) {
            ctx->pc = 0x20D868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d868;
        }
    }
    ctx->pc = 0x20D8E8u;
label_20d8e8:
    // 0x20d8e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x20d8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20d8ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20d8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20d8f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20d8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20d8f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x20d8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20d8f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x20d8f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20d8fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20d8fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20d900: 0x3e00008  jr          $ra
    ctx->pc = 0x20D900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D900u;
        // 0x20d904: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D908u;
label_20d908:
    // 0x20d908: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x20d908u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d90c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x20d90cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20d910: 0x8d820138  lw          $v0, 0x138($t4)
    ctx->pc = 0x20d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 312)));
    // 0x20d914: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20D914u;
    {
        const bool branch_taken_0x20d914 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x20D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D914u;
        // 0x20d918: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d914) {
            ctx->pc = 0x20D9F0u;
            goto label_20d9f0;
        }
    }
    ctx->pc = 0x20D91Cu;
    // 0x20d91c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x20d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_20d920:
    // 0x20d920: 0x254b0001  addiu       $t3, $t2, 0x1
    ctx->pc = 0x20d920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x20d924: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x20d924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20d928: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x20d928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20d92c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x20d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20d930: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x20d930u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20d934: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x20d934u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20d938: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20d938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20d93c: 0xa1040000  sb          $a0, 0x0($t0)
    ctx->pc = 0x20d93cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d940: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x20d940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20d944: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20d948: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20d948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d94c: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x20d94cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20d950: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20d950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20d954: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x20d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x20d958: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x20d958u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x20d95c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x20d95cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d960: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x20d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x20d964: 0x244afffe  addiu       $t2, $v0, -0x2
    ctx->pc = 0x20d964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x20d968: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x20D968u;
    {
        const bool branch_taken_0x20d968 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x20D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D968u;
        // 0x20d96c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d968) {
            ctx->pc = 0x20D9B8u;
            goto label_20d9b8;
        }
    }
    ctx->pc = 0x20D970u;
label_20d970:
    // 0x20d970: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x20d970u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20d974: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x20d974u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x20d978: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x20d978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x20d97c: 0x9122fffe  lbu         $v0, -0x2($t1)
    ctx->pc = 0x20d97cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967294)));
    // 0x20d980: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20d980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20d984: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20d984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d988: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20d988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20d98c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20d990: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x20d990u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x20d994: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x20d994u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d998: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20d998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20d99c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x20d99cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20d9a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x20d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x20d9a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x20d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x20d9a8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x20d9a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x20d9ac: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x20d9acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x20d9b0: 0x1540ffef  bnez        $t2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20D9B0u;
    {
        const bool branch_taken_0x20d9b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9B0u;
        // 0x20d9b4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9b0) {
            ctx->pc = 0x20D970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d970;
        }
    }
    ctx->pc = 0x20D9B8u;
label_20d9b8:
    // 0x20d9b8: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x20d9b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20d9bc: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x20d9bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20d9c0: 0x9122ffff  lbu         $v0, -0x1($t1)
    ctx->pc = 0x20d9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294967295)));
    // 0x20d9c4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x20d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x20d9c8: 0xa1040001  sb          $a0, 0x1($t0)
    ctx->pc = 0x20d9c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20d9cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20d9d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20d9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20d9d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x20d9d8: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x20d9d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x20d9dc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x20d9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x20d9e0: 0x8d820138  lw          $v0, 0x138($t4)
    ctx->pc = 0x20d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 312)));
    // 0x20d9e4: 0x142102a  slt         $v0, $t2, $v0
    ctx->pc = 0x20d9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20d9e8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x20D9E8u;
    {
        const bool branch_taken_0x20d9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20D9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20D9E8u;
        // 0x20d9ec: 0xa1080  sll         $v0, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20d9e8) {
            ctx->pc = 0x20D920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20d920;
        }
    }
    ctx->pc = 0x20D9F0u;
label_20d9f0:
    // 0x20d9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20D9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20D9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20D9F8u;
}
