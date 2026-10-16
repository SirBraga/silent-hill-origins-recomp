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

// Function: sub_002C4B30
// Address: 0x2c4b30 - 0x2c5130
void sub_002C4B30_0x2c4b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4B30_0x2c4b30");
#endif

    switch (ctx->pc) {
        case 0x2c4bc8u: goto label_2c4bc8;
        case 0x2c4bf0u: goto label_2c4bf0;
        case 0x2c4c30u: goto label_2c4c30;
        case 0x2c4c48u: goto label_2c4c48;
        case 0x2c4c50u: goto label_2c4c50;
        case 0x2c4c68u: goto label_2c4c68;
        case 0x2c4c6cu: goto label_2c4c6c;
        case 0x2c4c98u: goto label_2c4c98;
        case 0x2c4cbcu: goto label_2c4cbc;
        case 0x2c4cd8u: goto label_2c4cd8;
        case 0x2c4cf4u: goto label_2c4cf4;
        case 0x2c4d1cu: goto label_2c4d1c;
        case 0x2c4d88u: goto label_2c4d88;
        case 0x2c4da4u: goto label_2c4da4;
        case 0x2c4dc4u: goto label_2c4dc4;
        case 0x2c4dd0u: goto label_2c4dd0;
        case 0x2c4decu: goto label_2c4dec;
        case 0x2c4e08u: goto label_2c4e08;
        case 0x2c4e24u: goto label_2c4e24;
        case 0x2c4e40u: goto label_2c4e40;
        case 0x2c4ed8u: goto label_2c4ed8;
        case 0x2c4fa8u: goto label_2c4fa8;
        case 0x2c50c8u: goto label_2c50c8;
        default: break;
    }

    ctx->pc = 0x2c4b30u;

    // 0x2c4b30: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2c4b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2c4b34: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x2c4b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x2c4b38: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c4b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c4b3c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2c4b3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b40: 0xafa60044  sw          $a2, 0x44($sp)
    ctx->pc = 0x2c4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 6));
    // 0x2c4b44: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2c4b44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b48: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2c4b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2c4b4c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2c4b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2c4b50: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2c4b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2c4b54: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2c4b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2c4b58: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2c4b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2c4b5c: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2c4b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2c4b60: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2c4b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2c4b64: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c4b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c4b68: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2c4b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2c4b6c: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x2c4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x2c4b70: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4B70u;
    {
        const bool branch_taken_0x2c4b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B70u;
        // 0x2c4b74: 0xafa8004c  sw          $t0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b70) {
            ctx->pc = 0x2C4B80u;
            goto label_2c4b80;
        }
    }
    ctx->pc = 0x2C4B78u;
    // 0x2c4b78: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4B78u;
    {
        const bool branch_taken_0x2c4b78 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4b78) {
            ctx->pc = 0x2C4B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4B78u;
            // 0x2c4b7c: 0x8ec20070  lw          $v0, 0x70($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4B88u;
            goto label_2c4b88;
        }
    }
    ctx->pc = 0x2C4B80u;
label_2c4b80:
    // 0x2c4b80: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x2C4B80u;
    {
        const bool branch_taken_0x2c4b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B80u;
        // 0x2c4b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4b80) {
            ctx->pc = 0x2C5100u;
            goto label_2c5100;
        }
    }
    ctx->pc = 0x2C4B88u;
label_2c4b88:
    // 0x2c4b88: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2c4b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2c4b8c: 0x26d1037c  addiu       $s1, $s6, 0x37C
    ctx->pc = 0x2c4b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 892));
    // 0x2c4b90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c4b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4b94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4b98: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2c4b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2c4b9c: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2c4b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2c4ba0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c4ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c4ba8: 0x8c434018  lw          $v1, 0x4018($v0)
    ctx->pc = 0x2c4ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16408)));
    // 0x2c4bac: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x2c4bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x2c4bb0: 0xc4404014  lwc1        $f0, 0x4014($v0)
    ctx->pc = 0x2c4bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4bb4: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2c4bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2c4bb8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2c4bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c4bbc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2c4bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4bc0: 0xc0b51de  jal         func_2D4778
    ctx->pc = 0x2C4BC0u;
    SET_GPR_U32(ctx, 31, 0x2C4BC8u);
    ctx->pc = 0x2C4BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4BC0u;
    // 0x2c4bc4: 0xe6210074  swc1        $f1, 0x74($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4778u, 0x2C4BC0u, 0x2C4BC8u)) {
        return;
    }
    ctx->pc = 0x2C4BC8u;
label_2c4bc8:
    // 0x2c4bc8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x2c4bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2c4bcc: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x2C4BCCu;
    {
        const bool branch_taken_0x2c4bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BCCu;
        // 0x2c4bd0: 0x3c0102d  daddu       $v0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bcc) {
            ctx->pc = 0x2C5100u;
            goto label_2c5100;
        }
    }
    ctx->pc = 0x2C4BD4u;
    // 0x2c4bd4: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2c4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2c4bd8: 0x10600149  beqz        $v1, . + 4 + (0x149 << 2)
    ctx->pc = 0x2C4BD8u;
    {
        const bool branch_taken_0x2c4bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4BD8u;
        // 0x2c4bdc: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4bd8) {
            ctx->pc = 0x2C5100u;
            goto label_2c5100;
        }
    }
    ctx->pc = 0x2C4BE0u;
    // 0x2c4be0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2c4be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2c4be4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2c4be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x2c4be8: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2c4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2c4bec: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2c4becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
