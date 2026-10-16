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

// Function: sub_00198DB8
// Address: 0x198db8 - 0x199028
void sub_00198DB8_0x198db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198DB8_0x198db8");
#endif

    switch (ctx->pc) {
        case 0x198db8u: goto label_198db8;
        case 0x198dbcu: goto label_198dbc;
        case 0x198dc0u: goto label_198dc0;
        case 0x198dc4u: goto label_198dc4;
        case 0x198dc8u: goto label_198dc8;
        case 0x198dccu: goto label_198dcc;
        case 0x198dd0u: goto label_198dd0;
        case 0x198dd4u: goto label_198dd4;
        case 0x198dd8u: goto label_198dd8;
        case 0x198ddcu: goto label_198ddc;
        case 0x198de0u: goto label_198de0;
        case 0x198de4u: goto label_198de4;
        case 0x198de8u: goto label_198de8;
        case 0x198decu: goto label_198dec;
        case 0x198df0u: goto label_198df0;
        case 0x198df4u: goto label_198df4;
        case 0x198df8u: goto label_198df8;
        case 0x198dfcu: goto label_198dfc;
        case 0x198e00u: goto label_198e00;
        case 0x198e04u: goto label_198e04;
        case 0x198e08u: goto label_198e08;
        case 0x198e0cu: goto label_198e0c;
        case 0x198e10u: goto label_198e10;
        case 0x198e14u: goto label_198e14;
        case 0x198e18u: goto label_198e18;
        case 0x198e1cu: goto label_198e1c;
        case 0x198e20u: goto label_198e20;
        case 0x198e24u: goto label_198e24;
        case 0x198e28u: goto label_198e28;
        case 0x198e2cu: goto label_198e2c;
        case 0x198e30u: goto label_198e30;
        case 0x198e34u: goto label_198e34;
        case 0x198e38u: goto label_198e38;
        case 0x198e3cu: goto label_198e3c;
        case 0x198e40u: goto label_198e40;
        case 0x198e44u: goto label_198e44;
        case 0x198e48u: goto label_198e48;
        case 0x198e4cu: goto label_198e4c;
        case 0x198e50u: goto label_198e50;
        case 0x198e54u: goto label_198e54;
        case 0x198e58u: goto label_198e58;
        case 0x198e5cu: goto label_198e5c;
        case 0x198e60u: goto label_198e60;
        case 0x198e64u: goto label_198e64;
        case 0x198e68u: goto label_198e68;
        case 0x198e6cu: goto label_198e6c;
        case 0x198e70u: goto label_198e70;
        case 0x198e74u: goto label_198e74;
        case 0x198e78u: goto label_198e78;
        case 0x198e7cu: goto label_198e7c;
        case 0x198e80u: goto label_198e80;
        case 0x198e84u: goto label_198e84;
        case 0x198e88u: goto label_198e88;
        case 0x198e8cu: goto label_198e8c;
        case 0x198e90u: goto label_198e90;
        case 0x198e94u: goto label_198e94;
        case 0x198e98u: goto label_198e98;
        case 0x198e9cu: goto label_198e9c;
        case 0x198ea0u: goto label_198ea0;
        case 0x198ea4u: goto label_198ea4;
        case 0x198ea8u: goto label_198ea8;
        case 0x198eacu: goto label_198eac;
        case 0x198eb0u: goto label_198eb0;
        case 0x198eb4u: goto label_198eb4;
        case 0x198eb8u: goto label_198eb8;
        case 0x198ebcu: goto label_198ebc;
        case 0x198ec0u: goto label_198ec0;
        case 0x198ec4u: goto label_198ec4;
        case 0x198ec8u: goto label_198ec8;
        case 0x198eccu: goto label_198ecc;
        case 0x198ed0u: goto label_198ed0;
        case 0x198ed4u: goto label_198ed4;
        case 0x198ed8u: goto label_198ed8;
        case 0x198edcu: goto label_198edc;
        case 0x198ee0u: goto label_198ee0;
        case 0x198ee4u: goto label_198ee4;
        case 0x198ee8u: goto label_198ee8;
        case 0x198eecu: goto label_198eec;
        case 0x198ef0u: goto label_198ef0;
        case 0x198ef4u: goto label_198ef4;
        case 0x198ef8u: goto label_198ef8;
        case 0x198efcu: goto label_198efc;
        case 0x198f00u: goto label_198f00;
        case 0x198f04u: goto label_198f04;
        case 0x198f08u: goto label_198f08;
        case 0x198f0cu: goto label_198f0c;
        case 0x198f10u: goto label_198f10;
        case 0x198f14u: goto label_198f14;
        case 0x198f18u: goto label_198f18;
        case 0x198f1cu: goto label_198f1c;
        case 0x198f20u: goto label_198f20;
        case 0x198f24u: goto label_198f24;
        case 0x198f28u: goto label_198f28;
        case 0x198f2cu: goto label_198f2c;
        case 0x198f30u: goto label_198f30;
        case 0x198f34u: goto label_198f34;
        case 0x198f38u: goto label_198f38;
        case 0x198f3cu: goto label_198f3c;
        case 0x198f40u: goto label_198f40;
        case 0x198f44u: goto label_198f44;
        case 0x198f48u: goto label_198f48;
        case 0x198f4cu: goto label_198f4c;
        case 0x198f50u: goto label_198f50;
        case 0x198f54u: goto label_198f54;
        case 0x198f58u: goto label_198f58;
        case 0x198f5cu: goto label_198f5c;
        case 0x198f60u: goto label_198f60;
        case 0x198f64u: goto label_198f64;
        case 0x198f68u: goto label_198f68;
        case 0x198f6cu: goto label_198f6c;
        case 0x198f70u: goto label_198f70;
        case 0x198f74u: goto label_198f74;
        case 0x198f78u: goto label_198f78;
        case 0x198f7cu: goto label_198f7c;
        case 0x198f80u: goto label_198f80;
        case 0x198f84u: goto label_198f84;
        case 0x198f88u: goto label_198f88;
        case 0x198f8cu: goto label_198f8c;
        case 0x198f90u: goto label_198f90;
        case 0x198f94u: goto label_198f94;
        case 0x198f98u: goto label_198f98;
        case 0x198f9cu: goto label_198f9c;
        case 0x198fa0u: goto label_198fa0;
        case 0x198fa4u: goto label_198fa4;
        case 0x198fa8u: goto label_198fa8;
        case 0x198facu: goto label_198fac;
        case 0x198fb0u: goto label_198fb0;
        case 0x198fb4u: goto label_198fb4;
        case 0x198fb8u: goto label_198fb8;
        case 0x198fbcu: goto label_198fbc;
        case 0x198fc0u: goto label_198fc0;
        case 0x198fc4u: goto label_198fc4;
        case 0x198fc8u: goto label_198fc8;
        case 0x198fccu: goto label_198fcc;
        case 0x198fd0u: goto label_198fd0;
        case 0x198fd4u: goto label_198fd4;
        case 0x198fd8u: goto label_198fd8;
        case 0x198fdcu: goto label_198fdc;
        case 0x198fe0u: goto label_198fe0;
        case 0x198fe4u: goto label_198fe4;
        case 0x198fe8u: goto label_198fe8;
        case 0x198fecu: goto label_198fec;
        case 0x198ff0u: goto label_198ff0;
        case 0x198ff4u: goto label_198ff4;
        case 0x198ff8u: goto label_198ff8;
        case 0x198ffcu: goto label_198ffc;
        case 0x199000u: goto label_199000;
        case 0x199004u: goto label_199004;
        case 0x199008u: goto label_199008;
        case 0x19900cu: goto label_19900c;
        case 0x199010u: goto label_199010;
        case 0x199014u: goto label_199014;
        case 0x199018u: goto label_199018;
        case 0x19901cu: goto label_19901c;
        case 0x199020u: goto label_199020;
        case 0x199024u: goto label_199024;
        default: break;
    }

    ctx->pc = 0x198db8u;

