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

// Function: sub_001D8A10
// Address: 0x1d8a10 - 0x1d8bb8
void sub_001D8A10_0x1d8a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8A10_0x1d8a10");
#endif

    switch (ctx->pc) {
        case 0x1d8a5cu: goto label_1d8a5c;
        case 0x1d8a68u: goto label_1d8a68;
        case 0x1d8a74u: goto label_1d8a74;
        case 0x1d8a80u: goto label_1d8a80;
        case 0x1d8a90u: goto label_1d8a90;
        case 0x1d8aa0u: goto label_1d8aa0;
        case 0x1d8ab4u: goto label_1d8ab4;
        case 0x1d8ad0u: goto label_1d8ad0;
        case 0x1d8ae0u: goto label_1d8ae0;
        case 0x1d8afcu: goto label_1d8afc;
        case 0x1d8b08u: goto label_1d8b08;
        case 0x1d8b10u: goto label_1d8b10;
        case 0x1d8b20u: goto label_1d8b20;
        case 0x1d8b30u: goto label_1d8b30;
        case 0x1d8b48u: goto label_1d8b48;
        case 0x1d8b58u: goto label_1d8b58;
        case 0x1d8b68u: goto label_1d8b68;
        case 0x1d8b78u: goto label_1d8b78;
        case 0x1d8b80u: goto label_1d8b80;
        case 0x1d8b88u: goto label_1d8b88;
        default: break;
    }

    ctx->pc = 0x1d8a10u;

    // 0x1d8a10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1d8a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1d8a14: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1d8a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1d8a18: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1d8a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1d8a1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d8a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a20: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1d8a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1d8a24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1d8a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1d8a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1d8a2c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d8a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a30: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1d8a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1d8a34: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1d8a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a38: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1d8a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1d8a3c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d8a3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8a44: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8A44u;
    {
        const bool branch_taken_0x1d8a44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A44u;
        // 0x1d8a48: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a44) {
            ctx->pc = 0x1D8A54u;
            goto label_1d8a54;
        }
    }
    ctx->pc = 0x1D8A4Cu;
    // 0x1d8a4c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d8a50: 0x24509db0  addiu       $s0, $v0, -0x6250
    ctx->pc = 0x1d8a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
label_1d8a54:
    // 0x1d8a54: 0xc0763be  jal         func_1D8EF8
    ctx->pc = 0x1D8A54u;
    SET_GPR_U32(ctx, 31, 0x1D8A5Cu);
    ctx->pc = 0x1D8EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8EF8u, 0x1D8A54u, 0x1D8A5Cu)) {
        return;
    }
    ctx->pc = 0x1D8A5Cu;
label_1d8a5c:
    // 0x1d8a5c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1d8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1d8a60: 0xc089774  jal         func_225DD0
    ctx->pc = 0x1D8A60u;
    SET_GPR_U32(ctx, 31, 0x1D8A68u);
    ctx->pc = 0x1D8A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A60u;
    // 0x1d8a64: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225DD0u, 0x1D8A60u, 0x1D8A68u)) {
        return;
    }
    ctx->pc = 0x1D8A68u;
label_1d8a68:
    // 0x1d8a68: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1d8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d8a6c: 0xc0953ca  jal         func_254F28
    ctx->pc = 0x1D8A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A74u);
    ctx->pc = 0x1D8A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A6Cu;
    // 0x1d8a70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254F28u, 0x1D8A6Cu, 0x1D8A74u)) {
        return;
    }
    ctx->pc = 0x1D8A74u;
label_1d8a74:
    // 0x1d8a74: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1d8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d8a78: 0xc095ed2  jal         func_257B48
    ctx->pc = 0x1D8A78u;
    SET_GPR_U32(ctx, 31, 0x1D8A80u);
    ctx->pc = 0x1D8A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A78u;
    // 0x1d8a7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257B48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257B48u, 0x1D8A78u, 0x1D8A80u)) {
        return;
    }
    ctx->pc = 0x1D8A80u;
label_1d8a80:
    // 0x1d8a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d8a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a88: 0xc089726  jal         func_225C98
    ctx->pc = 0x1D8A88u;
    SET_GPR_U32(ctx, 31, 0x1D8A90u);
    ctx->pc = 0x1D8A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A88u;
    // 0x1d8a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225C98u, 0x1D8A88u, 0x1D8A90u)) {
        return;
    }
    ctx->pc = 0x1D8A90u;
label_1d8a90:
    // 0x1d8a90: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1D8A90u;
    {
        const bool branch_taken_0x1d8a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8a90) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D8A98u;
    // 0x1d8a98: 0xc076238  jal         func_1D88E0
    ctx->pc = 0x1D8A98u;
    SET_GPR_U32(ctx, 31, 0x1D8AA0u);
    ctx->pc = 0x1D88E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D88E0u, 0x1D8A98u, 0x1D8AA0u)) {
        return;
    }
    ctx->pc = 0x1D8AA0u;