label_2c4bf0:
    // 0x2c4bf0: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2c4bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4bf4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2c4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2c4bf8: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x2c4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x2c4bfc: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2c4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2c4c00: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x2c4c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2c4c04: 0x43a02b  sltu        $s4, $v0, $v1
    ctx->pc = 0x2c4c04u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c4c08: 0x128000a5  beqz        $s4, . + 4 + (0xA5 << 2)
    ctx->pc = 0x2C4C08u;
    {
        const bool branch_taken_0x2c4c08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C08u;
        // 0x2c4c0c: 0xae200078  sw          $zero, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c08) {
            ctx->pc = 0x2C4EA0u;
            goto label_2c4ea0;
        }
    }
    ctx->pc = 0x2C4C10u;
    // 0x2c4c10: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2c4c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4c14: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2c4c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2c4c18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2c4c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c4c1c: 0x85a821  addu        $s5, $a0, $a1
    ctx->pc = 0x2c4c1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c4c20: 0x45b821  addu        $s7, $v0, $a1
    ctx->pc = 0x2c4c20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c4c24: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x2c4c24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c28: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x2c4c28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c4c2c: 0x0  nop
    ctx->pc = 0x2c4c2cu;
    // NOP
label_2c4c30:
    // 0x2c4c30: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c4c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c4c34: 0x1043002a  beq         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C4C34u;
    {
        const bool branch_taken_0x2c4c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C4C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C34u;
        // 0x2c4c38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c34) {
            ctx->pc = 0x2C4CE0u;
            goto label_2c4ce0;
        }
    }
    ctx->pc = 0x2C4C3Cu;
    // 0x2c4c3c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2c4c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c4c40: 0xc0ab4b8  jal         func_2AD2E0
    ctx->pc = 0x2C4C40u;
    SET_GPR_U32(ctx, 31, 0x2C4C48u);
    ctx->pc = 0x2C4C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C40u;
    // 0x2c4c44: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD2E0u, 0x2C4C40u, 0x2C4C48u)) {
        return;
    }
    ctx->pc = 0x2C4C48u;
label_2c4c48:
    // 0x2c4c48: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x2c4c48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x2c4c4c: 0x0  nop
    ctx->pc = 0x2c4c4cu;
    // NOP
label_2c4c50:
    // 0x2c4c50: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c4c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c4c54: 0x1044001b  beq         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C4C54u;
    {
        const bool branch_taken_0x2c4c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C4C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C54u;
        // 0x2c4c58: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c54) {
            ctx->pc = 0x2C4CC4u;
            goto label_2c4cc4;
        }
    }
    ctx->pc = 0x2C4C5Cu;
    // 0x2c4c5c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x2c4c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2c4c60: 0xc0ab4b8  jal         func_2AD2E0
    ctx->pc = 0x2C4C60u;
    SET_GPR_U32(ctx, 31, 0x2C4C68u);
    ctx->pc = 0x2C4C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C60u;
    // 0x2c4c64: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD2E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD2E0u, 0x2C4C60u, 0x2C4C68u)) {
        return;
    }
    ctx->pc = 0x2C4C68u;
label_2c4c68:
    // 0x2c4c68: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2c4c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2c4c6c:
    // 0x2c4c6c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2c4c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x2c4c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c74: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2c4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2c4c78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c4c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c7c: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2c4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2c4c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c84: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x2c4c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x2c4c88: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2c4c88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c8c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2c4c8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c90: 0xc0b1722  jal         func_2C5C88
    ctx->pc = 0x2C4C90u;
    SET_GPR_U32(ctx, 31, 0x2C4C98u);
    ctx->pc = 0x2C4C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4C90u;
    // 0x2c4c94: 0x2e0482d  daddu       $t1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5C88u, 0x2C4C90u, 0x2C4C98u)) {
        return;
    }
    ctx->pc = 0x2C4C98u;
label_2c4c98:
    // 0x2c4c98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4c9c: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C4C9Cu;
    {
        const bool branch_taken_0x2c4c9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4C9Cu;
        // 0x2c4ca0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4c9c) {
            ctx->pc = 0x2C4CFCu;
            goto label_2c4cfc;
        }
    }
    ctx->pc = 0x2C4CA4u;
    // 0x2c4ca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ca8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2c4ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4cacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cb0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2c4cb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cb4: 0xc0b1722  jal         func_2C5C88
    ctx->pc = 0x2C4CB4u;
    SET_GPR_U32(ctx, 31, 0x2C4CBCu);
    ctx->pc = 0x2C4CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CB4u;
    // 0x2c4cb8: 0x2a0482d  daddu       $t1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C5C88u, 0x2C4CB4u, 0x2C4CBCu)) {
        return;
    }
    ctx->pc = 0x2C4CBCu;
