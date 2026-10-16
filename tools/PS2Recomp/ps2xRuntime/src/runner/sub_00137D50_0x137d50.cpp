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

// Function: sub_00137D50
// Address: 0x137d50 - 0x137f08
void sub_00137D50_0x137d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137D50_0x137d50");
#endif

    switch (ctx->pc) {
        case 0x137d50u: goto label_137d50;
        case 0x137d54u: goto label_137d54;
        case 0x137d58u: goto label_137d58;
        case 0x137d5cu: goto label_137d5c;
        case 0x137d60u: goto label_137d60;
        case 0x137d64u: goto label_137d64;
        case 0x137d68u: goto label_137d68;
        case 0x137d6cu: goto label_137d6c;
        case 0x137d70u: goto label_137d70;
        case 0x137d74u: goto label_137d74;
        case 0x137d78u: goto label_137d78;
        case 0x137d7cu: goto label_137d7c;
        case 0x137d80u: goto label_137d80;
        case 0x137d84u: goto label_137d84;
        case 0x137d88u: goto label_137d88;
        case 0x137d8cu: goto label_137d8c;
        case 0x137d90u: goto label_137d90;
        case 0x137d94u: goto label_137d94;
        case 0x137d98u: goto label_137d98;
        case 0x137d9cu: goto label_137d9c;
        case 0x137da0u: goto label_137da0;
        case 0x137da4u: goto label_137da4;
        case 0x137da8u: goto label_137da8;
        case 0x137dacu: goto label_137dac;
        case 0x137db0u: goto label_137db0;
        case 0x137db4u: goto label_137db4;
        case 0x137db8u: goto label_137db8;
        case 0x137dbcu: goto label_137dbc;
        case 0x137dc0u: goto label_137dc0;
        case 0x137dc4u: goto label_137dc4;
        case 0x137dc8u: goto label_137dc8;
        case 0x137dccu: goto label_137dcc;
        case 0x137dd0u: goto label_137dd0;
        case 0x137dd4u: goto label_137dd4;
        case 0x137dd8u: goto label_137dd8;
        case 0x137ddcu: goto label_137ddc;
        case 0x137de0u: goto label_137de0;
        case 0x137de4u: goto label_137de4;
        case 0x137de8u: goto label_137de8;
        case 0x137decu: goto label_137dec;
        case 0x137df0u: goto label_137df0;
        case 0x137df4u: goto label_137df4;
        case 0x137df8u: goto label_137df8;
        case 0x137dfcu: goto label_137dfc;
        case 0x137e00u: goto label_137e00;
        case 0x137e04u: goto label_137e04;
        case 0x137e08u: goto label_137e08;
        case 0x137e0cu: goto label_137e0c;
        case 0x137e10u: goto label_137e10;
        case 0x137e14u: goto label_137e14;
        case 0x137e18u: goto label_137e18;
        case 0x137e1cu: goto label_137e1c;
        case 0x137e20u: goto label_137e20;
        case 0x137e24u: goto label_137e24;
        case 0x137e28u: goto label_137e28;
        case 0x137e2cu: goto label_137e2c;
        case 0x137e30u: goto label_137e30;
        case 0x137e34u: goto label_137e34;
        case 0x137e38u: goto label_137e38;
        case 0x137e3cu: goto label_137e3c;
        case 0x137e40u: goto label_137e40;
        case 0x137e44u: goto label_137e44;
        case 0x137e48u: goto label_137e48;
        case 0x137e4cu: goto label_137e4c;
        case 0x137e50u: goto label_137e50;
        case 0x137e54u: goto label_137e54;
        case 0x137e58u: goto label_137e58;
        case 0x137e5cu: goto label_137e5c;
        case 0x137e60u: goto label_137e60;
        case 0x137e64u: goto label_137e64;
        case 0x137e68u: goto label_137e68;
        case 0x137e6cu: goto label_137e6c;
        case 0x137e70u: goto label_137e70;
        case 0x137e74u: goto label_137e74;
        case 0x137e78u: goto label_137e78;
        case 0x137e7cu: goto label_137e7c;
        case 0x137e80u: goto label_137e80;
        case 0x137e84u: goto label_137e84;
        case 0x137e88u: goto label_137e88;
        case 0x137e8cu: goto label_137e8c;
        case 0x137e90u: goto label_137e90;
        case 0x137e94u: goto label_137e94;
        case 0x137e98u: goto label_137e98;
        case 0x137e9cu: goto label_137e9c;
        case 0x137ea0u: goto label_137ea0;
        case 0x137ea4u: goto label_137ea4;
        case 0x137ea8u: goto label_137ea8;
        case 0x137eacu: goto label_137eac;
        case 0x137eb0u: goto label_137eb0;
        case 0x137eb4u: goto label_137eb4;
        case 0x137eb8u: goto label_137eb8;
        case 0x137ebcu: goto label_137ebc;
        case 0x137ec0u: goto label_137ec0;
        case 0x137ec4u: goto label_137ec4;
        case 0x137ec8u: goto label_137ec8;
        case 0x137eccu: goto label_137ecc;
        case 0x137ed0u: goto label_137ed0;
        case 0x137ed4u: goto label_137ed4;
        case 0x137ed8u: goto label_137ed8;
        case 0x137edcu: goto label_137edc;
        case 0x137ee0u: goto label_137ee0;
        case 0x137ee4u: goto label_137ee4;
        case 0x137ee8u: goto label_137ee8;
        case 0x137eecu: goto label_137eec;
        case 0x137ef0u: goto label_137ef0;
        case 0x137ef4u: goto label_137ef4;
        case 0x137ef8u: goto label_137ef8;
        case 0x137efcu: goto label_137efc;
        case 0x137f00u: goto label_137f00;
        case 0x137f04u: goto label_137f04;
        default: break;
    }

    ctx->pc = 0x137d50u;