label_198db8:
    // 0x198db8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x198db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_198dbc:
    // 0x198dbc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x198dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_198dc0:
    // 0x198dc0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x198dc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_198dc4:
    // 0x198dc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x198dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198dc8:
    // 0x198dc8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x198dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_198dcc:
    // 0x198dcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x198dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_198dd0:
    // 0x198dd0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x198dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_198dd4:
    // 0x198dd4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x198dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_198dd8:
    // 0x198dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_198ddc:
    // 0x198ddc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x198ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_198de0:
    // 0x198de0: 0x8e510020  lw          $s1, 0x20($s2)
    ctx->pc = 0x198de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_198de4:
    // 0x198de4: 0x12200085  beqz        $s1, . + 4 + (0x85 << 2)
label_198de8:
    if (ctx->pc == 0x198DE8u) {
        ctx->pc = 0x198DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DE4u;
        // 0x198de8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198DECu;
        goto label_198dec;
    }
    ctx->pc = 0x198DE4u;
    {
        const bool branch_taken_0x198de4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x198DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198DE4u;
        // 0x198de8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198de4) {
            ctx->pc = 0x198FFCu;
            goto label_198ffc;
        }
    }
    ctx->pc = 0x198DECu;
label_198dec:
    // 0x198dec: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x198decu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_198df0:
    // 0x198df0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x198df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_198df4:
    // 0x198df4: 0x0  nop
    ctx->pc = 0x198df4u;
    // NOP
