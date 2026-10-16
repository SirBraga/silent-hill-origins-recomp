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

// Function: sub_0024C458
// Address: 0x24c458 - 0x24c608
void sub_0024C458_0x24c458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C458_0x24c458");
#endif

    switch (ctx->pc) {
        case 0x24c458u: goto label_24c458;
        case 0x24c45cu: goto label_24c45c;
        case 0x24c460u: goto label_24c460;
        case 0x24c464u: goto label_24c464;
        case 0x24c468u: goto label_24c468;
        case 0x24c46cu: goto label_24c46c;
        case 0x24c470u: goto label_24c470;
        case 0x24c474u: goto label_24c474;
        case 0x24c478u: goto label_24c478;
        case 0x24c47cu: goto label_24c47c;
        case 0x24c480u: goto label_24c480;
        case 0x24c484u: goto label_24c484;
        case 0x24c488u: goto label_24c488;
        case 0x24c48cu: goto label_24c48c;
        case 0x24c490u: goto label_24c490;
        case 0x24c494u: goto label_24c494;
        case 0x24c498u: goto label_24c498;
        case 0x24c49cu: goto label_24c49c;
        case 0x24c4a0u: goto label_24c4a0;
        case 0x24c4a4u: goto label_24c4a4;
        case 0x24c4a8u: goto label_24c4a8;
        case 0x24c4acu: goto label_24c4ac;
        case 0x24c4b0u: goto label_24c4b0;
        case 0x24c4b4u: goto label_24c4b4;
        case 0x24c4b8u: goto label_24c4b8;
        case 0x24c4bcu: goto label_24c4bc;
        case 0x24c4c0u: goto label_24c4c0;
        case 0x24c4c4u: goto label_24c4c4;
        case 0x24c4c8u: goto label_24c4c8;
        case 0x24c4ccu: goto label_24c4cc;
        case 0x24c4d0u: goto label_24c4d0;
        case 0x24c4d4u: goto label_24c4d4;
        case 0x24c4d8u: goto label_24c4d8;
        case 0x24c4dcu: goto label_24c4dc;
        case 0x24c4e0u: goto label_24c4e0;
        case 0x24c4e4u: goto label_24c4e4;
        case 0x24c4e8u: goto label_24c4e8;
        case 0x24c4ecu: goto label_24c4ec;
        case 0x24c4f0u: goto label_24c4f0;
        case 0x24c4f4u: goto label_24c4f4;
        case 0x24c4f8u: goto label_24c4f8;
        case 0x24c4fcu: goto label_24c4fc;
        case 0x24c500u: goto label_24c500;
        case 0x24c504u: goto label_24c504;
        case 0x24c508u: goto label_24c508;
        case 0x24c50cu: goto label_24c50c;
        case 0x24c510u: goto label_24c510;
        case 0x24c514u: goto label_24c514;
        case 0x24c518u: goto label_24c518;
        case 0x24c51cu: goto label_24c51c;
        case 0x24c520u: goto label_24c520;
        case 0x24c524u: goto label_24c524;
        case 0x24c528u: goto label_24c528;
        case 0x24c52cu: goto label_24c52c;
        case 0x24c530u: goto label_24c530;
        case 0x24c534u: goto label_24c534;
        case 0x24c538u: goto label_24c538;
        case 0x24c53cu: goto label_24c53c;
        case 0x24c540u: goto label_24c540;
        case 0x24c544u: goto label_24c544;
        case 0x24c548u: goto label_24c548;
        case 0x24c54cu: goto label_24c54c;
        case 0x24c550u: goto label_24c550;
        case 0x24c554u: goto label_24c554;
        case 0x24c558u: goto label_24c558;
        case 0x24c55cu: goto label_24c55c;
        case 0x24c560u: goto label_24c560;
        case 0x24c564u: goto label_24c564;
        case 0x24c568u: goto label_24c568;
        case 0x24c56cu: goto label_24c56c;
        case 0x24c570u: goto label_24c570;
        case 0x24c574u: goto label_24c574;
        case 0x24c578u: goto label_24c578;
        case 0x24c57cu: goto label_24c57c;
        case 0x24c580u: goto label_24c580;
        case 0x24c584u: goto label_24c584;
        case 0x24c588u: goto label_24c588;
        case 0x24c58cu: goto label_24c58c;
        case 0x24c590u: goto label_24c590;
        case 0x24c594u: goto label_24c594;
        case 0x24c598u: goto label_24c598;
        case 0x24c59cu: goto label_24c59c;
        case 0x24c5a0u: goto label_24c5a0;
        case 0x24c5a4u: goto label_24c5a4;
        case 0x24c5a8u: goto label_24c5a8;
        case 0x24c5acu: goto label_24c5ac;
        case 0x24c5b0u: goto label_24c5b0;
        case 0x24c5b4u: goto label_24c5b4;
        case 0x24c5b8u: goto label_24c5b8;
        case 0x24c5bcu: goto label_24c5bc;
        case 0x24c5c0u: goto label_24c5c0;
        case 0x24c5c4u: goto label_24c5c4;
        case 0x24c5c8u: goto label_24c5c8;
        case 0x24c5ccu: goto label_24c5cc;
        case 0x24c5d0u: goto label_24c5d0;
        case 0x24c5d4u: goto label_24c5d4;
        case 0x24c5d8u: goto label_24c5d8;
        case 0x24c5dcu: goto label_24c5dc;
        case 0x24c5e0u: goto label_24c5e0;
        case 0x24c5e4u: goto label_24c5e4;
        case 0x24c5e8u: goto label_24c5e8;
        case 0x24c5ecu: goto label_24c5ec;
        case 0x24c5f0u: goto label_24c5f0;
        case 0x24c5f4u: goto label_24c5f4;
        case 0x24c5f8u: goto label_24c5f8;
        case 0x24c5fcu: goto label_24c5fc;
        case 0x24c600u: goto label_24c600;
        case 0x24c604u: goto label_24c604;
        default: break;
    }

    ctx->pc = 0x24c458u;

