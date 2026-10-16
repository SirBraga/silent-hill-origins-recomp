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

// Function: sub_002FF930
// Address: 0x2ff930 - 0x2ffad0
void sub_002FF930_0x2ff930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF930_0x2ff930");
#endif

    switch (ctx->pc) {
        case 0x2ff9a0u: goto label_2ff9a0;
        case 0x2ff9c4u: goto label_2ff9c4;
        case 0x2ff9fcu: goto label_2ff9fc;
        case 0x2ffa08u: goto label_2ffa08;
        case 0x2ffa8cu: goto label_2ffa8c;
        default: break;
    }

    ctx->pc = 0x2ff930u;

    // 0x2ff930: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ff930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ff934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff938: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2ff938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x2ff93c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2ff93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x2ff940: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2ff940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2ff944: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2ff944u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff948: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2ff948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2ff94c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2ff94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2ff950: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2ff950u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff954: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2ff954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2ff958: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ff958u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff95c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2ff95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2ff960: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ff960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ff964: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ff964u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff968: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ff968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2ff96c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2ff96cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff970: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2ff970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2ff974: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2ff974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2ff978: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x2ff978u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ff97c: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x2ff97cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2ff980: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2FF980u;
    {
        const bool branch_taken_0x2ff980 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FF984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF980u;
        // 0x2ff984: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff980) {
            ctx->pc = 0x2FF9B8u;
            goto label_2ff9b8;
        }
    }
    ctx->pc = 0x2FF988u;
    // 0x2ff988: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x2FF988u;
    {
        const bool branch_taken_0x2ff988 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff988) {
            ctx->pc = 0x2FF98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF988u;
            // 0x2ff98c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA64u;
            goto label_2ffa64;
        }
    }
    ctx->pc = 0x2FF990u;
    // 0x2ff990: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2FF990u;
    {
        const bool branch_taken_0x2ff990 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ff990) {
            ctx->pc = 0x2FF994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FF990u;
            // 0x2ff994: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FFA64u;
            goto label_2ffa64;
        }
    }
    ctx->pc = 0x2FF998u;
    // 0x2ff998: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FF998u;
    SET_GPR_U32(ctx, 31, 0x2FF9A0u);
    ctx->pc = 0x2FF99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF998u;
    // 0x2ff99c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FF998u, 0x2FF9A0u)) {
        return;
    }
    ctx->pc = 0x2FF9A0u;
label_2ff9a0:
    // 0x2ff9a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2ff9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff9a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ff9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ff9a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ff9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ff9ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2ff9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2ff9b0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x2FF9B0u;
    {
        const bool branch_taken_0x2ff9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF9B0u;
        // 0x2ff9b4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9b0) {
            ctx->pc = 0x2FFA60u;
            goto label_2ffa60;
        }
    }
    ctx->pc = 0x2FF9B8u;
label_2ff9b8:
    // 0x2ff9b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9bc: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FF9BCu;
    SET_GPR_U32(ctx, 31, 0x2FF9C4u);
    ctx->pc = 0x2FF9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9BCu;
    // 0x2ff9c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FF9BCu, 0x2FF9C4u)) {
        return;
    }
    ctx->pc = 0x2FF9C4u;
label_2ff9c4:
    // 0x2ff9c4: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x2ff9c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2ff9c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ff9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff9cc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2ff9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ff9d0: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x2ff9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2ff9d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9d8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2ff9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2ff9dc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2ff9dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ff9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ff9e4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2ff9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9e8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2ff9e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9ec: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ff9ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9f0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2ff9f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff9f4: 0xc0bfd42  jal         func_2FF508
    ctx->pc = 0x2FF9F4u;
    SET_GPR_U32(ctx, 31, 0x2FF9FCu);
    ctx->pc = 0x2FF9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF9F4u;
    // 0x2ff9f8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF508u, 0x2FF9F4u, 0x2FF9FCu)) {
        return;
    }
    ctx->pc = 0x2FF9FCu;
label_2ff9fc:
    // 0x2ff9fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ff9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa00: 0xc0c0122  jal         func_300488
    ctx->pc = 0x2FFA00u;
    SET_GPR_U32(ctx, 31, 0x2FFA08u);
    ctx->pc = 0x2FFA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA00u;
    // 0x2ffa04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x300488u, 0x2FFA00u, 0x2FFA08u)) {
        return;
    }
    ctx->pc = 0x2FFA08u;
label_2ffa08:
    // 0x2ffa08: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2ffa08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ffa0c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2ffa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2ffa10: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x2ffa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2ffa14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ffa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa18: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2ffa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa1c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2ffa1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa20: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2ffa20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa24: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ffa24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa28: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2ffa28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ffa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ffa30: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2ffa30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ffa34: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2ffa34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa38: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2ffa38u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ffa3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ffa3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ffa40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ffa40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ffa44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ffa44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ffa48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ffa48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ffa4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ffa4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffa50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ffa50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffa54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ffa54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffa58: 0x80bfd42  j           func_2FF508
    ctx->pc = 0x2FFA58u;
    ctx->pc = 0x2FFA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA58u;
    // 0x2ffa5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF508u;
    sub_002FF508_0x2ff508(rdram, ctx, runtime); return;
    ctx->pc = 0x2FFA60u;
label_2ffa60:
    // 0x2ffa60: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2ffa60u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_2ffa64:
    // 0x2ffa64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ffa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa68: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x2ffa68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2ffa6c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2ffa6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2ffa70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa74: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2ffa74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa78: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2ffa78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa7c: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2ffa7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ffa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffa84: 0xc0bfd42  jal         func_2FF508
    ctx->pc = 0x2FFA84u;
    SET_GPR_U32(ctx, 31, 0x2FFA8Cu);
    ctx->pc = 0x2FFA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFA84u;
    // 0x2ffa88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FF508u, 0x2FFA84u, 0x2FFA8Cu)) {
        return;
    }
    ctx->pc = 0x2FFA8Cu;
label_2ffa8c:
    // 0x2ffa8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2ffa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ffa90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ffa90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ffa94: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ffa94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ffa98: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2ffa98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2ffa9c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2ffa9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ffaa0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2ffaa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ffaa4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2ffaa4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ffaa8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2ffaa8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ffaac: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2ffaacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ffab0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2ffab0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ffab4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2ffab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ffab8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2ffab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ffabc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2ffabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ffac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2ffac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ffac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FFAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFAC4u;
        // 0x2ffac8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FFACCu;
    // 0x2ffacc: 0x0  nop
    ctx->pc = 0x2ffaccu;
    // NOP
    ctx->pc = 0x2ffad0u;
}
