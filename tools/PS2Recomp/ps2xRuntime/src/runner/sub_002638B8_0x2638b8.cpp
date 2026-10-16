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

// Function: sub_002638B8
// Address: 0x2638b8 - 0x263fc0
void sub_002638B8_0x2638b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002638B8_0x2638b8");
#endif

    switch (ctx->pc) {
        case 0x263960u: goto label_263960;
        case 0x2639acu: goto label_2639ac;
        case 0x2639c0u: goto label_2639c0;
        case 0x263b60u: goto label_263b60;
        case 0x263c38u: goto label_263c38;
        case 0x263d80u: goto label_263d80;
        case 0x263e70u: goto label_263e70;
        default: break;
    }

    ctx->pc = 0x2638b8u;

    // 0x2638b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2638b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2638bc: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2638bcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2638c0: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x2638c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x2638c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2638c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2638c8: 0x8dc300b0  lw          $v1, 0xB0($t6)
    ctx->pc = 0x2638c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 176)));
    // 0x2638cc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2638ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2638d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2638D0u;
    {
        const bool branch_taken_0x2638d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2638D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638D0u;
        // 0x2638d4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638d0) {
            ctx->pc = 0x2638E4u;
            goto label_2638e4;
        }
    }
    ctx->pc = 0x2638D8u;
    // 0x2638d8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2638d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2638dc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2638DCu;
    {
        const bool branch_taken_0x2638dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2638E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638DCu;
        // 0x2638e0: 0x3062000c  andi        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638dc) {
            ctx->pc = 0x263904u;
            goto label_263904;
        }
    }
    ctx->pc = 0x2638E4u;
label_2638e4:
    // 0x2638e4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2638e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2638e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2638e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2638ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2638ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2638f0: 0xa1c201f0  sb          $v0, 0x1F0($t6)
    ctx->pc = 0x2638f0u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x2638f4: 0xa1c300b8  sb          $v1, 0xB8($t6)
    ctx->pc = 0x2638f4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 184), (uint8_t)GPR_U32(ctx, 3));
    // 0x2638f8: 0xa1c400b9  sb          $a0, 0xB9($t6)
    ctx->pc = 0x2638f8u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 185), (uint8_t)GPR_U32(ctx, 4));
    // 0x2638fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2638FCu;
    {
        const bool branch_taken_0x2638fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2638FCu;
        // 0x263900: 0xa1c001f1  sb          $zero, 0x1F1($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 497), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2638fc) {
            ctx->pc = 0x263930u;
            goto label_263930;
        }
    }
    ctx->pc = 0x263904u;
label_263904:
    // 0x263904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263904u;
    {
        const bool branch_taken_0x263904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263904u;
        // 0x263908: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263904) {
            ctx->pc = 0x263920u;
            goto label_263920;
        }
    }
    ctx->pc = 0x26390Cu;
    // 0x26390c: 0xa1d100b9  sb          $s1, 0xB9($t6)
    ctx->pc = 0x26390cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 185), (uint8_t)GPR_U32(ctx, 17));
    // 0x263910: 0xa1c200b8  sb          $v0, 0xB8($t6)
    ctx->pc = 0x263910u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x263914: 0xa1c201f0  sb          $v0, 0x1F0($t6)
    ctx->pc = 0x263914u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x263918: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x263918u;
    {
        const bool branch_taken_0x263918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263918u;
        // 0x26391c: 0xa1c001f1  sb          $zero, 0x1F1($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 497), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263918) {
            ctx->pc = 0x263930u;
            goto label_263930;
        }
    }
    ctx->pc = 0x263920u;
label_263920:
    // 0x263920: 0xa1c001f1  sb          $zero, 0x1F1($t6)
    ctx->pc = 0x263920u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 497), (uint8_t)GPR_U32(ctx, 0));
    // 0x263924: 0xa1c200b8  sb          $v0, 0xB8($t6)
    ctx->pc = 0x263924u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x263928: 0xa1c201f0  sb          $v0, 0x1F0($t6)
    ctx->pc = 0x263928u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 496), (uint8_t)GPR_U32(ctx, 2));
    // 0x26392c: 0xa1c000b9  sb          $zero, 0xB9($t6)
    ctx->pc = 0x26392cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 185), (uint8_t)GPR_U32(ctx, 0));