label_2c4cbc:
    // 0x2c4cbc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C4CBCu;
    {
        const bool branch_taken_0x2c4cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CBCu;
        // 0x2c4cc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cbc) {
            ctx->pc = 0x2C4D00u;
            goto label_2c4d00;
        }
    }
    ctx->pc = 0x2C4CC4u;
label_2c4cc4:
    // 0x2c4cc4: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x2c4cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x2c4cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cd0: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2C4CD0u;
    SET_GPR_U32(ctx, 31, 0x2C4CD8u);
    ctx->pc = 0x2C4CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CD0u;
    // 0x2c4cd4: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2C4CD0u, 0x2C4CD8u)) {
        return;
    }
    ctx->pc = 0x2C4CD8u;
label_2c4cd8:
    // 0x2c4cd8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x2C4CD8u;
    {
        const bool branch_taken_0x2c4cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CD8u;
        // 0x2c4cdc: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cd8) {
            ctx->pc = 0x2C4C6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4c6c;
        }
    }
    ctx->pc = 0x2C4CE0u;
label_2c4ce0:
    // 0x2c4ce0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x2c4ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c4ce4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c4ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ce8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c4ce8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4cec: 0xc0aa730  jal         func_2A9CC0
    ctx->pc = 0x2C4CECu;
    SET_GPR_U32(ctx, 31, 0x2C4CF4u);
    ctx->pc = 0x2C4CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4CECu;
    // 0x2c4cf0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9CC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9CC0u, 0x2C4CECu, 0x2C4CF4u)) {
        return;
    }
    ctx->pc = 0x2C4CF4u;
label_2c4cf4:
    // 0x2c4cf4: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x2C4CF4u;
    {
        const bool branch_taken_0x2c4cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4CF4u;
        // 0x2c4cf8: 0x9682000c  lhu         $v0, 0xC($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4cf4) {
            ctx->pc = 0x2C4C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4c50;
        }
    }
    ctx->pc = 0x2C4CFCu;
label_2c4cfc:
    // 0x2c4cfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c4cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4d00:
    // 0x2c4d00: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x2C4D00u;
    {
        const bool branch_taken_0x2c4d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D00u;
        // 0x2c4d04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d00) {
            ctx->pc = 0x2C4E4Cu;
            goto label_2c4e4c;
        }
    }
    ctx->pc = 0x2C4D08u;
    // 0x2c4d08: 0x8e870010  lw          $a3, 0x10($s4)
    ctx->pc = 0x2c4d08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2c4d0c: 0x8fa8005c  lw          $t0, 0x5C($sp)
    ctx->pc = 0x2c4d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2c4d10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c4d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d14: 0xc0b184e  jal         func_2C6138
    ctx->pc = 0x2C4D14u;
    SET_GPR_U32(ctx, 31, 0x2C4D1Cu);
    ctx->pc = 0x2C4D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D14u;
    // 0x2c4d18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6138u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6138u, 0x2C4D14u, 0x2C4D1Cu)) {
        return;
    }
    ctx->pc = 0x2C4D1Cu;
label_2c4d1c:
    // 0x2c4d1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c4d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d20: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2c4d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2c4d24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4D24u;
    {
        const bool branch_taken_0x2c4d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D24u;
        // 0x2c4d28: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d24) {
            ctx->pc = 0x2C4D3Cu;
            goto label_2c4d3c;
        }
    }
    ctx->pc = 0x2C4D2Cu;
    // 0x2c4d2c: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2c4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2c4d30: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x2c4d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c4d34: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2C4D34u;
    {
        const bool branch_taken_0x2c4d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D34u;
        // 0x2c4d38: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d34) {
            ctx->pc = 0x2C4EA4u;
            goto label_2c4ea4;
        }
    }
    ctx->pc = 0x2C4D3Cu;
label_2c4d3c:
    // 0x2c4d3c: 0x12600043  beqz        $s3, . + 4 + (0x43 << 2)
    ctx->pc = 0x2C4D3Cu;
    {
        const bool branch_taken_0x2c4d3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D3Cu;
        // 0x2c4d40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d3c) {
            ctx->pc = 0x2C4E4Cu;
            goto label_2c4e4c;
        }
    }
    ctx->pc = 0x2C4D44u;
    // 0x2c4d44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c4d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d48: 0x1a600017  blez        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C4D48u;
    {
        const bool branch_taken_0x2c4d48 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2C4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D48u;
        // 0x2c4d4c: 0x32630003  andi        $v1, $s3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d48) {
            ctx->pc = 0x2C4DA8u;
            goto label_2c4da8;
        }
    }
    ctx->pc = 0x2C4D50u;
    // 0x2c4d50: 0x50600020  beql        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C4D50u;
    {
        const bool branch_taken_0x2c4d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d50) {
            ctx->pc = 0x2C4D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4D50u;
            // 0x2c4d54: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4DD4u;
            goto label_2c4dd4;
        }
    }
    ctx->pc = 0x2C4D58u;
    // 0x2c4d58: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2c4d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c4d5c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C4D5Cu;
    {
        const bool branch_taken_0x2c4d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4D5Cu;
        // 0x2c4d60: 0x8e260000  lw          $a2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4d5c) {
            ctx->pc = 0x2C4DACu;
            goto label_2c4dac;
        }
    }
    ctx->pc = 0x2C4D64u;
    // 0x2c4d64: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2c4d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2c4d68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4D68u;
    {
        const bool branch_taken_0x2c4d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c4d68) {
            ctx->pc = 0x2C4D8Cu;
            goto label_2c4d8c;
        }
    }
    ctx->pc = 0x2C4D70u;
    // 0x2c4d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d74: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4d78: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c4d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d7c: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x2c4d7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c4d80: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4D80u;
    SET_GPR_U32(ctx, 31, 0x2C4D88u);
    ctx->pc = 0x2C4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D80u;
    // 0x2c4d84: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4D80u, 0x2C4D88u)) {
        return;
    }
    ctx->pc = 0x2C4D88u;
