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

// Function: sub_00186A48
// Address: 0x186a48 - 0x186f58
void sub_00186A48_0x186a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186A48_0x186a48");
#endif

    switch (ctx->pc) {
        case 0x186a90u: goto label_186a90;
        case 0x186aa4u: goto label_186aa4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186af0u: goto label_186af0;
        case 0x186b04u: goto label_186b04;
        case 0x186b28u: goto label_186b28;
        case 0x186b38u: goto label_186b38;
        case 0x186b50u: goto label_186b50;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd4u: goto label_186bd4;
        case 0x186be8u: goto label_186be8;
        case 0x186c48u: goto label_186c48;
        case 0x186c58u: goto label_186c58;
        case 0x186c70u: goto label_186c70;
        case 0x186cd0u: goto label_186cd0;
        case 0x186ce0u: goto label_186ce0;
        case 0x186cf8u: goto label_186cf8;
        case 0x186d60u: goto label_186d60;
        case 0x186dc8u: goto label_186dc8;
        case 0x186e30u: goto label_186e30;
        case 0x186e98u: goto label_186e98;
        case 0x186ef4u: goto label_186ef4;
        case 0x186f0cu: goto label_186f0c;
        default: break;
    }

    ctx->pc = 0x186a48u;

    // 0x186a48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x186a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x186a4c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x186a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x186a50: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x186a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x186a54: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x186a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x186a58: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x186a58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a5c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x186a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x186a60: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x186a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x186a64: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x186a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x186a68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x186a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x186a6c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x186a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x186a70: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x186a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x186a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x186a78: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x186a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x186a7c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x186A7Cu;
    {
        const bool branch_taken_0x186a7c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x186A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A7Cu;
        // 0x186a80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a7c) {
            ctx->pc = 0x186AC8u;
            goto label_186ac8;
        }
    }
    ctx->pc = 0x186A84u;
    // 0x186a84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x186a84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a88: 0x8ec5000c  lw          $a1, 0xC($s6)
    ctx->pc = 0x186a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x186a8c: 0x0  nop
    ctx->pc = 0x186a8cu;
    // NOP
label_186a90:
    // 0x186a90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x186a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186a94: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x186a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x186a98: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x186a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x186a9c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x186A9Cu;
    SET_GPR_U32(ctx, 31, 0x186AA4u);
    ctx->pc = 0x186AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186A9Cu;
    // 0x186aa0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x186A9Cu, 0x186AA4u)) {
        return;
    }
    ctx->pc = 0x186AA4u;
label_186aa4:
    // 0x186aa4: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x186aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x186aa8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x186aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x186aac: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x186aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x186ab0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x186AB0u;
    SET_GPR_U32(ctx, 31, 0x186AB8u);
    ctx->pc = 0x186AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186AB0u;
    // 0x186ab4: 0x2610004c  addiu       $s0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x186AB0u, 0x186AB8u)) {
        return;
    }
    ctx->pc = 0x186AB8u;
label_186ab8:
    // 0x186ab8: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x186ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x186abc: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x186abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x186ac0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x186AC0u;
    {
        const bool branch_taken_0x186ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186ac0) {
            ctx->pc = 0x186AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186AC0u;
            // 0x186ac4: 0x8ec5000c  lw          $a1, 0xC($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186a90;
        }
    }
    ctx->pc = 0x186AC8u;
label_186ac8:
    // 0x186ac8: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x186ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x186acc: 0x1080010f  beqz        $a0, . + 4 + (0x10F << 2)
    ctx->pc = 0x186ACCu;
    {
        const bool branch_taken_0x186acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ACCu;
        // 0x186ad0: 0xaec00008  sw          $zero, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186acc) {
            ctx->pc = 0x186F0Cu;
            goto label_186f0c;
        }
    }
    ctx->pc = 0x186AD4u;
    // 0x186ad4: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x186ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x186ad8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x186adc: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x186adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x186ae0: 0xa4b821  addu        $s7, $a1, $a0
    ctx->pc = 0x186ae0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x186ae4: 0x10970106  beq         $a0, $s7, . + 4 + (0x106 << 2)
    ctx->pc = 0x186AE4u;
    {
        const bool branch_taken_0x186ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        ctx->pc = 0x186AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AE4u;
        // 0x186ae8: 0x26fe000c  addiu       $fp, $s7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ae4) {
            ctx->pc = 0x186F00u;
            goto label_186f00;
        }
    }
    ctx->pc = 0x186AECu;
    // 0x186aec: 0x27deffb4  addiu       $fp, $fp, -0x4C
    ctx->pc = 0x186aecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967220));