label_24c458:
    // 0x24c458: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_24c45c:
    // 0x24c45c: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x24c45cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c460:
    // 0x24c460: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24c464:
    // 0x24c464: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24c464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_24c468:
    // 0x24c468: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24c468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c46c:
    // 0x24c46c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_24c470:
    // 0x24c470: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x24c470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_24c474:
    // 0x24c474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24c478:
    // 0x24c478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24c478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c47c:
    // 0x24c47c: 0x8e2d0010  lw          $t5, 0x10($s1)
    ctx->pc = 0x24c47cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c480:
    // 0x24c480: 0x11af0034  beq         $t5, $t7, . + 4 + (0x34 << 2)
label_24c484:
    if (ctx->pc == 0x24C484u) {
        ctx->pc = 0x24C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C480u;
        // 0x24c484: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C488u;
        goto label_24c488;
    }
    ctx->pc = 0x24C480u;
    {
        const bool branch_taken_0x24c480 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        ctx->pc = 0x24C484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C480u;
        // 0x24c484: 0x8e320008  lw          $s2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c480) {
            ctx->pc = 0x24C554u;
            goto label_24c554;
        }
    }
    ctx->pc = 0x24C488u;
label_24c488:
    // 0x24c488: 0x26580008  addiu       $t8, $s2, 0x8
    ctx->pc = 0x24c488u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_24c48c:
    // 0x24c48c: 0x25a20008  addiu       $v0, $t5, 0x8
    ctx->pc = 0x24c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_24c490:
    // 0x24c490: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x24c490u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24c494:
    // 0x24c494: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_24c498:
    if (ctx->pc == 0x24C498u) {
        ctx->pc = 0x24C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C494u;
        // 0x24c498: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C49Cu;
        goto label_24c49c;
    }
    ctx->pc = 0x24C494u;
    {
        const bool branch_taken_0x24c494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C494u;
        // 0x24c498: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c494) {
            ctx->pc = 0x24C540u;
            goto label_24c540;
        }
    }
    ctx->pc = 0x24C49Cu;
label_24c49c:
    // 0x24c49c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x24c49cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c4a0:
    // 0x24c4a0: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x24c4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24c4a4:
    // 0x24c4a4: 0x1b83021  addu        $a2, $t5, $t8
    ctx->pc = 0x24c4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 24)));