label_263930:
    // 0x263930: 0x3c026800  lui         $v0, 0x6800
    ctx->pc = 0x263930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26624 << 16));
    // 0x263934: 0x3c036e00  lui         $v1, 0x6E00
    ctx->pc = 0x263934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28160 << 16));
    // 0x263938: 0x34422001  ori         $v0, $v0, 0x2001
    ctx->pc = 0x263938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8193);
    // 0x26393c: 0x34632001  ori         $v1, $v1, 0x2001
    ctx->pc = 0x26393cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8193);
    // 0x263940: 0x25d80020  addiu       $t8, $t6, 0x20
    ctx->pc = 0x263940u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
    // 0x263944: 0xadc20070  sw          $v0, 0x70($t6)
    ctx->pc = 0x263944u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 112), GPR_U32(ctx, 2));
    // 0x263948: 0xadc30078  sw          $v1, 0x78($t6)
    ctx->pc = 0x263948u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 120), GPR_U32(ctx, 3));
    // 0x26394c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x26394cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263950: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x263950u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x263954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263958: 0x300202d  daddu       $a0, $t8, $zero
    ctx->pc = 0x263958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26395c: 0x0  nop
    ctx->pc = 0x26395cu;
    // NOP
label_263960:
    // 0x263960: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x263960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x263964: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x263964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263968: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263968u;
    {
        const bool branch_taken_0x263968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263968u;
        // 0x26396c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263968) {
            ctx->pc = 0x263984u;
            goto label_263984;
        }
    }
    ctx->pc = 0x263970u;
    // 0x263970: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x263970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x263974: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263974u;
    {
        const bool branch_taken_0x263974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263974u;
        // 0x263978: 0x25e20001  addiu       $v0, $t7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263974) {
            ctx->pc = 0x263990u;
            goto label_263990;
        }
    }
    ctx->pc = 0x26397Cu;
    // 0x26397c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26397Cu;
    {
        const bool branch_taken_0x26397c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26397Cu;
        // 0x263980: 0x304f00ff  andi        $t7, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26397c) {
            ctx->pc = 0x263990u;
            goto label_263990;
        }
    }
    ctx->pc = 0x263984u;
label_263984:
    // 0x263984: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x263984u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
    // 0x263988: 0x25e20001  addiu       $v0, $t7, 0x1
    ctx->pc = 0x263988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x26398c: 0x304f00ff  andi        $t7, $v0, 0xFF
    ctx->pc = 0x26398cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_263990:
    // 0x263990: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x263990u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x263994: 0x2d42000a  sltiu       $v0, $t2, 0xA
    ctx->pc = 0x263994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x263998: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x263998u;
    {
        const bool branch_taken_0x263998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263998u;
        // 0x26399c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263998) {
            ctx->pc = 0x263960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263960;
        }
    }
    ctx->pc = 0x2639A0u;
    // 0x2639a0: 0x91c200b6  lbu         $v0, 0xB6($t6)
    ctx->pc = 0x2639a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 182)));
    // 0x2639a4: 0x11e20003  beq         $t7, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2639A4u;
    {
        const bool branch_taken_0x2639a4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x2639A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639A4u;
        // 0x2639a8: 0xa1d100b4  sb          $s1, 0xB4($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 180), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639a4) {
            ctx->pc = 0x2639B4u;
            goto label_2639b4;
        }
    }
    ctx->pc = 0x2639ACu;
label_2639ac:
    // 0x2639ac: 0x10000180  b           . + 4 + (0x180 << 2)
    ctx->pc = 0x2639ACu;
    {
        const bool branch_taken_0x2639ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2639B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639ACu;
        // 0x2639b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639ac) {
            ctx->pc = 0x263FB0u;
            goto label_263fb0;
        }
    }
    ctx->pc = 0x2639B4u;
label_2639b4:
    // 0x2639b4: 0x25c901f0  addiu       $t1, $t6, 0x1F0
    ctx->pc = 0x2639b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 496));
    // 0x2639b8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2639b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2639bc: 0x0  nop
    ctx->pc = 0x2639bcu;
    // NOP
label_2639c0:
    // 0x2639c0: 0x5220003a  beql        $s1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x2639C0u;
    {
        const bool branch_taken_0x2639c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639c0) {
            ctx->pc = 0x2639C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2639C0u;
            // 0x2639c4: 0x8d280004  lw          $t0, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263AACu;
            goto label_263aac;
        }
    }
    ctx->pc = 0x2639C8u;
    // 0x2639c8: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x2639c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2639cc: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2639CCu;
    {
        const bool branch_taken_0x2639cc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x2639cc) {
            ctx->pc = 0x2639D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2639CCu;
            // 0x2639d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2639D4u;
            goto label_2639d4;
        }
    }
    ctx->pc = 0x2639D4u;
