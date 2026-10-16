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

// Function: sub_002DD478
// Address: 0x2dd478 - 0x2dd5a8
void sub_002DD478_0x2dd478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD478_0x2dd478");
#endif

    switch (ctx->pc) {
        case 0x2dd498u: goto label_2dd498;
        case 0x2dd4b8u: goto label_2dd4b8;
        case 0x2dd4d4u: goto label_2dd4d4;
        case 0x2dd4f0u: goto label_2dd4f0;
        case 0x2dd50cu: goto label_2dd50c;
        case 0x2dd520u: goto label_2dd520;
        case 0x2dd54cu: goto label_2dd54c;
        default: break;
    }

    ctx->pc = 0x2dd478u;

    // 0x2dd478: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dd47c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dd47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dd480: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dd480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dd484: 0x24a5f100  addiu       $a1, $a1, -0xF00
    ctx->pc = 0x2dd484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    // 0x2dd488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dd488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dd48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd490: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD490u;
    SET_GPR_U32(ctx, 31, 0x2DD498u);
    ctx->pc = 0x2DD494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD490u;
    // 0x2dd494: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD490u, 0x2DD498u)) {
        return;
    }
    ctx->pc = 0x2DD498u;
label_2dd498:
    // 0x2dd498: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DD498u;
    {
        const bool branch_taken_0x2dd498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD498u;
        // 0x2dd49c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd498) {
            ctx->pc = 0x2DD4ACu;
            goto label_2dd4ac;
        }
    }
    ctx->pc = 0x2DD4A0u;
    // 0x2dd4a0: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x2dd4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2dd4a4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2DD4A4u;
    {
        const bool branch_taken_0x2dd4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4A4u;
        // 0x2dd4a8: 0x210c2  srl         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4a4) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD4ACu;
label_2dd4ac:
    // 0x2dd4ac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dd4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dd4b0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD4B0u;
    SET_GPR_U32(ctx, 31, 0x2DD4B8u);
    ctx->pc = 0x2DD4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4B0u;
    // 0x2dd4b4: 0x24a5f0f0  addiu       $a1, $a1, -0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD4B0u, 0x2DD4B8u)) {
        return;
    }
    ctx->pc = 0x2DD4B8u;
label_2dd4b8:
    // 0x2dd4b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD4B8u;
    {
        const bool branch_taken_0x2dd4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4B8u;
        // 0x2dd4bc: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4b8) {
            ctx->pc = 0x2DD4C8u;
            goto label_2dd4c8;
        }
    }
    ctx->pc = 0x2DD4C0u;
    // 0x2dd4c0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2DD4C0u;
    {
        const bool branch_taken_0x2dd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4C0u;
        // 0x2dd4c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4c0) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD4C8u;
label_2dd4c8:
    // 0x2dd4c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dd4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dd4cc: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD4CCu;
    SET_GPR_U32(ctx, 31, 0x2DD4D4u);
    ctx->pc = 0x2DD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4CCu;
    // 0x2dd4d0: 0x24a5f110  addiu       $a1, $a1, -0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD4CCu, 0x2DD4D4u)) {
        return;
    }
    ctx->pc = 0x2DD4D4u;
label_2dd4d4:
    // 0x2dd4d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD4D4u;
    {
        const bool branch_taken_0x2dd4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4D4u;
        // 0x2dd4d8: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4d4) {
            ctx->pc = 0x2DD4E4u;
            goto label_2dd4e4;
        }
    }
    ctx->pc = 0x2DD4DCu;
    // 0x2dd4dc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2DD4DCu;
    {
        const bool branch_taken_0x2dd4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4DCu;
        // 0x2dd4e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4dc) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD4E4u;
label_2dd4e4:
    // 0x2dd4e4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dd4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dd4e8: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD4E8u;
    SET_GPR_U32(ctx, 31, 0x2DD4F0u);
    ctx->pc = 0x2DD4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD4E8u;
    // 0x2dd4ec: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD4E8u, 0x2DD4F0u)) {
        return;
    }
    ctx->pc = 0x2DD4F0u;