label_24c4a8:
    // 0x24c4a8: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x24c4a8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_24c4ac:
    // 0x24c4ac: 0x5150001e  beql        $t2, $s0, . + 4 + (0x1E << 2)
label_24c4b0:
    if (ctx->pc == 0x24C4B0u) {
        ctx->pc = 0x24C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4ACu;
        // 0x24c4b0: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4B4u;
        goto label_24c4b4;
    }
    ctx->pc = 0x24C4ACu;
    {
        const bool branch_taken_0x24c4ac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 16));
        if (branch_taken_0x24c4ac) {
            ctx->pc = 0x24C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C4ACu;
            // 0x24c4b0: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C528u;
            goto label_24c528;
        }
    }
    ctx->pc = 0x24C4B4u;
label_24c4b4:
    // 0x24c4b4: 0x1120001c  beqz        $t1, . + 4 + (0x1C << 2)
label_24c4b8:
    if (ctx->pc == 0x24C4B8u) {
        ctx->pc = 0x24C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B4u;
        // 0x24c4b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4BCu;
        goto label_24c4bc;
    }
    ctx->pc = 0x24C4B4u;
    {
        const bool branch_taken_0x24c4b4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B4u;
        // 0x24c4b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4b4) {
            ctx->pc = 0x24C528u;
            goto label_24c528;
        }
    }
    ctx->pc = 0x24C4BCu;
label_24c4bc:
    // 0x24c4bc: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x24c4bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24c4c0:
    // 0x24c4c0: 0x10e1007  srav        $v0, $t6, $t0
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
label_24c4c4:
    // 0x24c4c4: 0x0  nop
    ctx->pc = 0x24c4c4u;
    // NOP
label_24c4c8:
    // 0x24c4c8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x24c4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_24c4cc:
    // 0x24c4cc: 0x1471824  and         $v1, $t2, $a3
    ctx->pc = 0x24c4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 7));
label_24c4d0:
    // 0x24c4d0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_24c4d4:
    if (ctx->pc == 0x24C4D4u) {
        ctx->pc = 0x24C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4D0u;
        // 0x24c4d4: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4D8u;
        goto label_24c4d8;
    }
    ctx->pc = 0x24C4D0u;
    {
        const bool branch_taken_0x24c4d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c4d0) {
            ctx->pc = 0x24C4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C4D0u;
            // 0x24c4d4: 0x91620000  lbu         $v0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4F8u;
            goto label_24c4f8;
        }
    }
    ctx->pc = 0x24C4D8u;
label_24c4d8:
    // 0x24c4d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x24c4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_24c4dc:
    // 0x24c4dc: 0x2d020008  sltiu       $v0, $t0, 0x8
    ctx->pc = 0x24c4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_24c4e0:
    // 0x24c4e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_24c4e4:
    if (ctx->pc == 0x24C4E4u) {
        ctx->pc = 0x24C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4E0u;
        // 0x24c4e4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4E8u;
        goto label_24c4e8;
    }
    ctx->pc = 0x24C4E0u;
    {
        const bool branch_taken_0x24c4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4E0u;
        // 0x24c4e4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4e0) {
            ctx->pc = 0x24C528u;
            goto label_24c528;
        }
    }
    ctx->pc = 0x24C4E8u;
label_24c4e8:
    // 0x24c4e8: 0x1520fff7  bnez        $t1, . + 4 + (-0x9 << 2)
label_24c4ec:
    if (ctx->pc == 0x24C4ECu) {
        ctx->pc = 0x24C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4E8u;
        // 0x24c4ec: 0x10e1007  srav        $v0, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4F0u;
        goto label_24c4f0;
    }
    ctx->pc = 0x24C4E8u;
    {
        const bool branch_taken_0x24c4e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4E8u;
        // 0x24c4ec: 0x10e1007  srav        $v0, $t6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 14), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4e8) {
            ctx->pc = 0x24C4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c4c8;
        }
    }
    ctx->pc = 0x24C4F0u;
label_24c4f0:
    // 0x24c4f0: 0x1000000d  b           . + 4 + (0xD << 2)
label_24c4f4:
    if (ctx->pc == 0x24C4F4u) {
        ctx->pc = 0x24C4F8u;
        goto label_24c4f8;
    }
    ctx->pc = 0x24C4F0u;
    {
        const bool branch_taken_0x24c4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c4f0) {
            ctx->pc = 0x24C528u;
            goto label_24c528;
        }
    }
    ctx->pc = 0x24C4F8u;