label_2c4d88:
    // 0x2c4d88: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c4d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4d8c:
    // 0x2c4d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d90: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4d94: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c4d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4d98: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2c4d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2c4d9c: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C4DA4u);
    ctx->pc = 0x2C4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4D9Cu;
    // 0x2c4da0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4D9Cu, 0x2C4DA4u)) {
        return;
    }
    ctx->pc = 0x2C4DA4u;
label_2c4da4:
    // 0x2c4da4: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2c4da4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2c4da8:
    // 0x2c4da8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c4da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4dac:
    // 0x2c4dac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4db0: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4db4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c4db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4db8: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2c4db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2c4dbc: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4DBCu;
    SET_GPR_U32(ctx, 31, 0x2C4DC4u);
    ctx->pc = 0x2C4DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DBCu;
    // 0x2c4dc0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4DBCu, 0x2C4DC4u)) {
        return;
    }
    ctx->pc = 0x2C4DC4u;
label_2c4dc4:
    // 0x2c4dc4: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x2c4dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2c4dc8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C4DC8u;
    {
        const bool branch_taken_0x2c4dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4DC8u;
        // 0x2c4dcc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4dc8) {
            ctx->pc = 0x2C4E4Cu;
            goto label_2c4e4c;
        }
    }
    ctx->pc = 0x2C4DD0u;
label_2c4dd0:
    // 0x2c4dd0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c4dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2c4dd4:
    // 0x2c4dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dd8: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4ddc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c4ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4de0: 0xd23021  addu        $a2, $a2, $s2
    ctx->pc = 0x2c4de0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x2c4de4: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4DE4u;
    SET_GPR_U32(ctx, 31, 0x2C4DECu);
    ctx->pc = 0x2C4DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4DE4u;
    // 0x2c4de8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4DE4u, 0x2C4DECu)) {
        return;
    }
    ctx->pc = 0x2C4DECu;
label_2c4dec:
    // 0x2c4dec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4df0: 0x26460008  addiu       $a2, $s2, 0x8
    ctx->pc = 0x2c4df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2c4df4: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4df8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4dfc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2c4dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c4e00: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4E00u;
    SET_GPR_U32(ctx, 31, 0x2C4E08u);
    ctx->pc = 0x2C4E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E00u;
    // 0x2c4e04: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4E00u, 0x2C4E08u)) {
        return;
    }
    ctx->pc = 0x2C4E08u;
label_2c4e08:
    // 0x2c4e08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4e0c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x2c4e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2c4e10: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e18: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2c4e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c4e1c: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C4E24u);
    ctx->pc = 0x2C4E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E1Cu;
    // 0x2c4e20: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4E1Cu, 0x2C4E24u)) {
        return;
    }
    ctx->pc = 0x2C4E24u;
label_2c4e24:
    // 0x2c4e24: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4e28: 0x26460018  addiu       $a2, $s2, 0x18
    ctx->pc = 0x2c4e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x2c4e2c: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x2c4e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c4e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c4e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4e34: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x2c4e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c4e38: 0xc0b18e2  jal         func_2C6388
    ctx->pc = 0x2C4E38u;
    SET_GPR_U32(ctx, 31, 0x2C4E40u);
    ctx->pc = 0x2C4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4E38u;
    // 0x2c4e3c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C6388u, 0x2C4E38u, 0x2C4E40u)) {
        return;
    }
    ctx->pc = 0x2C4E40u;
label_2c4e40:
    // 0x2c4e40: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x2c4e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2c4e44: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2C4E44u;
    {
        const bool branch_taken_0x2c4e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E44u;
        // 0x2c4e48: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e44) {
            ctx->pc = 0x2C4DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4dd0;
        }
    }
    ctx->pc = 0x2C4E4Cu;
