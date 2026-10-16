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

// Function: sub_00123CD8
// Address: 0x123cd8 - 0x123f00
void sub_00123CD8_0x123cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123CD8_0x123cd8");
#endif

    switch (ctx->pc) {
        case 0x123cd8u: goto label_123cd8;
        case 0x123cdcu: goto label_123cdc;
        case 0x123ce0u: goto label_123ce0;
        case 0x123ce4u: goto label_123ce4;
        case 0x123ce8u: goto label_123ce8;
        case 0x123cecu: goto label_123cec;
        case 0x123cf0u: goto label_123cf0;
        case 0x123cf4u: goto label_123cf4;
        case 0x123cf8u: goto label_123cf8;
        case 0x123cfcu: goto label_123cfc;
        case 0x123d00u: goto label_123d00;
        case 0x123d04u: goto label_123d04;
        case 0x123d08u: goto label_123d08;
        case 0x123d0cu: goto label_123d0c;
        case 0x123d10u: goto label_123d10;
        case 0x123d14u: goto label_123d14;
        case 0x123d18u: goto label_123d18;
        case 0x123d1cu: goto label_123d1c;
        case 0x123d20u: goto label_123d20;
        case 0x123d24u: goto label_123d24;
        case 0x123d28u: goto label_123d28;
        case 0x123d2cu: goto label_123d2c;
        case 0x123d30u: goto label_123d30;
        case 0x123d34u: goto label_123d34;
        case 0x123d38u: goto label_123d38;
        case 0x123d3cu: goto label_123d3c;
        case 0x123d40u: goto label_123d40;
        case 0x123d44u: goto label_123d44;
        case 0x123d48u: goto label_123d48;
        case 0x123d4cu: goto label_123d4c;
        case 0x123d50u: goto label_123d50;
        case 0x123d54u: goto label_123d54;
        case 0x123d58u: goto label_123d58;
        case 0x123d5cu: goto label_123d5c;
        case 0x123d60u: goto label_123d60;
        case 0x123d64u: goto label_123d64;
        case 0x123d68u: goto label_123d68;
        case 0x123d6cu: goto label_123d6c;
        case 0x123d70u: goto label_123d70;
        case 0x123d74u: goto label_123d74;
        case 0x123d78u: goto label_123d78;
        case 0x123d7cu: goto label_123d7c;
        case 0x123d80u: goto label_123d80;
        case 0x123d84u: goto label_123d84;
        case 0x123d88u: goto label_123d88;
        case 0x123d8cu: goto label_123d8c;
        case 0x123d90u: goto label_123d90;
        case 0x123d94u: goto label_123d94;
        case 0x123d98u: goto label_123d98;
        case 0x123d9cu: goto label_123d9c;
        case 0x123da0u: goto label_123da0;
        case 0x123da4u: goto label_123da4;
        case 0x123da8u: goto label_123da8;
        case 0x123dacu: goto label_123dac;
        case 0x123db0u: goto label_123db0;
        case 0x123db4u: goto label_123db4;
        case 0x123db8u: goto label_123db8;
        case 0x123dbcu: goto label_123dbc;
        case 0x123dc0u: goto label_123dc0;
        case 0x123dc4u: goto label_123dc4;
        case 0x123dc8u: goto label_123dc8;
        case 0x123dccu: goto label_123dcc;
        case 0x123dd0u: goto label_123dd0;
        case 0x123dd4u: goto label_123dd4;
        case 0x123dd8u: goto label_123dd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123de0u: goto label_123de0;
        case 0x123de4u: goto label_123de4;
        case 0x123de8u: goto label_123de8;
        case 0x123decu: goto label_123dec;
        case 0x123df0u: goto label_123df0;
        case 0x123df4u: goto label_123df4;
        case 0x123df8u: goto label_123df8;
        case 0x123dfcu: goto label_123dfc;
        case 0x123e00u: goto label_123e00;
        case 0x123e04u: goto label_123e04;
        case 0x123e08u: goto label_123e08;
        case 0x123e0cu: goto label_123e0c;
        case 0x123e10u: goto label_123e10;
        case 0x123e14u: goto label_123e14;
        case 0x123e18u: goto label_123e18;
        case 0x123e1cu: goto label_123e1c;
        case 0x123e20u: goto label_123e20;
        case 0x123e24u: goto label_123e24;
        case 0x123e28u: goto label_123e28;
        case 0x123e2cu: goto label_123e2c;
        case 0x123e30u: goto label_123e30;
        case 0x123e34u: goto label_123e34;
        case 0x123e38u: goto label_123e38;
        case 0x123e3cu: goto label_123e3c;
        case 0x123e40u: goto label_123e40;
        case 0x123e44u: goto label_123e44;
        case 0x123e48u: goto label_123e48;
        case 0x123e4cu: goto label_123e4c;
        case 0x123e50u: goto label_123e50;
        case 0x123e54u: goto label_123e54;
        case 0x123e58u: goto label_123e58;
        case 0x123e5cu: goto label_123e5c;
        case 0x123e60u: goto label_123e60;
        case 0x123e64u: goto label_123e64;
        case 0x123e68u: goto label_123e68;
        case 0x123e6cu: goto label_123e6c;
        case 0x123e70u: goto label_123e70;
        case 0x123e74u: goto label_123e74;
        case 0x123e78u: goto label_123e78;
        case 0x123e7cu: goto label_123e7c;
        case 0x123e80u: goto label_123e80;
        case 0x123e84u: goto label_123e84;
        case 0x123e88u: goto label_123e88;
        case 0x123e8cu: goto label_123e8c;
        case 0x123e90u: goto label_123e90;
        case 0x123e94u: goto label_123e94;
        case 0x123e98u: goto label_123e98;
        case 0x123e9cu: goto label_123e9c;
        case 0x123ea0u: goto label_123ea0;
        case 0x123ea4u: goto label_123ea4;
        case 0x123ea8u: goto label_123ea8;
        case 0x123eacu: goto label_123eac;
        case 0x123eb0u: goto label_123eb0;
        case 0x123eb4u: goto label_123eb4;
        case 0x123eb8u: goto label_123eb8;
        case 0x123ebcu: goto label_123ebc;
        case 0x123ec0u: goto label_123ec0;
        case 0x123ec4u: goto label_123ec4;
        case 0x123ec8u: goto label_123ec8;
        case 0x123eccu: goto label_123ecc;
        case 0x123ed0u: goto label_123ed0;
        case 0x123ed4u: goto label_123ed4;
        case 0x123ed8u: goto label_123ed8;
        case 0x123edcu: goto label_123edc;
        case 0x123ee0u: goto label_123ee0;
        case 0x123ee4u: goto label_123ee4;
        case 0x123ee8u: goto label_123ee8;
        case 0x123eecu: goto label_123eec;
        case 0x123ef0u: goto label_123ef0;
        case 0x123ef4u: goto label_123ef4;
        case 0x123ef8u: goto label_123ef8;
        case 0x123efcu: goto label_123efc;
        default: break;
    }

    ctx->pc = 0x123cd8u;

