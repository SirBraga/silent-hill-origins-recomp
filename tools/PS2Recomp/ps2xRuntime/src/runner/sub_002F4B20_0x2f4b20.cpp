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

// Function: sub_002F4B20
// Address: 0x2f4b20 - 0x2f50b0
void sub_002F4B20_0x2f4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4B20_0x2f4b20");
#endif

    switch (ctx->pc) {
        case 0x2f4b5cu: goto label_2f4b5c;
        case 0x2f4b7cu: goto label_2f4b7c;
        case 0x2f4ba4u: goto label_2f4ba4;
        case 0x2f4bc4u: goto label_2f4bc4;
        case 0x2f4be4u: goto label_2f4be4;
        case 0x2f4c2cu: goto label_2f4c2c;
        case 0x2f4c54u: goto label_2f4c54;
        case 0x2f4ca0u: goto label_2f4ca0;
        case 0x2f4cc4u: goto label_2f4cc4;
        case 0x2f4ce4u: goto label_2f4ce4;
        case 0x2f4cfcu: goto label_2f4cfc;
        case 0x2f4dd8u: goto label_2f4dd8;
        case 0x2f4e30u: goto label_2f4e30;
        case 0x2f4e5cu: goto label_2f4e5c;
        case 0x2f4f40u: goto label_2f4f40;
        case 0x2f5034u: goto label_2f5034;
        case 0x2f504cu: goto label_2f504c;
        case 0x2f505cu: goto label_2f505c;
        case 0x2f506cu: goto label_2f506c;
        default: break;
    }

    ctx->pc = 0x2f4b20u;

    // 0x2f4b20: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x2f4b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
    // 0x2f4b24: 0xffb404e0  sd          $s4, 0x4E0($sp)
    ctx->pc = 0x2f4b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 20));
    // 0x2f4b28: 0xffb504f0  sd          $s5, 0x4F0($sp)
    ctx->pc = 0x2f4b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1264), GPR_U64(ctx, 21));
    // 0x2f4b2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f4b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b30: 0xffb004a0  sd          $s0, 0x4A0($sp)
    ctx->pc = 0x2f4b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1184), GPR_U64(ctx, 16));
    // 0x2f4b34: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2f4b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b38: 0xffbf0530  sd          $ra, 0x530($sp)
    ctx->pc = 0x2f4b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1328), GPR_U64(ctx, 31));
    // 0x2f4b3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f4b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b40: 0xffbe0520  sd          $fp, 0x520($sp)
    ctx->pc = 0x2f4b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1312), GPR_U64(ctx, 30));
    // 0x2f4b44: 0xffb70510  sd          $s7, 0x510($sp)
    ctx->pc = 0x2f4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 23));
    // 0x2f4b48: 0xffb60500  sd          $s6, 0x500($sp)
    ctx->pc = 0x2f4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1280), GPR_U64(ctx, 22));
    // 0x2f4b4c: 0xffb304d0  sd          $s3, 0x4D0($sp)
    ctx->pc = 0x2f4b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 19));
    // 0x2f4b50: 0xffb204c0  sd          $s2, 0x4C0($sp)
    ctx->pc = 0x2f4b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 18));
    // 0x2f4b54: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F4B54u;
    SET_GPR_U32(ctx, 31, 0x2F4B5Cu);
    ctx->pc = 0x2F4B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B54u;
    // 0x2f4b58: 0xffb104b0  sd          $s1, 0x4B0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F4B54u, 0x2F4B5Cu)) {
        return;
    }
    ctx->pc = 0x2F4B5Cu;
label_2f4b5c:
    // 0x2f4b5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f4b5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b60: 0x14600146  bnez        $v1, . + 4 + (0x146 << 2)
    ctx->pc = 0x2F4B60u;
    {
        const bool branch_taken_0x2f4b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B60u;
        // 0x2f4b64: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b60) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4B68u;
    // 0x2f4b68: 0x27b20400  addiu       $s2, $sp, 0x400
    ctx->pc = 0x2f4b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
    // 0x2f4b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b74: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F4B74u;
    SET_GPR_U32(ctx, 31, 0x2F4B7Cu);
    ctx->pc = 0x2F4B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B74u;
    // 0x2f4b78: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F4B74u, 0x2F4B7Cu)) {
        return;
    }
    ctx->pc = 0x2F4B7Cu;
label_2f4b7c:
    // 0x2f4b7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f4b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4b80: 0x1460013e  bnez        $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x2F4B80u;
    {
        const bool branch_taken_0x2f4b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B80u;
        // 0x2f4b84: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b80) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4B88u;
    // 0x2f4b88: 0x34028417  ori         $v0, $zero, 0x8417
    ctx->pc = 0x2f4b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33815);
    // 0x2f4b8c: 0x55a80a  movz        $s5, $v0, $s5
    ctx->pc = 0x2f4b8cu;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2));
    // 0x2f4b90: 0x32b70020  andi        $s7, $s5, 0x20
    ctx->pc = 0x2f4b90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x2f4b94: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4B94u;
    {
        const bool branch_taken_0x2f4b94 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B94u;
        // 0x2f4b98: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4b94) {
            ctx->pc = 0x2F4BBCu;
            goto label_2f4bbc;
        }
    }
    ctx->pc = 0x2F4B9Cu;
    // 0x2f4b9c: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x2F4B9Cu;
    SET_GPR_U32(ctx, 31, 0x2F4BA4u);
    ctx->pc = 0x2F4BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4B9Cu;
    // 0x2f4ba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2010u, 0x2F4B9Cu, 0x2F4BA4u)) {
        return;
    }
    ctx->pc = 0x2F4BA4u;