label_24c4f8:
    // 0x24c4f8: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x24c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
label_24c4fc:
    // 0x24c4fc: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x24c4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_24c500:
    // 0x24c500: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x24c500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_24c504:
    // 0x24c504: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x24c504u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
label_24c508:
    // 0x24c508: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x24c508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c50c:
    // 0x24c50c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x24c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24c510:
    // 0x24c510: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x24c510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_24c514:
    // 0x24c514: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x24c514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_24c518:
    // 0x24c518: 0x31823  negu        $v1, $v1
    ctx->pc = 0x24c518u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_24c51c:
    // 0x24c51c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x24c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24c520:
    // 0x24c520: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24c520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24c524:
    // 0x24c524: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x24c524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_24c528:
    // 0x24c528: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
label_24c52c:
    if (ctx->pc == 0x24C52Cu) {
        ctx->pc = 0x24C52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C528u;
        // 0x24c52c: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C530u;
        goto label_24c530;
    }
    ctx->pc = 0x24C528u;
    {
        const bool branch_taken_0x24c528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c528) {
            ctx->pc = 0x24C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C528u;
            // 0x24c52c: 0x8dad0000  lw          $t5, 0x0($t5) (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C544u;
            goto label_24c544;
        }
    }
    ctx->pc = 0x24C530u;
label_24c530:
    // 0x24c530: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x24c530u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_24c534:
    // 0x24c534: 0x192102b  sltu        $v0, $t4, $s2
    ctx->pc = 0x24c534u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_24c538:
    // 0x24c538: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_24c53c:
    if (ctx->pc == 0x24C53Cu) {
        ctx->pc = 0x24C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C538u;
        // 0x24c53c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C540u;
        goto label_24c540;
    }
    ctx->pc = 0x24C538u;
    {
        const bool branch_taken_0x24c538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C538u;
        // 0x24c53c: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c538) {
            ctx->pc = 0x24C4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c4a8;
        }
    }
    ctx->pc = 0x24C540u;
label_24c540:
    // 0x24c540: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x24c540u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_24c544:
    // 0x24c544: 0x11af0003  beq         $t5, $t7, . + 4 + (0x3 << 2)
label_24c548:
    if (ctx->pc == 0x24C548u) {
        ctx->pc = 0x24C54Cu;
        goto label_24c54c;
    }
    ctx->pc = 0x24C544u;
    {
        const bool branch_taken_0x24c544 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 15));
        if (branch_taken_0x24c544) {
            ctx->pc = 0x24C554u;
            goto label_24c554;
        }
    }
    ctx->pc = 0x24C54Cu;
label_24c54c:
    // 0x24c54c: 0x1080ffd0  beqz        $a0, . + 4 + (-0x30 << 2)
label_24c550:
    if (ctx->pc == 0x24C550u) {
        ctx->pc = 0x24C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C54Cu;
        // 0x24c550: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C554u;
        goto label_24c554;
    }
    ctx->pc = 0x24C54Cu;
    {
        const bool branch_taken_0x24c54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C54Cu;
        // 0x24c550: 0x25a20008  addiu       $v0, $t5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c54c) {
            ctx->pc = 0x24C490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c490;
        }
    }
    ctx->pc = 0x24C554u;
label_24c554:
    // 0x24c554: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
label_24c558:
    if (ctx->pc == 0x24C558u) {
        ctx->pc = 0x24C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C554u;
        // 0x24c558: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C55Cu;
        goto label_24c55c;
    }
    ctx->pc = 0x24C554u;
    {
        const bool branch_taken_0x24c554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C554u;
        // 0x24c558: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c554) {
            ctx->pc = 0x24C5F0u;
            goto label_24c5f0;
        }
    }
    ctx->pc = 0x24C55Cu;
