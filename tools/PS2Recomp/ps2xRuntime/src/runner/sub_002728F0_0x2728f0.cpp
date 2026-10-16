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

// Function: sub_002728F0
// Address: 0x2728f0 - 0x272af0
void sub_002728F0_0x2728f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002728F0_0x2728f0");
#endif

    switch (ctx->pc) {
        case 0x2729b4u: goto label_2729b4;
        case 0x2729c0u: goto label_2729c0;
        case 0x272a54u: goto label_272a54;
        case 0x272ac4u: goto label_272ac4;
        case 0x272ad0u: goto label_272ad0;
        default: break;
    }

    ctx->pc = 0x2728f0u;

    // 0x2728f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2728f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2728f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2728f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728f8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2728f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2728fc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2728fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x272900: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x272900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x272904: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x272904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x272908: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x272908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27290c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x27290cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272910: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x272910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x272914: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x272914u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x272918: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x272918u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27291c: 0x61503  sra         $v0, $a2, 20
    ctx->pc = 0x27291cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x272920: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x272920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x272924: 0x2468fc01  addiu       $t0, $v1, -0x3FF
    ctx->pc = 0x272924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x272928: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x272928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x27292c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x27292Cu;
    {
        const bool branch_taken_0x27292c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27292Cu;
        // 0x272930: 0x69fc2  srl         $s3, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27292c) {
            ctx->pc = 0x272A34u;
            goto label_272a34;
        }
    }
    ctx->pc = 0x272934u;
    // 0x272934: 0x501002c  bgez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x272934u;
    {
        const bool branch_taken_0x272934 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x272938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272934u;
        // 0x272938: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272934) {
            ctx->pc = 0x2729E8u;
            goto label_2729e8;
        }
    }
    ctx->pc = 0x27293Cu;
    // 0x27293c: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x27293cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x272940: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x272940u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x272944: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x272944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x272948: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x272948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x27294c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x27294Cu;
    {
        const bool branch_taken_0x27294c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27294Cu;
        // 0x272950: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27294c) {
            ctx->pc = 0x272A74u;
            goto label_272a74;
        }
    }
    ctx->pc = 0x272954u;
    // 0x272954: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x272954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x272958: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27295c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x27295cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x272960: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x272960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x272964: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x272964u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x272968: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x272968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x27296c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x27296cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x272970: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x272970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x272974: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x272974u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x272978: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x272978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x27297c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x272980: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x272980u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272984: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x272984u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x272988: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x272988u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x27298c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x272990: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x272990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x272994: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x272994u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272998: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x272998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x27299c: 0x2484cb60  addiu       $a0, $a0, -0x34A0
    ctx->pc = 0x27299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953824));
    // 0x2729a0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2729a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2729a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2729a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2729a8: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x2729a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2729ac: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2729ACu;
    SET_GPR_U32(ctx, 31, 0x2729B4u);
    ctx->pc = 0x2729B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729ACu;
    // 0x2729b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2729ACu, 0x2729B4u)) {
        return;
    }
    ctx->pc = 0x2729B4u;
label_2729b4:
    // 0x2729b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2729b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729b8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2729B8u;
    SET_GPR_U32(ctx, 31, 0x2729C0u);
    ctx->pc = 0x2729BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2729B8u;
    // 0x2729bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2729B8u, 0x2729C0u)) {
        return;
    }
    ctx->pc = 0x2729C0u;
label_2729c0:
    // 0x2729c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2729c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2729c4: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x2729c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2729c8: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x2729c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x2729cc: 0x1317c0  sll         $v0, $s3, 31
    ctx->pc = 0x2729ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 31));
    // 0x2729d0: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x2729d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x2729d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2729d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2729d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2729d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2729dc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2729dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2729e0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2729E0u;
    {
        const bool branch_taken_0x2729e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729E0u;
        // 0x2729e4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729e0) {
            ctx->pc = 0x272AD0u;
            goto label_272ad0;
        }
    }
    ctx->pc = 0x2729E8u;
label_2729e8:
    // 0x2729e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2729e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2729ec: 0x1022007  srav        $a0, $v0, $t0
    ctx->pc = 0x2729ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x2729f0: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x2729f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x2729f4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x2729f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x2729f8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2729F8u;
    {
        const bool branch_taken_0x2729f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2729FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2729F8u;
        // 0x2729fc: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2729f8) {
            ctx->pc = 0x272A74u;
            goto label_272a74;
        }
    }
    ctx->pc = 0x272A00u;
    // 0x272a00: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x272a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x272a04: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x272a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x272a08: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x272A08u;
    {
        const bool branch_taken_0x272a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A08u;
        // 0x272a0c: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a08) {
            ctx->pc = 0x272A98u;
            goto label_272a98;
        }
    }
    ctx->pc = 0x272A10u;
    // 0x272a10: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x272A10u;
    {
        const bool branch_taken_0x272a10 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x272A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A10u;
        // 0x272a14: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a10) {
            ctx->pc = 0x272A20u;
            goto label_272a20;
        }
    }
    ctx->pc = 0x272A18u;
    // 0x272a18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x272A18u;
    {
        const bool branch_taken_0x272a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A18u;
        // 0x272a1c: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a18) {
            ctx->pc = 0x272A98u;
            goto label_272a98;
        }
    }
    ctx->pc = 0x272A20u;