label_2dd4f0:
    // 0x2dd4f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD4F0u;
    {
        const bool branch_taken_0x2dd4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4F0u;
        // 0x2dd4f4: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4f0) {
            ctx->pc = 0x2DD500u;
            goto label_2dd500;
        }
    }
    ctx->pc = 0x2DD4F8u;
    // 0x2dd4f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2DD4F8u;
    {
        const bool branch_taken_0x2dd4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD4F8u;
        // 0x2dd4fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd4f8) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD500u;
label_2dd500:
    // 0x2dd500: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dd500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dd504: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD504u;
    SET_GPR_U32(ctx, 31, 0x2DD50Cu);
    ctx->pc = 0x2DD508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD504u;
    // 0x2dd508: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD504u, 0x2DD50Cu)) {
        return;
    }
    ctx->pc = 0x2DD50Cu;
label_2dd50c:
    // 0x2dd50c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD50Cu;
    {
        const bool branch_taken_0x2dd50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD50Cu;
        // 0x2dd510: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd50c) {
            ctx->pc = 0x2DD528u;
            goto label_2dd528;
        }
    }
    ctx->pc = 0x2DD514u;
    // 0x2dd514: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dd514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dd518: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD518u;
    SET_GPR_U32(ctx, 31, 0x2DD520u);
    ctx->pc = 0x2DD51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD518u;
    // 0x2dd51c: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD518u, 0x2DD520u)) {
        return;
    }
    ctx->pc = 0x2DD520u;
label_2dd520:
    // 0x2dd520: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD520u;
    {
        const bool branch_taken_0x2dd520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD520u;
        // 0x2dd524: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd520) {
            ctx->pc = 0x2DD540u;
            goto label_2dd540;
        }
    }
    ctx->pc = 0x2DD528u;
label_2dd528:
    // 0x2dd528: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x2dd528u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x2dd52c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2dd52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2dd530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dd530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dd534: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2dd534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2dd538: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2DD538u;
    {
        const bool branch_taken_0x2dd538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD538u;
        // 0x2dd53c: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd538) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD540u;
label_2dd540:
    // 0x2dd540: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2dd540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2dd544: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD544u;
    SET_GPR_U32(ctx, 31, 0x2DD54Cu);
    ctx->pc = 0x2DD548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD544u;
    // 0x2dd548: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD544u, 0x2DD54Cu)) {
        return;
    }
    ctx->pc = 0x2DD54Cu;
label_2dd54c:
    // 0x2dd54c: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DD54Cu;
    {
        const bool branch_taken_0x2dd54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DD550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD54Cu;
        // 0x2dd550: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd54c) {
            ctx->pc = 0x2DD594u;
            goto label_2dd594;
        }
    }
    ctx->pc = 0x2DD554u;
    // 0x2dd554: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2dd554u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2dd558: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2dd558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2dd55c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD55Cu;
    {
        const bool branch_taken_0x2dd55c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD55Cu;
        // 0x2dd560: 0x3484f400  ori         $a0, $a0, 0xF400 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62464);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd55c) {
            ctx->pc = 0x2DD568u;
            goto label_2dd568;
        }
    }
    ctx->pc = 0x2DD564u;
    // 0x2dd564: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2dd564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dd568:
    // 0x2dd568: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x2dd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2dd56c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2dd56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dd570: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2dd570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2dd574: 0x3404bb80  ori         $a0, $zero, 0xBB80
    ctx->pc = 0x2dd574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x2dd578: 0x83180a  movz        $v1, $a0, $v1
    ctx->pc = 0x2dd578u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2dd57c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DD57Cu;
    {
        const bool branch_taken_0x2dd57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd57c) {
            ctx->pc = 0x2DD580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD57Cu;
            // 0x2dd580: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD584u;
            goto label_2dd584;
        }
    }
    ctx->pc = 0x2DD584u;
label_2dd584:
    // 0x2dd584: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2dd584u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2dd588: 0x1012  mflo        $v0
    ctx->pc = 0x2dd588u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2dd58c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DD58Cu;
    {
        const bool branch_taken_0x2dd58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD58Cu;
        // 0x2dd590: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd58c) {
            ctx->pc = 0x2DD598u;
            goto label_2dd598;
        }
    }
    ctx->pc = 0x2DD594u;
label_2dd594:
    // 0x2dd594: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dd594u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd598:
    // 0x2dd598: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dd598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd59c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD59Cu;
        // 0x2dd5a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD5A4u;
    // 0x2dd5a4: 0x0  nop
    ctx->pc = 0x2dd5a4u;
    // NOP
    ctx->pc = 0x2dd5a8u;
}