label_123cd8:
    // 0x123cd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_123cdc:
    // 0x123cdc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x123cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_123ce0:
    // 0x123ce0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x123ce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_123ce4:
    // 0x123ce4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x123ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_123ce8:
    // 0x123ce8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x123ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_123cec:
    // 0x123cec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x123cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_123cf0:
    // 0x123cf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x123cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_123cf4:
    // 0x123cf4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x123cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_123cf8:
    // 0x123cf8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x123cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_123cfc:
    // 0x123cfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x123cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_123d00:
    // 0x123d00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x123d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_123d04:
    // 0x123d04: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x123d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123d08:
    // 0x123d08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x123d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_123d0c:
    // 0x123d0c: 0x0  nop
    ctx->pc = 0x123d0cu;
    // NOP
label_123d10:
    // 0x123d10: 0x45010073  bc1t        . + 4 + (0x73 << 2)
label_123d14:
    if (ctx->pc == 0x123D14u) {
        ctx->pc = 0x123D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D10u;
        // 0x123d14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D18u;
        goto label_123d18;
    }
    ctx->pc = 0x123D10u;
    {
        const bool branch_taken_0x123d10 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x123D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D10u;
        // 0x123d14: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d10) {
            ctx->pc = 0x123EE0u;
            goto label_123ee0;
        }
    }
    ctx->pc = 0x123D18u;