label_272a20:
    // 0x272a20: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x272a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x272a24: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x272a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x272a28: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x272a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x272a2c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x272A2Cu;
    {
        const bool branch_taken_0x272a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A2Cu;
        // 0x272a30: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a2c) {
            ctx->pc = 0x272A98u;
            goto label_272a98;
        }
    }
    ctx->pc = 0x272A34u;
label_272a34:
    // 0x272a34: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x272a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x272a38: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x272A38u;
    {
        const bool branch_taken_0x272a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272a38) {
            ctx->pc = 0x272A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272A38u;
            // 0x272a3c: 0x2468fbed  addiu       $t0, $v1, -0x413 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
            ctx->in_delay_slot = false;
            ctx->pc = 0x272A5Cu;
            goto label_272a5c;
        }
    }
    ctx->pc = 0x272A40u;
    // 0x272a40: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x272a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x272a44: 0x15020022  bne         $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x272A44u;
    {
        const bool branch_taken_0x272a44 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x272A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A44u;
        // 0x272a48: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a44) {
            ctx->pc = 0x272AD0u;
            goto label_272ad0;
        }
    }
    ctx->pc = 0x272A4Cu;
    // 0x272a4c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x272A4Cu;
    SET_GPR_U32(ctx, 31, 0x272A54u);
    ctx->pc = 0x272A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272A4Cu;
    // 0x272a50: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x272A4Cu, 0x272A54u)) {
        return;
    }
    ctx->pc = 0x272A54u;
label_272a54:
    // 0x272a54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x272A54u;
    {
        const bool branch_taken_0x272a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A54u;
        // 0x272a58: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a54) {
            ctx->pc = 0x272AD4u;
            goto label_272ad4;
        }
    }
    ctx->pc = 0x272A5Cu;
label_272a5c:
    // 0x272a5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x272a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x272a60: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x272a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x272a64: 0x1022006  srlv        $a0, $v0, $t0
    ctx->pc = 0x272a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x272a68: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x272a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x272a6c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x272A6Cu;
    {
        const bool branch_taken_0x272a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x272A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A6Cu;
        // 0x272a70: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a6c) {
            ctx->pc = 0x272A7Cu;
            goto label_272a7c;
        }
    }
    ctx->pc = 0x272A74u;
label_272a74:
    // 0x272a74: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x272A74u;
    {
        const bool branch_taken_0x272a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A74u;
        // 0x272a78: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a74) {
            ctx->pc = 0x272AD0u;
            goto label_272ad0;
        }
    }
    ctx->pc = 0x272A7Cu;
label_272a7c:
    // 0x272a7c: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x272a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x272a80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x272A80u;
    {
        const bool branch_taken_0x272a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272A80u;
        // 0x272a84: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272a80) {
            ctx->pc = 0x272A98u;
            goto label_272a98;
        }
    }
    ctx->pc = 0x272A88u;
    // 0x272a88: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x272a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x272a8c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x272a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x272a90: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x272a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x272a94: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x272a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_272a98:
    // 0x272a98: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x272a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x272a9c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x272a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x272aa0: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x272aa0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x272aa4: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x272aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x272aa8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x272aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x272aac: 0x2463cb60  addiu       $v1, $v1, -0x34A0
    ctx->pc = 0x272aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953824));
    // 0x272ab0: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x272ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x272ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x272ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x272ab8: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x272ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272abc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x272ABCu;
    SET_GPR_U32(ctx, 31, 0x272AC4u);
    ctx->pc = 0x272AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272ABCu;
    // 0x272ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x272ABCu, 0x272AC4u)) {
        return;
    }
    ctx->pc = 0x272AC4u;
label_272ac4:
    // 0x272ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x272ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272ac8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x272AC8u;
    SET_GPR_U32(ctx, 31, 0x272AD0u);
    ctx->pc = 0x272ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272AC8u;
    // 0x272acc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x272AC8u, 0x272AD0u)) {
        return;
    }
    ctx->pc = 0x272AD0u;
label_272ad0:
    // 0x272ad0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x272ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_272ad4:
    // 0x272ad4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x272ad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272ad8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x272ad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272adc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x272adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x272ae0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x272ae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x272AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272AE4u;
        // 0x272ae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x272AECu;
    // 0x272aec: 0x0  nop
    ctx->pc = 0x272aecu;
    // NOP
    ctx->pc = 0x272af0u;
}