label_186af0:
    // 0x186af0: 0x8fc4fff4  lw          $a0, -0xC($fp)
    ctx->pc = 0x186af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967284)));
    // 0x186af4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186AF4u;
    {
        const bool branch_taken_0x186af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AF4u;
        // 0x186af8: 0x26f7ffb4  addiu       $s7, $s7, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186af4) {
            ctx->pc = 0x186B04u;
            goto label_186b04;
        }
    }
    ctx->pc = 0x186AFCu;
    // 0x186afc: 0xc0808d4  jal         func_202350
    ctx->pc = 0x186AFCu;
    SET_GPR_U32(ctx, 31, 0x186B04u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x186AFCu, 0x186B04u)) {
        return;
    }
    ctx->pc = 0x186B04u;
label_186b04:
    // 0x186b04: 0x8fd00004  lw          $s0, 0x4($fp)
    ctx->pc = 0x186b04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x186b08: 0x26e20004  addiu       $v0, $s7, 0x4
    ctx->pc = 0x186b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x186b0c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x186b0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186b10: 0x26f4001c  addiu       $s4, $s7, 0x1C
    ctx->pc = 0x186b10u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x186b14: 0x26f3002c  addiu       $s3, $s7, 0x2C
    ctx->pc = 0x186b14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 44));
    // 0x186b18: 0x26f2003c  addiu       $s2, $s7, 0x3C
    ctx->pc = 0x186b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 60));
    // 0x186b1c: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x186B1Cu;
    {
        const bool branch_taken_0x186b1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B1Cu;
        // 0x186b20: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b1c) {
            ctx->pc = 0x186B94u;
            goto label_186b94;
        }
    }
    ctx->pc = 0x186B24u;
    // 0x186b24: 0x0  nop
    ctx->pc = 0x186b24u;
    // NOP
label_186b28:
    // 0x186b28: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186B28u;
    {
        const bool branch_taken_0x186b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b28) {
            ctx->pc = 0x186B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B28u;
            // 0x186b2c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B3Cu;
            goto label_186b3c;
        }
    }
    ctx->pc = 0x186B30u;
    // 0x186b30: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x186B30u;
    SET_GPR_U32(ctx, 31, 0x186B38u);
    ctx->pc = 0x186B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186B30u;
    // 0x186b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x186B30u, 0x186B38u)) {
        return;
    }
    ctx->pc = 0x186B38u;
label_186b38:
    // 0x186b38: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x186b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186b3c:
    // 0x186b3c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186B3Cu;
    {
        const bool branch_taken_0x186b3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b3c) {
            ctx->pc = 0x186B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186b28;
        }
    }
    ctx->pc = 0x186B44u;
    // 0x186b44: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x186B44u;
    {
        const bool branch_taken_0x186b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B44u;
        // 0x186b48: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b44) {
            ctx->pc = 0x186B98u;
            goto label_186b98;
        }
    }
    ctx->pc = 0x186B4Cu;
    // 0x186b4c: 0x0  nop
    ctx->pc = 0x186b4cu;
    // NOP
label_186b50:
    // 0x186b50: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186B50u;
    {
        const bool branch_taken_0x186b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b50) {
            ctx->pc = 0x186B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B50u;
            // 0x186b54: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B98u;
            goto label_186b98;
        }
    }
    ctx->pc = 0x186B58u;
    // 0x186b58: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186b5c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186B5Cu;
    {
        const bool branch_taken_0x186b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B5Cu;
        // 0x186b60: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b5c) {
            ctx->pc = 0x186B6Cu;
            goto label_186b6c;
        }
    }
    ctx->pc = 0x186B64u;
    // 0x186b64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186B64u;
    {
        const bool branch_taken_0x186b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B64u;
        // 0x186b68: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b64) {
            ctx->pc = 0x186B70u;
            goto label_186b70;
        }
    }
    ctx->pc = 0x186B6Cu;
