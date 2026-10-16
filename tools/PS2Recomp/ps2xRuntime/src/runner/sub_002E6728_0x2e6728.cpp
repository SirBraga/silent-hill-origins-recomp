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

// Function: sub_002E6728
// Address: 0x2e6728 - 0x2e6990
void sub_002E6728_0x2e6728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6728_0x2e6728");
#endif

    switch (ctx->pc) {
        case 0x2e6768u: goto label_2e6768;
        case 0x2e6784u: goto label_2e6784;
        case 0x2e67b4u: goto label_2e67b4;
        case 0x2e67c4u: goto label_2e67c4;
        case 0x2e67e8u: goto label_2e67e8;
        case 0x2e68b8u: goto label_2e68b8;
        default: break;
    }

    ctx->pc = 0x2e6728u;

    // 0x2e6728: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e6728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2e672c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e672cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2e6730: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e6730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e6734: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2e6734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6738: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e6738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e673c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2e673cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6740: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2e6740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2e6744: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e6744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6748: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e6748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2e674c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6750: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e6750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e6754: 0x2c420060  sltiu       $v0, $v0, 0x60
    ctx->pc = 0x2e6754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)96) ? 1 : 0);
    // 0x2e6758: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6758u;
    {
        const bool branch_taken_0x2e6758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6758u;
        // 0x2e675c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6758) {
            ctx->pc = 0x2E6768u;
            goto label_2e6768;
        }
    }
    ctx->pc = 0x2E6760u;
    // 0x2e6760: 0xc0b7768  jal         func_2DDDA0
    ctx->pc = 0x2E6760u;
    SET_GPR_U32(ctx, 31, 0x2E6768u);
    ctx->pc = 0x2E6764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6760u;
    // 0x2e6764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDDA0u, 0x2E6760u, 0x2E6768u)) {
        return;
    }
    ctx->pc = 0x2E6768u;
label_2e6768:
    // 0x2e6768: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2e6768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e676c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E676Cu;
    {
        const bool branch_taken_0x2e676c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e676c) {
            ctx->pc = 0x2E6770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E676Cu;
            // 0x2e6770: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E67A0u;
            goto label_2e67a0;
        }
    }
    ctx->pc = 0x2E6774u;
    // 0x2e6774: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e6774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e6778: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2e6778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e677c: 0xc0b7076  jal         func_2DC1D8
    ctx->pc = 0x2E677Cu;
    SET_GPR_U32(ctx, 31, 0x2E6784u);
    ctx->pc = 0x2E6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E677Cu;
    // 0x2e6780: 0x34a50806  ori         $a1, $a1, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC1D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC1D8u, 0x2E677Cu, 0x2E6784u)) {
        return;
    }
    ctx->pc = 0x2E6784u;
label_2e6784:
    // 0x2e6784: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E6784u;
    {
        const bool branch_taken_0x2e6784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6784u;
        // 0x2e6788: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6784) {
            ctx->pc = 0x2E6794u;
            goto label_2e6794;
        }
    }
    ctx->pc = 0x2E678Cu;
    // 0x2e678c: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2E678Cu;
    {
        const bool branch_taken_0x2e678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E678Cu;
        // 0x2e6790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e678c) {
            ctx->pc = 0x2E696Cu;
            goto label_2e696c;
        }
    }
    ctx->pc = 0x2E6794u;
label_2e6794:
    // 0x2e6794: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2e6794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e6798: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2e6798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2e679c: 0x8e130010  lw          $s3, 0x10($s0)
    ctx->pc = 0x2e679cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2e67a0:
    // 0x2e67a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e67a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67a4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x2e67a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e67a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e67a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e67ac: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E67ACu;
    SET_GPR_U32(ctx, 31, 0x2E67B4u);
    ctx->pc = 0x2E67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67ACu;
    // 0x2e67b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E67ACu, 0x2E67B4u)) {
        return;
    }
    ctx->pc = 0x2E67B4u;
