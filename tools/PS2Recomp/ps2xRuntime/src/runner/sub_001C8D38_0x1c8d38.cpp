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

// Function: sub_001C8D38
// Address: 0x1c8d38 - 0x1c8f48
void sub_001C8D38_0x1c8d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8D38_0x1c8d38");
#endif

    switch (ctx->pc) {
        case 0x1c8da8u: goto label_1c8da8;
        case 0x1c8db0u: goto label_1c8db0;
        case 0x1c8dbcu: goto label_1c8dbc;
        case 0x1c8dc4u: goto label_1c8dc4;
        case 0x1c8dd8u: goto label_1c8dd8;
        case 0x1c8de4u: goto label_1c8de4;
        case 0x1c8df0u: goto label_1c8df0;
        case 0x1c8e14u: goto label_1c8e14;
        case 0x1c8e20u: goto label_1c8e20;
        case 0x1c8e30u: goto label_1c8e30;
        case 0x1c8e38u: goto label_1c8e38;
        case 0x1c8e44u: goto label_1c8e44;
        case 0x1c8e58u: goto label_1c8e58;
        case 0x1c8e70u: goto label_1c8e70;
        case 0x1c8e94u: goto label_1c8e94;
        case 0x1c8ea4u: goto label_1c8ea4;
        case 0x1c8ebcu: goto label_1c8ebc;
        case 0x1c8ef4u: goto label_1c8ef4;
        case 0x1c8ef8u: goto label_1c8ef8;
        case 0x1c8f08u: goto label_1c8f08;
        case 0x1c8f1cu: goto label_1c8f1c;
        default: break;
    }

    ctx->pc = 0x1c8d38u;

    // 0x1c8d38: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1c8d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1c8d3c: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x1c8d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x1c8d40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c8d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8d44: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1c8d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1c8d48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8d48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8d4c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1c8d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1c8d50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8d50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d54: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c8d54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1c8d58: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1c8d5c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c8d5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c8d60: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1c8d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1c8d64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d68: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1c8d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1c8d6c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1c8d6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8d70: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c8d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c8d74: 0x263302b8  addiu       $s3, $s1, 0x2B8
    ctx->pc = 0x1c8d74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 696));
    // 0x1c8d78: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1c8d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1c8d7c: 0x263502a4  addiu       $s5, $s1, 0x2A4
    ctx->pc = 0x1c8d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
    // 0x1c8d80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1c8d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1c8d84: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1c8d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8d88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c8d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c8d8c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1c8d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1c8d90: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1c8d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c8d94: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c8d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c8d98: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1c8d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c8d9c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1c8d9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1c8da0: 0xc097202  jal         func_25C808
    ctx->pc = 0x1C8DA0u;
    SET_GPR_U32(ctx, 31, 0x1C8DA8u);
    ctx->pc = 0x1C8DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DA0u;
    // 0x1c8da4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C808u, 0x1C8DA0u, 0x1C8DA8u)) {
        return;
    }
    ctx->pc = 0x1C8DA8u;
label_1c8da8:
    // 0x1c8da8: 0xae2202a0  sw          $v0, 0x2A0($s1)
    ctx->pc = 0x1c8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 2));
    // 0x1c8dac: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x1c8dacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c8db0:
    // 0x1c8db0: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1c8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c8db4: 0xc095e0c  jal         func_257830
    ctx->pc = 0x1C8DB4u;
    SET_GPR_U32(ctx, 31, 0x1C8DBCu);
    ctx->pc = 0x1C8DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DB4u;
    // 0x1c8db8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x1C8DB4u, 0x1C8DBCu)) {
        return;
    }
    ctx->pc = 0x1C8DBCu;
label_1c8dbc:
    // 0x1c8dbc: 0xc089892  jal         func_226248
    ctx->pc = 0x1C8DBCu;
    SET_GPR_U32(ctx, 31, 0x1C8DC4u);
    ctx->pc = 0x1C8DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DBCu;
    // 0x1c8dc0: 0xae02ffec  sw          $v0, -0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1C8DBCu, 0x1C8DC4u)) {
        return;
    }
    ctx->pc = 0x1C8DC4u;
label_1c8dc4:
    // 0x1c8dc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c8dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1c8dc8: 0x641fff9  bgez        $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1C8DC8u;
    {
        const bool branch_taken_0x1c8dc8 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1C8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8DC8u;
        // 0x1c8dcc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8dc8) {
            ctx->pc = 0x1C8DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8db0;
        }
    }
    ctx->pc = 0x1C8DD0u;
    // 0x1c8dd0: 0xc08949c  jal         func_225270
    ctx->pc = 0x1C8DD0u;
    SET_GPR_U32(ctx, 31, 0x1C8DD8u);
    ctx->pc = 0x1C8DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DD0u;
    // 0x1c8dd4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x1C8DD0u, 0x1C8DD8u)) {
        return;
    }
    ctx->pc = 0x1C8DD8u;