label_137d50:
    // 0x137d50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x137d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_137d54:
    // 0x137d54: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x137d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_137d58:
    // 0x137d58: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x137d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_137d5c:
    // 0x137d5c: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x137d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_137d60:
    // 0x137d60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x137d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137d64:
    // 0x137d64: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x137d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_137d68:
    // 0x137d68: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x137d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_137d6c:
    // 0x137d6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x137d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_137d70:
    // 0x137d70: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x137d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_137d74:
    // 0x137d74: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x137d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_137d78:
    // 0x137d78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x137d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_137d7c:
    // 0x137d7c: 0x8e221ab0  lw          $v0, 0x1AB0($s1)
    ctx->pc = 0x137d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6832)));
label_137d80:
    // 0x137d80: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_137d84:
    if (ctx->pc == 0x137D84u) {
        ctx->pc = 0x137D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D80u;
        // 0x137d84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137D88u;
        goto label_137d88;
    }
    ctx->pc = 0x137D80u;
    {
        const bool branch_taken_0x137d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D80u;
        // 0x137d84: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137d80) {
            ctx->pc = 0x137DA4u;
            goto label_137da4;
        }
    }
    ctx->pc = 0x137D88u;
label_137d88:
    // 0x137d88: 0xc095e0c  jal         func_257830
label_137d8c:
    if (ctx->pc == 0x137D8Cu) {
        ctx->pc = 0x137D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D88u;
        // 0x137d8c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137D90u;
        goto label_137d90;
    }
    ctx->pc = 0x137D88u;
    SET_GPR_U32(ctx, 31, 0x137D90u);
    ctx->pc = 0x137D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D88u;
    // 0x137d8c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x137D88u, 0x137D90u)) {
        return;
    }
    ctx->pc = 0x137D90u;
label_137d90:
    // 0x137d90: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x137d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_137d94:
    // 0x137d94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x137d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_137d98:
    // 0x137d98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x137d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137d9c:
    // 0x137d9c: 0xc095c3a  jal         func_2570E8
label_137da0:
    if (ctx->pc == 0x137DA0u) {
        ctx->pc = 0x137DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137D9Cu;
        // 0x137da0: 0xae221ab0  sw          $v0, 0x1AB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137DA4u;
        goto label_137da4;
    }
    ctx->pc = 0x137D9Cu;
    SET_GPR_U32(ctx, 31, 0x137DA4u);
    ctx->pc = 0x137DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D9Cu;
    // 0x137da0: 0xae221ab0  sw          $v0, 0x1AB0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 6832), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x137D9Cu, 0x137DA4u)) {
        return;
    }
    ctx->pc = 0x137DA4u;
label_137da4:
    // 0x137da4: 0xa2201a80  sb          $zero, 0x1A80($s1)
    ctx->pc = 0x137da4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6784), (uint8_t)GPR_U32(ctx, 0));
label_137da8:
    // 0x137da8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x137da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_137dac:
    // 0x137dac: 0xa2201a83  sb          $zero, 0x1A83($s1)
    ctx->pc = 0x137dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6787), (uint8_t)GPR_U32(ctx, 0));