label_186b6c:
    // 0x186b6c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186b70:
    // 0x186b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186b74: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186B74u;
    {
        const bool branch_taken_0x186b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B74u;
        // 0x186b78: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b74) {
            ctx->pc = 0x186B84u;
            goto label_186b84;
        }
    }
    ctx->pc = 0x186B7Cu;
    // 0x186b7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186B7Cu;
    {
        const bool branch_taken_0x186b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B7Cu;
        // 0x186b80: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186b7c) {
            ctx->pc = 0x186B88u;
            goto label_186b88;
        }
    }
    ctx->pc = 0x186B84u;
label_186b84:
    // 0x186b84: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186b84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186b88:
    // 0x186b88: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x186b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x186b8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186b90: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x186b90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_186b94:
    // 0x186b94: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x186b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_186b98:
    // 0x186b98: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186B98u;
    {
        const bool branch_taken_0x186b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186b98) {
            ctx->pc = 0x186B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B98u;
            // 0x186b9c: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186b50;
        }
    }
    ctx->pc = 0x186BA0u;
    // 0x186ba0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x186ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x186ba4: 0x52200022  beql        $s1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x186BA4u;
    {
        const bool branch_taken_0x186ba4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x186ba4) {
            ctx->pc = 0x186BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186BA4u;
            // 0x186ba8: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C30u;
            goto label_186c30;
        }
    }
    ctx->pc = 0x186BACu;
    // 0x186bac: 0x0  nop
    ctx->pc = 0x186bacu;
    // NOP
label_186bb0:
    // 0x186bb0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x186BB0u;
    {
        const bool branch_taken_0x186bb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BB0u;
        // 0x186bb4: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bb0) {
            ctx->pc = 0x186BD4u;
            goto label_186bd4;
        }
    }
    ctx->pc = 0x186BB8u;
    // 0x186bb8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x186BB8u;
    SET_GPR_U32(ctx, 31, 0x186BC0u);
    ctx->pc = 0x186BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BB8u;
    // 0x186bbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x186BB8u, 0x186BC0u)) {
        return;
    }
    ctx->pc = 0x186BC0u;
label_186bc0:
    // 0x186bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bc4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x186BC4u;
    SET_GPR_U32(ctx, 31, 0x186BCCu);
    ctx->pc = 0x186BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BC4u;
    // 0x186bc8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x186BC4u, 0x186BCCu)) {
        return;
    }
    ctx->pc = 0x186BCCu;
label_186bcc:
    // 0x186bcc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x186BCCu;
    SET_GPR_U32(ctx, 31, 0x186BD4u);
    ctx->pc = 0x186BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BCCu;
    // 0x186bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x186BCCu, 0x186BD4u)) {
        return;
    }
    ctx->pc = 0x186BD4u;
label_186bd4:
    // 0x186bd4: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x186bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186bd8: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x186BD8u;
    {
        const bool branch_taken_0x186bd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x186bd8) {
            ctx->pc = 0x186BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186bb0;
        }
    }
    ctx->pc = 0x186BE0u;
    // 0x186be0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x186BE0u;
    {
        const bool branch_taken_0x186be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BE0u;
        // 0x186be4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186be0) {
            ctx->pc = 0x186C30u;
            goto label_186c30;
        }
    }
    ctx->pc = 0x186BE8u;
label_186be8:
    // 0x186be8: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186BE8u;
    {
        const bool branch_taken_0x186be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186be8) {
            ctx->pc = 0x186BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186BE8u;
            // 0x186bec: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C30u;
            goto label_186c30;
        }
    }
    ctx->pc = 0x186BF0u;
    // 0x186bf0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186bf4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BF4u;
        // 0x186bf8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186C04u;
            goto label_186c04;
        }
    }
    ctx->pc = 0x186BFCu;
    // 0x186bfc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186BFCu;
    {
        const bool branch_taken_0x186bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BFCu;
        // 0x186c00: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bfc) {
            ctx->pc = 0x186C08u;
            goto label_186c08;
        }
    }
    ctx->pc = 0x186C04u;