label_2f4ba4:
    // 0x2f4ba4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2f4ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f4ba8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4BA8u;
    {
        const bool branch_taken_0x2f4ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ba8) {
            ctx->pc = 0x2F4BBCu;
            goto label_2f4bbc;
        }
    }
    ctx->pc = 0x2F4BB0u;
    // 0x2f4bb0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4bb4: 0x10000131  b           . + 4 + (0x131 << 2)
    ctx->pc = 0x2F4BB4u;
    {
        const bool branch_taken_0x2f4bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BB4u;
        // 0x2f4bb8: 0x34429004  ori         $v0, $v0, 0x9004 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36868);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bb4) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4BBCu;
label_2f4bbc:
    // 0x2f4bbc: 0xc0bc804  jal         func_2F2010
    ctx->pc = 0x2F4BBCu;
    SET_GPR_U32(ctx, 31, 0x2F4BC4u);
    ctx->pc = 0x2F4BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BBCu;
    // 0x2f4bc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2010u, 0x2F4BBCu, 0x2F4BC4u)) {
        return;
    }
    ctx->pc = 0x2F4BC4u;
label_2f4bc4:
    // 0x2f4bc4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2f4bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2f4bc8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bcc: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x2f4bccu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2f4bd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f4bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bd4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f4bd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bdc: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F4BDCu;
    SET_GPR_U32(ctx, 31, 0x2F4BE4u);
    ctx->pc = 0x2F4BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4BDCu;
    // 0x2f4be0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F4BDCu, 0x2F4BE4u)) {
        return;
    }
    ctx->pc = 0x2F4BE4u;
label_2f4be4:
    // 0x2f4be4: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f4be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f4be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4bec: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2f4becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2f4bf0: 0x14830122  bne         $a0, $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x2F4BF0u;
    {
        const bool branch_taken_0x2f4bf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F4BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BF0u;
        // 0x2f4bf4: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bf0) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4BF8u;
    // 0x2f4bf8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4BF8u;
    {
        const bool branch_taken_0x2f4bf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4BF8u;
        // 0x2f4bfc: 0x27b10490  addiu       $s1, $sp, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4bf8) {
            ctx->pc = 0x2F4C20u;
            goto label_2f4c20;
        }
    }
    ctx->pc = 0x2F4C00u;
    // 0x2f4c00: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f4c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f4c04: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2f4c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2f4c08: 0x28420014  slti        $v0, $v0, 0x14
    ctx->pc = 0x2f4c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x2f4c0c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4C0Cu;
    {
        const bool branch_taken_0x2f4c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C0Cu;
        // 0x2f4c10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c0c) {
            ctx->pc = 0x2F4C24u;
            goto label_2f4c24;
        }
    }
    ctx->pc = 0x2F4C14u;
    // 0x2f4c14: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4c18: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x2F4C18u;
    {
        const bool branch_taken_0x2f4c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C18u;
        // 0x2f4c1c: 0x34420017  ori         $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c18) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4C20u;
label_2f4c20:
    // 0x2f4c20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4c24:
    // 0x2f4c24: 0xc0bca20  jal         func_2F2880
    ctx->pc = 0x2F4C24u;
    SET_GPR_U32(ctx, 31, 0x2F4C2Cu);
    ctx->pc = 0x2F4C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C24u;
    // 0x2f4c28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2880u, 0x2F4C24u, 0x2F4C2Cu)) {
        return;
    }
    ctx->pc = 0x2F4C2Cu;
label_2f4c2c:
    // 0x2f4c2c: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x2f4c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f4c30: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4C30u;
    {
        const bool branch_taken_0x2f4c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C30u;
        // 0x2f4c34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c30) {
            ctx->pc = 0x2F4C40u;
            goto label_2f4c40;
        }
    }
    ctx->pc = 0x2F4C38u;
    // 0x2f4c38: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x2F4C38u;
    {
        const bool branch_taken_0x2f4c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C38u;
        // 0x2f4c3c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c38) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4C40u;
label_2f4c40:
    // 0x2f4c40: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2f4c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4c44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c48: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f4c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f4c4c: 0xc0bd0c0  jal         func_2F4300
    ctx->pc = 0x2F4C4Cu;
    SET_GPR_U32(ctx, 31, 0x2F4C54u);
    ctx->pc = 0x2F4C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C4Cu;
    // 0x2f4c50: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4300u, 0x2F4C4Cu, 0x2F4C54u)) {
        return;
    }
    ctx->pc = 0x2F4C54u;