label_198df8:
    // 0x198df8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x198df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_198dfc:
    // 0x198dfc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x198dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_198e00:
    // 0x198e00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_198e04:
    if (ctx->pc == 0x198E04u) {
        ctx->pc = 0x198E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E00u;
        // 0x198e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E08u;
        goto label_198e08;
    }
    ctx->pc = 0x198E00u;
    {
        const bool branch_taken_0x198e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E00u;
        // 0x198e04: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e00) {
            ctx->pc = 0x198E0Cu;
            goto label_198e0c;
        }
    }
    ctx->pc = 0x198E08u;
label_198e08:
    // 0x198e08: 0x8c68002c  lw          $t0, 0x2C($v1)
    ctx->pc = 0x198e08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_198e0c:
    // 0x198e0c: 0x26470030  addiu       $a3, $s2, 0x30
    ctx->pc = 0x198e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_198e10:
    // 0x198e10: 0x264602f0  addiu       $a2, $s2, 0x2F0
    ctx->pc = 0x198e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 752));
label_198e14:
    // 0x198e14: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x198e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198e18:
    // 0x198e18: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x198e18u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_198e1c:
    // 0x198e1c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x198e1cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e20:
    // 0x198e20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x198e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198e24:
    // 0x198e24: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x198e24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198e28:
    // 0x198e28: 0x1100005c  beqz        $t0, . + 4 + (0x5C << 2)
label_198e2c:
    if (ctx->pc == 0x198E2Cu) {
        ctx->pc = 0x198E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E28u;
        // 0x198e2c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E30u;
        goto label_198e30;
    }
    ctx->pc = 0x198E28u;
    {
        const bool branch_taken_0x198e28 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E28u;
        // 0x198e2c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e28) {
            ctx->pc = 0x198F9Cu;
            goto label_198f9c;
        }
    }
    ctx->pc = 0x198E30u;
label_198e30:
    // 0x198e30: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x198e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_198e34:
    // 0x198e34: 0x10600059  beqz        $v1, . + 4 + (0x59 << 2)
label_198e38:
    if (ctx->pc == 0x198E38u) {
        ctx->pc = 0x198E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E34u;
        // 0x198e38: 0x25050004  addiu       $a1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E3Cu;
        goto label_198e3c;
    }
    ctx->pc = 0x198E34u;
    {
        const bool branch_taken_0x198e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E34u;
        // 0x198e38: 0x25050004  addiu       $a1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e34) {
            ctx->pc = 0x198F9Cu;
            goto label_198f9c;
        }
    }
    ctx->pc = 0x198E3Cu;
