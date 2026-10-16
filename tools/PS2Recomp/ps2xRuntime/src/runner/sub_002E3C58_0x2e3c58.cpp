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

// Function: sub_002E3C58
// Address: 0x2e3c58 - 0x2e3df0
void sub_002E3C58_0x2e3c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3C58_0x2e3c58");
#endif

    switch (ctx->pc) {
        case 0x2e3cbcu: goto label_2e3cbc;
        case 0x2e3cf8u: goto label_2e3cf8;
        case 0x2e3d24u: goto label_2e3d24;
        case 0x2e3d58u: goto label_2e3d58;
        case 0x2e3d68u: goto label_2e3d68;
        case 0x2e3d8cu: goto label_2e3d8c;
        case 0x2e3da0u: goto label_2e3da0;
        default: break;
    }

    ctx->pc = 0x2e3c58u;

    // 0x2e3c58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e3c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e3c5c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2e3c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2e3c60: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2e3c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2e3c64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e3c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2e3c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2e3c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e3c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3c74: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2e3c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c78: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2e3c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2e3c7c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2e3c7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c80: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2e3c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2e3c84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e3c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3c8c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3C8Cu;
    {
        const bool branch_taken_0x2e3c8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3C8Cu;
        // 0x2e3c90: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3c8c) {
            ctx->pc = 0x2E3CA0u;
            goto label_2e3ca0;
        }
    }
    ctx->pc = 0x2E3C94u;
    // 0x2e3c94: 0x8f828c48  lw          $v0, -0x73B8($gp)
    ctx->pc = 0x2e3c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x2e3c98: 0x8f919068  lw          $s1, -0x6F98($gp)
    ctx->pc = 0x2e3c98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2e3c9c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x2e3c9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0));
label_2e3ca0:
    // 0x2e3ca0: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2E3CA0u;
    {
        const bool branch_taken_0x2e3ca0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3ca0) {
            ctx->pc = 0x2E3CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3CA0u;
            // 0x2e3ca4: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3CD0u;
            goto label_2e3cd0;
        }
    }
    ctx->pc = 0x2E3CA8u;
    // 0x2e3ca8: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e3cac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e3cb0: 0x24848310  addiu       $a0, $a0, -0x7CF0
    ctx->pc = 0x2e3cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935312));
    // 0x2e3cb4: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E3CB4u;
    SET_GPR_U32(ctx, 31, 0x2E3CBCu);
    ctx->pc = 0x2E3CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CB4u;
    // 0x2e3cb8: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E3CB4u, 0x2E3CBCu)) {
        return;
    }
    ctx->pc = 0x2E3CBCu;
label_2e3cbc:
    // 0x2e3cbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e3cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3cc0: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2E3CC0u;
    {
        const bool branch_taken_0x2e3cc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CC0u;
        // 0x2e3cc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cc0) {
            ctx->pc = 0x2E3DC8u;
            goto label_2e3dc8;
        }
    }
    ctx->pc = 0x2E3CC8u;
    // 0x2e3cc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3ccc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e3cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2e3cd0:
    // 0x2e3cd0: 0x32820004  andi        $v0, $s4, 0x4
    ctx->pc = 0x2e3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
    // 0x2e3cd4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E3CD4u;
    {
        const bool branch_taken_0x2e3cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CD4u;
        // 0x2e3cd8: 0xae130058  sw          $s3, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cd4) {
            ctx->pc = 0x2E3D30u;
            goto label_2e3d30;
        }
    }
    ctx->pc = 0x2E3CDCu;
    // 0x2e3cdc: 0x5640000a  bnel        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2E3CDCu;
    {
        const bool branch_taken_0x2e3cdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3cdc) {
            ctx->pc = 0x2E3CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3CDCu;
            // 0x2e3ce0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3D08u;
            goto label_2e3d08;
        }
    }
    ctx->pc = 0x2E3CE4u;
    // 0x2e3ce4: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e3ce8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e3ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e3cec: 0x24848338  addiu       $a0, $a0, -0x7CC8
    ctx->pc = 0x2e3cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935352));
    // 0x2e3cf0: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E3CF0u;
    SET_GPR_U32(ctx, 31, 0x2E3CF8u);
    ctx->pc = 0x2E3CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3CF0u;
    // 0x2e3cf4: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E3CF0u, 0x2E3CF8u)) {
        return;
    }
    ctx->pc = 0x2E3CF8u;
label_2e3cf8:
    // 0x2e3cf8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E3CF8u;
    {
        const bool branch_taken_0x2e3cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3CF8u;
        // 0x2e3cfc: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3cf8) {
            ctx->pc = 0x2E3D14u;
            goto label_2e3d14;
        }
    }
    ctx->pc = 0x2E3D00u;
    // 0x2e3d00: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3D00u;
    {
        const bool branch_taken_0x2e3d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d00) {
            ctx->pc = 0x2E3D60u;
            goto label_2e3d60;
        }
    }
    ctx->pc = 0x2E3D08u;