label_186c04:
    // 0x186c04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186c08:
    // 0x186c08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186c0c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186C0Cu;
    {
        const bool branch_taken_0x186c0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C0Cu;
        // 0x186c10: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c0c) {
            ctx->pc = 0x186C1Cu;
            goto label_186c1c;
        }
    }
    ctx->pc = 0x186C14u;
    // 0x186c14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186C14u;
    {
        const bool branch_taken_0x186c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C14u;
        // 0x186c18: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c14) {
            ctx->pc = 0x186C20u;
            goto label_186c20;
        }
    }
    ctx->pc = 0x186C1Cu;
label_186c1c:
    // 0x186c1c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186c20:
    // 0x186c20: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x186c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x186c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186c28: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x186c28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x186c2c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x186c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_186c30:
    // 0x186c30: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186C30u;
    {
        const bool branch_taken_0x186c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c30) {
            ctx->pc = 0x186C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C30u;
            // 0x186c34: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186be8;
        }
    }
    ctx->pc = 0x186C38u;
    // 0x186c38: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x186c38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x186c3c: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x186C3Cu;
    {
        const bool branch_taken_0x186c3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c3c) {
            ctx->pc = 0x186C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C3Cu;
            // 0x186c40: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CB8u;
            goto label_186cb8;
        }
    }
    ctx->pc = 0x186C44u;
    // 0x186c44: 0x0  nop
    ctx->pc = 0x186c44u;
    // NOP
label_186c48:
    // 0x186c48: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186C48u;
    {
        const bool branch_taken_0x186c48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c48) {
            ctx->pc = 0x186C4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C48u;
            // 0x186c4c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C5Cu;
            goto label_186c5c;
        }
    }
    ctx->pc = 0x186C50u;
    // 0x186c50: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x186C50u;
    SET_GPR_U32(ctx, 31, 0x186C58u);
    ctx->pc = 0x186C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C50u;
    // 0x186c54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x186C50u, 0x186C58u)) {
        return;
    }
    ctx->pc = 0x186C58u;
label_186c58:
    // 0x186c58: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186c5c:
    // 0x186c5c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186C5Cu;
    {
        const bool branch_taken_0x186c5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186c5c) {
            ctx->pc = 0x186C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186c48;
        }
    }
    ctx->pc = 0x186C64u;
    // 0x186c64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x186C64u;
    {
        const bool branch_taken_0x186c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C64u;
        // 0x186c68: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c64) {
            ctx->pc = 0x186CB8u;
            goto label_186cb8;
        }
    }
    ctx->pc = 0x186C6Cu;
    // 0x186c6c: 0x0  nop
    ctx->pc = 0x186c6cu;
    // NOP
label_186c70:
    // 0x186c70: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186C70u;
    {
        const bool branch_taken_0x186c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c70) {
            ctx->pc = 0x186C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C70u;
            // 0x186c74: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CB8u;
            goto label_186cb8;
        }
    }
    ctx->pc = 0x186C78u;
    // 0x186c78: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186c7c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186C7Cu;
    {
        const bool branch_taken_0x186c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C7Cu;
        // 0x186c80: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c7c) {
            ctx->pc = 0x186C8Cu;
            goto label_186c8c;
        }
    }
    ctx->pc = 0x186C84u;
    // 0x186c84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186C84u;
    {
        const bool branch_taken_0x186c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C84u;
        // 0x186c88: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c84) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C8Cu;
label_186c8c:
    // 0x186c8c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186c90:
    // 0x186c90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186c94: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186C94u;
    {
        const bool branch_taken_0x186c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C94u;
        // 0x186c98: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c94) {
            ctx->pc = 0x186CA4u;
            goto label_186ca4;
        }
    }
    ctx->pc = 0x186C9Cu;
    // 0x186c9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186C9Cu;
    {
        const bool branch_taken_0x186c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C9Cu;
        // 0x186ca0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c9c) {
            ctx->pc = 0x186CA8u;
            goto label_186ca8;
        }
    }
    ctx->pc = 0x186CA4u;
