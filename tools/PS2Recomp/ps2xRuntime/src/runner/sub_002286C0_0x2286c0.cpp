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

// Function: sub_002286C0
// Address: 0x2286c0 - 0x2287c8
void sub_002286C0_0x2286c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002286C0_0x2286c0");
#endif

    switch (ctx->pc) {
        case 0x2286c0u: goto label_2286c0;
        case 0x2286c4u: goto label_2286c4;
        case 0x2286c8u: goto label_2286c8;
        case 0x2286ccu: goto label_2286cc;
        case 0x2286d0u: goto label_2286d0;
        case 0x2286d4u: goto label_2286d4;
        case 0x2286d8u: goto label_2286d8;
        case 0x2286dcu: goto label_2286dc;
        case 0x2286e0u: goto label_2286e0;
        case 0x2286e4u: goto label_2286e4;
        case 0x2286e8u: goto label_2286e8;
        case 0x2286ecu: goto label_2286ec;
        case 0x2286f0u: goto label_2286f0;
        case 0x2286f4u: goto label_2286f4;
        case 0x2286f8u: goto label_2286f8;
        case 0x2286fcu: goto label_2286fc;
        case 0x228700u: goto label_228700;
        case 0x228704u: goto label_228704;
        case 0x228708u: goto label_228708;
        case 0x22870cu: goto label_22870c;
        case 0x228710u: goto label_228710;
        case 0x228714u: goto label_228714;
        case 0x228718u: goto label_228718;
        case 0x22871cu: goto label_22871c;
        case 0x228720u: goto label_228720;
        case 0x228724u: goto label_228724;
        case 0x228728u: goto label_228728;
        case 0x22872cu: goto label_22872c;
        case 0x228730u: goto label_228730;
        case 0x228734u: goto label_228734;
        case 0x228738u: goto label_228738;
        case 0x22873cu: goto label_22873c;
        case 0x228740u: goto label_228740;
        case 0x228744u: goto label_228744;
        case 0x228748u: goto label_228748;
        case 0x22874cu: goto label_22874c;
        case 0x228750u: goto label_228750;
        case 0x228754u: goto label_228754;
        case 0x228758u: goto label_228758;
        case 0x22875cu: goto label_22875c;
        case 0x228760u: goto label_228760;
        case 0x228764u: goto label_228764;
        case 0x228768u: goto label_228768;
        case 0x22876cu: goto label_22876c;
        case 0x228770u: goto label_228770;
        case 0x228774u: goto label_228774;
        case 0x228778u: goto label_228778;
        case 0x22877cu: goto label_22877c;
        case 0x228780u: goto label_228780;
        case 0x228784u: goto label_228784;
        case 0x228788u: goto label_228788;
        case 0x22878cu: goto label_22878c;
        case 0x228790u: goto label_228790;
        case 0x228794u: goto label_228794;
        case 0x228798u: goto label_228798;
        case 0x22879cu: goto label_22879c;
        case 0x2287a0u: goto label_2287a0;
        case 0x2287a4u: goto label_2287a4;
        case 0x2287a8u: goto label_2287a8;
        case 0x2287acu: goto label_2287ac;
        case 0x2287b0u: goto label_2287b0;
        case 0x2287b4u: goto label_2287b4;
        case 0x2287b8u: goto label_2287b8;
        case 0x2287bcu: goto label_2287bc;
        case 0x2287c0u: goto label_2287c0;
        case 0x2287c4u: goto label_2287c4;
        default: break;
    }

    ctx->pc = 0x2286c0u;

label_2286c0:
    // 0x2286c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2286c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2286c4:
    // 0x2286c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2286c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2286c8:
    // 0x2286c8: 0x8c423e98  lw          $v0, 0x3E98($v0)
    ctx->pc = 0x2286c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16024)));
label_2286cc:
    // 0x2286cc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2286ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2286d0:
    // 0x2286d0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2286d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2286d4:
    // 0x2286d4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2286d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2286d8:
    // 0x2286d8: 0x24720fc8  addiu       $s2, $v1, 0xFC8
    ctx->pc = 0x2286d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2286dc:
    // 0x2286dc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2286dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2286e0:
    // 0x2286e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2286e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2286e4:
    // 0x2286e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2286e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2286e8:
    // 0x2286e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2286e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2286ec:
    // 0x2286ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2286ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2286f0:
    // 0x2286f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2286f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2286f4:
    // 0x2286f4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2286f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2286f8:
    // 0x2286f8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2286f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2286fc:
    // 0x2286fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2286fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_228700:
    // 0x228700: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x228700u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228704:
    // 0x228704: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x228704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_228708:
    // 0x228708: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x228708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_22870c:
    // 0x22870c: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x22870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
label_228710:
    // 0x228710: 0x40f809  jalr        $v0
label_228714:
    if (ctx->pc == 0x228714u) {
        ctx->pc = 0x228714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228710u;
        // 0x228714: 0x34a50407  ori         $a1, $a1, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        ctx->pc = 0x228718u;
        goto label_228718;
    }
    ctx->pc = 0x228710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228718u);
        ctx->pc = 0x228714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228710u;
        // 0x228714: 0x34a50407  ori         $a1, $a1, 0x407 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1031);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228710u, 0x228718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228718u;
