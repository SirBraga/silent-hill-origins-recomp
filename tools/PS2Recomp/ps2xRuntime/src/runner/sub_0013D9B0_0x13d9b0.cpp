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

// Function: sub_0013D9B0
// Address: 0x13d9b0 - 0x13db48
void sub_0013D9B0_0x13d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D9B0_0x13d9b0");
#endif

    switch (ctx->pc) {
        case 0x13da2cu: goto label_13da2c;
        case 0x13da3cu: goto label_13da3c;
        case 0x13da4cu: goto label_13da4c;
        case 0x13da58u: goto label_13da58;
        case 0x13da64u: goto label_13da64;
        case 0x13da6cu: goto label_13da6c;
        case 0x13da78u: goto label_13da78;
        case 0x13da80u: goto label_13da80;
        case 0x13da8cu: goto label_13da8c;
        case 0x13da94u: goto label_13da94;
        case 0x13daa0u: goto label_13daa0;
        case 0x13daa8u: goto label_13daa8;
        case 0x13dabcu: goto label_13dabc;
        case 0x13daccu: goto label_13dacc;
        case 0x13dad8u: goto label_13dad8;
        case 0x13dae4u: goto label_13dae4;
        case 0x13daf0u: goto label_13daf0;
        case 0x13dafcu: goto label_13dafc;
        case 0x13db08u: goto label_13db08;
        case 0x13db14u: goto label_13db14;
        default: break;
    }

    ctx->pc = 0x13d9b0u;

    // 0x13d9b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x13d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x13d9b4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13d9b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x13d9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x13d9bc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13d9c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d9c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d9c4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x13d9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x13d9c8: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x13d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x13d9cc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x13d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x13d9d0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x13d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x13d9d4: 0x2484fdd0  addiu       $a0, $a0, -0x230
    ctx->pc = 0x13d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966736));
    // 0x13d9d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x13d9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x13d9dc: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13d9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13d9e0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x13d9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x13d9e4: 0x2442fcb0  addiu       $v0, $v0, -0x350
    ctx->pc = 0x13d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966448));
    // 0x13d9e8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x13d9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x13d9ec: 0x2463fc70  addiu       $v1, $v1, -0x390
    ctx->pc = 0x13d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966384));
    // 0x13d9f0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x13d9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x13d9f4: 0x24c6fdf0  addiu       $a2, $a2, -0x210
    ctx->pc = 0x13d9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966768));
    // 0x13d9f8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x13d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x13d9fc: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x13d9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x13da00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13da04: 0x263700ec  addiu       $s7, $s1, 0xEC
    ctx->pc = 0x13da04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 236));
    // 0x13da08: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x13da08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x13da0c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x13da0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da10: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x13da10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x13da14: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x13da14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da18: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x13da18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
    // 0x13da1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da20: 0xae260034  sw          $a2, 0x34($s1)
    ctx->pc = 0x13da20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 6));
    // 0x13da24: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13DA24u;
    SET_GPR_U32(ctx, 31, 0x13DA2Cu);
    ctx->pc = 0x13DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA24u;
    // 0x13da28: 0x263600f4  addiu       $s6, $s1, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13DA24u, 0x13DA2Cu)) {
        return;
    }
    ctx->pc = 0x13DA2Cu;
label_13da2c:
    // 0x13da2c: 0x263500fc  addiu       $s5, $s1, 0xFC
    ctx->pc = 0x13da2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 252));
    // 0x13da30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da34: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13DA34u;
    SET_GPR_U32(ctx, 31, 0x13DA3Cu);
    ctx->pc = 0x13DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA34u;
    // 0x13da38: 0x26340104  addiu       $s4, $s1, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13DA34u, 0x13DA3Cu)) {
        return;
    }
    ctx->pc = 0x13DA3Cu;
label_13da3c:
    // 0x13da3c: 0x2633010c  addiu       $s3, $s1, 0x10C
    ctx->pc = 0x13da3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
    // 0x13da40: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x13da40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da44: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13DA44u;
    SET_GPR_U32(ctx, 31, 0x13DA4Cu);
    ctx->pc = 0x13DA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA44u;
    // 0x13da48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13DA44u, 0x13DA4Cu)) {
        return;
    }
    ctx->pc = 0x13DA4Cu;
label_13da4c:
    // 0x13da4c: 0x26320114  addiu       $s2, $s1, 0x114
    ctx->pc = 0x13da4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 276));
    // 0x13da50: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13DA50u;
    SET_GPR_U32(ctx, 31, 0x13DA58u);
    ctx->pc = 0x13DA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA50u;
    // 0x13da54: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13DA50u, 0x13DA58u)) {
        return;
    }
    ctx->pc = 0x13DA58u;
label_13da58:
    // 0x13da58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x13da58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da5c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13DA5Cu;
    SET_GPR_U32(ctx, 31, 0x13DA64u);
    ctx->pc = 0x13DA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA5Cu;
    // 0x13da60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13DA5Cu, 0x13DA64u)) {
        return;
    }
    ctx->pc = 0x13DA64u;
label_13da64:
    // 0x13da64: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13DA64u;
    SET_GPR_U32(ctx, 31, 0x13DA6Cu);
    ctx->pc = 0x13DA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA64u;
    // 0x13da68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13DA64u, 0x13DA6Cu)) {
        return;
    }
    ctx->pc = 0x13DA6Cu;
label_13da6c:
    // 0x13da6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13da6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da70: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13DA70u;
    SET_GPR_U32(ctx, 31, 0x13DA78u);
    ctx->pc = 0x13DA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA70u;
    // 0x13da74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13DA70u, 0x13DA78u)) {
        return;
    }
    ctx->pc = 0x13DA78u;