label_198e3c:
    // 0x198e3c: 0x50a00058  beql        $a1, $zero, . + 4 + (0x58 << 2)
label_198e40:
    if (ctx->pc == 0x198E40u) {
        ctx->pc = 0x198E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E3Cu;
        // 0x198e40: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E44u;
        goto label_198e44;
    }
    ctx->pc = 0x198E3Cu;
    {
        const bool branch_taken_0x198e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x198e3c) {
            ctx->pc = 0x198E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198E3Cu;
            // 0x198e40: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198E44u;
label_198e44:
    // 0x198e44: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x198e44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_198e48:
    // 0x198e48: 0x10540025  beq         $v0, $s4, . + 4 + (0x25 << 2)
label_198e4c:
    if (ctx->pc == 0x198E4Cu) {
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198E50u;
        goto label_198e50;
    }
    ctx->pc = 0x198E48u;
    {
        const bool branch_taken_0x198e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x198E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198E48u;
        // 0x198e4c: 0x2e620010  sltiu       $v0, $s3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198e48) {
            ctx->pc = 0x198EE0u;
            goto label_198ee0;
        }
    }
    ctx->pc = 0x198E50u;
label_198e50:
    // 0x198e50: 0xad260028  sw          $a2, 0x28($t1)
    ctx->pc = 0x198e50u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 6));
label_198e54:
    // 0x198e54: 0x0  nop
    ctx->pc = 0x198e54u;
    // NOP
label_198e58:
    // 0x198e58: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x198e58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_198e5c:
    // 0x198e5c: 0xacc00028  sw          $zero, 0x28($a2)
    ctx->pc = 0x198e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
label_198e60:
    // 0x198e60: 0x24c4002c  addiu       $a0, $a2, 0x2C
    ctx->pc = 0x198e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 44));
label_198e64:
    // 0x198e64: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x198e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_198e68:
    // 0x198e68: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x198e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_198e6c:
    // 0x198e6c: 0x8c690008  lw          $t1, 0x8($v1)
    ctx->pc = 0x198e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_198e70:
    // 0x198e70: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x198e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_198e74:
    // 0x198e74: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x198e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_198e78:
    // 0x198e78: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x198e78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
label_198e7c:
    // 0x198e7c: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x198e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198e80:
    // 0x198e80: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x198e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_198e84:
    // 0x198e84: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x198e84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_198e88:
    // 0x198e88: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x198e88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_198e8c:
    // 0x198e8c: 0x8c690014  lw          $t1, 0x14($v1)
    ctx->pc = 0x198e8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_198e90:
    // 0x198e90: 0xb0c20013  sdl         $v0, 0x13($a2)
    ctx->pc = 0x198e90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_198e94:
    // 0x198e94: 0xb4c2000c  sdr         $v0, 0xC($a2)
    ctx->pc = 0x198e94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_198e98:
    // 0x198e98: 0xacc90014  sw          $t1, 0x14($a2)
    ctx->pc = 0x198e98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 9));
label_198e9c:
    // 0x198e9c: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x198e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_198ea0:
    // 0x198ea0: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x198ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
label_198ea4:
    // 0x198ea4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x198ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_198ea8:
    // 0x198ea8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x198ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_198eac:
    // 0x198eac: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x198eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
label_198eb0:
    // 0x198eb0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_198eb4:
    if (ctx->pc == 0x198EB4u) {
        ctx->pc = 0x198EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB0u;
        // 0x198eb4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EB8u;
        goto label_198eb8;
    }
    ctx->pc = 0x198EB0u;
    {
        const bool branch_taken_0x198eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EB0u;
        // 0x198eb4: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198eb0) {
            ctx->pc = 0x198ED4u;
            goto label_198ed4;
        }
    }
    ctx->pc = 0x198EB8u;
label_198eb8:
    // 0x198eb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x198eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_198ebc:
    // 0x198ebc: 0x0  nop
    ctx->pc = 0x198ebcu;
    // NOP