label_2639d4:
    // 0x2639d4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2639d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2639d8: 0xef001b  divu        $zero, $a3, $t7
    ctx->pc = 0x2639d8u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2639dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2639dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2639e0: 0x1012  mflo        $v0
    ctx->pc = 0x2639e0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2639e4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2639e4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2639e8: 0x1012  mflo        $v0
    ctx->pc = 0x2639e8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2639ec: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x2639ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2639f0: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x2639f0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2639f4: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2639F4u;
    {
        const bool branch_taken_0x2639f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2639F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2639F4u;
        // 0x2639f8: 0xad250008  sw          $a1, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2639f4) {
            ctx->pc = 0x2639ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2639ac;
        }
    }
    ctx->pc = 0x2639FCu;
    // 0x2639fc: 0x25e80002  addiu       $t0, $t7, 0x2
    ctx->pc = 0x2639fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x263a00: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x263a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x263a04: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x263a04u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x263a08: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x263a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x263a0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x263a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x263a10: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x263a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x263a14: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x263a14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x263a18: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x263a18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x263a1c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x263a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x263a20: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x263a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x263a24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x263a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x263a28: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x263a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x263a2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263a30: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x263a30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x263a34: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x263A34u;
    {
        const bool branch_taken_0x263a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x263a34) {
            ctx->pc = 0x263A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263A34u;
            // 0x263a38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x263A3Cu;
            goto label_263a3c;
        }
    }
    ctx->pc = 0x263A3Cu;
label_263a3c:
    // 0x263a3c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x263a3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x263a40: 0x3012  mflo        $a2
    ctx->pc = 0x263a40u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x263a44: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x263a44u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x263a48: 0x1812  mflo        $v1
    ctx->pc = 0x263a48u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x263a4c: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x263a4cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x263a50: 0xad23000c  sw          $v1, 0xC($t1)
    ctx->pc = 0x263a50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 3));
    // 0x263a54: 0x3012  mflo        $a2
    ctx->pc = 0x263a54u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x263a58: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x263a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x263a5c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x263a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x263a60: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x263a60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x263a64: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x263a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x263a68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x263a68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x263a6c: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x263a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x263a70: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x263a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x263a74: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x263a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x263a78: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x263a78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x263a7c: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x263a7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x263a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263a84: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x263a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x263a88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x263a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x263a8c: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x263a8cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x263a90: 0xad250010  sw          $a1, 0x10($t1)
    ctx->pc = 0x263a90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 5));
    // 0x263a94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x263a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x263a98: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x263a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x263a9c: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x263a9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x263aa0: 0x3812  mflo        $a3
    ctx->pc = 0x263aa0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x263aa4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x263AA4u;
    {
        const bool branch_taken_0x263aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AA4u;
        // 0x263aa8: 0xad270014  sw          $a3, 0x14($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263aa4) {
            ctx->pc = 0x263B40u;
            goto label_263b40;
        }
    }
    ctx->pc = 0x263AACu;
label_263aac:
    // 0x263aac: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x263AACu;
    {
        const bool branch_taken_0x263aac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x263aac) {
            ctx->pc = 0x263AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263AACu;
            // 0x263ab0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x263AB4u;
            goto label_263ab4;
        }
    }
    ctx->pc = 0x263AB4u;
label_263ab4:
    // 0x263ab4: 0x91230001  lbu         $v1, 0x1($t1)
    ctx->pc = 0x263ab4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x263ab8: 0x10f001b  divu        $zero, $t0, $t7
    ctx->pc = 0x263ab8u;
    { uint32_t divisor = GPR_U32(ctx, 15); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x263abc: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x263abcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x263ac0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x263ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ac4: 0x1012  mflo        $v0
    ctx->pc = 0x263ac4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x263ac8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x263ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263acc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x263accu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x263ad0: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x263ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x263ad4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x263ad4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ad8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x263ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263adc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263ae0: 0x3012  mflo        $a2
    ctx->pc = 0x263ae0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x263ae4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x263ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x263ae8: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x263ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x263aec: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x263aecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x263af0: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
    ctx->pc = 0x263AF0u;
    {
        const bool branch_taken_0x263af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x263AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263AF0u;
        // 0x263af4: 0xad250008  sw          $a1, 0x8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263af0) {
            ctx->pc = 0x2639ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2639ac;
        }
    }
    ctx->pc = 0x263AF8u;
    // 0x263af8: 0x25e20002  addiu       $v0, $t7, 0x2
    ctx->pc = 0x263af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x263afc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x263afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b00: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x263b00u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x263b04: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x263b04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x263b08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x263B08u;
    {
        const bool branch_taken_0x263b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x263b08) {
            ctx->pc = 0x263B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263B08u;
            // 0x263b0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x263B10u;
            goto label_263b10;
        }
    }
    ctx->pc = 0x263B10u;