label_2f4c54:
    // 0x2f4c54: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2f4c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c58: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x2f4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f4c5c: 0x14400108  bnez        $v0, . + 4 + (0x108 << 2)
    ctx->pc = 0x2F4C5Cu;
    {
        const bool branch_taken_0x2f4c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C5Cu;
        // 0x2f4c60: 0xdfbf0530  ld          $ra, 0x530($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c5c) {
            ctx->pc = 0x2F5080u;
            goto label_2f5080;
        }
    }
    ctx->pc = 0x2F4C64u;
    // 0x2f4c64: 0x13102a  slt         $v0, $zero, $s3
    ctx->pc = 0x2f4c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2f4c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4c6c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2f4c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4c70: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2f4c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f4c74: 0x96180b  movn        $v1, $a0, $s6
    ctx->pc = 0x2f4c74u;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x2f4c78: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2f4c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f4c7c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4C7Cu;
    {
        const bool branch_taken_0x2f4c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c7c) {
            ctx->pc = 0x2F4C90u;
            goto label_2f4c90;
        }
    }
    ctx->pc = 0x2F4C84u;
    // 0x2f4c84: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f4c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f4c88: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x2F4C88u;
    {
        const bool branch_taken_0x2f4c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C88u;
        // 0x2f4c8c: 0x3442001c  ori         $v0, $v0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c88) {
            ctx->pc = 0x2F5080u;
            goto label_2f5080;
        }
    }
    ctx->pc = 0x2F4C90u;
label_2f4c90:
    // 0x2f4c90: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x2F4C90u;
    {
        const bool branch_taken_0x2f4c90 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C90u;
        // 0x2f4c94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c90) {
            ctx->pc = 0x2F4CD0u;
            goto label_2f4cd0;
        }
    }
    ctx->pc = 0x2F4C98u;
    // 0x2f4c98: 0xc0bc9d4  jal         func_2F2750
    ctx->pc = 0x2F4C98u;
    SET_GPR_U32(ctx, 31, 0x2F4CA0u);
    ctx->pc = 0x2F4C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4C98u;
    // 0x2f4c9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2750u, 0x2F4C98u, 0x2F4CA0u)) {
        return;
    }
    ctx->pc = 0x2F4CA0u;
label_2f4ca0:
    // 0x2f4ca0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2f4ca0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4ca4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x2f4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f4ca8: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x2F4CA8u;
    {
        const bool branch_taken_0x2f4ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CA8u;
        // 0x2f4cac: 0xdfbf0530  ld          $ra, 0x530($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ca8) {
            ctx->pc = 0x2F5080u;
            goto label_2f5080;
        }
    }
    ctx->pc = 0x2F4CB0u;
    // 0x2f4cb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cb4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2f4cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f4cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4cbc: 0xc0bc988  jal         func_2F2620
    ctx->pc = 0x2F4CBCu;
    SET_GPR_U32(ctx, 31, 0x2F4CC4u);
    ctx->pc = 0x2F4CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CBCu;
    // 0x2f4cc0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2620u, 0x2F4CBCu, 0x2F4CC4u)) {
        return;
    }
    ctx->pc = 0x2F4CC4u;
label_2f4cc4:
    // 0x2f4cc4: 0x8fa20490  lw          $v0, 0x490($sp)
    ctx->pc = 0x2f4cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x2f4cc8: 0x144000ed  bnez        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x2F4CC8u;
    {
        const bool branch_taken_0x2f4cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CC8u;
        // 0x2f4ccc: 0xdfbf0530  ld          $ra, 0x530($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cc8) {
            ctx->pc = 0x2F5080u;
            goto label_2f5080;
        }
    }
    ctx->pc = 0x2F4CD0u;
label_2f4cd0:
    // 0x2f4cd0: 0x27a20480  addiu       $v0, $sp, 0x480
    ctx->pc = 0x2f4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
    // 0x2f4cd4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cd8: 0xafa20494  sw          $v0, 0x494($sp)
    ctx->pc = 0x2f4cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 2));
    // 0x2f4cdc: 0xc0bde18  jal         func_2F7860
    ctx->pc = 0x2F4CDCu;
    SET_GPR_U32(ctx, 31, 0x2F4CE4u);
    ctx->pc = 0x2F4CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CDCu;
    // 0x2f4ce0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7860u, 0x2F4CDCu, 0x2F4CE4u)) {
        return;
    }
    ctx->pc = 0x2F4CE4u;
label_2f4ce4:
    // 0x2f4ce4: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x2f4ce4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2f4ce8: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2f4ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f4cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cf4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F4CF4u;
    SET_GPR_U32(ctx, 31, 0x2F4CFCu);
    ctx->pc = 0x2F4CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CF4u;
    // 0x2f4cf8: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F4CF4u, 0x2F4CFCu)) {
        return;
    }
    ctx->pc = 0x2F4CFCu;