label_198ec0:
    // 0x198ec0: 0x54a2fffb  bnel        $a1, $v0, . + 4 + (-0x5 << 2)
label_198ec4:
    if (ctx->pc == 0x198EC4u) {
        ctx->pc = 0x198EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EC0u;
        // 0x198ec4: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EC8u;
        goto label_198ec8;
    }
    ctx->pc = 0x198EC0u;
    {
        const bool branch_taken_0x198ec0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x198ec0) {
            ctx->pc = 0x198EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198EC0u;
            // 0x198ec4: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198eb0;
        }
    }
    ctx->pc = 0x198EC8u;
label_198ec8:
    // 0x198ec8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x198ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_198ecc:
    // 0x198ecc: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x198eccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_198ed0:
    // 0x198ed0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x198ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_198ed4:
    // 0x198ed4: 0x10000024  b           . + 4 + (0x24 << 2)
label_198ed8:
    if (ctx->pc == 0x198ED8u) {
        ctx->pc = 0x198ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198ED4u;
        // 0x198ed8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EDCu;
        goto label_198edc;
    }
    ctx->pc = 0x198ED4u;
    {
        const bool branch_taken_0x198ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198ED4u;
        // 0x198ed8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198ed4) {
            ctx->pc = 0x198F68u;
            goto label_198f68;
        }
    }
    ctx->pc = 0x198EDCu;
label_198edc:
    // 0x198edc: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x198edcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_198ee0:
    // 0x198ee0: 0x5040002f  beql        $v0, $zero, . + 4 + (0x2F << 2)
label_198ee4:
    if (ctx->pc == 0x198EE4u) {
        ctx->pc = 0x198EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198EE0u;
        // 0x198ee4: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198EE8u;
        goto label_198ee8;
    }
    ctx->pc = 0x198EE0u;
    {
        const bool branch_taken_0x198ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198ee0) {
            ctx->pc = 0x198EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198EE0u;
            // 0x198ee4: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198EE8u;
label_198ee8:
    // 0x198ee8: 0xad670028  sw          $a3, 0x28($t3)
    ctx->pc = 0x198ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 7));
label_198eec:
    // 0x198eec: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x198eecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
label_198ef0:
    // 0x198ef0: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x198ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_198ef4:
    // 0x198ef4: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x198ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_198ef8:
    // 0x198ef8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x198ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_198efc:
    // 0x198efc: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x198efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_198f00:
    // 0x198f00: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x198f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_198f04:
    // 0x198f04: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x198f04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_198f08:
    // 0x198f08: 0xc46000d0  lwc1        $f0, 0xD0($v1)
    ctx->pc = 0x198f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198f0c:
    // 0x198f0c: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x198f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_198f10:
    // 0x198f10: 0x686e0013  ldl         $t6, 0x13($v1)
    ctx->pc = 0x198f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_198f14:
    // 0x198f14: 0x6c6e000c  ldr         $t6, 0xC($v1)
    ctx->pc = 0x198f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_198f18:
    // 0x198f18: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x198f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_198f1c:
    // 0x198f1c: 0xb0ee0013  sdl         $t6, 0x13($a3)
    ctx->pc = 0x198f1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_198f20:
    // 0x198f20: 0xb4ee000c  sdr         $t6, 0xC($a3)
    ctx->pc = 0x198f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_198f24:
    // 0x198f24: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x198f24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_198f28:
    // 0x198f28: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x198f28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_198f2c:
    // 0x198f2c: 0x10540007  beq         $v0, $s4, . + 4 + (0x7 << 2)
label_198f30:
    if (ctx->pc == 0x198F30u) {
        ctx->pc = 0x198F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F2Cu;
        // 0x198f30: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F34u;
        goto label_198f34;
    }
    ctx->pc = 0x198F2Cu;
    {
        const bool branch_taken_0x198f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x198F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F2Cu;
        // 0x198f30: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f2c) {
            ctx->pc = 0x198F4Cu;
            goto label_198f4c;
        }
    }
    ctx->pc = 0x198F34u;