label_2e67b4:
    // 0x2e67b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2e67b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2e67b8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2e67b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e67bc: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E67BCu;
    SET_GPR_U32(ctx, 31, 0x2E67C4u);
    ctx->pc = 0x2E67C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67BCu;
    // 0x2e67c0: 0x24a5f0f0  addiu       $a1, $a1, -0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E67BCu, 0x2E67C4u)) {
        return;
    }
    ctx->pc = 0x2E67C4u;
label_2e67c4:
    // 0x2e67c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E67C4u;
    {
        const bool branch_taken_0x2e67c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E67C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67C4u;
        // 0x2e67c8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67c4) {
            ctx->pc = 0x2E67DCu;
            goto label_2e67dc;
        }
    }
    ctx->pc = 0x2E67CCu;
    // 0x2e67cc: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x2e67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2e67d0: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2e67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2e67d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E67D4u;
    {
        const bool branch_taken_0x2e67d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67D4u;
        // 0x2e67d8: 0x28082  srl         $s0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67d4) {
            ctx->pc = 0x2E6810u;
            goto label_2e6810;
        }
    }
    ctx->pc = 0x2E67DCu;
label_2e67dc:
    // 0x2e67dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2e67dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2e67e0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2E67E0u;
    SET_GPR_U32(ctx, 31, 0x2E67E8u);
    ctx->pc = 0x2E67E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E67E0u;
    // 0x2e67e4: 0x24a5f100  addiu       $a1, $a1, -0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2E67E0u, 0x2E67E8u)) {
        return;
    }
    ctx->pc = 0x2E67E8u;
label_2e67e8:
    // 0x2e67e8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E67E8u;
    {
        const bool branch_taken_0x2e67e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E67ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67E8u;
        // 0x2e67ec: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67e8) {
            ctx->pc = 0x2E6814u;
            goto label_2e6814;
        }
    }
    ctx->pc = 0x2E67F0u;
    // 0x2e67f0: 0x9246000c  lbu         $a2, 0xC($s2)
    ctx->pc = 0x2e67f0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2e67f4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2e67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2e67f8: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E67F8u;
    {
        const bool branch_taken_0x2e67f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E67FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E67F8u;
        // 0x2e67fc: 0x38c20008  xori        $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e67f8) {
            ctx->pc = 0x2E6808u;
            goto label_2e6808;
        }
    }
    ctx->pc = 0x2E6800u;
    // 0x2e6800: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E6800u;
    {
        const bool branch_taken_0x2e6800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6800u;
        // 0x2e6804: 0x118042  srl         $s0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6800) {
            ctx->pc = 0x2E6814u;
            goto label_2e6814;
        }
    }
    ctx->pc = 0x2E6808u;
label_2e6808:
    // 0x2e6808: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x2e6808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e680c: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2e680cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2e6810:
    // 0x2e6810: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e6810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e6814:
    // 0x2e6814: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x2e6814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
    // 0x2e6818: 0x205001b  divu        $zero, $s0, $a1
    ctx->pc = 0x2e6818u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2e681c: 0x2062024  and         $a0, $s0, $a2
    ctx->pc = 0x2e681cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 6));
    // 0x2e6820: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x2e6820u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x2e6824: 0x101e02  srl         $v1, $s0, 24
    ctx->pc = 0x2e6824u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
    // 0x2e6828: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x2e6828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x2e682c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e682cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e6830: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2e6830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e6834: 0x102600  sll         $a0, $s0, 24
    ctx->pc = 0x2e6834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    // 0x2e6838: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e6838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e683c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E683Cu;
    {
        const bool branch_taken_0x2e683c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e683c) {
            ctx->pc = 0x2E6840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E683Cu;
            // 0x2e6840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6844u;
            goto label_2e6844;
        }
    }
    ctx->pc = 0x2E6844u;
