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

// Function: sub_00249518
// Address: 0x249518 - 0x2496a0
void sub_00249518_0x249518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249518_0x249518");
#endif

    switch (ctx->pc) {
        case 0x249570u: goto label_249570;
        case 0x249660u: goto label_249660;
        default: break;
    }

    ctx->pc = 0x249518u;

    // 0x249518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24951c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24951cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249520: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x249520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x249524: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x249524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x249528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24952c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24952cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249530: 0x8e26ffe0  lw          $a2, -0x20($s1)
    ctx->pc = 0x249530u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x249534: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x249534u;
    {
        const bool branch_taken_0x249534 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x249538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249534u;
        // 0x249538: 0x2630ffe0  addiu       $s0, $s1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249534) {
            ctx->pc = 0x249544u;
            goto label_249544;
        }
    }
    ctx->pc = 0x24953Cu;
    // 0x24953c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x24953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x249540: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x249540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_249544:
    // 0x249544: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x249544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x249548: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x249548u;
    {
        const bool branch_taken_0x249548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24954Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249548u;
        // 0x24954c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249548) {
            ctx->pc = 0x249558u;
            goto label_249558;
        }
    }
    ctx->pc = 0x249550u;
    // 0x249550: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x249550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x249554: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x249554u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_249558:
    // 0x249558: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x249558u;
    {
        const bool branch_taken_0x249558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249558) {
            ctx->pc = 0x249604u;
            goto label_249604;
        }
    }
    ctx->pc = 0x249560u;
    // 0x249560: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x249560u;
    {
        const bool branch_taken_0x249560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249560) {
            ctx->pc = 0x249564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249560u;
            // 0x249564: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2495C0u;
            goto label_2495c0;
        }
    }
    ctx->pc = 0x249568u;
    // 0x249568: 0xc0924d6  jal         func_249358
    ctx->pc = 0x249568u;
    SET_GPR_U32(ctx, 31, 0x249570u);
    ctx->pc = 0x24956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249568u;
    // 0x24956c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249358u, 0x249568u, 0x249570u)) {
        return;
    }
    ctx->pc = 0x249570u;
label_249570:
    // 0x249570: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x249570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x249574: 0x8e26ffe0  lw          $a2, -0x20($s1)
    ctx->pc = 0x249574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x249578: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x249578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24957c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x24957cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x249580: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x249580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x249584: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x249584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x249588: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x249588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x24958c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x249590: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x249590u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x249594: 0x8e24ffe0  lw          $a0, -0x20($s1)
    ctx->pc = 0x249594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x249598: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x249598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x24959c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x24959cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2495a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2495a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2495a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2495a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2495a8: 0x8e25ffe0  lw          $a1, -0x20($s1)
    ctx->pc = 0x2495a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x2495ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2495acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2495b0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2495b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2495b4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2495b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2495b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2495B8u;
    {
        const bool branch_taken_0x2495b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495B8u;
        // 0x2495bc: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495b8) {
            ctx->pc = 0x2495F0u;
            goto label_2495f0;
        }
    }
    ctx->pc = 0x2495C0u;
label_2495c0:
    // 0x2495c0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2495c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2495c4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2495c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2495c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2495c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2495cc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x2495ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x2495d0: 0x8e23ffe0  lw          $v1, -0x20($s1)
    ctx->pc = 0x2495d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x2495d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2495d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2495d8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2495d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2495dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2495dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2495e0: 0x8e23ffe0  lw          $v1, -0x20($s1)
    ctx->pc = 0x2495e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x2495e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2495e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2495e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2495e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2495ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2495ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2495f0:
    // 0x2495f0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x2495F0u;
    {
        const bool branch_taken_0x2495f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2495F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495F0u;
        // 0x2495f4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495f0) {
            ctx->pc = 0x249680u;
            goto label_249680;
        }
    }
    ctx->pc = 0x2495F8u;
    // 0x2495f8: 0x8e22ffe0  lw          $v0, -0x20($s1)
    ctx->pc = 0x2495f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967264)));
    // 0x2495fc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2495FCu;
    {
        const bool branch_taken_0x2495fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2495FCu;
        // 0x249600: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2495fc) {
            ctx->pc = 0x249680u;
            goto label_249680;
        }
    }
    ctx->pc = 0x249604u;
label_249604:
    // 0x249604: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x249604u;
    {
        const bool branch_taken_0x249604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249604) {
            ctx->pc = 0x249658u;
            goto label_249658;
        }
    }
    ctx->pc = 0x24960Cu;
    // 0x24960c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x24960cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x249610: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x249610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x249614: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x249614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x249618: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24961c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x24961cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x249620: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x249620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x249624: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x249624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x249628: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x249628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x24962c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x24962cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x249630: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x249630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x249634: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x249634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x249638: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x249638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x24963c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x24963cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x249640: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x249640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x249644: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x249644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x249648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x249648u;
    {
        const bool branch_taken_0x249648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24964Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249648u;
        // 0x24964c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249648) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x249650u;
    // 0x249650: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x249650u;
    {
        const bool branch_taken_0x249650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249650u;
        // 0x249654: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249650) {
            ctx->pc = 0x24967Cu;
            goto label_24967c;
        }
    }
    ctx->pc = 0x249658u;
label_249658:
    // 0x249658: 0xc092494  jal         func_249250
    ctx->pc = 0x249658u;
    SET_GPR_U32(ctx, 31, 0x249660u);
    ctx->pc = 0x249250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249250u, 0x249658u, 0x249660u)) {
        return;
    }
    ctx->pc = 0x249660u;
label_249660:
    // 0x249660: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x249660u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249664: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x249664u;
    {
        const bool branch_taken_0x249664 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x249664) {
            ctx->pc = 0x249668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249664u;
            // 0x249668: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249680u;
            goto label_249680;
        }
    }
    ctx->pc = 0x24966Cu;
    // 0x24966c: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x24966cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x249670: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x249670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x249674: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x249674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x249678: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x249678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_24967c:
    // 0x24967c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_249680:
    // 0x249680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x249680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249688: 0x3e00008  jr          $ra
    ctx->pc = 0x249688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24968Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249688u;
        // 0x24968c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249690u;
    // 0x249690: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x249690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x249694: 0x0  nop
    ctx->pc = 0x249694u;
    // NOP
    // 0x249698: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x249698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24969c: 0x0  nop
    ctx->pc = 0x24969cu;
    // NOP
    ctx->pc = 0x2496a0u;
}