label_123d18:
    // 0x123d18: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x123d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_123d1c:
    // 0x123d1c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x123d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_123d20:
    // 0x123d20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x123d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_123d24:
    // 0x123d24: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_123d28:
    // 0x123d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123d2c:
    // 0x123d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123d30:
    if (ctx->pc == 0x123D30u) {
        ctx->pc = 0x123D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D2Cu;
        // 0x123d30: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D34u;
        goto label_123d34;
    }
    ctx->pc = 0x123D2Cu;
    {
        const bool branch_taken_0x123d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D2Cu;
        // 0x123d30: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d2c) {
            ctx->pc = 0x123D3Cu;
            goto label_123d3c;
        }
    }
    ctx->pc = 0x123D34u;
label_123d34:
    // 0x123d34: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x123d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_123d38:
    // 0x123d38: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x123d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_123d3c:
    // 0x123d3c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x123d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_123d40:
    // 0x123d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123d44:
    // 0x123d44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123d48:
    if (ctx->pc == 0x123D48u) {
        ctx->pc = 0x123D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D44u;
        // 0x123d48: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D4Cu;
        goto label_123d4c;
    }
    ctx->pc = 0x123D44u;
    {
        const bool branch_taken_0x123d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D44u;
        // 0x123d48: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d44) {
            ctx->pc = 0x123D54u;
            goto label_123d54;
        }
    }
    ctx->pc = 0x123D4Cu;
label_123d4c:
    // 0x123d4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_123d50:
    if (ctx->pc == 0x123D50u) {
        ctx->pc = 0x123D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D4Cu;
        // 0x123d50: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D54u;
        goto label_123d54;
    }
    ctx->pc = 0x123D4Cu;
    {
        const bool branch_taken_0x123d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D4Cu;
        // 0x123d50: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d4c) {
            ctx->pc = 0x123D5Cu;
            goto label_123d5c;
        }
    }
    ctx->pc = 0x123D54u;
label_123d54:
    // 0x123d54: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x123d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_123d58:
    // 0x123d58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123d5c:
    // 0x123d5c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x123d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_123d60:
    // 0x123d60: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x123d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_123d64:
    // 0x123d64: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x123d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_123d68:
    // 0x123d68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123d6c:
    // 0x123d6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123d70:
    if (ctx->pc == 0x123D70u) {
        ctx->pc = 0x123D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D6Cu;
        // 0x123d70: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D74u;
        goto label_123d74;
    }
    ctx->pc = 0x123D6Cu;
    {
        const bool branch_taken_0x123d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D6Cu;
        // 0x123d70: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d6c) {
            ctx->pc = 0x123D7Cu;
            goto label_123d7c;
        }
    }
    ctx->pc = 0x123D74u;
label_123d74:
    // 0x123d74: 0x10000003  b           . + 4 + (0x3 << 2)
label_123d78:
    if (ctx->pc == 0x123D78u) {
        ctx->pc = 0x123D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D74u;
        // 0x123d78: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D7Cu;
        goto label_123d7c;
    }
    ctx->pc = 0x123D74u;
    {
        const bool branch_taken_0x123d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D74u;
        // 0x123d78: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d74) {
            ctx->pc = 0x123D84u;
            goto label_123d84;
        }
    }
    ctx->pc = 0x123D7Cu;
