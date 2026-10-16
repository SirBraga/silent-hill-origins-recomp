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

// Function: sub_0030C480
// Address: 0x30c480 - 0x30c6c0
void sub_0030C480_0x30c480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C480_0x30c480");
#endif

    switch (ctx->pc) {
        case 0x30c4acu: goto label_30c4ac;
        case 0x30c4d8u: goto label_30c4d8;
        case 0x30c504u: goto label_30c504;
        case 0x30c548u: goto label_30c548;
        case 0x30c574u: goto label_30c574;
        case 0x30c5b8u: goto label_30c5b8;
        case 0x30c5e4u: goto label_30c5e4;
        case 0x30c628u: goto label_30c628;
        case 0x30c654u: goto label_30c654;
        default: break;
    }

    ctx->pc = 0x30c480u;

    // 0x30c480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30c480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30c484: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x30c484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x30c488: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x30c488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x30c48c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30c48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c490: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x30c490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x30c494: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30c494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c498: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30c498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30c49c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c4a0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c4a4: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C4A4u;
    SET_GPR_U32(ctx, 31, 0x30C4ACu);
    ctx->pc = 0x30C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4A4u;
    // 0x30c4a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C4A4u, 0x30C4ACu)) {
        return;
    }
    ctx->pc = 0x30C4ACu;
label_30c4ac:
    // 0x30c4ac: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x30C4ACu;
    {
        const bool branch_taken_0x30c4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4ACu;
        // 0x30c4b0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4ac) {
            ctx->pc = 0x30C688u;
            goto label_30c688;
        }
    }
    ctx->pc = 0x30C4B4u;
    // 0x30c4b4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x30c4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x30c4b8: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c4bc: 0x14430072  bne         $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x30C4BCu;
    {
        const bool branch_taken_0x30c4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4BCu;
        // 0x30c4c0: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4bc) {
            ctx->pc = 0x30C688u;
            goto label_30c688;
        }
    }
    ctx->pc = 0x30C4C4u;
    // 0x30c4c4: 0x14400070  bnez        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x30C4C4u;
    {
        const bool branch_taken_0x30c4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4C4u;
        // 0x30c4c8: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4c4) {
            ctx->pc = 0x30C688u;
            goto label_30c688;
        }
    }
    ctx->pc = 0x30C4CCu;
    // 0x30c4cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c4d0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C4D0u;
    SET_GPR_U32(ctx, 31, 0x30C4D8u);
    ctx->pc = 0x30C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4D0u;
    // 0x30c4d4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C4D0u, 0x30C4D8u)) {
        return;
    }
    ctx->pc = 0x30C4D8u;
label_30c4d8:
    // 0x30c4d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C4D8u;
    {
        const bool branch_taken_0x30c4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4D8u;
        // 0x30c4dc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4d8) {
            ctx->pc = 0x30C510u;
            goto label_30c510;
        }
    }
    ctx->pc = 0x30C4E0u;
    // 0x30c4e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c4e4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c4e8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C4E8u;
    {
        const bool branch_taken_0x30c4e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4E8u;
        // 0x30c4ec: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4e8) {
            ctx->pc = 0x30C510u;
            goto label_30c510;
        }
    }
    ctx->pc = 0x30C4F0u;
    // 0x30c4f0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C4F0u;
    {
        const bool branch_taken_0x30c4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4F0u;
        // 0x30c4f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4f0) {
            ctx->pc = 0x30C510u;
            goto label_30c510;
        }
    }
    ctx->pc = 0x30C4F8u;
    // 0x30c4f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c4fc: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C4FCu;
    SET_GPR_U32(ctx, 31, 0x30C504u);
    ctx->pc = 0x30C500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C4FCu;
    // 0x30c500: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C4FCu, 0x30C504u)) {
        return;
    }
    ctx->pc = 0x30C504u;
label_30c504:
    // 0x30c504: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C504u;
    {
        const bool branch_taken_0x30c504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c504) {
            ctx->pc = 0x30C518u;
            goto label_30c518;
        }
    }
    ctx->pc = 0x30C50Cu;
    // 0x30c50c: 0x0  nop
    ctx->pc = 0x30c50cu;
    // NOP
label_30c510:
    // 0x30c510: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C510u;
    {
        const bool branch_taken_0x30c510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C510u;
        // 0x30c514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c510) {
            ctx->pc = 0x30C530u;
            goto label_30c530;
        }
    }
    ctx->pc = 0x30C518u;