label_13da78:
    // 0x13da78: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13DA78u;
    SET_GPR_U32(ctx, 31, 0x13DA80u);
    ctx->pc = 0x13DA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA78u;
    // 0x13da7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13DA78u, 0x13DA80u)) {
        return;
    }
    ctx->pc = 0x13DA80u;
label_13da80:
    // 0x13da80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13da80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13DA84u;
    SET_GPR_U32(ctx, 31, 0x13DA8Cu);
    ctx->pc = 0x13DA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA84u;
    // 0x13da88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13DA84u, 0x13DA8Cu)) {
        return;
    }
    ctx->pc = 0x13DA8Cu;
label_13da8c:
    // 0x13da8c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13DA8Cu;
    SET_GPR_U32(ctx, 31, 0x13DA94u);
    ctx->pc = 0x13DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA8Cu;
    // 0x13da90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13DA8Cu, 0x13DA94u)) {
        return;
    }
    ctx->pc = 0x13DA94u;
label_13da94:
    // 0x13da94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13da94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13da98: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x13DA98u;
    SET_GPR_U32(ctx, 31, 0x13DAA0u);
    ctx->pc = 0x13DA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DA98u;
    // 0x13da9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x13DA98u, 0x13DAA0u)) {
        return;
    }
    ctx->pc = 0x13DAA0u;
label_13daa0:
    // 0x13daa0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x13DAA0u;
    SET_GPR_U32(ctx, 31, 0x13DAA8u);
    ctx->pc = 0x13DAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAA0u;
    // 0x13daa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x13DAA0u, 0x13DAA8u)) {
        return;
    }
    ctx->pc = 0x13DAA8u;
label_13daa8:
    // 0x13daa8: 0x8e2400e8  lw          $a0, 0xE8($s1)
    ctx->pc = 0x13daa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x13daac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DAACu;
    {
        const bool branch_taken_0x13daac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13daac) {
            ctx->pc = 0x13DAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DAACu;
            // 0x13dab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DAC4u;
            goto label_13dac4;
        }
    }
    ctx->pc = 0x13DAB4u;
    // 0x13dab4: 0xc04207c  jal         func_1081F0
    ctx->pc = 0x13DAB4u;
    SET_GPR_U32(ctx, 31, 0x13DABCu);
    ctx->pc = 0x13DAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAB4u;
    // 0x13dab8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1081F0u, 0x13DAB4u, 0x13DABCu)) {
        return;
    }
    ctx->pc = 0x13DABCu;
label_13dabc:
    // 0x13dabc: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x13dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x13dac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13dac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13dac4:
    // 0x13dac4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13DAC4u;
    SET_GPR_U32(ctx, 31, 0x13DACCu);
    ctx->pc = 0x13DAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAC4u;
    // 0x13dac8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13DAC4u, 0x13DACCu)) {
        return;
    }
    ctx->pc = 0x13DACCu;
label_13dacc:
    // 0x13dacc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13daccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dad0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13DAD0u;
    SET_GPR_U32(ctx, 31, 0x13DAD8u);
    ctx->pc = 0x13DAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAD0u;
    // 0x13dad4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13DAD0u, 0x13DAD8u)) {
        return;
    }
    ctx->pc = 0x13DAD8u;
label_13dad8:
    // 0x13dad8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13dad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dadc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13DADCu;
    SET_GPR_U32(ctx, 31, 0x13DAE4u);
    ctx->pc = 0x13DAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DADCu;
    // 0x13dae0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13DADCu, 0x13DAE4u)) {
        return;
    }
    ctx->pc = 0x13DAE4u;
label_13dae4:
    // 0x13dae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dae8: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13DAE8u;
    SET_GPR_U32(ctx, 31, 0x13DAF0u);
    ctx->pc = 0x13DAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAE8u;
    // 0x13daec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13DAE8u, 0x13DAF0u)) {
        return;
    }
    ctx->pc = 0x13DAF0u;
label_13daf0:
    // 0x13daf0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13daf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13daf4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13DAF4u;
    SET_GPR_U32(ctx, 31, 0x13DAFCu);
    ctx->pc = 0x13DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DAF4u;
    // 0x13daf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13DAF4u, 0x13DAFCu)) {
        return;
    }
    ctx->pc = 0x13DAFCu;
label_13dafc:
    // 0x13dafc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x13dafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db00: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x13DB00u;
    SET_GPR_U32(ctx, 31, 0x13DB08u);
    ctx->pc = 0x13DB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB00u;
    // 0x13db04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x13DB00u, 0x13DB08u)) {
        return;
    }
    ctx->pc = 0x13DB08u;
label_13db08:
    // 0x13db08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db0c: 0xc04ee16  jal         func_13B858
    ctx->pc = 0x13DB0Cu;
    SET_GPR_U32(ctx, 31, 0x13DB14u);
    ctx->pc = 0x13DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB0Cu;
    // 0x13db10: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B858u, 0x13DB0Cu, 0x13DB14u)) {
        return;
    }
    ctx->pc = 0x13DB14u;
label_13db14:
    // 0x13db14: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x13db14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13db18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x13db18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13db1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x13db1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13db20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x13db20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13db24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x13db24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13db28: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x13db28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13db2c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x13db2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13db30: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x13db30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13db34: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x13db34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13db38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13db38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13db3c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DB3Cu;
        // 0x13db40: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DB44u;
    // 0x13db44: 0x0  nop
    ctx->pc = 0x13db44u;
    // NOP
    ctx->pc = 0x13db48u;
}