label_123d7c:
    // 0x123d7c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x123d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_123d80:
    // 0x123d80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123d84:
    // 0x123d84: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x123d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_123d88:
    // 0x123d88: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x123d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_123d8c:
    // 0x123d8c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x123d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_123d90:
    // 0x123d90: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123d94:
    // 0x123d94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123d98:
    if (ctx->pc == 0x123D98u) {
        ctx->pc = 0x123D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D94u;
        // 0x123d98: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123D9Cu;
        goto label_123d9c;
    }
    ctx->pc = 0x123D94u;
    {
        const bool branch_taken_0x123d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D94u;
        // 0x123d98: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d94) {
            ctx->pc = 0x123DA4u;
            goto label_123da4;
        }
    }
    ctx->pc = 0x123D9Cu;
label_123d9c:
    // 0x123d9c: 0x10000003  b           . + 4 + (0x3 << 2)
label_123da0:
    if (ctx->pc == 0x123DA0u) {
        ctx->pc = 0x123DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D9Cu;
        // 0x123da0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DA4u;
        goto label_123da4;
    }
    ctx->pc = 0x123D9Cu;
    {
        const bool branch_taken_0x123d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123D9Cu;
        // 0x123da0: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123d9c) {
            ctx->pc = 0x123DACu;
            goto label_123dac;
        }
    }
    ctx->pc = 0x123DA4u;
label_123da4:
    // 0x123da4: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x123da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_123da8:
    // 0x123da8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123dac:
    // 0x123dac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x123dacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_123db0:
    // 0x123db0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x123db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_123db4:
    // 0x123db4: 0x30420016  andi        $v0, $v0, 0x16
    ctx->pc = 0x123db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)22);
label_123db8:
    // 0x123db8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123dbc:
    if (ctx->pc == 0x123DBCu) {
        ctx->pc = 0x123DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DB8u;
        // 0x123dbc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DC0u;
        goto label_123dc0;
    }
    ctx->pc = 0x123DB8u;
    {
        const bool branch_taken_0x123db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DB8u;
        // 0x123dbc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123db8) {
            ctx->pc = 0x123DC8u;
            goto label_123dc8;
        }
    }
    ctx->pc = 0x123DC0u;
label_123dc0:
    // 0x123dc0: 0x10000003  b           . + 4 + (0x3 << 2)
label_123dc4:
    if (ctx->pc == 0x123DC4u) {
        ctx->pc = 0x123DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DC0u;
        // 0x123dc4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DC8u;
        goto label_123dc8;
    }
    ctx->pc = 0x123DC0u;
    {
        const bool branch_taken_0x123dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DC0u;
        // 0x123dc4: 0x34420040  ori         $v0, $v0, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dc0) {
            ctx->pc = 0x123DD0u;
            goto label_123dd0;
        }
    }
    ctx->pc = 0x123DC8u;
label_123dc8:
    // 0x123dc8: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x123dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_123dcc:
    // 0x123dcc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123dd0:
    // 0x123dd0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x123dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_123dd4:
    // 0x123dd4: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x123dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_123dd8:
    // 0x123dd8: 0x26450044  addiu       $a1, $s2, 0x44
    ctx->pc = 0x123dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_123ddc:
    // 0x123ddc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x123ddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_123de0:
    // 0x123de0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x123de0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123de4:
    // 0x123de4: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x123de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_123de8:
    // 0x123de8: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x123de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_123dec:
    // 0x123dec: 0x40f809  jalr        $v0
label_123df0:
    if (ctx->pc == 0x123DF0u) {
        ctx->pc = 0x123DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DECu;
        // 0x123df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DF4u;
        goto label_123df4;
    }
    ctx->pc = 0x123DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123DF4u);
        ctx->pc = 0x123DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DECu;
        // 0x123df0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123DECu, 0x123DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123DF4u;