label_30c518:
    // 0x30c518: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C518u;
    {
        const bool branch_taken_0x30c518 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C518u;
        // 0x30c51c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c518) {
            ctx->pc = 0x30C530u;
            goto label_30c530;
        }
    }
    ctx->pc = 0x30C520u;
    // 0x30c520: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c524: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c528: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c52c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c530:
    // 0x30c530: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x30C530u;
    {
        const bool branch_taken_0x30c530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C530u;
        // 0x30c534: 0x26510008  addiu       $s1, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c530) {
            ctx->pc = 0x30C688u;
            goto label_30c688;
        }
    }
    ctx->pc = 0x30C538u;
    // 0x30c538: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c53c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c540: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C540u;
    SET_GPR_U32(ctx, 31, 0x30C548u);
    ctx->pc = 0x30C544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C540u;
    // 0x30c544: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C540u, 0x30C548u)) {
        return;
    }
    ctx->pc = 0x30C548u;
label_30c548:
    // 0x30c548: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C548u;
    {
        const bool branch_taken_0x30c548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C548u;
        // 0x30c54c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c548) {
            ctx->pc = 0x30C580u;
            goto label_30c580;
        }
    }
    ctx->pc = 0x30C550u;
    // 0x30c550: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c554: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c558: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C558u;
    {
        const bool branch_taken_0x30c558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C558u;
        // 0x30c55c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c558) {
            ctx->pc = 0x30C580u;
            goto label_30c580;
        }
    }
    ctx->pc = 0x30C560u;
    // 0x30c560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C560u;
    {
        const bool branch_taken_0x30c560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C560u;
        // 0x30c564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c560) {
            ctx->pc = 0x30C580u;
            goto label_30c580;
        }
    }
    ctx->pc = 0x30C568u;
    // 0x30c568: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c56c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C56Cu;
    SET_GPR_U32(ctx, 31, 0x30C574u);
    ctx->pc = 0x30C570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C56Cu;
    // 0x30c570: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C56Cu, 0x30C574u)) {
        return;
    }
    ctx->pc = 0x30C574u;
label_30c574:
    // 0x30c574: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C574u;
    {
        const bool branch_taken_0x30c574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c574) {
            ctx->pc = 0x30C588u;
            goto label_30c588;
        }
    }
    ctx->pc = 0x30C57Cu;
    // 0x30c57c: 0x0  nop
    ctx->pc = 0x30c57cu;
    // NOP
label_30c580:
    // 0x30c580: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C580u;
    {
        const bool branch_taken_0x30c580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C580u;
        // 0x30c584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c580) {
            ctx->pc = 0x30C5A0u;
            goto label_30c5a0;
        }
    }
    ctx->pc = 0x30C588u;
label_30c588:
    // 0x30c588: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C588u;
    {
        const bool branch_taken_0x30c588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C588u;
        // 0x30c58c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c588) {
            ctx->pc = 0x30C5A0u;
            goto label_30c5a0;
        }
    }
    ctx->pc = 0x30C590u;
    // 0x30c590: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c594: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c598: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c5a0:
    // 0x30c5a0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x30C5A0u;
    {
        const bool branch_taken_0x30c5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5A0u;
        // 0x30c5a4: 0x2651000c  addiu       $s1, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5a0) {
            ctx->pc = 0x30C688u;
            goto label_30c688;
        }
    }
    ctx->pc = 0x30C5A8u;
    // 0x30c5a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c5ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c5acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c5b0: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C5B0u;
    SET_GPR_U32(ctx, 31, 0x30C5B8u);
    ctx->pc = 0x30C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C5B0u;
    // 0x30c5b4: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C5B0u, 0x30C5B8u)) {
        return;
    }
    ctx->pc = 0x30C5B8u;
label_30c5b8:
    // 0x30c5b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C5B8u;
    {
        const bool branch_taken_0x30c5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5B8u;
        // 0x30c5bc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5b8) {
            ctx->pc = 0x30C5F0u;
            goto label_30c5f0;
        }
    }
    ctx->pc = 0x30C5C0u;
    // 0x30c5c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c5c4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c5c8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C5C8u;
    {
        const bool branch_taken_0x30c5c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5C8u;
        // 0x30c5cc: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5c8) {
            ctx->pc = 0x30C5F0u;
            goto label_30c5f0;
        }
    }
    ctx->pc = 0x30C5D0u;
    // 0x30c5d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C5D0u;
    {
        const bool branch_taken_0x30c5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D0u;
        // 0x30c5d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5d0) {
            ctx->pc = 0x30C5F0u;
            goto label_30c5f0;
        }
    }
    ctx->pc = 0x30C5D8u;
    // 0x30c5d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c5dc: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C5DCu;
    SET_GPR_U32(ctx, 31, 0x30C5E4u);
    ctx->pc = 0x30C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C5DCu;
    // 0x30c5e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C5DCu, 0x30C5E4u)) {
        return;
    }
    ctx->pc = 0x30C5E4u;