label_228718:
    // 0x228718: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22871c:
    // 0x22871c: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_228720:
    if (ctx->pc == 0x228720u) {
        ctx->pc = 0x228720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22871Cu;
        // 0x228720: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228724u;
        goto label_228724;
    }
    ctx->pc = 0x22871Cu;
    {
        const bool branch_taken_0x22871c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x228720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22871Cu;
        // 0x228720: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22871c) {
            ctx->pc = 0x22879Cu;
            goto label_22879c;
        }
    }
    ctx->pc = 0x228724u;
label_228724:
    // 0x228724: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x228724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_228728:
    // 0x228728: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x228728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_22872c:
    // 0x22872c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22872cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228730:
    // 0x228730: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x228730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
label_228734:
    // 0x228734: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x228734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228738:
    // 0x228738: 0xae130014  sw          $s3, 0x14($s0)
    ctx->pc = 0x228738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
label_22873c:
    // 0x22873c: 0xa2000022  sb          $zero, 0x22($s0)
    ctx->pc = 0x22873cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 0));
label_228740:
    // 0x228740: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x228740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
label_228744:
    // 0x228744: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x228744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_228748:
    // 0x228748: 0xa600001e  sh          $zero, 0x1E($s0)
    ctx->pc = 0x228748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 0));
label_22874c:
    // 0x22874c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x22874cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_228750:
    // 0x228750: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x228750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_228754:
    // 0x228754: 0x40f809  jalr        $v0
label_228758:
    if (ctx->pc == 0x228758u) {
        ctx->pc = 0x228758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228754u;
        // 0x228758: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22875Cu;
        goto label_22875c;
    }
    ctx->pc = 0x228754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22875Cu);
        ctx->pc = 0x228758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228754u;
        // 0x228758: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228754u, 0x22875Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22875Cu;
label_22875c:
    // 0x22875c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_228760:
    if (ctx->pc == 0x228760u) {
        ctx->pc = 0x228760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22875Cu;
        // 0x228760: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228764u;
        goto label_228764;
    }
    ctx->pc = 0x22875Cu;
    {
        const bool branch_taken_0x22875c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22875Cu;
        // 0x228760: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22875c) {
            ctx->pc = 0x228788u;
            goto label_228788;
        }
    }
    ctx->pc = 0x228764u;
label_228764:
    // 0x228764: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x228764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_228768:
    // 0x228768: 0x8c633e98  lw          $v1, 0x3E98($v1)
    ctx->pc = 0x228768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16024)));
label_22876c:
    // 0x22876c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228770:
    // 0x228770: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x228770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_228774:
    // 0x228774: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x228774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_228778:
    // 0x228778: 0x40f809  jalr        $v0
label_22877c:
    if (ctx->pc == 0x22877Cu) {
        ctx->pc = 0x22877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228778u;
        // 0x22877c: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228780u;
        goto label_228780;
    }
    ctx->pc = 0x228778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228780u);
        ctx->pc = 0x22877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228778u;
        // 0x22877c: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228778u, 0x228780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228780u;
label_228780:
    // 0x228780: 0x10000007  b           . + 4 + (0x7 << 2)
label_228784:
    if (ctx->pc == 0x228784u) {
        ctx->pc = 0x228784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228780u;
        // 0x228784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228788u;
        goto label_228788;
    }
    ctx->pc = 0x228780u;
    {
        const bool branch_taken_0x228780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228780u;
        // 0x228784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228780) {
            ctx->pc = 0x2287A0u;
            goto label_2287a0;
        }
    }
    ctx->pc = 0x228788u;
label_228788:
    // 0x228788: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x228788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22878c:
    // 0x22878c: 0xc093958  jal         func_24E560
label_228790:
    if (ctx->pc == 0x228790u) {
        ctx->pc = 0x228790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22878Cu;
        // 0x228790: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228794u;
        goto label_228794;
    }
    ctx->pc = 0x22878Cu;
    SET_GPR_U32(ctx, 31, 0x228794u);
    ctx->pc = 0x228790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22878Cu;
    // 0x228790: 0x24840430  addiu       $a0, $a0, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E560u, 0x22878Cu, 0x228794u)) {
        return;
    }
    ctx->pc = 0x228794u;
label_228794:
    // 0x228794: 0x10000002  b           . + 4 + (0x2 << 2)
label_228798:
    if (ctx->pc == 0x228798u) {
        ctx->pc = 0x228798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228794u;
        // 0x228798: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22879Cu;
        goto label_22879c;
    }
    ctx->pc = 0x228794u;
    {
        const bool branch_taken_0x228794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228794u;
        // 0x228798: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228794) {
            ctx->pc = 0x2287A0u;
            goto label_2287a0;
        }
    }
    ctx->pc = 0x22879Cu;
label_22879c:
    // 0x22879c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22879cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2287a0:
    // 0x2287a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2287a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2287a4:
    // 0x2287a4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2287a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2287a8:
    // 0x2287a8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2287a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2287ac:
    // 0x2287ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2287acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2287b0:
    // 0x2287b0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2287b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2287b4:
    // 0x2287b4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2287b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2287b8:
    // 0x2287b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2287b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2287bc:
    // 0x2287bc: 0x3e00008  jr          $ra
label_2287c0:
    if (ctx->pc == 0x2287C0u) {
        ctx->pc = 0x2287C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287BCu;
        // 0x2287c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2287C4u;
        goto label_2287c4;
    }
    ctx->pc = 0x2287BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2287C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287BCu;
        // 0x2287c0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2287C4u;
label_2287c4:
    // 0x2287c4: 0x0  nop
    ctx->pc = 0x2287c4u;
    // NOP
    ctx->pc = 0x2287c8u;
}