label_123df4:
    // 0x123df4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_123df8:
    if (ctx->pc == 0x123DF8u) {
        ctx->pc = 0x123DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DF4u;
        // 0x123df8: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123DFCu;
        goto label_123dfc;
    }
    ctx->pc = 0x123DF4u;
    {
        const bool branch_taken_0x123df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123df4) {
            ctx->pc = 0x123DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123DF4u;
            // 0x123df8: 0x8e430048  lw          $v1, 0x48($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123E04u;
            goto label_123e04;
        }
    }
    ctx->pc = 0x123DFCu;
label_123dfc:
    // 0x123dfc: 0x1000000a  b           . + 4 + (0xA << 2)
label_123e00:
    if (ctx->pc == 0x123E00u) {
        ctx->pc = 0x123E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DFCu;
        // 0x123e00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E04u;
        goto label_123e04;
    }
    ctx->pc = 0x123DFCu;
    {
        const bool branch_taken_0x123dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DFCu;
        // 0x123e00: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123dfc) {
            ctx->pc = 0x123E28u;
            goto label_123e28;
        }
    }
    ctx->pc = 0x123E04u;
label_123e04:
    // 0x123e04: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x123e04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_123e08:
    // 0x123e08: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x123e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_123e0c:
    // 0x123e0c: 0x40f809  jalr        $v0
label_123e10:
    if (ctx->pc == 0x123E10u) {
        ctx->pc = 0x123E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E0Cu;
        // 0x123e10: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E14u;
        goto label_123e14;
    }
    ctx->pc = 0x123E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123E14u);
        ctx->pc = 0x123E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E0Cu;
        // 0x123e10: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E0Cu, 0x123E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123E14u;
label_123e14:
    // 0x123e14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_123e18:
    if (ctx->pc == 0x123E18u) {
        ctx->pc = 0x123E1Cu;
        goto label_123e1c;
    }
    ctx->pc = 0x123E14u;
    {
        const bool branch_taken_0x123e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123e14) {
            ctx->pc = 0x123E28u;
            goto label_123e28;
        }
    }
    ctx->pc = 0x123E1Cu;
label_123e1c:
    // 0x123e1c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x123e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_123e20:
    // 0x123e20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123e24:
    // 0x123e24: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x123e24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0));
label_123e28:
    // 0x123e28: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_123e2c:
    if (ctx->pc == 0x123E2Cu) {
        ctx->pc = 0x123E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E28u;
        // 0x123e2c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E30u;
        goto label_123e30;
    }
    ctx->pc = 0x123E28u;
    {
        const bool branch_taken_0x123e28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E28u;
        // 0x123e2c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e28) {
            ctx->pc = 0x123E38u;
            goto label_123e38;
        }
    }
    ctx->pc = 0x123E30u;
label_123e30:
    // 0x123e30: 0x10000003  b           . + 4 + (0x3 << 2)
label_123e34:
    if (ctx->pc == 0x123E34u) {
        ctx->pc = 0x123E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E30u;
        // 0x123e34: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E38u;
        goto label_123e38;
    }
    ctx->pc = 0x123E30u;
    {
        const bool branch_taken_0x123e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E30u;
        // 0x123e34: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e30) {
            ctx->pc = 0x123E40u;
            goto label_123e40;
        }
    }
    ctx->pc = 0x123E38u;
label_123e38:
    // 0x123e38: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x123e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_123e3c:
    // 0x123e3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x123e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_123e40:
    // 0x123e40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x123e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_123e44:
    // 0x123e44: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x123e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_123e48:
    // 0x123e48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123e4c:
    // 0x123e4c: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x123e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_123e50:
    // 0x123e50: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x123e50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123e54:
    // 0x123e54: 0x846400d0  lh          $a0, 0xD0($v1)
    ctx->pc = 0x123e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 208)));
label_123e58:
    // 0x123e58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123e58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e5c:
    // 0x123e5c: 0x8c6200d4  lw          $v0, 0xD4($v1)
    ctx->pc = 0x123e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_123e60:
    // 0x123e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e64:
    // 0x123e64: 0x40f809  jalr        $v0