label_1d8aa0:
    // 0x1d8aa0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1D8AA0u;
    {
        const bool branch_taken_0x1d8aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8aa0) {
            ctx->pc = 0x1D8B68u;
            goto label_1d8b68;
        }
    }
    ctx->pc = 0x1D8AA8u;
    // 0x1d8aa8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x1d8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x1d8aac: 0xc0896e0  jal         func_225B80
    ctx->pc = 0x1D8AACu;
    SET_GPR_U32(ctx, 31, 0x1D8AB4u);
    ctx->pc = 0x1D8AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AACu;
    // 0x1d8ab0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225B80u, 0x1D8AACu, 0x1D8AB4u)) {
        return;
    }
    ctx->pc = 0x1D8AB4u;
label_1d8ab4:
    // 0x1d8ab4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D8AB4u;
    {
        const bool branch_taken_0x1d8ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB4u;
        // 0x1d8ab8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ab4) {
            ctx->pc = 0x1D8B68u;
            goto label_1d8b68;
        }
    }
    ctx->pc = 0x1D8ABCu;
    // 0x1d8abc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1d8abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1d8ac0: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x1d8ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d8ac4: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x1d8ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1d8ac8: 0xc0762ee  jal         func_1D8BB8
    ctx->pc = 0x1D8AC8u;
    SET_GPR_U32(ctx, 31, 0x1D8AD0u);
    ctx->pc = 0x1D8ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC8u;
    // 0x1d8acc: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8BB8u, 0x1D8AC8u, 0x1D8AD0u)) {
        return;
    }
    ctx->pc = 0x1D8AD0u;
label_1d8ad0:
    // 0x1d8ad0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D8AD0u;
    {
        const bool branch_taken_0x1d8ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ad0) {
            ctx->pc = 0x1D8B68u;
            goto label_1d8b68;
        }
    }
    ctx->pc = 0x1D8AD8u;
    // 0x1d8ad8: 0xc08969c  jal         func_225A70
    ctx->pc = 0x1D8AD8u;
    SET_GPR_U32(ctx, 31, 0x1D8AE0u);
    ctx->pc = 0x225A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225A70u, 0x1D8AD8u, 0x1D8AE0u)) {
        return;
    }
    ctx->pc = 0x1D8AE0u;
label_1d8ae0:
    // 0x1d8ae0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D8AE0u;
    {
        const bool branch_taken_0x1d8ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AE0u;
        // 0x1d8ae4: 0x3c100068  lui         $s0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ae0) {
            ctx->pc = 0x1D8B68u;
            goto label_1d8b68;
        }
    }
    ctx->pc = 0x1D8AE8u;
    // 0x1d8ae8: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1d8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d8aec: 0x26106290  addiu       $s0, $s0, 0x6290
    ctx->pc = 0x1d8aecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25232));
    // 0x1d8af0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d8af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8af4: 0xc0928de  jal         func_24A378
    ctx->pc = 0x1D8AF4u;
    SET_GPR_U32(ctx, 31, 0x1D8AFCu);
    ctx->pc = 0x1D8AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AF4u;
    // 0x1d8af8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x1D8AF4u, 0x1D8AFCu)) {
        return;
    }
    ctx->pc = 0x1D8AFCu;
label_1d8afc:
    // 0x1d8afc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1d8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8b00: 0xc0764d6  jal         func_1D9358
    ctx->pc = 0x1D8B00u;
    SET_GPR_U32(ctx, 31, 0x1D8B08u);
    ctx->pc = 0x1D8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B00u;
    // 0x1d8b04: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9358u, 0x1D8B00u, 0x1D8B08u)) {
        return;
    }
    ctx->pc = 0x1D8B08u;
label_1d8b08:
    // 0x1d8b08: 0xc09cd3c  jal         func_2734F0
    ctx->pc = 0x1D8B08u;
    SET_GPR_U32(ctx, 31, 0x1D8B10u);
    ctx->pc = 0x1D8B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B08u;
    // 0x1d8b0c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2734F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2734F0u, 0x1D8B08u, 0x1D8B10u)) {
        return;
    }
    ctx->pc = 0x1D8B10u;
label_1d8b10:
    // 0x1d8b10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D8B10u;
    {
        const bool branch_taken_0x1d8b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b10) {
            ctx->pc = 0x1D8B58u;
            goto label_1d8b58;
        }
    }
    ctx->pc = 0x1D8B18u;
    // 0x1d8b18: 0xc07d85a  jal         func_1F6168
    ctx->pc = 0x1D8B18u;
    SET_GPR_U32(ctx, 31, 0x1D8B20u);
    ctx->pc = 0x1F6168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6168u, 0x1D8B18u, 0x1D8B20u)) {
        return;
    }
    ctx->pc = 0x1D8B20u;