label_263b10:
    // 0x263b10: 0x91250001  lbu         $a1, 0x1($t1)
    ctx->pc = 0x263b10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x263b14: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x263b14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x263b18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x263b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b1c: 0x1812  mflo        $v1
    ctx->pc = 0x263b1cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x263b20: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x263b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x263b24: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x263b24u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x263b28: 0xad230010  sw          $v1, 0x10($t1)
    ctx->pc = 0x263b28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 3));
    // 0x263b2c: 0xad270014  sw          $a3, 0x14($t1)
    ctx->pc = 0x263b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
    // 0x263b30: 0x3012  mflo        $a2
    ctx->pc = 0x263b30u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x263b34: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x263b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x263b38: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x263b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x263b3c: 0xad240010  sw          $a0, 0x10($t1)
    ctx->pc = 0x263b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 4));
label_263b40:
    // 0x263b40: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x263b40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263b44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b48: 0x25500001  addiu       $s0, $t2, 0x1
    ctx->pc = 0x263b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x263b4c: 0x91c500b5  lbu         $a1, 0xB5($t6)
    ctx->pc = 0x263b4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 181)));
    // 0x263b50: 0x51400b  movn        $t0, $v0, $s1
    ctx->pc = 0x263b50u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2));
    // 0x263b54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x263b54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263b58: 0x25d900b8  addiu       $t9, $t6, 0xB8
    ctx->pc = 0x263b58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), 184));
    // 0x263b5c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x263b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_263b60:
    // 0x263b60: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x263b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x263b64: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263b68: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x263b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263b6c: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x263B6Cu;
    {
        const bool branch_taken_0x263b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B6Cu;
        // 0x263b70: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b6c) {
            ctx->pc = 0x263C0Cu;
            goto label_263c0c;
        }
    }
    ctx->pc = 0x263B74u;
    // 0x263b74: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x263B74u;
    {
        const bool branch_taken_0x263b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B74u;
        // 0x263b78: 0x2d420006  sltiu       $v0, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b74) {
            ctx->pc = 0x263C08u;
            goto label_263c08;
        }
    }
    ctx->pc = 0x263B7Cu;
    // 0x263b7c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x263B7Cu;
    {
        const bool branch_taken_0x263b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263B7Cu;
        // 0x263b80: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263b7c) {
            ctx->pc = 0x263C00u;
            goto label_263c00;
        }
    }
    ctx->pc = 0x263B84u;
    // 0x263b84: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x263b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x263b88: 0x2442b8a0  addiu       $v0, $v0, -0x4760
    ctx->pc = 0x263b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949024));
    // 0x263b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x263b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263b94: 0x800008  jr          $a0
    ctx->pc = 0x263B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263B9Cu: goto label_263b9c;
            case 0x263BB4u: goto label_263bb4;
            case 0x263BBCu: goto label_263bbc;
            case 0x263BD0u: goto label_263bd0;
            case 0x263BD8u: goto label_263bd8;
            case 0x263BE8u: goto label_263be8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263B94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x263B9Cu;
label_263b9c:
    // 0x263b9c: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x263b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x263ba0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263ba8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263bac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x263BACu;
    {
        const bool branch_taken_0x263bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BACu;
        // 0x263bb0: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bac) {
            ctx->pc = 0x263BFCu;
            goto label_263bfc;
        }
    }
    ctx->pc = 0x263BB4u;
label_263bb4:
    // 0x263bb4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x263BB4u;
    {
        const bool branch_taken_0x263bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BB4u;
        // 0x263bb8: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bb4) {
            ctx->pc = 0x263BFCu;
            goto label_263bfc;
        }
    }
    ctx->pc = 0x263BBCu;
label_263bbc:
    // 0x263bbc: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x263bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x263bc0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263bc4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263bc8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263BC8u;
    {
        const bool branch_taken_0x263bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BC8u;
        // 0x263bcc: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bc8) {
            ctx->pc = 0x263BFCu;
            goto label_263bfc;
        }
    }
    ctx->pc = 0x263BD0u;
label_263bd0:
    // 0x263bd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x263BD0u;
    {
        const bool branch_taken_0x263bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BD0u;
        // 0x263bd4: 0x8d220008  lw          $v0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263bd0) {
            ctx->pc = 0x263BFCu;
            goto label_263bfc;
        }
    }
    ctx->pc = 0x263BD8u;
label_263bd8:
    // 0x263bd8: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x263bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x263bdc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263be0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263BE0u;
    {
        const bool branch_taken_0x263be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263BE0u;
        // 0x263be4: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263be0) {
            ctx->pc = 0x263BFCu;
            goto label_263bfc;
        }
    }
    ctx->pc = 0x263BE8u;