label_186ca4:
    // 0x186ca4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186ca8:
    // 0x186ca8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x186ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x186cac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186cb0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x186cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x186cb4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x186cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_186cb8:
    // 0x186cb8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186CB8u;
    {
        const bool branch_taken_0x186cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186cb8) {
            ctx->pc = 0x186CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CB8u;
            // 0x186cbc: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186c70;
        }
    }
    ctx->pc = 0x186CC0u;
    // 0x186cc0: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x186cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x186cc4: 0x5200001e  beql        $s0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x186CC4u;
    {
        const bool branch_taken_0x186cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cc4) {
            ctx->pc = 0x186CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CC4u;
            // 0x186cc8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D40u;
            goto label_186d40;
        }
    }
    ctx->pc = 0x186CCCu;
    // 0x186ccc: 0x0  nop
    ctx->pc = 0x186cccu;
    // NOP
label_186cd0:
    // 0x186cd0: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x186CD0u;
    {
        const bool branch_taken_0x186cd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cd0) {
            ctx->pc = 0x186CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CD0u;
            // 0x186cd4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CE4u;
            goto label_186ce4;
        }
    }
    ctx->pc = 0x186CD8u;
    // 0x186cd8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x186CD8u;
    SET_GPR_U32(ctx, 31, 0x186CE0u);
    ctx->pc = 0x186CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CD8u;
    // 0x186cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x186CD8u, 0x186CE0u)) {
        return;
    }
    ctx->pc = 0x186CE0u;
label_186ce0:
    // 0x186ce0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186ce4:
    // 0x186ce4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x186CE4u;
    {
        const bool branch_taken_0x186ce4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x186ce4) {
            ctx->pc = 0x186CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186cd0;
        }
    }
    ctx->pc = 0x186CECu;
    // 0x186cec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x186CECu;
    {
        const bool branch_taken_0x186cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CECu;
        // 0x186cf0: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186cec) {
            ctx->pc = 0x186D40u;
            goto label_186d40;
        }
    }
    ctx->pc = 0x186CF4u;
    // 0x186cf4: 0x0  nop
    ctx->pc = 0x186cf4u;
    // NOP
label_186cf8:
    // 0x186cf8: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186CF8u;
    {
        const bool branch_taken_0x186cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186cf8) {
            ctx->pc = 0x186CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CF8u;
            // 0x186cfc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D40u;
            goto label_186d40;
        }
    }
    ctx->pc = 0x186D00u;
    // 0x186d00: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186d04: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D04u;
    {
        const bool branch_taken_0x186d04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D04u;
        // 0x186d08: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d04) {
            ctx->pc = 0x186D14u;
            goto label_186d14;
        }
    }
    ctx->pc = 0x186D0Cu;
    // 0x186d0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186D0Cu;
    {
        const bool branch_taken_0x186d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D0Cu;
        // 0x186d10: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d0c) {
            ctx->pc = 0x186D18u;
            goto label_186d18;
        }
    }
    ctx->pc = 0x186D14u;
label_186d14:
    // 0x186d14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186d18:
    // 0x186d18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186d1c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D1Cu;
    {
        const bool branch_taken_0x186d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D1Cu;
        // 0x186d20: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d1c) {
            ctx->pc = 0x186D2Cu;
            goto label_186d2c;
        }
    }
    ctx->pc = 0x186D24u;
    // 0x186d24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186D24u;
    {
        const bool branch_taken_0x186d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D24u;
        // 0x186d28: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d24) {
            ctx->pc = 0x186D30u;
            goto label_186d30;
        }
    }
    ctx->pc = 0x186D2Cu;