label_137db0:
    // 0x137db0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x137db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_137db4:
    // 0x137db4: 0xa2201a82  sb          $zero, 0x1A82($s1)
    ctx->pc = 0x137db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6786), (uint8_t)GPR_U32(ctx, 0));
label_137db8:
    // 0x137db8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137dbc:
    // 0x137dbc: 0xa2201a81  sb          $zero, 0x1A81($s1)
    ctx->pc = 0x137dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6785), (uint8_t)GPR_U32(ctx, 0));
label_137dc0:
    // 0x137dc0: 0xc07f1c0  jal         func_1FC700
label_137dc4:
    if (ctx->pc == 0x137DC4u) {
        ctx->pc = 0x137DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DC0u;
        // 0x137dc4: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137DC8u;
        goto label_137dc8;
    }
    ctx->pc = 0x137DC0u;
    SET_GPR_U32(ctx, 31, 0x137DC8u);
    ctx->pc = 0x137DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137DC0u;
    // 0x137dc4: 0x8c461a68  lw          $a2, 0x1A68($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x137DC0u, 0x137DC8u)) {
        return;
    }
    ctx->pc = 0x137DC8u;
label_137dc8:
    // 0x137dc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_137dcc:
    // 0x137dcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x137dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_137dd0:
    // 0x137dd0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_137dd4:
    if (ctx->pc == 0x137DD4u) {
        ctx->pc = 0x137DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DD0u;
        // 0x137dd4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137DD8u;
        goto label_137dd8;
    }
    ctx->pc = 0x137DD0u;
    {
        const bool branch_taken_0x137dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DD0u;
        // 0x137dd4: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dd0) {
            ctx->pc = 0x137ED8u;
            goto label_137ed8;
        }
    }
    ctx->pc = 0x137DD8u;
label_137dd8:
    // 0x137dd8: 0x3c170069  lui         $s7, 0x69
    ctx->pc = 0x137dd8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)105 << 16));
label_137ddc:
    // 0x137ddc: 0x2456108c  addiu       $s6, $v0, 0x108C
    ctx->pc = 0x137ddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_137de0:
    // 0x137de0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x137de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_137de4:
    // 0x137de4: 0x0  nop
    ctx->pc = 0x137de4u;
    // NOP
label_137de8:
    // 0x137de8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x137de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_137dec:
    // 0x137dec: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_137df0:
    if (ctx->pc == 0x137DF0u) {
        ctx->pc = 0x137DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DECu;
        // 0x137df0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137DF4u;
        goto label_137df4;
    }
    ctx->pc = 0x137DECu;
    {
        const bool branch_taken_0x137dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DECu;
        // 0x137df0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137dec) {
            ctx->pc = 0x137EB0u;
            goto label_137eb0;
        }
    }
    ctx->pc = 0x137DF4u;
label_137df4:
    // 0x137df4: 0x24940008  addiu       $s4, $a0, 0x8
    ctx->pc = 0x137df4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_137df8:
    // 0x137df8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x137df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_137dfc:
    // 0x137dfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x137dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137e00:
    // 0x137e00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x137e00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137e04:
    // 0x137e04: 0xc08063c  jal         func_2018F0
label_137e08:
    if (ctx->pc == 0x137E08u) {
        ctx->pc = 0x137E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E04u;
        // 0x137e08: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E0Cu;
        goto label_137e0c;
    }
    ctx->pc = 0x137E04u;
    SET_GPR_U32(ctx, 31, 0x137E0Cu);
    ctx->pc = 0x137E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E04u;
    // 0x137e08: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x137E04u, 0x137E0Cu)) {
        return;
    }
    ctx->pc = 0x137E0Cu;
label_137e0c:
    // 0x137e0c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_137e10:
    if (ctx->pc == 0x137E10u) {
        ctx->pc = 0x137E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E0Cu;
        // 0x137e10: 0x26e4e560  addiu       $a0, $s7, -0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E14u;
        goto label_137e14;
    }
    ctx->pc = 0x137E0Cu;
    {
        const bool branch_taken_0x137e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E0Cu;
        // 0x137e10: 0x26e4e560  addiu       $a0, $s7, -0x1AA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294960480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e0c) {
            ctx->pc = 0x137EACu;
            goto label_137eac;
        }
    }
    ctx->pc = 0x137E14u;
label_137e14:
    // 0x137e14: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x137e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_137e18:
    // 0x137e18: 0x40f809  jalr        $v0