label_263be8:
    // 0x263be8: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x263be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x263bec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263bf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263bf4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x263bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x263bf8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x263bf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_263bfc:
    // 0x263bfc: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x263bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_263c00:
    // 0x263c00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x263C00u;
    {
        const bool branch_taken_0x263c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C00u;
        // 0x263c04: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c00) {
            ctx->pc = 0x263C0Cu;
            goto label_263c0c;
        }
    }
    ctx->pc = 0x263C08u;
label_263c08:
    // 0x263c08: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x263c08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_263c0c:
    // 0x263c0c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x263c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x263c10: 0x2d42000a  sltiu       $v0, $t2, 0xA
    ctx->pc = 0x263c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x263c14: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x263C14u;
    {
        const bool branch_taken_0x263c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C14u;
        // 0x263c18: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c14) {
            ctx->pc = 0x263B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263b60;
        }
    }
    ctx->pc = 0x263C1Cu;
    // 0x263c1c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x263c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x263c20: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x263c20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c24: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x263c24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263c28: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x263c28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x263c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c30: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x263c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x263c34: 0x0  nop
    ctx->pc = 0x263c34u;
    // NOP
label_263c38:
    // 0x263c38: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x263c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x263c3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x263c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263c40: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x263c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263c44: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x263C44u;
    {
        const bool branch_taken_0x263c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C44u;
        // 0x263c48: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c44) {
            ctx->pc = 0x263D1Cu;
            goto label_263d1c;
        }
    }
    ctx->pc = 0x263C4Cu;
    // 0x263c4c: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x263c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x263c50: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x263c50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x263c54: 0xa0ec002e  sb          $t4, 0x2E($a3)
    ctx->pc = 0x263c54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x263c58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x263c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263c5c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x263c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x263c60: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x263C60u;
    {
        const bool branch_taken_0x263c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C60u;
        // 0x263c64: 0x25a20001  addiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c60) {
            ctx->pc = 0x263CF8u;
            goto label_263cf8;
        }
    }
    ctx->pc = 0x263C68u;
    // 0x263c68: 0x8d260008  lw          $a2, 0x8($t1)
    ctx->pc = 0x263c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x263c6c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x263c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c70: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x263c70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x263c74: 0xac660018  sw          $a2, 0x18($v1)
    ctx->pc = 0x263c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
    // 0x263c78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x263c78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263c7c: 0xac4d0020  sw          $t5, 0x20($v0)
    ctx->pc = 0x263c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 13));
    // 0x263c80: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x263c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x263c84: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x263c84u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x263c88: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x263c88u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263c8c: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x263c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x263c90: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x263C90u;
    {
        const bool branch_taken_0x263c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263C90u;
        // 0x263c94: 0xa4e80028  sh          $t0, 0x28($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263c90) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263C98u;
    // 0x263c98: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x263c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x263c9c: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x263c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x263ca0: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x263ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x263ca4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263ca8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x263ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263cac: 0x800008  jr          $a0
    ctx->pc = 0x263CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263CB4u: goto label_263cb4;
            case 0x263CC0u: goto label_263cc0;
            case 0x263CD0u: goto label_263cd0;
            case 0x263CD8u: goto label_263cd8;
            case 0x263CE4u: goto label_263ce4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263CACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x263CB4u;
label_263cb4:
    // 0x263cb4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x263cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x263cb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x263CB8u;
    {
        const bool branch_taken_0x263cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CB8u;
        // 0x263cbc: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cb8) {
            ctx->pc = 0x263CC4u;
            goto label_263cc4;
        }
    }
    ctx->pc = 0x263CC0u;