label_30c5e4:
    // 0x30c5e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C5E4u;
    {
        const bool branch_taken_0x30c5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c5e4) {
            ctx->pc = 0x30C5F8u;
            goto label_30c5f8;
        }
    }
    ctx->pc = 0x30C5ECu;
    // 0x30c5ec: 0x0  nop
    ctx->pc = 0x30c5ecu;
    // NOP
label_30c5f0:
    // 0x30c5f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C5F0u;
    {
        const bool branch_taken_0x30c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5F0u;
        // 0x30c5f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5f0) {
            ctx->pc = 0x30C610u;
            goto label_30c610;
        }
    }
    ctx->pc = 0x30C5F8u;
label_30c5f8:
    // 0x30c5f8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C5F8u;
    {
        const bool branch_taken_0x30c5f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5F8u;
        // 0x30c5fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5f8) {
            ctx->pc = 0x30C610u;
            goto label_30c610;
        }
    }
    ctx->pc = 0x30C600u;
    // 0x30c600: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c604: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c608: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c610:
    // 0x30c610: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x30C610u;
    {
        const bool branch_taken_0x30c610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C610u;
        // 0x30c614: 0x26510004  addiu       $s1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c610) {
            ctx->pc = 0x30C688u;
            goto label_30c688;
        }
    }
    ctx->pc = 0x30C618u;
    // 0x30c618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c61c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x30c61cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c620: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x30C620u;
    SET_GPR_U32(ctx, 31, 0x30C628u);
    ctx->pc = 0x30C624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C620u;
    // 0x30c624: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x30C620u, 0x30C628u)) {
        return;
    }
    ctx->pc = 0x30C628u;
label_30c628:
    // 0x30c628: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C628u;
    {
        const bool branch_taken_0x30c628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C628u;
        // 0x30c62c: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c628) {
            ctx->pc = 0x30C660u;
            goto label_30c660;
        }
    }
    ctx->pc = 0x30C630u;
    // 0x30c630: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30c630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30c634: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x30c634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x30c638: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C638u;
    {
        const bool branch_taken_0x30c638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x30C63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C638u;
        // 0x30c63c: 0x41402  srl         $v0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c638) {
            ctx->pc = 0x30C660u;
            goto label_30c660;
        }
    }
    ctx->pc = 0x30C640u;
    // 0x30c640: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C640u;
    {
        const bool branch_taken_0x30c640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C640u;
        // 0x30c644: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c640) {
            ctx->pc = 0x30C660u;
            goto label_30c660;
        }
    }
    ctx->pc = 0x30C648u;
    // 0x30c648: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30c648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30c64c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x30C64Cu;
    SET_GPR_U32(ctx, 31, 0x30C654u);
    ctx->pc = 0x30C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C64Cu;
    // 0x30c650: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x30C64Cu, 0x30C654u)) {
        return;
    }
    ctx->pc = 0x30C654u;
label_30c654:
    // 0x30c654: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C654u;
    {
        const bool branch_taken_0x30c654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c654) {
            ctx->pc = 0x30C668u;
            goto label_30c668;
        }
    }
    ctx->pc = 0x30C65Cu;
    // 0x30c65c: 0x0  nop
    ctx->pc = 0x30c65cu;
    // NOP
label_30c660:
    // 0x30c660: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C660u;
    {
        const bool branch_taken_0x30c660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C660u;
        // 0x30c664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c660) {
            ctx->pc = 0x30C680u;
            goto label_30c680;
        }
    }
    ctx->pc = 0x30C668u;
label_30c668:
    // 0x30c668: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C668u;
    {
        const bool branch_taken_0x30c668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C668u;
        // 0x30c66c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c668) {
            ctx->pc = 0x30C680u;
            goto label_30c680;
        }
    }
    ctx->pc = 0x30C670u;
    // 0x30c670: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c674: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30c674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30c678: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c67c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c680:
    // 0x30c680: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C680u;
    {
        const bool branch_taken_0x30c680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30c680) {
            ctx->pc = 0x30C690u;
            goto label_30c690;
        }
    }
    ctx->pc = 0x30C688u;
label_30c688:
    // 0x30c688: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30C688u;
    {
        const bool branch_taken_0x30c688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C688u;
        // 0x30c68c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c688) {
            ctx->pc = 0x30C6A8u;
            goto label_30c6a8;
        }
    }
    ctx->pc = 0x30C690u;
label_30c690:
    // 0x30c690: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C690u;
    {
        const bool branch_taken_0x30c690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C690u;
        // 0x30c694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c690) {
            ctx->pc = 0x30C6A8u;
            goto label_30c6a8;
        }
    }
    ctx->pc = 0x30C698u;
    // 0x30c698: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30c69c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30c6a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30c6a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c6a8:
    // 0x30c6a8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x30c6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30c6ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x30c6acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c6b0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x30c6b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c6b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30c6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6B8u;
        // 0x30c6bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C6C0u;
}