label_2f4cfc:
    // 0x2f4cfc: 0x93a30487  lbu         $v1, 0x487($sp)
    ctx->pc = 0x2f4cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1159)));
    // 0x2f4d00: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x2f4d00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4d04: 0x93a90486  lbu         $t1, 0x486($sp)
    ctx->pc = 0x2f4d04u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1158)));
    // 0x2f4d08: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x2f4d08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4d0c: 0x93a70485  lbu         $a3, 0x485($sp)
    ctx->pc = 0x2f4d0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1157)));
    // 0x2f4d10: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f4d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2f4d14: 0x93a60483  lbu         $a2, 0x483($sp)
    ctx->pc = 0x2f4d14u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1155)));
    // 0x2f4d18: 0x96902  srl         $t5, $t1, 4
    ctx->pc = 0x2f4d18u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x2f4d1c: 0x93a50482  lbu         $a1, 0x482($sp)
    ctx->pc = 0x2f4d1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1154)));
    // 0x2f4d20: 0x75102  srl         $t2, $a3, 4
    ctx->pc = 0x2f4d20u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f4d24: 0x93a40481  lbu         $a0, 0x481($sp)
    ctx->pc = 0x2f4d24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1153)));
    // 0x2f4d28: 0x65902  srl         $t3, $a2, 4
    ctx->pc = 0x2f4d28u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f4d2c: 0x56102  srl         $t4, $a1, 4
    ctx->pc = 0x2f4d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x2f4d30: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x2f4d30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f4d34: 0x44102  srl         $t0, $a0, 4
    ctx->pc = 0x2f4d34u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2f4d38: 0x1b36818  mult        $t5, $t5, $s3
    ctx->pc = 0x2f4d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x2f4d3c: 0x71535018  mult1       $t2, $t2, $s3
    ctx->pc = 0x2f4d3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f4d40: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2f4d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f4d44: 0x1735818  mult        $t3, $t3, $s3
    ctx->pc = 0x2f4d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f4d48: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f4d48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f4d4c: 0x71936018  mult1       $t4, $t4, $s3
    ctx->pc = 0x2f4d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x2f4d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4d54: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x2f4d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f4d58: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f4d58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f4d5c: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x2f4d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x2f4d60: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2f4d60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f4d64: 0x3129000f  andi        $t1, $t1, 0xF
    ctx->pc = 0x2f4d64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)15);
    // 0x2f4d68: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x2f4d68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2f4d6c: 0x1665821  addu        $t3, $t3, $a2
    ctx->pc = 0x2f4d6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x2f4d70: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x2f4d70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x2f4d74: 0x1044021  addu        $t0, $t0, $a0
    ctx->pc = 0x2f4d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2f4d78: 0x1a96821  addu        $t5, $t5, $t1
    ctx->pc = 0x2f4d78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x2f4d7c: 0x3d6700b  movn        $t6, $fp, $s6
    ctx->pc = 0x2f4d7cu;
    if (GPR_U64(ctx, 22) != 0) SET_GPR_U64(ctx, 14, GPR_U64(ctx, 30));
    // 0x2f4d80: 0x16780a  movz        $t7, $zero, $s6
    ctx->pc = 0x2f4d80u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0));
    // 0x2f4d84: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f4d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f4d88: 0xa7b50200  sh          $s5, 0x200($sp)
    ctx->pc = 0x2f4d88u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 21));
    // 0x2f4d8c: 0xafae0210  sw          $t6, 0x210($sp)
    ctx->pc = 0x2f4d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 14));
    // 0x2f4d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4d94: 0xafaf0204  sw          $t7, 0x204($sp)
    ctx->pc = 0x2f4d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 15));
    // 0x2f4d98: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x2f4d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x2f4d9c: 0xa7a2020e  sh          $v0, 0x20E($sp)
    ctx->pc = 0x2f4d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 526), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f4da0: 0xa3ad020d  sb          $t5, 0x20D($sp)
    ctx->pc = 0x2f4da0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 525), (uint8_t)GPR_U32(ctx, 13));
    // 0x2f4da4: 0xa3aa020c  sb          $t2, 0x20C($sp)
    ctx->pc = 0x2f4da4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 524), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f4da8: 0xa3ab020b  sb          $t3, 0x20B($sp)
    ctx->pc = 0x2f4da8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 523), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f4dac: 0xa3ac020a  sb          $t4, 0x20A($sp)
    ctx->pc = 0x2f4dacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 522), (uint8_t)GPR_U32(ctx, 12));
    // 0x2f4db0: 0xa3a80209  sb          $t0, 0x209($sp)
    ctx->pc = 0x2f4db0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 521), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f4db4: 0xa7a00202  sh          $zero, 0x202($sp)
    ctx->pc = 0x2f4db4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 514), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f4db8: 0xa3a00208  sb          $zero, 0x208($sp)
    ctx->pc = 0x2f4db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 520), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4dbc: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x2f4dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
    // 0x2f4dc0: 0x6ba3020f  ldl         $v1, 0x20F($sp)
    ctx->pc = 0x2f4dc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 527); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f4dc4: 0x6fa30208  ldr         $v1, 0x208($sp)
    ctx->pc = 0x2f4dc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 520); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f4dc8: 0xb3a3021f  sdl         $v1, 0x21F($sp)
    ctx->pc = 0x2f4dc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 543); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4dcc: 0xb7a30218  sdr         $v1, 0x218($sp)
    ctx->pc = 0x2f4dccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 536); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4dd0: 0xc0c5d08  jal         func_317420
    ctx->pc = 0x2F4DD0u;
    SET_GPR_U32(ctx, 31, 0x2F4DD8u);
    ctx->pc = 0x2F4DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4DD0u;
    // 0x2f4dd4: 0xafa00220  sw          $zero, 0x220($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317420u, 0x2F4DD0u, 0x2F4DD8u)) {
        return;
    }
    ctx->pc = 0x2F4DD8u;