label_2e3d08:
    // 0x2e3d08: 0xae12004c  sw          $s2, 0x4C($s0)
    ctx->pc = 0x2e3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 18));
    // 0x2e3d0c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2e3d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2e3d10: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e3d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2e3d14:
    // 0x2e3d14: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x2e3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2e3d18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d1c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E3D1Cu;
    SET_GPR_U32(ctx, 31, 0x2E3D24u);
    ctx->pc = 0x2E3D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D1Cu;
    // 0x2e3d20: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E3D1Cu, 0x2E3D24u)) {
        return;
    }
    ctx->pc = 0x2E3D24u;
label_2e3d24:
    // 0x2e3d24: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e3d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e3d28: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2e3d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x2e3d2c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e3d30:
    // 0x2e3d30: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x2e3d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
    // 0x2e3d34: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E3D34u;
    {
        const bool branch_taken_0x2e3d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d34) {
            ctx->pc = 0x2E3D98u;
            goto label_2e3d98;
        }
    }
    ctx->pc = 0x2E3D3Cu;
    // 0x2e3d3c: 0x56a0000c  bnel        $s5, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2E3D3Cu;
    {
        const bool branch_taken_0x2e3d3c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3d3c) {
            ctx->pc = 0x2E3D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3D3Cu;
            // 0x2e3d40: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3D70u;
            goto label_2e3d70;
        }
    }
    ctx->pc = 0x2E3D44u;
    // 0x2e3d44: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e3d48: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2e3d48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x2e3d4c: 0x24848360  addiu       $a0, $a0, -0x7CA0
    ctx->pc = 0x2e3d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935392));
    // 0x2e3d50: 0xc0b8180  jal         func_2E0600
    ctx->pc = 0x2E3D50u;
    SET_GPR_U32(ctx, 31, 0x2E3D58u);
    ctx->pc = 0x2E3D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D50u;
    // 0x2e3d54: 0x34a50809  ori         $a1, $a1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0600u, 0x2E3D50u, 0x2E3D58u)) {
        return;
    }
    ctx->pc = 0x2E3D58u;
label_2e3d58:
    // 0x2e3d58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3D58u;
    {
        const bool branch_taken_0x2e3d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D58u;
        // 0x2e3d5c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d58) {
            ctx->pc = 0x2E3D7Cu;
            goto label_2e3d7c;
        }
    }
    ctx->pc = 0x2E3D60u;
label_2e3d60:
    // 0x2e3d60: 0xc0b90d8  jal         func_2E4360
    ctx->pc = 0x2E3D60u;
    SET_GPR_U32(ctx, 31, 0x2E3D68u);
    ctx->pc = 0x2E3D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D60u;
    // 0x2e3d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4360u, 0x2E3D60u, 0x2E3D68u)) {
        return;
    }
    ctx->pc = 0x2E3D68u;
label_2e3d68:
    // 0x2e3d68: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E3D68u;
    {
        const bool branch_taken_0x2e3d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3D68u;
        // 0x2e3d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3d68) {
            ctx->pc = 0x2E3DC8u;
            goto label_2e3dc8;
        }
    }
    ctx->pc = 0x2E3D70u;
label_2e3d70:
    // 0x2e3d70: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x2e3d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x2e3d74: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2e3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2e3d78: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2e3d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2e3d7c:
    // 0x2e3d7c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x2e3d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e3d80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e3d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3d84: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2E3D84u;
    SET_GPR_U32(ctx, 31, 0x2E3D8Cu);
    ctx->pc = 0x2E3D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D84u;
    // 0x2e3d88: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2E3D84u, 0x2E3D8Cu)) {
        return;
    }
    ctx->pc = 0x2E3D8Cu;
label_2e3d8c:
    // 0x2e3d8c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2e3d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e3d90: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x2e3d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x2e3d94: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2e3d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2e3d98:
    // 0x2e3d98: 0xc0b8db0  jal         func_2E36C0
    ctx->pc = 0x2E3D98u;
    SET_GPR_U32(ctx, 31, 0x2E3DA0u);
    ctx->pc = 0x2E3D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E3D98u;
    // 0x2e3d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E36C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E36C0u, 0x2E3D98u, 0x2E3DA0u)) {
        return;
    }
    ctx->pc = 0x2E3DA0u;
label_2e3da0:
    // 0x2e3da0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E3DA0u;
    {
        const bool branch_taken_0x2e3da0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DA0u;
        // 0x2e3da4: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3da0) {
            ctx->pc = 0x2E3DC4u;
            goto label_2e3dc4;
        }
    }
    ctx->pc = 0x2E3DA8u;
    // 0x2e3da8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2e3da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e3dac: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x2e3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x2e3db0: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x2e3db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2e3db4: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x2e3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x2e3db8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2e3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2e3dbc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2e3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2e3dc0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2e3dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_2e3dc4:
    // 0x2e3dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e3dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e3dc8:
    // 0x2e3dc8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2e3dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e3dcc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2e3dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e3dd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2e3dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3dd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e3dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e3dd8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2e3dd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3ddc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2e3ddcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3DE4u;
        // 0x2e3de8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3DECu;
    // 0x2e3dec: 0x0  nop
    ctx->pc = 0x2e3decu;
    // NOP
    ctx->pc = 0x2e3df0u;
}