label_1d8b20:
    // 0x1d8b20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D8B20u;
    {
        const bool branch_taken_0x1d8b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b20) {
            ctx->pc = 0x1D8B58u;
            goto label_1d8b58;
        }
    }
    ctx->pc = 0x1D8B28u;
    // 0x1d8b28: 0xc076268  jal         func_1D89A0
    ctx->pc = 0x1D8B28u;
    SET_GPR_U32(ctx, 31, 0x1D8B30u);
    ctx->pc = 0x1D89A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D89A0u, 0x1D8B28u, 0x1D8B30u)) {
        return;
    }
    ctx->pc = 0x1D8B30u;
label_1d8b30:
    // 0x1d8b30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8B30u;
    {
        const bool branch_taken_0x1d8b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8B30u;
        // 0x1d8b34: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8b30) {
            ctx->pc = 0x1D8B50u;
            goto label_1d8b50;
        }
    }
    ctx->pc = 0x1D8B38u;
    // 0x1d8b38: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1d8b38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d8b3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d8b40: 0xc075e2c  jal         func_1D78B0
    ctx->pc = 0x1D8B40u;
    SET_GPR_U32(ctx, 31, 0x1D8B48u);
    ctx->pc = 0x1D8B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8B40u;
    // 0x1d8b44: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D78B0u, 0x1D8B40u, 0x1D8B48u)) {
        return;
    }
    ctx->pc = 0x1D8B48u;
label_1d8b48:
    // 0x1d8b48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8B48u;
    {
        const bool branch_taken_0x1d8b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b48) {
            ctx->pc = 0x1D8B58u;
            goto label_1d8b58;
        }
    }
    ctx->pc = 0x1D8B50u;
label_1d8b50:
    // 0x1d8b50: 0xc08967a  jal         func_2259E8
    ctx->pc = 0x1D8B50u;
    SET_GPR_U32(ctx, 31, 0x1D8B58u);
    ctx->pc = 0x2259E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2259E8u, 0x1D8B50u, 0x1D8B58u)) {
        return;
    }
    ctx->pc = 0x1D8B58u;
label_1d8b58:
    // 0x1d8b58: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8B58u;
    {
        const bool branch_taken_0x1d8b58 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b58) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D8B60u;
    // 0x1d8b60: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x1D8B60u;
    SET_GPR_U32(ctx, 31, 0x1D8B68u);
    ctx->pc = 0x225B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225B20u, 0x1D8B60u, 0x1D8B68u)) {
        return;
    }
    ctx->pc = 0x1D8B68u;
label_1d8b68:
    // 0x1d8b68: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D8B68u;
    {
        const bool branch_taken_0x1d8b68 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8b68) {
            ctx->pc = 0x1D8B78u;
            goto label_1d8b78;
        }
    }
    ctx->pc = 0x1D8B70u;
    // 0x1d8b70: 0xc089714  jal         func_225C50
    ctx->pc = 0x1D8B70u;
    SET_GPR_U32(ctx, 31, 0x1D8B78u);
    ctx->pc = 0x225C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225C50u, 0x1D8B70u, 0x1D8B78u)) {
        return;
    }
    ctx->pc = 0x1D8B78u;
label_1d8b78:
    // 0x1d8b78: 0xc059cd4  jal         func_167350
    ctx->pc = 0x1D8B78u;
    SET_GPR_U32(ctx, 31, 0x1D8B80u);
    ctx->pc = 0x167350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167350u, 0x1D8B78u, 0x1D8B80u)) {
        return;
    }
    ctx->pc = 0x1D8B80u;
label_1d8b80:
    // 0x1d8b80: 0xc050366  jal         func_140D98
    ctx->pc = 0x1D8B80u;
    SET_GPR_U32(ctx, 31, 0x1D8B88u);
    ctx->pc = 0x140D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140D98u, 0x1D8B80u, 0x1D8B88u)) {
        return;
    }
    ctx->pc = 0x1D8B88u;
label_1d8b88:
    // 0x1d8b88: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1d8b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8b8c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1d8b8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d8b90: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1d8b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d8b94: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1d8b94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d8b98: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1d8b98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d8b9c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1d8b9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d8ba0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1d8ba0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d8ba4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8BA8u;
        // 0x1d8bac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8BB0u;
    // 0x1d8bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d8bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d8bb4: 0x0  nop
    ctx->pc = 0x1d8bb4u;
    // NOP
    ctx->pc = 0x1d8bb8u;
}