label_2f4dd8:
    // 0x2f4dd8: 0x68490008  ldl         $t1, 0x8($v0)
    ctx->pc = 0x2f4dd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f4ddc: 0x6c490001  ldr         $t1, 0x1($v0)
    ctx->pc = 0x2f4ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 1); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f4de0: 0x68430010  ldl         $v1, 0x10($v0)
    ctx->pc = 0x2f4de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2f4de4: 0x6c430009  ldr         $v1, 0x9($v0)
    ctx->pc = 0x2f4de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 9); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2f4de8: 0x68440018  ldl         $a0, 0x18($v0)
    ctx->pc = 0x2f4de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f4dec: 0x6c440011  ldr         $a0, 0x11($v0)
    ctx->pc = 0x2f4decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 17); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f4df0: 0x68450020  ldl         $a1, 0x20($v0)
    ctx->pc = 0x2f4df0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2f4df4: 0x6c450019  ldr         $a1, 0x19($v0)
    ctx->pc = 0x2f4df4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2f4df8: 0xb3a90247  sdl         $t1, 0x247($sp)
    ctx->pc = 0x2f4df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 583); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4dfc: 0xb7a90240  sdr         $t1, 0x240($sp)
    ctx->pc = 0x2f4dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 576); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e00: 0xb3a3024f  sdl         $v1, 0x24F($sp)
    ctx->pc = 0x2f4e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 591); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e04: 0xb7a30248  sdr         $v1, 0x248($sp)
    ctx->pc = 0x2f4e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 584); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e08: 0xb3a40257  sdl         $a0, 0x257($sp)
    ctx->pc = 0x2f4e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 599); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e0c: 0xb7a40250  sdr         $a0, 0x250($sp)
    ctx->pc = 0x2f4e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 592); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e10: 0xb3a5025f  sdl         $a1, 0x25F($sp)
    ctx->pc = 0x2f4e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 607); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e14: 0xb7a50258  sdr         $a1, 0x258($sp)
    ctx->pc = 0x2f4e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 600); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4e18: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2f4e18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f4e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e24: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x2f4e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f4e28: 0xc0bd10c  jal         func_2F4430
    ctx->pc = 0x2F4E28u;
    SET_GPR_U32(ctx, 31, 0x2F4E30u);
    ctx->pc = 0x2F4E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E28u;
    // 0x2f4e2c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4430u, 0x2F4E28u, 0x2F4E30u)) {
        return;
    }
    ctx->pc = 0x2F4E30u;
label_2f4e30:
    // 0x2f4e30: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2f4e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e34: 0x6a00091  bltz        $s5, . + 4 + (0x91 << 2)
    ctx->pc = 0x2F4E34u;
    {
        const bool branch_taken_0x2f4e34 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x2F4E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E34u;
        // 0x2f4e38: 0x8fa20490  lw          $v0, 0x490($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e34) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F4E3Cu;
    // 0x2f4e3c: 0x12e0007f  beqz        $s7, . + 4 + (0x7F << 2)
    ctx->pc = 0x2F4E3Cu;
    {
        const bool branch_taken_0x2f4e3c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4E3Cu;
        // 0x2f4e40: 0x3c110072  lui         $s1, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4e3c) {
            ctx->pc = 0x2F503Cu;
            goto label_2f503c;
        }
    }
    ctx->pc = 0x2F4E44u;
    // 0x2f4e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e48: 0x2630c880  addiu       $s0, $s1, -0x3780
    ctx->pc = 0x2f4e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953088));
    // 0x2f4e4c: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2f4e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f4e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e54: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F4E54u;
    SET_GPR_U32(ctx, 31, 0x2F4E5Cu);
    ctx->pc = 0x2F4E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4E54u;
    // 0x2f4e58: 0x34128427  ori         $s2, $zero, 0x8427 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33831);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F4E54u, 0x2F4E5Cu)) {
        return;
    }
    ctx->pc = 0x2F4E5Cu;