label_2e6844:
    // 0x2e6844: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e6844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e6848: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e6848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e684c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2e684cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2e6850: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2e6850u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2e6854: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x2e6854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x2e6858: 0x246b5400  addiu       $t3, $v1, 0x5400
    ctx->pc = 0x2e6858u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 21504));
    // 0x2e685c: 0x3508fffe  ori         $t0, $t0, 0xFFFE
    ctx->pc = 0x2e685cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65534);
    // 0x2e6860: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x2e6860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x2e6864: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e6864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e6868: 0x266a001c  addiu       $t2, $s3, 0x1C
    ctx->pc = 0x2e6868u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x2e686c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2e686cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6870: 0x3812  mflo        $a3
    ctx->pc = 0x2e6870u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2e6874: 0x4810  mfhi        $t1
    ctx->pc = 0x2e6874u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2e6878: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2e6878u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2e687c: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x2e687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x2e6880: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2e6880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e6884: 0x481824  and         $v1, $v0, $t0
    ctx->pc = 0x2e6884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2e6888: 0x3044ff00  andi        $a0, $v0, 0xFF00
    ctx->pc = 0x2e6888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2e688c: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x2e688cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2e6890: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2e6890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2e6894: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2e6894u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x2e6898: 0x63202  srl         $a2, $a2, 8
    ctx->pc = 0x2e6898u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x2e689c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x2e689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x2e68a0: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x2e68a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x2e68a4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e68a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e68a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e68ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e68acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e68b0: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x2e68b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
    // 0x2e68b4: 0x0  nop
    ctx->pc = 0x2e68b4u;
    // NOP
label_2e68b8:
    // 0x2e68b8: 0xc5600000  lwc1        $f0, 0x0($t3)
    ctx->pc = 0x2e68b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e68bc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2e68bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2e68c0: 0x2d840008  sltiu       $a0, $t4, 0x8
    ctx->pc = 0x2e68c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2e68c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e68c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e68c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e68c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e68cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e68ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e68d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e68d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e68d4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2e68d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e68d8: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2e68d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e68dc: 0x30a2ff00  andi        $v0, $a1, 0xFF00
    ctx->pc = 0x2e68dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2e68e0: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e68e4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e68e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2e68e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e68e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e68ec: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x2e68ecu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e68f0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x2e68f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x2e68f4: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x2e68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e68f8: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x2e68f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x2e68fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e68fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e6900: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e6900u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e6904: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2e6904u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e6908: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e6908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e690c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x2e690cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e6910: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2e6910u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e6914: 0x30a2ff00  andi        $v0, $a1, 0xFF00
    ctx->pc = 0x2e6914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2e6918: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e6918u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2e691c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e691cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e6920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e6920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e6924: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x2e6924u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6928: 0x1480ffe3  bnez        $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2E6928u;
    {
        const bool branch_taken_0x2e6928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E692Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6928u;
        // 0x2e692c: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6928) {
            ctx->pc = 0x2E68B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e68b8;
        }
    }
    ctx->pc = 0x2E6930u;
    // 0x2e6930: 0x86850000  lh          $a1, 0x0($s4)
    ctx->pc = 0x2e6930u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e6934: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x2e6934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x2e6938: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2e6938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e693c: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x2e693cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2e6940: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2e6940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2e6944: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2e6944u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2e6948: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e6948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e694c: 0xa6630040  sh          $v1, 0x40($s3)
    ctx->pc = 0x2e694cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e6950: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2e6950u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2e6954: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2e6954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e6958: 0x30a3ff00  andi        $v1, $a1, 0xFF00
    ctx->pc = 0x2e6958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x2e695c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2e695cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2e6960: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2e6960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2e6964: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e6964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e6968: 0xa6630042  sh          $v1, 0x42($s3)
    ctx->pc = 0x2e6968u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 66), (uint16_t)GPR_U32(ctx, 3));
label_2e696c:
    // 0x2e696c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e696cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e6970: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e6970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e6974: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e6974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6978: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e6978u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e697c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2e697cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e6980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6984: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E6988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6984u;
        // 0x2e6988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E698Cu;
    // 0x2e698c: 0x0  nop
    ctx->pc = 0x2e698cu;
    // NOP
    ctx->pc = 0x2e6990u;
}