label_24c55c:
    // 0x24c55c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_24c560:
    // 0x24c560: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x24c560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_24c564:
    // 0x24c564: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x24c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_24c568:
    // 0x24c568: 0x320282d  daddu       $a1, $t9, $zero
    ctx->pc = 0x24c568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_24c56c:
    // 0x24c56c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x24c56cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24c570:
    // 0x24c570: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x24c570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_24c574:
    // 0x24c574: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x24c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_24c578:
    // 0x24c578: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x24c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_24c57c:
    // 0x24c57c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x24c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_24c580:
    // 0x24c580: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x24c580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_24c584:
    // 0x24c584: 0x40f809  jalr        $v0
label_24c588:
    if (ctx->pc == 0x24C588u) {
        ctx->pc = 0x24C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C584u;
        // 0x24c588: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C58Cu;
        goto label_24c58c;
    }
    ctx->pc = 0x24C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C58Cu);
        ctx->pc = 0x24C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C584u;
        // 0x24c588: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C584u, 0x24C58Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C58Cu;
label_24c58c:
    // 0x24c58c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24c58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c590:
    // 0x24c590: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_24c594:
    if (ctx->pc == 0x24C594u) {
        ctx->pc = 0x24C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C590u;
        // 0x24c594: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C598u;
        goto label_24c598;
    }
    ctx->pc = 0x24C590u;
    {
        const bool branch_taken_0x24c590 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C590u;
        // 0x24c594: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c590) {
            ctx->pc = 0x24C5A0u;
            goto label_24c5a0;
        }
    }
    ctx->pc = 0x24C598u;
label_24c598:
    // 0x24c598: 0x10000015  b           . + 4 + (0x15 << 2)
label_24c59c:
    if (ctx->pc == 0x24C59Cu) {
        ctx->pc = 0x24C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C598u;
        // 0x24c59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C5A0u;
        goto label_24c5a0;
    }
    ctx->pc = 0x24C598u;
    {
        const bool branch_taken_0x24c598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C598u;
        // 0x24c59c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c598) {
            ctx->pc = 0x24C5F0u;
            goto label_24c5f0;
        }
    }
    ctx->pc = 0x24C5A0u;
label_24c5a0:
    // 0x24c5a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c5a4:
    // 0x24c5a4: 0xc0c493d  jal         func_3124F4
label_24c5a8:
    if (ctx->pc == 0x24C5A8u) {
        ctx->pc = 0x24C5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C5A4u;
        // 0x24c5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C5ACu;
        goto label_24c5ac;
    }
    ctx->pc = 0x24C5A4u;
    SET_GPR_U32(ctx, 31, 0x24C5ACu);
    ctx->pc = 0x24C5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C5A4u;
    // 0x24c5a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x24C5A4u, 0x24C5ACu)) {
        return;
    }
    ctx->pc = 0x24C5ACu;
label_24c5ac:
    // 0x24c5ac: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x24c5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c5b0:
    // 0x24c5b0: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x24c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_24c5b4:
    // 0x24c5b4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x24c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_24c5b8:
    // 0x24c5b8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x24c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24c5bc:
    // 0x24c5bc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x24c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_24c5c0:
    // 0x24c5c0: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x24c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_24c5c4:
    // 0x24c5c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x24c5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_24c5c8:
    // 0x24c5c8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x24c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_24c5cc:
    // 0x24c5cc: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x24c5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_24c5d0:
    // 0x24c5d0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x24c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_24c5d4:
    // 0x24c5d4: 0xa2050008  sb          $a1, 0x8($s0)
    ctx->pc = 0x24c5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 5));
label_24c5d8:
    // 0x24c5d8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24c5dc:
    // 0x24c5dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24c5e0:
    // 0x24c5e0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x24c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_24c5e4:
    // 0x24c5e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x24c5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_24c5e8:
    // 0x24c5e8: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x24c5e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_24c5ec:
    // 0x24c5ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24c5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c5f0:
    // 0x24c5f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24c5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24c5f4:
    // 0x24c5f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24c5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24c5f8:
    // 0x24c5f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24c5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24c5fc:
    // 0x24c5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24c600:
    // 0x24c600: 0x3e00008  jr          $ra
label_24c604:
    if (ctx->pc == 0x24C604u) {
        ctx->pc = 0x24C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C600u;
        // 0x24c604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C608u;
        goto label_fallthrough_0x24c600;
    }
    ctx->pc = 0x24C600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C600u;
        // 0x24c604: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24c600:
    ctx->pc = 0x24C608u;
}