label_263cc0:
    // 0x263cc0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x263cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_263cc4:
    // 0x263cc4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263cc8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x263CC8u;
    {
        const bool branch_taken_0x263cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CC8u;
        // 0x263ccc: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cc8) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263CD0u;
label_263cd0:
    // 0x263cd0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x263CD0u;
    {
        const bool branch_taken_0x263cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CD0u;
        // 0x263cd4: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cd0) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263CD8u;
label_263cd8:
    // 0x263cd8: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x263cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x263cdc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x263CDCu;
    {
        const bool branch_taken_0x263cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CDCu;
        // 0x263ce0: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cdc) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263CE4u;
label_263ce4:
    // 0x263ce4: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x263ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x263ce8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x263ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x263cec: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x263cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x263cf0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x263CF0u;
    {
        const bool branch_taken_0x263cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263CF0u;
        // 0x263cf4: 0x25903  sra         $t3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263cf0) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263CF8u;
label_263cf8:
    // 0x263cf8: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x263cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x263cfc: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x263cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x263d00: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x263d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x263d04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d08: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x263d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x263d0c: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x263d0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263d10: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x263d10u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x263d14: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x263D14u;
    {
        const bool branch_taken_0x263d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D14u;
        // 0x263d18: 0xa4e00028  sh          $zero, 0x28($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d14) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263D1Cu;
label_263d1c:
    // 0x263d1c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x263d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x263d20: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x263D20u;
    {
        const bool branch_taken_0x263d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D20u;
        // 0x263d24: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d20) {
            ctx->pc = 0x263D54u;
            goto label_263d54;
        }
    }
    ctx->pc = 0x263D28u;
    // 0x263d28: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x263d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x263d2c: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x263d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x263d30: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x263d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x263d34: 0xa06c002e  sb          $t4, 0x2E($v1)
    ctx->pc = 0x263d34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x263d38: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x263d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d3c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x263d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x263d40: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x263d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d44: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x263d44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x263d48: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x263d48u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x263d4c: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x263d4cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x263d50: 0xa4600028  sh          $zero, 0x28($v1)
    ctx->pc = 0x263d50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 40), (uint16_t)GPR_U32(ctx, 0));
label_263d54:
    // 0x263d54: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x263d54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x263d58: 0x2d42000a  sltiu       $v0, $t2, 0xA
    ctx->pc = 0x263d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x263d5c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x263D5Cu;
    {
        const bool branch_taken_0x263d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D5Cu;
        // 0x263d60: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d5c) {
            ctx->pc = 0x263C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263c38;
        }
    }
    ctx->pc = 0x263D64u;
    // 0x263d64: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x263d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x263d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263d6c: 0x91c500b5  lbu         $a1, 0xB5($t6)
    ctx->pc = 0x263d6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 181)));
    // 0x263d70: 0x51400b  movn        $t0, $v0, $s1
    ctx->pc = 0x263d70u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2));
    // 0x263d74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x263d74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d78: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x263d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x263d7c: 0x0  nop
    ctx->pc = 0x263d7cu;
    // NOP
label_263d80:
    // 0x263d80: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x263d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x263d84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263d88: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x263d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263d8c: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x263D8Cu;
    {
        const bool branch_taken_0x263d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D8Cu;
        // 0x263d90: 0x30422000  andi        $v0, $v0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d8c) {
            ctx->pc = 0x263E44u;
            goto label_263e44;
        }
    }
    ctx->pc = 0x263D94u;
    // 0x263d94: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x263D94u;
    {
        const bool branch_taken_0x263d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D94u;
        // 0x263d98: 0x2d42000c  sltiu       $v0, $t2, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d94) {
            ctx->pc = 0x263E40u;
            goto label_263e40;
        }
    }
    ctx->pc = 0x263D9Cu;
    // 0x263d9c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x263D9Cu;
    {
        const bool branch_taken_0x263d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263D9Cu;
        // 0x263da0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d9c) {
            ctx->pc = 0x263E38u;
            goto label_263e38;
        }
    }
    ctx->pc = 0x263DA4u;
    // 0x263da4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x263da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x263da8: 0x2442b8e0  addiu       $v0, $v0, -0x4720
    ctx->pc = 0x263da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949088));
    // 0x263dac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263db0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x263db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263db4: 0x800008  jr          $a0
    ctx->pc = 0x263DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DBCu: goto label_263dbc;
            case 0x263DD4u: goto label_263dd4;
            case 0x263DDCu: goto label_263ddc;
            case 0x263DF0u: goto label_263df0;
            case 0x263DF8u: goto label_263df8;
            case 0x263E08u: goto label_263e08;
            case 0x263E20u: goto label_263e20;
            case 0x263E38u: goto label_263e38;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263DB4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x263DBCu;
label_263dbc:
    // 0x263dbc: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x263dc0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263dc8: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263dcc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x263DCCu;
    {
        const bool branch_taken_0x263dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DCCu;
        // 0x263dd0: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dcc) {
            ctx->pc = 0x263E34u;
            goto label_263e34;
        }
    }
    ctx->pc = 0x263DD4u;
label_263dd4:
    // 0x263dd4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x263DD4u;
    {
        const bool branch_taken_0x263dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DD4u;
        // 0x263dd8: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263dd4) {
            ctx->pc = 0x263E34u;
            goto label_263e34;
        }
    }
    ctx->pc = 0x263DDCu;
label_263ddc:
    // 0x263ddc: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x263ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x263de0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263de4: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263de8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x263DE8u;
    {
        const bool branch_taken_0x263de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DE8u;
        // 0x263dec: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263de8) {
            ctx->pc = 0x263E34u;
            goto label_263e34;
        }
    }
    ctx->pc = 0x263DF0u;