label_2c4e4c:
    // 0x2c4e4c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2c4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c4e50: 0x26f70014  addiu       $s7, $s7, 0x14
    ctx->pc = 0x2c4e50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x2c4e54: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2c4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x2c4e58: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x2c4e58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x2c4e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c4e60: 0x8fa40054  lw          $a0, 0x54($sp)
    ctx->pc = 0x2c4e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2c4e64: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2c4e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c4e68: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2c4e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2c4e6c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2c4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2c4e70: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2c4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2c4e74: 0x8fa50044  lw          $a1, 0x44($sp)
    ctx->pc = 0x2c4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2c4e78: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2c4e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2c4e7c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2c4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x2c4e80: 0x26b50014  addiu       $s5, $s5, 0x14
    ctx->pc = 0x2c4e80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x2c4e84: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2c4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2c4e88: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x2c4e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c4e8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4E8Cu;
    {
        const bool branch_taken_0x2c4e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4E8Cu;
        // 0x2c4e90: 0xafa30068  sw          $v1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4e8c) {
            ctx->pc = 0x2C4EA0u;
            goto label_2c4ea0;
        }
    }
    ctx->pc = 0x2C4E94u;
    // 0x2c4e94: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x2c4e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2c4e98: 0x5040ff65  beql        $v0, $zero, . + 4 + (-0x9B << 2)
    ctx->pc = 0x2C4E98u;
    {
        const bool branch_taken_0x2c4e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4e98) {
            ctx->pc = 0x2C4E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4E98u;
            // 0x2c4e9c: 0x96820004  lhu         $v0, 0x4($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4c30;
        }
    }
    ctx->pc = 0x2C4EA0u;
label_2c4ea0:
    // 0x2c4ea0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x2c4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2c4ea4:
    // 0x2c4ea4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c4ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4ea8: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x2c4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x2c4eac: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2c4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c4eb0: 0x8e32002c  lw          $s2, 0x2C($s1)
    ctx->pc = 0x2c4eb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2c4eb4: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x2C4EB4u;
    {
        const bool branch_taken_0x2c4eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EB4u;
        // 0x2c4eb8: 0x44a02b  sltu        $s4, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4eb4) {
            ctx->pc = 0x2C50E8u;
            goto label_2c50e8;
        }
    }
    ctx->pc = 0x2C4EBCu;
    // 0x2c4ebc: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x2c4ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2c4ec0: 0x3c5102b  sltu        $v0, $fp, $a1
    ctx->pc = 0x2c4ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c4ec4: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x2C4EC4u;
    {
        const bool branch_taken_0x2c4ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EC4u;
        // 0x2c4ec8: 0x731023  subu        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ec4) {
            ctx->pc = 0x2C50E8u;
            goto label_2c50e8;
        }
    }
    ctx->pc = 0x2C4ECCu;
    // 0x2c4ecc: 0x241700e0  addiu       $s7, $zero, 0xE0
    ctx->pc = 0x2c4eccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c4ed0: 0x24150120  addiu       $s5, $zero, 0x120
    ctx->pc = 0x2c4ed0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x2c4ed4: 0x0  nop
    ctx->pc = 0x2c4ed4u;
    // NOP
label_2c4ed8:
    // 0x2c4ed8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2c4ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c4edc: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2c4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2c4ee0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2c4ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c4ee4: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x2C4EE4u;
    {
        const bool branch_taken_0x2c4ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4EE4u;
        // 0x2c4ee8: 0x7e4023  subu        $t0, $v1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ee4) {
            ctx->pc = 0x2C50A0u;
            goto label_2c50a0;
        }
    }
    ctx->pc = 0x2C4EECu;
    // 0x2c4eec: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2c4eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c4ef0: 0x340cffff  ori         $t4, $zero, 0xFFFF
    ctx->pc = 0x2c4ef0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c4ef4: 0x964b005c  lhu         $t3, 0x5C($s2)
    ctx->pc = 0x2c4ef4u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2c4ef8: 0x264501fc  addiu       $a1, $s2, 0x1FC
    ctx->pc = 0x2c4ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 508));
    // 0x2c4efc: 0x537023  subu        $t6, $v0, $s3
    ctx->pc = 0x2c4efcu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2c4f00: 0x25c3ffff  addiu       $v1, $t6, -0x1
    ctx->pc = 0x2c4f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x2c4f04: 0x29c20002  slti        $v0, $t6, 0x2
    ctx->pc = 0x2c4f04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2c4f08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C4F08u;
    {
        const bool branch_taken_0x2c4f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F08u;
        // 0x2c4f0c: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f08) {
            ctx->pc = 0x2C4F18u;
            goto label_2c4f18;
        }
    }
    ctx->pc = 0x2C4F10u;
    // 0x2c4f10: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2C4F10u;
    {
        const bool branch_taken_0x2c4f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F10u;
        // 0x2c4f14: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f10) {
            ctx->pc = 0x2C4F98u;
            goto label_2c4f98;
        }
    }
    ctx->pc = 0x2C4F18u;
label_2c4f18:
    // 0x2c4f18: 0x156c0004  bne         $t3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4F18u;
    {
        const bool branch_taken_0x2c4f18 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        ctx->pc = 0x2C4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F18u;
        // 0x2c4f1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f18) {
            ctx->pc = 0x2C4F2Cu;
            goto label_2c4f2c;
        }
    }
    ctx->pc = 0x2C4F20u;
    // 0x2c4f20: 0x94a2ff80  lhu         $v0, -0x80($a1)
    ctx->pc = 0x2c4f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967168)));
    // 0x2c4f24: 0x504c0009  beql        $v0, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4F24u;
    {
        const bool branch_taken_0x2c4f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c4f24) {
            ctx->pc = 0x2C4F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4F24u;
            // 0x2c4f28: 0x964400dc  lhu         $a0, 0xDC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4F4Cu;
            goto label_2c4f4c;
        }
    }
    ctx->pc = 0x2C4F2Cu;