label_186d2c:
    // 0x186d2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186d30:
    // 0x186d30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x186d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186d38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x186d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x186d3c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x186d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_186d40:
    // 0x186d40: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186D40u;
    {
        const bool branch_taken_0x186d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d40) {
            ctx->pc = 0x186D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D40u;
            // 0x186d44: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186cf8;
        }
    }
    ctx->pc = 0x186D48u;
    // 0x186d48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x186d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x186d4c: 0x24628720  addiu       $v0, $v1, -0x78E0
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936352));
    // 0x186d50: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x186d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x186d54: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x186D54u;
    {
        const bool branch_taken_0x186d54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D54u;
        // 0x186d58: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d54) {
            ctx->pc = 0x186DB0u;
            goto label_186db0;
        }
    }
    ctx->pc = 0x186D5Cu;
    // 0x186d5c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x186d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_186d60:
    // 0x186d60: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186D60u;
    {
        const bool branch_taken_0x186d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d60) {
            ctx->pc = 0x186D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D60u;
            // 0x186d64: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DA8u;
            goto label_186da8;
        }
    }
    ctx->pc = 0x186D68u;
    // 0x186d68: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186d6c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D6Cu;
    {
        const bool branch_taken_0x186d6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D6Cu;
        // 0x186d70: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d6c) {
            ctx->pc = 0x186D7Cu;
            goto label_186d7c;
        }
    }
    ctx->pc = 0x186D74u;
    // 0x186d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186D74u;
    {
        const bool branch_taken_0x186d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D74u;
        // 0x186d78: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d74) {
            ctx->pc = 0x186D80u;
            goto label_186d80;
        }
    }
    ctx->pc = 0x186D7Cu;
label_186d7c:
    // 0x186d7c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186d80:
    // 0x186d80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186d84: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186D84u;
    {
        const bool branch_taken_0x186d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D84u;
        // 0x186d88: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d84) {
            ctx->pc = 0x186D94u;
            goto label_186d94;
        }
    }
    ctx->pc = 0x186D8Cu;
    // 0x186d8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186D8Cu;
    {
        const bool branch_taken_0x186d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D8Cu;
        // 0x186d90: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d8c) {
            ctx->pc = 0x186D98u;
            goto label_186d98;
        }
    }
    ctx->pc = 0x186D94u;
label_186d94:
    // 0x186d94: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186d98:
    // 0x186d98: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x186d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x186d9c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186da0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x186da0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x186da4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x186da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_186da8:
    // 0x186da8: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186DA8u;
    {
        const bool branch_taken_0x186da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186da8) {
            ctx->pc = 0x186DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DA8u;
            // 0x186dac: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186d60;
        }
    }
    ctx->pc = 0x186DB0u;
label_186db0:
    // 0x186db0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x186db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x186db4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x186db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x186db8: 0x24a28738  addiu       $v0, $a1, -0x78C8
    ctx->pc = 0x186db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936376));
    // 0x186dbc: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x186DBCu;
    {
        const bool branch_taken_0x186dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DBCu;
        // 0x186dc0: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186dbc) {
            ctx->pc = 0x186E18u;
            goto label_186e18;
        }
    }
    ctx->pc = 0x186DC4u;
    // 0x186dc4: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x186dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_186dc8:
    // 0x186dc8: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186DC8u;
    {
        const bool branch_taken_0x186dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186dc8) {
            ctx->pc = 0x186DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186DC8u;
            // 0x186dcc: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E10u;
            goto label_186e10;
        }
    }
    ctx->pc = 0x186DD0u;
    // 0x186dd0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186dd4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186DD4u;
    {
        const bool branch_taken_0x186dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DD4u;
        // 0x186dd8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186dd4) {
            ctx->pc = 0x186DE4u;
            goto label_186de4;
        }
    }
    ctx->pc = 0x186DDCu;
    // 0x186ddc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186DDCu;
    {
        const bool branch_taken_0x186ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DDCu;
        // 0x186de0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ddc) {
            ctx->pc = 0x186DE8u;
            goto label_186de8;
        }
    }
    ctx->pc = 0x186DE4u;
label_186de4:
    // 0x186de4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186de8:
    // 0x186de8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186dec: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186DECu;
    {
        const bool branch_taken_0x186dec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DECu;
        // 0x186df0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186dec) {
            ctx->pc = 0x186DFCu;
            goto label_186dfc;
        }
    }
    ctx->pc = 0x186DF4u;
    // 0x186df4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186DF4u;
    {
        const bool branch_taken_0x186df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DF4u;
        // 0x186df8: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186df4) {
            ctx->pc = 0x186E00u;
            goto label_186e00;
        }
    }
    ctx->pc = 0x186DFCu;