label_2f4e5c:
    // 0x2f4e5c: 0x93a30487  lbu         $v1, 0x487($sp)
    ctx->pc = 0x2f4e5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1159)));
    // 0x2f4e60: 0x3c0f006b  lui         $t7, 0x6B
    ctx->pc = 0x2f4e60u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)107 << 16));
    // 0x2f4e64: 0x93ae0486  lbu         $t6, 0x486($sp)
    ctx->pc = 0x2f4e64u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1158)));
    // 0x2f4e68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f4e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4e6c: 0x93ad0485  lbu         $t5, 0x485($sp)
    ctx->pc = 0x2f4e6cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1157)));
    // 0x2f4e70: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2f4e74: 0x93ac0483  lbu         $t4, 0x483($sp)
    ctx->pc = 0x2f4e74u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1155)));
    // 0x2f4e78: 0xe5902  srl         $t3, $t6, 4
    ctx->pc = 0x2f4e78u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2f4e7c: 0x93aa0482  lbu         $t2, 0x482($sp)
    ctx->pc = 0x2f4e7cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1154)));
    // 0x2f4e80: 0xd3902  srl         $a3, $t5, 4
    ctx->pc = 0x2f4e80u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2f4e84: 0x93a60481  lbu         $a2, 0x481($sp)
    ctx->pc = 0x2f4e84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1153)));
    // 0x2f4e88: 0xc4102  srl         $t0, $t4, 4
    ctx->pc = 0x2f4e88u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2f4e8c: 0xa4902  srl         $t1, $t2, 4
    ctx->pc = 0x2f4e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 4));
    // 0x2f4e90: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x2f4e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f4e94: 0x62102  srl         $a0, $a2, 4
    ctx->pc = 0x2f4e94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x2f4e98: 0x1735818  mult        $t3, $t3, $s3
    ctx->pc = 0x2f4e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f4e9c: 0x70f33818  mult1       $a3, $a3, $s3
    ctx->pc = 0x2f4e9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f4ea0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2f4ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f4ea4: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x2f4ea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f4ea8: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x2f4ea8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2f4eac: 0x71334818  mult1       $t1, $t1, $s3
    ctx->pc = 0x2f4eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f4eb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4eb4: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x2f4eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f4eb8: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f4eb8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f4ebc: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2f4ebcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2f4ec0: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2f4ec0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2f4ec4: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x2f4ec4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x2f4ec8: 0xa632c880  sh          $s2, -0x3780($s1)
    ctx->pc = 0x2f4ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294953088), (uint16_t)GPR_U32(ctx, 18));
    // 0x2f4ecc: 0xed3821  addu        $a3, $a3, $t5
    ctx->pc = 0x2f4eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x2f4ed0: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x2f4ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x2f4ed4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2f4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2f4ed8: 0x12a4821  addu        $t1, $t1, $t2
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2f4edc: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f4ee0: 0x16e5821  addu        $t3, $t3, $t6
    ctx->pc = 0x2f4ee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 14)));
    // 0x2f4ee4: 0xa2040009  sb          $a0, 0x9($s0)
    ctx->pc = 0x2f4ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f4ee8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x2f4ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2f4eec: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x2f4eecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f4ef0: 0xa20b000d  sb          $t3, 0xD($s0)
    ctx->pc = 0x2f4ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f4ef4: 0xa207000c  sb          $a3, 0xC($s0)
    ctx->pc = 0x2f4ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 7));
    // 0x2f4ef8: 0xa208000b  sb          $t0, 0xB($s0)
    ctx->pc = 0x2f4ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f4efc: 0xa209000a  sb          $t1, 0xA($s0)
    ctx->pc = 0x2f4efcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f4f00: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x2f4f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x2f4f04: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f4f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f4f08: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x2f4f08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f4f0c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f4f10: 0x6a07000f  ldl         $a3, 0xF($s0)
    ctx->pc = 0x2f4f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2f4f14: 0x6e070008  ldr         $a3, 0x8($s0)
    ctx->pc = 0x2f4f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2f4f18: 0xb207001f  sdl         $a3, 0x1F($s0)
    ctx->pc = 0x2f4f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4f1c: 0xb6070018  sdr         $a3, 0x18($s0)
    ctx->pc = 0x2f4f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f4f20: 0x25e80140  addiu       $t0, $t7, 0x140
    ctx->pc = 0x2f4f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 15), 320));
    // 0x2f4f24: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2f4f28: 0x81040001  lb          $a0, 0x1($t0)
    ctx->pc = 0x2f4f28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x2f4f2c: 0xa2030040  sb          $v1, 0x40($s0)
    ctx->pc = 0x2f4f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f4f30: 0xa2040041  sb          $a0, 0x41($s0)
    ctx->pc = 0x2f4f30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x2f4f34: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x2f4f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x2f4f38: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F4F38u;
    SET_GPR_U32(ctx, 31, 0x2F4F40u);
    ctx->pc = 0x2F4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4F38u;
    // 0x2f4f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F4F38u, 0x2F4F40u)) {
        return;
    }
    ctx->pc = 0x2F4F40u;