label_123e68:
    if (ctx->pc == 0x123E68u) {
        ctx->pc = 0x123E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E64u;
        // 0x123e68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E6Cu;
        goto label_123e6c;
    }
    ctx->pc = 0x123E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123E6Cu);
        ctx->pc = 0x123E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E64u;
        // 0x123e68: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E64u, 0x123E6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123E6Cu;
label_123e6c:
    // 0x123e6c: 0x8e430048  lw          $v1, 0x48($s2)
    ctx->pc = 0x123e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_123e70:
    // 0x123e70: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x123e70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_123e74:
    // 0x123e74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123e78:
    // 0x123e78: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x123e78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_123e7c:
    // 0x123e7c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x123e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_123e80:
    // 0x123e80: 0x40f809  jalr        $v0
label_123e84:
    if (ctx->pc == 0x123E84u) {
        ctx->pc = 0x123E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E80u;
        // 0x123e84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123E88u;
        goto label_123e88;
    }
    ctx->pc = 0x123E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123E88u);
        ctx->pc = 0x123E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E80u;
        // 0x123e84: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E80u, 0x123E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123E88u;
label_123e88:
    // 0x123e88: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x123e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_123e8c:
    // 0x123e8c: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x123e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_123e90:
    // 0x123e90: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x123e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_123e94:
    // 0x123e94: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x123e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_123e98:
    // 0x123e98: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x123e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123e9c:
    // 0x123e9c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x123e9cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_123ea0:
    // 0x123ea0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x123ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_123ea4:
    // 0x123ea4: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x123ea4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_123ea8:
    // 0x123ea8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x123ea8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_123eac:
    // 0x123eac: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x123eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_123eb0:
    // 0x123eb0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x123eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_123eb4:
    // 0x123eb4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x123eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_123eb8:
    // 0x123eb8: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x123eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_123ebc:
    // 0x123ebc: 0x84430100  lh          $v1, 0x100($v0)
    ctx->pc = 0x123ebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 256)));
label_123ec0:
    // 0x123ec0: 0x26440044  addiu       $a0, $s2, 0x44
    ctx->pc = 0x123ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_123ec4:
    // 0x123ec4: 0x8c480104  lw          $t0, 0x104($v0)
    ctx->pc = 0x123ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_123ec8:
    // 0x123ec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x123ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_123ecc:
    // 0x123ecc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x123eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_123ed0:
    // 0x123ed0: 0x3a670001  xori        $a3, $s3, 0x1
    ctx->pc = 0x123ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_123ed4:
    // 0x123ed4: 0x100f809  jalr        $t0
label_123ed8:
    if (ctx->pc == 0x123ED8u) {
        ctx->pc = 0x123ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED4u;
        // 0x123ed8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123EDCu;
        goto label_123edc;
    }
    ctx->pc = 0x123ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x123EDCu);
        ctx->pc = 0x123ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED4u;
        // 0x123ed8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123ED4u, 0x123EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123EDCu;
label_123edc:
    // 0x123edc: 0x0  nop
    ctx->pc = 0x123edcu;
    // NOP
label_123ee0:
    // 0x123ee0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x123ee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_123ee4:
    // 0x123ee4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x123ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_123ee8:
    // 0x123ee8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x123ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_123eec:
    // 0x123eec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x123eecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_123ef0:
    // 0x123ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x123ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123ef4:
    // 0x123ef4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x123ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_123ef8:
    // 0x123ef8: 0x3e00008  jr          $ra
label_123efc:
    if (ctx->pc == 0x123EFCu) {
        ctx->pc = 0x123EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF8u;
        // 0x123efc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123F00u;
        goto label_fallthrough_0x123ef8;
    }
    ctx->pc = 0x123EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123EF8u;
        // 0x123efc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x123ef8:
    ctx->pc = 0x123F00u;
}