label_186dfc:
    // 0x186dfc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186e00:
    // 0x186e00: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x186e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x186e04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186e08: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x186e08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x186e0c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x186e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_186e10:
    // 0x186e10: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186E10u;
    {
        const bool branch_taken_0x186e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186e10) {
            ctx->pc = 0x186E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E10u;
            // 0x186e14: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186dc8;
        }
    }
    ctx->pc = 0x186E18u;
label_186e18:
    // 0x186e18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x186e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x186e1c: 0x24628750  addiu       $v0, $v1, -0x78B0
    ctx->pc = 0x186e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936400));
    // 0x186e20: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x186e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x186e24: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x186E24u;
    {
        const bool branch_taken_0x186e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E24u;
        // 0x186e28: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e24) {
            ctx->pc = 0x186E80u;
            goto label_186e80;
        }
    }
    ctx->pc = 0x186E2Cu;
    // 0x186e2c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x186e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_186e30:
    // 0x186e30: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186E30u;
    {
        const bool branch_taken_0x186e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e30) {
            ctx->pc = 0x186E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E30u;
            // 0x186e34: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E78u;
            goto label_186e78;
        }
    }
    ctx->pc = 0x186E38u;
    // 0x186e38: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186e3c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186E3Cu;
    {
        const bool branch_taken_0x186e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E3Cu;
        // 0x186e40: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e3c) {
            ctx->pc = 0x186E4Cu;
            goto label_186e4c;
        }
    }
    ctx->pc = 0x186E44u;
    // 0x186e44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186E44u;
    {
        const bool branch_taken_0x186e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E44u;
        // 0x186e48: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e44) {
            ctx->pc = 0x186E50u;
            goto label_186e50;
        }
    }
    ctx->pc = 0x186E4Cu;
label_186e4c:
    // 0x186e4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186e50:
    // 0x186e50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186e54: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186E54u;
    {
        const bool branch_taken_0x186e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E54u;
        // 0x186e58: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e54) {
            ctx->pc = 0x186E64u;
            goto label_186e64;
        }
    }
    ctx->pc = 0x186E5Cu;
    // 0x186e5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186E5Cu;
    {
        const bool branch_taken_0x186e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E5Cu;
        // 0x186e60: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e5c) {
            ctx->pc = 0x186E68u;
            goto label_186e68;
        }
    }
    ctx->pc = 0x186E64u;
label_186e64:
    // 0x186e64: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186e68:
    // 0x186e68: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x186e6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186e70: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x186e70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x186e74: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x186e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_186e78:
    // 0x186e78: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186E78u;
    {
        const bool branch_taken_0x186e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186e78) {
            ctx->pc = 0x186E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E78u;
            // 0x186e7c: 0x8e830004  lw          $v1, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186e30;
        }
    }
    ctx->pc = 0x186E80u;
label_186e80:
    // 0x186e80: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x186e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x186e84: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x186e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x186e88: 0x24a28768  addiu       $v0, $a1, -0x7898
    ctx->pc = 0x186e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936424));
    // 0x186e8c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x186E8Cu;
    {
        const bool branch_taken_0x186e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186E8Cu;
        // 0x186e90: 0xaea2000c  sw          $v0, 0xC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186e8c) {
            ctx->pc = 0x186EE8u;
            goto label_186ee8;
        }
    }
    ctx->pc = 0x186E94u;
    // 0x186e94: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x186e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_186e98:
    // 0x186e98: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x186E98u;
    {
        const bool branch_taken_0x186e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186e98) {
            ctx->pc = 0x186E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186E98u;
            // 0x186e9c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186EE0u;
            goto label_186ee0;
        }
    }
    ctx->pc = 0x186EA0u;
    // 0x186ea0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x186ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x186ea4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186EA4u;
    {
        const bool branch_taken_0x186ea4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EA4u;
        // 0x186ea8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ea4) {
            ctx->pc = 0x186EB4u;
            goto label_186eb4;
        }
    }
    ctx->pc = 0x186EACu;
    // 0x186eac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186EACu;
    {
        const bool branch_taken_0x186eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EACu;
        // 0x186eb0: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186eac) {
            ctx->pc = 0x186EB8u;
            goto label_186eb8;
        }
    }
    ctx->pc = 0x186EB4u;