label_2c4f2c:
    // 0x2c4f2c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2c4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2c4f30: 0x8ca2ff7c  lw          $v0, -0x84($a1)
    ctx->pc = 0x2c4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967164)));
    // 0x2c4f34: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4F34u;
    {
        const bool branch_taken_0x2c4f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4f34) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F3Cu;
    // 0x2c4f3c: 0x94a2ff80  lhu         $v0, -0x80($a1)
    ctx->pc = 0x2c4f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294967168)));
    // 0x2c4f40: 0x1562000e  bne         $t3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4F40u;
    {
        const bool branch_taken_0x2c4f40 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4f40) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F48u;
    // 0x2c4f48: 0x964400dc  lhu         $a0, 0xDC($s2)
    ctx->pc = 0x2c4f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
label_2c4f4c:
    // 0x2c4f4c: 0x548c0005  bnel        $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4F4Cu;
    {
        const bool branch_taken_0x2c4f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x2c4f4c) {
            ctx->pc = 0x2C4F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4F4Cu;
            // 0x2c4f50: 0x8e4300d8  lw          $v1, 0xD8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4F64u;
            goto label_2c4f64;
        }
    }
    ctx->pc = 0x2C4F54u;
    // 0x2c4f54: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2c4f54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4f58: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4F58u;
    {
        const bool branch_taken_0x2c4f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c4f58) {
            ctx->pc = 0x2C4F5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4F58u;
            // 0x2c4f5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F60u;
    // 0x2c4f60: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x2c4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2c4f64:
    // 0x2c4f64: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x2c4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x2c4f68: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4F68u;
    {
        const bool branch_taken_0x2c4f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4f68) {
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F70u;
    // 0x2c4f70: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2c4f70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4f74: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C4F74u;
    {
        const bool branch_taken_0x2c4f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c4f74) {
            ctx->pc = 0x2C4F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4F74u;
            // 0x2c4f78: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4F7Cu;
            goto label_2c4f7c;
        }
    }
    ctx->pc = 0x2C4F7Cu;
label_2c4f7c:
    // 0x2c4f7c: 0x10c00049  beqz        $a2, . + 4 + (0x49 << 2)
    ctx->pc = 0x2C4F7Cu;
    {
        const bool branch_taken_0x2c4f7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F7Cu;
        // 0x2c4f80: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f7c) {
            ctx->pc = 0x2C50A4u;
            goto label_2c50a4;
        }
    }
    ctx->pc = 0x2C4F84u;
    // 0x2c4f84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c4f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c4f88: 0x20e102b  sltu        $v0, $s0, $t6
    ctx->pc = 0x2c4f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2c4f8c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2C4F8Cu;
    {
        const bool branch_taken_0x2c4f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4F8Cu;
        // 0x2c4f90: 0x24a50120  addiu       $a1, $a1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4f8c) {
            ctx->pc = 0x2C50A0u;
            goto label_2c50a0;
        }
    }
    ctx->pc = 0x2C4F94u;
    // 0x2c4f94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2c4f94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c4f98:
    // 0x2c4f98: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2c4f98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4f9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2c4f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fa0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2c4fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4fa4: 0x0  nop
    ctx->pc = 0x2c4fa4u;
    // NOP
label_2c4fa8:
    // 0x2c4fa8: 0x156c0004  bne         $t3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4FA8u;
    {
        const bool branch_taken_0x2c4fa8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        ctx->pc = 0x2C4FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4FA8u;
        // 0x2c4fac: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4fa8) {
            ctx->pc = 0x2C4FBCu;
            goto label_2c4fbc;
        }
    }
    ctx->pc = 0x2C4FB0u;
    // 0x2c4fb0: 0x94c2ff80  lhu         $v0, -0x80($a2)
    ctx->pc = 0x2c4fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294967168)));
    // 0x2c4fb4: 0x504c0009  beql        $v0, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C4FB4u;
    {
        const bool branch_taken_0x2c4fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c4fb4) {
            ctx->pc = 0x2C4FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4FB4u;
            // 0x2c4fb8: 0x964400dc  lhu         $a0, 0xDC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4FDCu;
            goto label_2c4fdc;
        }
    }
    ctx->pc = 0x2C4FBCu;
label_2c4fbc:
    // 0x2c4fbc: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2c4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2c4fc0: 0x8ce2ff7c  lw          $v0, -0x84($a3)
    ctx->pc = 0x2c4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967164)));
    // 0x2c4fc4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C4FC4u;
    {
        const bool branch_taken_0x2c4fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4fc4) {
            ctx->pc = 0x2C500Cu;
            goto label_2c500c;
        }
    }
    ctx->pc = 0x2C4FCCu;
    // 0x2c4fcc: 0x9522ff80  lhu         $v0, -0x80($t1)
    ctx->pc = 0x2c4fccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294967168)));
    // 0x2c4fd0: 0x1562000e  bne         $t3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C4FD0u;
    {
        const bool branch_taken_0x2c4fd0 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4fd0) {
            ctx->pc = 0x2C500Cu;
            goto label_2c500c;
        }
    }
    ctx->pc = 0x2C4FD8u;
    // 0x2c4fd8: 0x964400dc  lhu         $a0, 0xDC($s2)
    ctx->pc = 0x2c4fd8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