label_2f4f40:
    // 0x2f4f40: 0x93a30487  lbu         $v1, 0x487($sp)
    ctx->pc = 0x2f4f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1159)));
    // 0x2f4f44: 0x3c0f006b  lui         $t7, 0x6B
    ctx->pc = 0x2f4f44u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)107 << 16));
    // 0x2f4f48: 0x93ae0486  lbu         $t6, 0x486($sp)
    ctx->pc = 0x2f4f48u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1158)));
    // 0x2f4f4c: 0x2625c880  addiu       $a1, $s1, -0x3780
    ctx->pc = 0x2f4f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294953088));
    // 0x2f4f50: 0x93ad0485  lbu         $t5, 0x485($sp)
    ctx->pc = 0x2f4f50u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1157)));
    // 0x2f4f54: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2f4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2f4f58: 0x93ac0483  lbu         $t4, 0x483($sp)
    ctx->pc = 0x2f4f58u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1155)));
    // 0x2f4f5c: 0xe4102  srl         $t0, $t6, 4
    ctx->pc = 0x2f4f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 14), 4));
    // 0x2f4f60: 0x93a70482  lbu         $a3, 0x482($sp)
    ctx->pc = 0x2f4f60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1154)));
    // 0x2f4f64: 0xd4902  srl         $t1, $t5, 4
    ctx->pc = 0x2f4f64u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 13), 4));
    // 0x2f4f68: 0x93a40481  lbu         $a0, 0x481($sp)
    ctx->pc = 0x2f4f68u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1153)));
    // 0x2f4f6c: 0xc5102  srl         $t2, $t4, 4
    ctx->pc = 0x2f4f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 12), 4));
    // 0x2f4f70: 0x75902  srl         $t3, $a3, 4
    ctx->pc = 0x2f4f70u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x2f4f74: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x2f4f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f4f78: 0x43102  srl         $a2, $a0, 4
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x2f4f7c: 0x1134018  mult        $t0, $t0, $s3
    ctx->pc = 0x2f4f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x2f4f80: 0x71334818  mult1       $t1, $t1, $s3
    ctx->pc = 0x2f4f80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2f4f84: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2f4f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2f4f88: 0xd33018  mult        $a2, $a2, $s3
    ctx->pc = 0x2f4f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f4f8c: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2f4f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2f4f90: 0x71535018  mult1       $t2, $t2, $s3
    ctx->pc = 0x2f4f90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2f4f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4f98: 0x1735818  mult        $t3, $t3, $s3
    ctx->pc = 0x2f4f98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)result); }
    // 0x2f4f9c: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x2f4f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x2f4fa0: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f4fa0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f4fa4: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2f4fa4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2f4fa8: 0x318c000f  andi        $t4, $t4, 0xF
    ctx->pc = 0x2f4fa8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x2f4fac: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x2f4facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2f4fb0: 0x12d4821  addu        $t1, $t1, $t5
    ctx->pc = 0x2f4fb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x2f4fb4: 0x244207d0  addiu       $v0, $v0, 0x7D0
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2000));
    // 0x2f4fb8: 0x10e4021  addu        $t0, $t0, $t6
    ctx->pc = 0x2f4fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x2f4fbc: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x2f4fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x2f4fc0: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x2f4fc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2f4fc4: 0xa6120000  sh          $s2, 0x0($s0)
    ctx->pc = 0x2f4fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x2f4fc8: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x2f4fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f4fcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f4fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4fd0: 0xa208000d  sb          $t0, 0xD($s0)
    ctx->pc = 0x2f4fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f4fd4: 0xa209000c  sb          $t1, 0xC($s0)
    ctx->pc = 0x2f4fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f4fd8: 0xa20a000b  sb          $t2, 0xB($s0)
    ctx->pc = 0x2f4fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 10));
    // 0x2f4fdc: 0xa20b000a  sb          $t3, 0xA($s0)
    ctx->pc = 0x2f4fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 11));
    // 0x2f4fe0: 0xa2060009  sb          $a2, 0x9($s0)
    ctx->pc = 0x2f4fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x2f4fe4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f4fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f4fe8: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x2f4fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f4fec: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x2f4fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4ff0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f4ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2f4ff4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2f4ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2f4ff8: 0x6a09000f  ldl         $t1, 0xF($s0)
    ctx->pc = 0x2f4ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2f4ffc: 0x6e090008  ldr         $t1, 0x8($s0)
    ctx->pc = 0x2f4ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2f5000: 0xb209001f  sdl         $t1, 0x1F($s0)
    ctx->pc = 0x2f5000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5004: 0xb6090018  sdr         $t1, 0x18($s0)
    ctx->pc = 0x2f5004u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f5008: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2f5008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2f500c: 0x8fa60210  lw          $a2, 0x210($sp)
    ctx->pc = 0x2f500cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2f5010: 0x25e30148  addiu       $v1, $t7, 0x148
    ctx->pc = 0x2f5010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 328));
    // 0x2f5014: 0x80680000  lb          $t0, 0x0($v1)
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f5018: 0x80690001  lb          $t1, 0x1($v1)
    ctx->pc = 0x2f5018u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2f501c: 0x80620002  lb          $v0, 0x2($v1)
    ctx->pc = 0x2f501cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2f5020: 0xa2080040  sb          $t0, 0x40($s0)
    ctx->pc = 0x2f5020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 8));
    // 0x2f5024: 0xa2090041  sb          $t1, 0x41($s0)
    ctx->pc = 0x2f5024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 65), (uint8_t)GPR_U32(ctx, 9));
    // 0x2f5028: 0xa2020042  sb          $v0, 0x42($s0)
    ctx->pc = 0x2f5028u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f502c: 0xc0bdb66  jal         func_2F6D98
    ctx->pc = 0x2F502Cu;
    SET_GPR_U32(ctx, 31, 0x2F5034u);
    ctx->pc = 0x2F5030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F502Cu;
    // 0x2f5030: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6D98u, 0x2F502Cu, 0x2F5034u)) {
        return;
    }
    ctx->pc = 0x2F5034u;