label_186eb4:
    // 0x186eb4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x186eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_186eb8:
    // 0x186eb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x186eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186ebc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186EBCu;
    {
        const bool branch_taken_0x186ebc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EBCu;
        // 0x186ec0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ebc) {
            ctx->pc = 0x186ECCu;
            goto label_186ecc;
        }
    }
    ctx->pc = 0x186EC4u;
    // 0x186ec4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x186EC4u;
    {
        const bool branch_taken_0x186ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EC4u;
        // 0x186ec8: 0xaea20008  sw          $v0, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ec4) {
            ctx->pc = 0x186ED0u;
            goto label_186ed0;
        }
    }
    ctx->pc = 0x186ECCu;
label_186ecc:
    // 0x186ecc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x186eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_186ed0:
    // 0x186ed0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x186ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x186ed4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x186ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186ed8: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x186ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x186edc: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x186edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_186ee0:
    // 0x186ee0: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x186EE0u;
    {
        const bool branch_taken_0x186ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186ee0) {
            ctx->pc = 0x186EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186EE0u;
            // 0x186ee4: 0x8ea30004  lw          $v1, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186e98;
        }
    }
    ctx->pc = 0x186EE8u;
label_186ee8:
    // 0x186ee8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186eec: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x186EECu;
    SET_GPR_U32(ctx, 31, 0x186EF4u);
    ctx->pc = 0x186EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186EECu;
    // 0x186ef0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x186EECu, 0x186EF4u)) {
        return;
    }
    ctx->pc = 0x186EF4u;
label_186ef4:
    // 0x186ef4: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x186ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x186ef8: 0x1457fefd  bne         $v0, $s7, . + 4 + (-0x103 << 2)
    ctx->pc = 0x186EF8u;
    {
        const bool branch_taken_0x186ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x186EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186EF8u;
        // 0x186efc: 0x27deffb4  addiu       $fp, $fp, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ef8) {
            ctx->pc = 0x186AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_186af0;
        }
    }
    ctx->pc = 0x186F00u;
label_186f00:
    // 0x186f00: 0x8ec4000c  lw          $a0, 0xC($s6)
    ctx->pc = 0x186f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x186f04: 0xc0808d4  jal         func_202350
    ctx->pc = 0x186F04u;
    SET_GPR_U32(ctx, 31, 0x186F0Cu);
    ctx->pc = 0x186F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186F04u;
    // 0x186f08: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x186F04u, 0x186F0Cu)) {
        return;
    }
    ctx->pc = 0x186F0Cu;
label_186f0c:
    // 0x186f0c: 0xaec00014  sw          $zero, 0x14($s6)
    ctx->pc = 0x186f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 0));
    // 0x186f10: 0xaec0000c  sw          $zero, 0xC($s6)
    ctx->pc = 0x186f10u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 0));
    // 0x186f14: 0xaec00010  sw          $zero, 0x10($s6)
    ctx->pc = 0x186f14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 0));
    // 0x186f18: 0xaec00024  sw          $zero, 0x24($s6)
    ctx->pc = 0x186f18u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 36), GPR_U32(ctx, 0));
    // 0x186f1c: 0xaec00028  sw          $zero, 0x28($s6)
    ctx->pc = 0x186f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 40), GPR_U32(ctx, 0));
    // 0x186f20: 0xaec0002c  sw          $zero, 0x2C($s6)
    ctx->pc = 0x186f20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 44), GPR_U32(ctx, 0));
    // 0x186f24: 0xaec00030  sw          $zero, 0x30($s6)
    ctx->pc = 0x186f24u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 48), GPR_U32(ctx, 0));
    // 0x186f28: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x186f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x186f2c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x186f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x186f30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x186f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186f34: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x186f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186f38: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x186f38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186f3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x186f3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186f40: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x186f40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186f44: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x186f44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186f48: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x186f48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186f4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186f50: 0x3e00008  jr          $ra
    ctx->pc = 0x186F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186F50u;
        // 0x186f54: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186F50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186F58u;
}