label_2c4fdc:
    // 0x2c4fdc: 0x548c0005  bnel        $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C4FDCu;
    {
        const bool branch_taken_0x2c4fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x2c4fdc) {
            ctx->pc = 0x2C4FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4FDCu;
            // 0x2c4fe0: 0x8e4300d8  lw          $v1, 0xD8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4FF4u;
            goto label_2c4ff4;
        }
    }
    ctx->pc = 0x2C4FE4u;
    // 0x2c4fe4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2c4fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c4fe8: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C4FE8u;
    {
        const bool branch_taken_0x2c4fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c4fe8) {
            ctx->pc = 0x2C4FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C4FE8u;
            // 0x2c4fec: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C500Cu;
            goto label_2c500c;
        }
    }
    ctx->pc = 0x2C4FF0u;
    // 0x2c4ff0: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x2c4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2c4ff4:
    // 0x2c4ff4: 0x8d42fffc  lw          $v0, -0x4($t2)
    ctx->pc = 0x2c4ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294967292)));
    // 0x2c4ff8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C4FF8u;
    {
        const bool branch_taken_0x2c4ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c4ff8) {
            ctx->pc = 0x2C500Cu;
            goto label_2c500c;
        }
    }
    ctx->pc = 0x2C5000u;
    // 0x2c5000: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2c5000u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c5004: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5004u;
    {
        const bool branch_taken_0x2c5004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5004) {
            ctx->pc = 0x2C5008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5004u;
            // 0x2c5008: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C500Cu;
            goto label_2c500c;
        }
    }
    ctx->pc = 0x2C500Cu;
label_2c500c:
    // 0x2c500c: 0x11a00025  beqz        $t5, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C500Cu;
    {
        const bool branch_taken_0x2c500c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C500Cu;
        // 0x2c5010: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c500c) {
            ctx->pc = 0x2C50A4u;
            goto label_2c50a4;
        }
    }
    ctx->pc = 0x2C5014u;
    // 0x2c5014: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c5014u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c5018: 0x156c0004  bne         $t3, $t4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5018u;
    {
        const bool branch_taken_0x2c5018 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 12));
        ctx->pc = 0x2C501Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5018u;
        // 0x2c501c: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5018) {
            ctx->pc = 0x2C502Cu;
            goto label_2c502c;
        }
    }
    ctx->pc = 0x2C5020u;
    // 0x2c5020: 0x94c200a0  lhu         $v0, 0xA0($a2)
    ctx->pc = 0x2c5020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 160)));
    // 0x2c5024: 0x504c0009  beql        $v0, $t4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5024u;
    {
        const bool branch_taken_0x2c5024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        if (branch_taken_0x2c5024) {
            ctx->pc = 0x2C5028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5024u;
            // 0x2c5028: 0x964400dc  lhu         $a0, 0xDC($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C504Cu;
            goto label_2c504c;
        }
    }
    ctx->pc = 0x2C502Cu;
label_2c502c:
    // 0x2c502c: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x2c502cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2c5030: 0x8ce2009c  lw          $v0, 0x9C($a3)
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
    // 0x2c5034: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C5034u;
    {
        const bool branch_taken_0x2c5034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5034) {
            ctx->pc = 0x2C507Cu;
            goto label_2c507c;
        }
    }
    ctx->pc = 0x2C503Cu;
    // 0x2c503c: 0x952200a0  lhu         $v0, 0xA0($t1)
    ctx->pc = 0x2c503cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x2c5040: 0x1562000e  bne         $t3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C5040u;
    {
        const bool branch_taken_0x2c5040 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5040) {
            ctx->pc = 0x2C507Cu;
            goto label_2c507c;
        }
    }
    ctx->pc = 0x2C5048u;
    // 0x2c5048: 0x964400dc  lhu         $a0, 0xDC($s2)
    ctx->pc = 0x2c5048u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 220)));
label_2c504c:
    // 0x2c504c: 0x548c0005  bnel        $a0, $t4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C504Cu;
    {
        const bool branch_taken_0x2c504c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 12));
        if (branch_taken_0x2c504c) {
            ctx->pc = 0x2C5050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C504Cu;
            // 0x2c5050: 0x8e4300d8  lw          $v1, 0xD8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5064u;
            goto label_2c5064;
        }
    }
    ctx->pc = 0x2C5054u;
    // 0x2c5054: 0x94a20120  lhu         $v0, 0x120($a1)
    ctx->pc = 0x2c5054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x2c5058: 0x50440008  beql        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C5058u;
    {
        const bool branch_taken_0x2c5058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c5058) {
            ctx->pc = 0x2C505Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5058u;
            // 0x2c505c: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C507Cu;
            goto label_2c507c;
        }
    }
    ctx->pc = 0x2C5060u;
    // 0x2c5060: 0x8e4300d8  lw          $v1, 0xD8($s2)
    ctx->pc = 0x2c5060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_2c5064:
    // 0x2c5064: 0x8d42011c  lw          $v0, 0x11C($t2)
    ctx->pc = 0x2c5064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x2c5068: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5068u;
    {
        const bool branch_taken_0x2c5068 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c5068) {
            ctx->pc = 0x2C507Cu;
            goto label_2c507c;
        }
    }
    ctx->pc = 0x2C5070u;
    // 0x2c5070: 0x94a20120  lhu         $v0, 0x120($a1)
    ctx->pc = 0x2c5070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x2c5074: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C5074u;
    {
        const bool branch_taken_0x2c5074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5074) {
            ctx->pc = 0x2C5078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5074u;
            // 0x2c5078: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C507Cu;
            goto label_2c507c;
        }
    }
    ctx->pc = 0x2C507Cu;