label_1c8dd8:
    // 0x1c8dd8: 0xae2202b0  sw          $v0, 0x2B0($s1)
    ctx->pc = 0x1c8dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 2));
    // 0x1c8ddc: 0xc089892  jal         func_226248
    ctx->pc = 0x1C8DDCu;
    SET_GPR_U32(ctx, 31, 0x1C8DE4u);
    ctx->pc = 0x1C8DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DDCu;
    // 0x1c8de0: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x1C8DDCu, 0x1C8DE4u)) {
        return;
    }
    ctx->pc = 0x1C8DE4u;
label_1c8de4:
    // 0x1c8de4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x1c8de4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8de8: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x1C8DE8u;
    SET_GPR_U32(ctx, 31, 0x1C8DF0u);
    ctx->pc = 0x1C8DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8DE8u;
    // 0x1c8dec: 0xae2202b4  sw          $v0, 0x2B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x1C8DE8u, 0x1C8DF0u)) {
        return;
    }
    ctx->pc = 0x1C8DF0u;
label_1c8df0:
    // 0x1c8df0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1c8df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1c8df4: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x1c8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c8df8: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x1c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1c8dfc: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1c8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1c8e00: 0x8ca40064  lw          $a0, 0x64($a1)
    ctx->pc = 0x1c8e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x1c8e04: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x1c8e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c8e08: 0xac440064  sw          $a0, 0x64($v0)
    ctx->pc = 0x1c8e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 4));
    // 0x1c8e0c: 0xc089a04  jal         func_226810
    ctx->pc = 0x1C8E0Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E14u);
    ctx->pc = 0x1C8E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E0Cu;
    // 0x1c8e10: 0x8e2402b4  lw          $a0, 0x2B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1C8E0Cu, 0x1C8E14u)) {
        return;
    }
    ctx->pc = 0x1C8E14u;
label_1c8e14:
    // 0x1c8e14: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x1c8e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c8e18: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1C8E18u;
    SET_GPR_U32(ctx, 31, 0x1C8E20u);
    ctx->pc = 0x1C8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E18u;
    // 0x1c8e1c: 0x8e2502b4  lw          $a1, 0x2B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1C8E18u, 0x1C8E20u)) {
        return;
    }
    ctx->pc = 0x1C8E20u;
label_1c8e20:
    // 0x1c8e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c8e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c8e24: 0x2453fa70  addiu       $s3, $v0, -0x590
    ctx->pc = 0x1c8e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965872));
    // 0x1c8e28: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8e2c: 0x0  nop
    ctx->pc = 0x1c8e2cu;
    // NOP
label_1c8e30:
    // 0x1c8e30: 0xc089a04  jal         func_226810
    ctx->pc = 0x1C8E30u;
    SET_GPR_U32(ctx, 31, 0x1C8E38u);
    ctx->pc = 0x1C8E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E30u;
    // 0x1c8e34: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1C8E30u, 0x1C8E38u)) {
        return;
    }
    ctx->pc = 0x1C8E38u;
label_1c8e38:
    // 0x1c8e38: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c8e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8e3c: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x1C8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E44u);
    ctx->pc = 0x1C8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E3Cu;
    // 0x1c8e40: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x1C8E3Cu, 0x1C8E44u)) {
        return;
    }
    ctx->pc = 0x1C8E44u;
label_1c8e44:
    // 0x1c8e44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c8e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c8e48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c8e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c8e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e50: 0xc0899d8  jal         func_226760
    ctx->pc = 0x1C8E50u;
    SET_GPR_U32(ctx, 31, 0x1C8E58u);
    ctx->pc = 0x1C8E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E50u;
    // 0x1c8e54: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226760u, 0x1C8E50u, 0x1C8E58u)) {
        return;
    }
    ctx->pc = 0x1C8E58u;
label_1c8e58:
    // 0x1c8e58: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x1c8e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x1c8e5c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c8e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c8e60: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1c8e60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1c8e64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8e64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8e68: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x1C8E68u;
    SET_GPR_U32(ctx, 31, 0x1C8E70u);
    ctx->pc = 0x1C8E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E68u;
    // 0x1c8e6c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x1C8E68u, 0x1C8E70u)) {
        return;
    }
    ctx->pc = 0x1C8E70u;