label_137e1c:
    if (ctx->pc == 0x137E1Cu) {
        ctx->pc = 0x137E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E18u;
        // 0x137e1c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E20u;
        goto label_137e20;
    }
    ctx->pc = 0x137E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x137E20u);
        ctx->pc = 0x137E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E18u;
        // 0x137e1c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E18u, 0x137E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137E20u;
label_137e20:
    // 0x137e20: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_137e24:
    if (ctx->pc == 0x137E24u) {
        ctx->pc = 0x137E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E20u;
        // 0x137e24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E28u;
        goto label_137e28;
    }
    ctx->pc = 0x137E20u;
    {
        const bool branch_taken_0x137e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E20u;
        // 0x137e24: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e20) {
            ctx->pc = 0x137EB0u;
            goto label_137eb0;
        }
    }
    ctx->pc = 0x137E28u;
label_137e28:
    // 0x137e28: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x137e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_137e2c:
    // 0x137e2c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_137e30:
    if (ctx->pc == 0x137E30u) {
        ctx->pc = 0x137E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E2Cu;
        // 0x137e30: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E34u;
        goto label_137e34;
    }
    ctx->pc = 0x137E2Cu;
    {
        const bool branch_taken_0x137e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E2Cu;
        // 0x137e30: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e2c) {
            ctx->pc = 0x137EB0u;
            goto label_137eb0;
        }
    }
    ctx->pc = 0x137E34u;
label_137e34:
    // 0x137e34: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x137e34u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
label_137e38:
    // 0x137e38: 0x245383e8  addiu       $s3, $v0, -0x7C18
    ctx->pc = 0x137e38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935528));
label_137e3c:
    // 0x137e3c: 0x26301a84  addiu       $s0, $s1, 0x1A84
    ctx->pc = 0x137e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6788));
label_137e40:
    // 0x137e40: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x137e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_137e44:
    // 0x137e44: 0x0  nop
    ctx->pc = 0x137e44u;
    // NOP
label_137e48:
    // 0x137e48: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x137e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_137e4c:
    // 0x137e4c: 0xc065c68  jal         func_1971A0
label_137e50:
    if (ctx->pc == 0x137E50u) {
        ctx->pc = 0x137E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E4Cu;
        // 0x137e50: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E54u;
        goto label_137e54;
    }
    ctx->pc = 0x137E4Cu;
    SET_GPR_U32(ctx, 31, 0x137E54u);
    ctx->pc = 0x137E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E4Cu;
    // 0x137e50: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x137E4Cu, 0x137E54u)) {
        return;
    }
    ctx->pc = 0x137E54u;
label_137e54:
    // 0x137e54: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_137e58:
    if (ctx->pc == 0x137E58u) {
        ctx->pc = 0x137E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E54u;
        // 0x137e58: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E5Cu;
        goto label_137e5c;
    }
    ctx->pc = 0x137E54u;
    {
        const bool branch_taken_0x137e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E54u;
        // 0x137e58: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e54) {
            ctx->pc = 0x137E9Cu;
            goto label_137e9c;
        }
    }
    ctx->pc = 0x137E5Cu;
label_137e5c:
    // 0x137e5c: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x137e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_137e60:
    // 0x137e60: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_137e64:
    if (ctx->pc == 0x137E64u) {
        ctx->pc = 0x137E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E60u;
        // 0x137e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E68u;
        goto label_137e68;
    }
    ctx->pc = 0x137E60u;
    {
        const bool branch_taken_0x137e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E60u;
        // 0x137e64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137e60) {
            ctx->pc = 0x137E6Cu;
            goto label_137e6c;
        }
    }
    ctx->pc = 0x137E68u;
label_137e68:
    // 0x137e68: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_137e6c:
    // 0x137e6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x137e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_137e70:
    // 0x137e70: 0x26271a80  addiu       $a3, $s1, 0x1A80
    ctx->pc = 0x137e70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 6784));
label_137e74:
    // 0x137e74: 0xc058d5a  jal         func_163568
label_137e78:
    if (ctx->pc == 0x137E78u) {
        ctx->pc = 0x137E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E74u;
        // 0x137e78: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E7Cu;
        goto label_137e7c;
    }
    ctx->pc = 0x137E74u;
    SET_GPR_U32(ctx, 31, 0x137E7Cu);
    ctx->pc = 0x137E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E74u;
    // 0x137e78: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163568u, 0x137E74u, 0x137E7Cu)) {
        return;
    }
    ctx->pc = 0x137E7Cu;