label_263df0:
    // 0x263df0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x263DF0u;
    {
        const bool branch_taken_0x263df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263DF0u;
        // 0x263df4: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263df0) {
            ctx->pc = 0x263E34u;
            goto label_263e34;
        }
    }
    ctx->pc = 0x263DF8u;
label_263df8:
    // 0x263df8: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x263df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x263dfc: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263e00: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x263E00u;
    {
        const bool branch_taken_0x263e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E00u;
        // 0x263e04: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e00) {
            ctx->pc = 0x263E34u;
            goto label_263e34;
        }
    }
    ctx->pc = 0x263E08u;
label_263e08:
    // 0x263e08: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x263e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x263e0c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263e10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263e14: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263e18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x263E18u;
    {
        const bool branch_taken_0x263e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E18u;
        // 0x263e1c: 0x21083  sra         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e18) {
            ctx->pc = 0x263E34u;
            goto label_263e34;
        }
    }
    ctx->pc = 0x263E20u;
label_263e20:
    // 0x263e20: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x263e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x263e24: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263e2c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x263e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x263e30: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_263e34:
    // 0x263e34: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x263e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_263e38:
    // 0x263e38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x263E38u;
    {
        const bool branch_taken_0x263e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E38u;
        // 0x263e3c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e38) {
            ctx->pc = 0x263E44u;
            goto label_263e44;
        }
    }
    ctx->pc = 0x263E40u;
label_263e40:
    // 0x263e40: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x263e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_263e44:
    // 0x263e44: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x263e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x263e48: 0x2d42000c  sltiu       $v0, $t2, 0xC
    ctx->pc = 0x263e48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x263e4c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x263E4Cu;
    {
        const bool branch_taken_0x263e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E4Cu;
        // 0x263e50: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e4c) {
            ctx->pc = 0x263D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263d80;
        }
    }
    ctx->pc = 0x263E54u;
    // 0x263e54: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x263e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x263e58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x263e58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e5c: 0x244d0001  addiu       $t5, $v0, 0x1
    ctx->pc = 0x263e5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x263e60: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x263e60u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e64: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x263e64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e68: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x263e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x263e6c: 0x0  nop
    ctx->pc = 0x263e6cu;
    // NOP
label_263e70:
    // 0x263e70: 0x3022821  addu        $a1, $t8, $v0
    ctx->pc = 0x263e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x263e74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x263e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263e78: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x263e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x263e7c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x263E7Cu;
    {
        const bool branch_taken_0x263e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E7Cu;
        // 0x263e80: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e7c) {
            ctx->pc = 0x263F54u;
            goto label_263f54;
        }
    }
    ctx->pc = 0x263E84u;
    // 0x263e84: 0x1422018  mult        $a0, $t2, $v0
    ctx->pc = 0x263e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x263e88: 0x1243821  addu        $a3, $t1, $a0
    ctx->pc = 0x263e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x263e8c: 0xa0ec002e  sb          $t4, 0x2E($a3)
    ctx->pc = 0x263e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x263e90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x263e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263e94: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x263e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x263e98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x263E98u;
    {
        const bool branch_taken_0x263e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263E98u;
        // 0x263e9c: 0x25a20001  addiu       $v0, $t5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e98) {
            ctx->pc = 0x263F30u;
            goto label_263f30;
        }
    }
    ctx->pc = 0x263EA0u;
    // 0x263ea0: 0x8d260010  lw          $a2, 0x10($t1)
    ctx->pc = 0x263ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x263ea4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x263ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ea8: 0x4b6821  addu        $t5, $v0, $t3
    ctx->pc = 0x263ea8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x263eac: 0xac66001c  sw          $a2, 0x1C($v1)
    ctx->pc = 0x263eacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 6));
    // 0x263eb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x263eb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263eb4: 0xac4d0024  sw          $t5, 0x24($v0)
    ctx->pc = 0x263eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 13));
    // 0x263eb8: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x263eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x263ebc: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x263ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x263ec0: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x263ec0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263ec4: 0x2d42000c  sltiu       $v0, $t2, 0xC
    ctx->pc = 0x263ec4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x263ec8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x263EC8u;
    {
        const bool branch_taken_0x263ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EC8u;
        // 0x263ecc: 0xa4e8002a  sh          $t0, 0x2A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ec8) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263ED0u;
    // 0x263ed0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x263ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x263ed4: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x263ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x263ed8: 0x2442b910  addiu       $v0, $v0, -0x46F0
    ctx->pc = 0x263ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949136));
    // 0x263edc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x263edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263ee0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x263ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263ee4: 0x800008  jr          $a0
    ctx->pc = 0x263EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263EECu: goto label_263eec;
            case 0x263EF4u: goto label_263ef4;
            case 0x263EFCu: goto label_263efc;
            case 0x263F08u: goto label_263f08;
            case 0x263F1Cu: goto label_263f1c;
            case 0x263F8Cu: goto label_263f8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263EE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x263EECu;