label_2c507c:
    // 0x2c507c: 0x11a00008  beqz        $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C507Cu;
    {
        const bool branch_taken_0x2c507c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C507Cu;
        // 0x2c5080: 0x24a50240  addiu       $a1, $a1, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c507c) {
            ctx->pc = 0x2C50A0u;
            goto label_2c50a0;
        }
    }
    ctx->pc = 0x2C5084u;
    // 0x2c5084: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c5084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2c5088: 0x254a0240  addiu       $t2, $t2, 0x240
    ctx->pc = 0x2c5088u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 576));
    // 0x2c508c: 0x25290240  addiu       $t1, $t1, 0x240
    ctx->pc = 0x2c508cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 576));
    // 0x2c5090: 0x24e70240  addiu       $a3, $a3, 0x240
    ctx->pc = 0x2c5090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x2c5094: 0x20e102b  sltu        $v0, $s0, $t6
    ctx->pc = 0x2c5094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x2c5098: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x2C5098u;
    {
        const bool branch_taken_0x2c5098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5098u;
        // 0x2c509c: 0x24c60240  addiu       $a2, $a2, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5098) {
            ctx->pc = 0x2C4FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4fa8;
        }
    }
    ctx->pc = 0x2C50A0u;
label_2c50a0:
    // 0x2c50a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c50a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2c50a4:
    // 0x2c50a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c50a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c50a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c50acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50b0: 0x400013  mtlo        $v0
    ctx->pc = 0x2c50b0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2c50b4: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2c50b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x2c50b8: 0x73d73800  madd        $a3, $fp, $s7
    ctx->pc = 0x2c50b8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 23); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2c50bc: 0x2151018  mult        $v0, $s0, $s5
    ctx->pc = 0x2c50bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2c50c0: 0xc0b1f3c  jal         func_2C7CF0
    ctx->pc = 0x2C50C0u;
    SET_GPR_U32(ctx, 31, 0x2C50C8u);
    ctx->pc = 0x2C50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50C0u;
    // 0x2c50c4: 0x529021  addu        $s2, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C7CF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C7CF0u, 0x2C50C0u, 0x2C50C8u)) {
        return;
    }
    ctx->pc = 0x2C50C8u;
label_2c50c8:
    // 0x2c50c8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x2c50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2c50cc: 0x3c2f021  addu        $fp, $fp, $v0
    ctx->pc = 0x2c50ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x2c50d0: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2c50d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2c50d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C50D4u;
    {
        const bool branch_taken_0x2c50d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50D4u;
        // 0x2c50d8: 0x8fa4004c  lw          $a0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50d4) {
            ctx->pc = 0x2C50E8u;
            goto label_2c50e8;
        }
    }
    ctx->pc = 0x2C50DCu;
    // 0x2c50dc: 0x3c4102b  sltu        $v0, $fp, $a0
    ctx->pc = 0x2c50dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2c50e0: 0x1440ff7d  bnez        $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x2C50E0u;
    {
        const bool branch_taken_0x2c50e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50E0u;
        // 0x2c50e4: 0x731023  subu        $v0, $v1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50e0) {
            ctx->pc = 0x2C4ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4ed8;
        }
    }
    ctx->pc = 0x2C50E8u;
label_2c50e8:
    // 0x2c50e8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C50E8u;
    {
        const bool branch_taken_0x2c50e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C50E8u;
        // 0x2c50ec: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c50e8) {
            ctx->pc = 0x2C50FCu;
            goto label_2c50fc;
        }
    }
    ctx->pc = 0x2C50F0u;
    // 0x2c50f0: 0x3c5102b  sltu        $v0, $fp, $a1
    ctx->pc = 0x2c50f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2c50f4: 0x5440febe  bnel        $v0, $zero, . + 4 + (-0x142 << 2)
    ctx->pc = 0x2C50F4u;
    {
        const bool branch_taken_0x2c50f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c50f4) {
            ctx->pc = 0x2C50F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C50F4u;
            // 0x2c50f8: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c4bf0;
        }
    }
    ctx->pc = 0x2C50FCu;
label_2c50fc:
    // 0x2c50fc: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2c50fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c5100:
    // 0x2c5100: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2c5100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c5104: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2c5104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c5108: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2c5108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c510c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2c510cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c5110: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2c5110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c5114: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2c5114u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c5118: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2c5118u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c511c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2c511cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c5120: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c5120u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c5124: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c5124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c5128: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5128u;
        // 0x2c512c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5130u;
}