label_2f5034:
    // 0x2f5034: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F5034u;
    {
        const bool branch_taken_0x2f5034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5034) {
            ctx->pc = 0x2F5074u;
            goto label_2f5074;
        }
    }
    ctx->pc = 0x2F503Cu;
label_2f503c:
    // 0x2f503c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2f503cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f5040: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f5044: 0xc0bd240  jal         func_2F4900
    ctx->pc = 0x2F5044u;
    SET_GPR_U32(ctx, 31, 0x2F504Cu);
    ctx->pc = 0x2F5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5044u;
    // 0x2f5048: 0x8fa60494  lw          $a2, 0x494($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4900u, 0x2F5044u, 0x2F504Cu)) {
        return;
    }
    ctx->pc = 0x2F504Cu;
label_2f504c:
    // 0x2f504c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F504Cu;
    {
        const bool branch_taken_0x2f504c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F504Cu;
        // 0x2f5050: 0xafa20490  sw          $v0, 0x490($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f504c) {
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F5054u;
    // 0x2f5054: 0xc0bc8f2  jal         func_2F23C8
    ctx->pc = 0x2F5054u;
    SET_GPR_U32(ctx, 31, 0x2F505Cu);
    ctx->pc = 0x2F5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5054u;
    // 0x2f5058: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F23C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F23C8u, 0x2F5054u, 0x2F505Cu)) {
        return;
    }
    ctx->pc = 0x2F505Cu;
label_2f505c:
    // 0x2f505c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F505Cu;
    {
        const bool branch_taken_0x2f505c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f505c) {
            ctx->pc = 0x2F5074u;
            goto label_2f5074;
        }
    }
    ctx->pc = 0x2F5064u;
    // 0x2f5064: 0xc0bda0c  jal         func_2F6830
    ctx->pc = 0x2F5064u;
    SET_GPR_U32(ctx, 31, 0x2F506Cu);
    ctx->pc = 0x2F5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F5064u;
    // 0x2f5068: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6830u, 0x2F5064u, 0x2F506Cu)) {
        return;
    }
    ctx->pc = 0x2F506Cu;
label_2f506c:
    // 0x2f506c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F506Cu;
    {
        const bool branch_taken_0x2f506c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f506c) {
            ctx->pc = 0x2F5070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F506Cu;
            // 0x2f5070: 0x8fa20490  lw          $v0, 0x490($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F507Cu;
            goto label_2f507c;
        }
    }
    ctx->pc = 0x2F5074u;
label_2f5074:
    // 0x2f5074: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f5078: 0x3442006f  ori         $v0, $v0, 0x6F
    ctx->pc = 0x2f5078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
label_2f507c:
    // 0x2f507c: 0xdfbf0530  ld          $ra, 0x530($sp)
    ctx->pc = 0x2f507cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1328)));
label_2f5080:
    // 0x2f5080: 0xdfbe0520  ld          $fp, 0x520($sp)
    ctx->pc = 0x2f5080u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1312)));
    // 0x2f5084: 0xdfb70510  ld          $s7, 0x510($sp)
    ctx->pc = 0x2f5084u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
    // 0x2f5088: 0xdfb60500  ld          $s6, 0x500($sp)
    ctx->pc = 0x2f5088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1280)));
    // 0x2f508c: 0xdfb504f0  ld          $s5, 0x4F0($sp)
    ctx->pc = 0x2f508cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1264)));
    // 0x2f5090: 0xdfb404e0  ld          $s4, 0x4E0($sp)
    ctx->pc = 0x2f5090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x2f5094: 0xdfb304d0  ld          $s3, 0x4D0($sp)
    ctx->pc = 0x2f5094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x2f5098: 0xdfb204c0  ld          $s2, 0x4C0($sp)
    ctx->pc = 0x2f5098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x2f509c: 0xdfb104b0  ld          $s1, 0x4B0($sp)
    ctx->pc = 0x2f509cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x2f50a0: 0xdfb004a0  ld          $s0, 0x4A0($sp)
    ctx->pc = 0x2f50a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x2f50a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F50A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F50A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F50A4u;
        // 0x2f50a8: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F50A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F50ACu;
    // 0x2f50ac: 0x0  nop
    ctx->pc = 0x2f50acu;
    // NOP
    ctx->pc = 0x2f50b0u;
}