label_263eec:
    // 0x263eec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263EECu;
    {
        const bool branch_taken_0x263eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EECu;
        // 0x263ef0: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263eec) {
            ctx->pc = 0x263F10u;
            goto label_263f10;
        }
    }
    ctx->pc = 0x263EF4u;
label_263ef4:
    // 0x263ef4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x263EF4u;
    {
        const bool branch_taken_0x263ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263EF4u;
        // 0x263ef8: 0xc0582d  daddu       $t3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ef4) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263EFCu;
label_263efc:
    // 0x263efc: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x263efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x263f00: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x263F00u;
    {
        const bool branch_taken_0x263f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F00u;
        // 0x263f04: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f00) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263F08u;
label_263f08:
    // 0x263f08: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x263f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x263f0c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x263f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_263f10:
    // 0x263f10: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x263f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x263f14: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x263F14u;
    {
        const bool branch_taken_0x263f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F14u;
        // 0x263f18: 0x25883  sra         $t3, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f14) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263F1Cu;
label_263f1c:
    // 0x263f1c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x263f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x263f20: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x263f24: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x263f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x263f28: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x263F28u;
    {
        const bool branch_taken_0x263f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F28u;
        // 0x263f2c: 0x25903  sra         $t3, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f28) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263F30u;
label_263f30:
    // 0x263f30: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x263f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x263f34: 0x25830001  addiu       $v1, $t4, 0x1
    ctx->pc = 0x263f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x263f38: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x263f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x263f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x263f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f40: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x263f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x263f44: 0x306c00ff  andi        $t4, $v1, 0xFF
    ctx->pc = 0x263f44u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x263f48: 0xa4e0002c  sh          $zero, 0x2C($a3)
    ctx->pc = 0x263f48u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x263f4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x263F4Cu;
    {
        const bool branch_taken_0x263f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F4Cu;
        // 0x263f50: 0xa4e0002a  sh          $zero, 0x2A($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 42), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f4c) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263F54u;
label_263f54:
    // 0x263f54: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x263f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x263f58: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x263F58u;
    {
        const bool branch_taken_0x263f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F58u;
        // 0x263f5c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f58) {
            ctx->pc = 0x263F8Cu;
            goto label_263f8c;
        }
    }
    ctx->pc = 0x263F60u;
    // 0x263f60: 0x25850001  addiu       $a1, $t4, 0x1
    ctx->pc = 0x263f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x263f64: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x263f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x263f68: 0x1221821  addu        $v1, $t1, $v0
    ctx->pc = 0x263f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x263f6c: 0xa06c002e  sb          $t4, 0x2E($v1)
    ctx->pc = 0x263f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 46), (uint8_t)GPR_U32(ctx, 12));
    // 0x263f70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x263f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f74: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x263f74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x263f78: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x263f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f7c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x263f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x263f80: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x263f80u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x263f84: 0xa460002c  sh          $zero, 0x2C($v1)
    ctx->pc = 0x263f84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x263f88: 0xa460002a  sh          $zero, 0x2A($v1)
    ctx->pc = 0x263f88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 0));
label_263f8c:
    // 0x263f8c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x263f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x263f90: 0x2d42000c  sltiu       $v0, $t2, 0xC
    ctx->pc = 0x263f90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x263f94: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x263F94u;
    {
        const bool branch_taken_0x263f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263F94u;
        // 0x263f98: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f94) {
            ctx->pc = 0x263E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263e70;
        }
    }
    ctx->pc = 0x263F9Cu;
    // 0x263f9c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x263f9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fa0: 0x2d420003  sltiu       $v0, $t2, 0x3
    ctx->pc = 0x263fa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x263fa4: 0x1440fe86  bnez        $v0, . + 4 + (-0x17A << 2)
    ctx->pc = 0x263FA4u;
    {
        const bool branch_taken_0x263fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FA4u;
        // 0x263fa8: 0x320482d  daddu       $t1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fa4) {
            ctx->pc = 0x2639C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2639c0;
        }
    }
    ctx->pc = 0x263FACu;
    // 0x263fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_263fb0:
    // 0x263fb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x263fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263fb4: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x263fb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x263FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263FB8u;
        // 0x263fbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263FC0u;
}