label_198f34:
    // 0x198f34: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x198f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_198f38:
    // 0x198f38: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x198f38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_198f3c:
    // 0x198f3c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x198f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_198f40:
    // 0x198f40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x198f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_198f44:
    // 0x198f44: 0x10000002  b           . + 4 + (0x2 << 2)
label_198f48:
    if (ctx->pc == 0x198F48u) {
        ctx->pc = 0x198F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F44u;
        // 0x198f48: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F4Cu;
        goto label_198f4c;
    }
    ctx->pc = 0x198F44u;
    {
        const bool branch_taken_0x198f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F44u;
        // 0x198f48: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f44) {
            ctx->pc = 0x198F50u;
            goto label_198f50;
        }
    }
    ctx->pc = 0x198F4Cu;
label_198f4c:
    // 0x198f4c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x198f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_198f50:
    // 0x198f50: 0xace20020  sw          $v0, 0x20($a3)
    ctx->pc = 0x198f50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 2));
label_198f54:
    // 0x198f54: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x198f54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198f58:
    // 0x198f58: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x198f58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
label_198f5c:
    // 0x198f5c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x198f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_198f60:
    // 0x198f60: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x198f60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
label_198f64:
    // 0x198f64: 0x24e7002c  addiu       $a3, $a3, 0x2C
    ctx->pc = 0x198f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
label_198f68:
    // 0x198f68: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x198f68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_198f6c:
    // 0x198f6c: 0x5100000c  beql        $t0, $zero, . + 4 + (0xC << 2)
label_198f70:
    if (ctx->pc == 0x198F70u) {
        ctx->pc = 0x198F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F6Cu;
        // 0x198f70: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F74u;
        goto label_198f74;
    }
    ctx->pc = 0x198F6Cu;
    {
        const bool branch_taken_0x198f6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f6c) {
            ctx->pc = 0x198F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198F6Cu;
            // 0x198f70: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198F74u;
label_198f74:
    // 0x198f74: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x198f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_198f78:
    // 0x198f78: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_198f7c:
    if (ctx->pc == 0x198F7Cu) {
        ctx->pc = 0x198F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F78u;
        // 0x198f7c: 0x25050004  addiu       $a1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F80u;
        goto label_198f80;
    }
    ctx->pc = 0x198F78u;
    {
        const bool branch_taken_0x198f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F78u;
        // 0x198f7c: 0x25050004  addiu       $a1, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f78) {
            ctx->pc = 0x198F9Cu;
            goto label_198f9c;
        }
    }
    ctx->pc = 0x198F80u;
label_198f80:
    // 0x198f80: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_198f84:
    if (ctx->pc == 0x198F84u) {
        ctx->pc = 0x198F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F80u;
        // 0x198f84: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F88u;
        goto label_198f88;
    }
    ctx->pc = 0x198F80u;
    {
        const bool branch_taken_0x198f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x198f80) {
            ctx->pc = 0x198F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198F80u;
            // 0x198f84: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198FA0u;
            goto label_198fa0;
        }
    }
    ctx->pc = 0x198F88u;
label_198f88:
    // 0x198f88: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x198f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_198f8c:
    // 0x198f8c: 0x1054ffd3  beq         $v0, $s4, . + 4 + (-0x2D << 2)
label_198f90:
    if (ctx->pc == 0x198F90u) {
        ctx->pc = 0x198F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F8Cu;
        // 0x198f90: 0x2d420010  sltiu       $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F94u;
        goto label_198f94;
    }
    ctx->pc = 0x198F8Cu;
    {
        const bool branch_taken_0x198f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x198F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F8Cu;
        // 0x198f90: 0x2d420010  sltiu       $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198f8c) {
            ctx->pc = 0x198EDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198edc;
        }
    }
    ctx->pc = 0x198F94u;
label_198f94:
    // 0x198f94: 0x5440ffb0  bnel        $v0, $zero, . + 4 + (-0x50 << 2)