label_1c8e70:
    // 0x1c8e70: 0x683ffef  bgezl       $s4, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1C8E70u;
    {
        const bool branch_taken_0x1c8e70 = (GPR_S64(ctx, 20) >= 0);
        if (branch_taken_0x1c8e70) {
            ctx->pc = 0x1C8E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8E70u;
            // 0x1c8e74: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8e30;
        }
    }
    ctx->pc = 0x1C8E78u;
    // 0x1c8e78: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x1c8e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c8e7c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1c8e7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8e80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1c8e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1c8e84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8e84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8e88: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8e8c: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x1C8E8Cu;
    SET_GPR_U32(ctx, 31, 0x1C8E94u);
    ctx->pc = 0x1C8E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E8Cu;
    // 0x1c8e90: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x1C8E8Cu, 0x1C8E94u)) {
        return;
    }
    ctx->pc = 0x1C8E94u;
label_1c8e94:
    // 0x1c8e94: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x1c8e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x1c8e98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8e9c: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x1C8E9Cu;
    SET_GPR_U32(ctx, 31, 0x1C8EA4u);
    ctx->pc = 0x1C8EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8E9Cu;
    // 0x1c8ea0: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x1C8E9Cu, 0x1C8EA4u)) {
        return;
    }
    ctx->pc = 0x1C8EA4u;
label_1c8ea4:
    // 0x1c8ea4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1c8ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1c8ea8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1c8ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1c8eac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c8eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8eb0: 0xe634038c  swc1        $f20, 0x38C($s1)
    ctx->pc = 0x1c8eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 908), bits); }
    // 0x1c8eb4: 0xc09b1a0  jal         func_26C680
    ctx->pc = 0x1C8EB4u;
    SET_GPR_U32(ctx, 31, 0x1C8EBCu);
    ctx->pc = 0x1C8EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EB4u;
    // 0x1c8eb8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1C8EB4u, 0x1C8EBCu)) {
        return;
    }
    ctx->pc = 0x1C8EBCu;
label_1c8ebc:
    // 0x1c8ebc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1c8ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8ec0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c8ec4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1c8ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ec8: 0x3c013f92  lui         $at, 0x3F92
    ctx->pc = 0x1c8ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16274 << 16));
    // 0x1c8ecc: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x1c8eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x1c8ed0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8ed4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c8ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c8ed8: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x1c8ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c8edc: 0x0  nop
    ctx->pc = 0x1c8edcu;
    // NOP
    // 0x1c8ee0: 0x0  nop
    ctx->pc = 0x1c8ee0u;
    // NOP
    // 0x1c8ee4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1c8ee4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1c8ee8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1c8ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c8eec: 0xc089456  jal         func_225158
    ctx->pc = 0x1C8EECu;
    SET_GPR_U32(ctx, 31, 0x1C8EF4u);
    ctx->pc = 0x1C8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EECu;
    // 0x1c8ef0: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x1C8EECu, 0x1C8EF4u)) {
        return;
    }
    ctx->pc = 0x1C8EF4u;
label_1c8ef4:
    // 0x1c8ef4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c8ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c8ef8:
    // 0x1c8ef8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1c8ef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1c8efc: 0x8e2402a0  lw          $a0, 0x2A0($s1)
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    // 0x1c8f00: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x1C8F00u;
    SET_GPR_U32(ctx, 31, 0x1C8F08u);
    ctx->pc = 0x1C8F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F00u;
    // 0x1c8f04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x1C8F00u, 0x1C8F08u)) {
        return;
    }
    ctx->pc = 0x1C8F08u;
label_1c8f08:
    // 0x1c8f08: 0x643fffb  bgezl       $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C8F08u;
    {
        const bool branch_taken_0x1c8f08 = (GPR_S64(ctx, 18) >= 0);
        if (branch_taken_0x1c8f08) {
            ctx->pc = 0x1C8F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C8F08u;
            // 0x1c8f0c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8ef8;
        }
    }
    ctx->pc = 0x1C8F10u;
    // 0x1c8f10: 0x8e2502b0  lw          $a1, 0x2B0($s1)
    ctx->pc = 0x1c8f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1c8f14: 0xc097910  jal         func_25E440
    ctx->pc = 0x1C8F14u;
    SET_GPR_U32(ctx, 31, 0x1C8F1Cu);
    ctx->pc = 0x1C8F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F14u;
    // 0x1c8f18: 0x8e2402a0  lw          $a0, 0x2A0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x1C8F14u, 0x1C8F1Cu)) {
        return;
    }
    ctx->pc = 0x1C8F1Cu;
label_1c8f1c:
    // 0x1c8f1c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1c8f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8f20: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1c8f20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8f24: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1c8f24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c8f28: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1c8f28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c8f2c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1c8f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c8f30: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c8f30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c8f34: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1c8f34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c8f38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c8f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c8f3c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1c8f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c8f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F40u;
        // 0x1c8f44: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F48u;
}