label_137e7c:
    // 0x137e7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x137e7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137e80:
    // 0x137e80: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_137e84:
    if (ctx->pc == 0x137E84u) {
        ctx->pc = 0x137E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E80u;
        // 0x137e84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E88u;
        goto label_137e88;
    }
    ctx->pc = 0x137E80u;
    {
        const bool branch_taken_0x137e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e80) {
            ctx->pc = 0x137E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E80u;
            // 0x137e84: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137EA0u;
            goto label_137ea0;
        }
    }
    ctx->pc = 0x137E88u;
label_137e88:
    // 0x137e88: 0x8c620660  lw          $v0, 0x660($v1)
    ctx->pc = 0x137e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1632)));
label_137e8c:
    // 0x137e8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_137e90:
    if (ctx->pc == 0x137E90u) {
        ctx->pc = 0x137E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E8Cu;
        // 0x137e90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137E94u;
        goto label_137e94;
    }
    ctx->pc = 0x137E8Cu;
    {
        const bool branch_taken_0x137e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x137e8c) {
            ctx->pc = 0x137E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137E8Cu;
            // 0x137e90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137EA0u;
            goto label_137ea0;
        }
    }
    ctx->pc = 0x137E94u;
label_137e94:
    // 0x137e94: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x137e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_137e98:
    // 0x137e98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x137e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_137e9c:
    // 0x137e9c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x137e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_137ea0:
    // 0x137ea0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x137ea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_137ea4:
    // 0x137ea4: 0x641ffe8  bgez        $s2, . + 4 + (-0x18 << 2)
label_137ea8:
    if (ctx->pc == 0x137EA8u) {
        ctx->pc = 0x137EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EA4u;
        // 0x137ea8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137EACu;
        goto label_137eac;
    }
    ctx->pc = 0x137EA4u;
    {
        const bool branch_taken_0x137ea4 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x137EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EA4u;
        // 0x137ea8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ea4) {
            ctx->pc = 0x137E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137e48;
        }
    }
    ctx->pc = 0x137EACu;
label_137eac:
    // 0x137eac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x137eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_137eb0:
    // 0x137eb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x137eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137eb4:
    // 0x137eb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x137eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137eb8:
    // 0x137eb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x137eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_137ebc:
    // 0x137ebc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x137ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_137ec0:
    // 0x137ec0: 0xc07f0c8  jal         func_1FC320
label_137ec4:
    if (ctx->pc == 0x137EC4u) {
        ctx->pc = 0x137EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EC0u;
        // 0x137ec4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137EC8u;
        goto label_137ec8;
    }
    ctx->pc = 0x137EC0u;
    SET_GPR_U32(ctx, 31, 0x137EC8u);
    ctx->pc = 0x137EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137EC0u;
    // 0x137ec4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x137EC0u, 0x137EC8u)) {
        return;
    }
    ctx->pc = 0x137EC8u;
label_137ec8:
    // 0x137ec8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x137ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_137ecc:
    // 0x137ecc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x137eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_137ed0:
    // 0x137ed0: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
label_137ed4:
    if (ctx->pc == 0x137ED4u) {
        ctx->pc = 0x137ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ED0u;
        // 0x137ed4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137ED8u;
        goto label_137ed8;
    }
    ctx->pc = 0x137ED0u;
    {
        const bool branch_taken_0x137ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x137ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137ED0u;
        // 0x137ed4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ed0) {
            ctx->pc = 0x137DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137de8;
        }
    }
    ctx->pc = 0x137ED8u;
label_137ed8:
    // 0x137ed8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x137ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_137edc:
    // 0x137edc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x137edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_137ee0:
    // 0x137ee0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x137ee0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_137ee4:
    // 0x137ee4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x137ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_137ee8:
    // 0x137ee8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x137ee8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_137eec:
    // 0x137eec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x137eecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_137ef0:
    // 0x137ef0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x137ef0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_137ef4:
    // 0x137ef4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x137ef4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_137ef8:
    // 0x137ef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x137ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_137efc:
    // 0x137efc: 0x3e00008  jr          $ra
label_137f00:
    if (ctx->pc == 0x137F00u) {
        ctx->pc = 0x137F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EFCu;
        // 0x137f00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F04u;
        goto label_137f04;
    }
    ctx->pc = 0x137EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137EFCu;
        // 0x137f00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137F04u;
label_137f04:
    // 0x137f04: 0x0  nop
    ctx->pc = 0x137f04u;
    // NOP
    ctx->pc = 0x137f08u;
}