label_198f98:
    if (ctx->pc == 0x198F98u) {
        ctx->pc = 0x198F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198F94u;
        // 0x198f98: 0xad260028  sw          $a2, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198F9Cu;
        goto label_198f9c;
    }
    ctx->pc = 0x198F94u;
    {
        const bool branch_taken_0x198f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x198f94) {
            ctx->pc = 0x198F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198F94u;
            // 0x198f98: 0xad260028  sw          $a2, 0x28($t1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198e58;
        }
    }
    ctx->pc = 0x198F9Cu;
label_198f9c:
    // 0x198f9c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x198f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198fa0:
    // 0x198fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198fa4:
    // 0x198fa4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x198fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_198fa8:
    // 0x198fa8: 0x18a300b  movn        $a2, $t4, $t2
    ctx->pc = 0x198fa8u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12));
label_198fac:
    // 0x198fac: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x198facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_198fb0:
    // 0x198fb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x198fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_198fb4:
    // 0x198fb4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x198fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_198fb8:
    // 0x198fb8: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x198fb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_198fbc:
    // 0x198fbc: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x198fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_198fc0:
    // 0x198fc0: 0x60f809  jalr        $v1
label_198fc4:
    if (ctx->pc == 0x198FC4u) {
        ctx->pc = 0x198FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FC0u;
        // 0x198fc4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FC8u;
        goto label_198fc8;
    }
    ctx->pc = 0x198FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198FC8u);
        ctx->pc = 0x198FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FC0u;
        // 0x198fc4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198FC0u, 0x198FC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198FC8u;
label_198fc8:
    // 0x198fc8: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x198fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_198fcc:
    // 0x198fcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198fd0:
    // 0x198fd0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x198fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_198fd4:
    // 0x198fd4: 0x2b3300b  movn        $a2, $s5, $s3
    ctx->pc = 0x198fd4u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21));
label_198fd8:
    // 0x198fd8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x198fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_198fdc:
    // 0x198fdc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x198fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_198fe0:
    // 0x198fe0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x198fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198fe4:
    // 0x198fe4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_198fe8:
    // 0x198fe8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_198fec:
    // 0x198fec: 0x60f809  jalr        $v1
label_198ff0:
    if (ctx->pc == 0x198FF0u) {
        ctx->pc = 0x198FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FECu;
        // 0x198ff0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FF4u;
        goto label_198ff4;
    }
    ctx->pc = 0x198FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x198FF4u);
        ctx->pc = 0x198FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FECu;
        // 0x198ff0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198FECu, 0x198FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198FF4u;
label_198ff4:
    // 0x198ff4: 0x5620ff80  bnel        $s1, $zero, . + 4 + (-0x80 << 2)
label_198ff8:
    if (ctx->pc == 0x198FF8u) {
        ctx->pc = 0x198FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198FF4u;
        // 0x198ff8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198FFCu;
        goto label_198ffc;
    }
    ctx->pc = 0x198FF4u;
    {
        const bool branch_taken_0x198ff4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x198ff4) {
            ctx->pc = 0x198FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198FF4u;
            // 0x198ff8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198df8;
        }
    }
    ctx->pc = 0x198FFCu;
label_198ffc:
    // 0x198ffc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x198ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_199000:
    // 0x199000: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x199000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_199004:
    // 0x199004: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x199004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_199008:
    // 0x199008: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19900c:
    // 0x19900c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19900cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_199010:
    // 0x199010: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x199010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_199014:
    // 0x199014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_199018:
    // 0x199018: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x199018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19901c:
    // 0x19901c: 0x3e00008  jr          $ra
label_199020:
    if (ctx->pc == 0x199020u) {
        ctx->pc = 0x199020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19901Cu;
        // 0x199020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199024u;
        goto label_199024;
    }
    ctx->pc = 0x19901Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19901Cu;
        // 0x199020: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19901Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199024u;
label_199024:
    // 0x199024: 0x0  nop
    ctx->pc = 0x199024u;
    // NOP
    ctx->pc = 0x199028u;
}
