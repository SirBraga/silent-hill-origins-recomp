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

// Function: sub_001948E0
// Address: 0x1948e0 - 0x194a90
void sub_001948E0_0x1948e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001948E0_0x1948e0");
#endif

    switch (ctx->pc) {
        case 0x194948u: goto label_194948;
        case 0x194950u: goto label_194950;
        case 0x194960u: goto label_194960;
        case 0x194968u: goto label_194968;
        case 0x194974u: goto label_194974;
        case 0x19497cu: goto label_19497c;
        case 0x194988u: goto label_194988;
        case 0x194990u: goto label_194990;
        case 0x19499cu: goto label_19499c;
        case 0x1949a8u: goto label_1949a8;
        case 0x1949c4u: goto label_1949c4;
        case 0x1949d4u: goto label_1949d4;
        case 0x1949e4u: goto label_1949e4;
        case 0x194a00u: goto label_194a00;
        case 0x194a0cu: goto label_194a0c;
        case 0x194a24u: goto label_194a24;
        case 0x194a30u: goto label_194a30;
        case 0x194a3cu: goto label_194a3c;
        case 0x194a48u: goto label_194a48;
        case 0x194a54u: goto label_194a54;
        case 0x194a60u: goto label_194a60;
        default: break;
    }

    ctx->pc = 0x1948e0u;

    // 0x1948e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1948e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1948e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1948e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1948e8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1948e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1948ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1948ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1948f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1948f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1948f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1948f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1948f8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1948f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1948fc: 0x24429a60  addiu       $v0, $v0, -0x65A0
    ctx->pc = 0x1948fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941280));
    // 0x194900: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x194900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x194904: 0x24639a40  addiu       $v1, $v1, -0x65C0
    ctx->pc = 0x194904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941248));
    // 0x194908: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x194908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x19490c: 0x26900090  addiu       $s0, $s4, 0x90
    ctx->pc = 0x19490cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x194910: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x194910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x194914: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x194914u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194918: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x194918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x19491c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19491cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194920: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x194920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x194924: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x194924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x194928: 0x26910098  addiu       $s1, $s4, 0x98
    ctx->pc = 0x194928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x19492c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19492cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x194930: 0x269200a0  addiu       $s2, $s4, 0xA0
    ctx->pc = 0x194930u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x194934: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x194934u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x194938: 0x269300a8  addiu       $s3, $s4, 0xA8
    ctx->pc = 0x194938u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x19493c: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x19493cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x194940: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x194940u;
    SET_GPR_U32(ctx, 31, 0x194948u);
    ctx->pc = 0x194944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194940u;
    // 0x194944: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x194940u, 0x194948u)) {
        return;
    }
    ctx->pc = 0x194948u;
label_194948:
    // 0x194948: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x194948u;
    SET_GPR_U32(ctx, 31, 0x194950u);
    ctx->pc = 0x19494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194948u;
    // 0x19494c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x194948u, 0x194950u)) {
        return;
    }
    ctx->pc = 0x194950u;
label_194950:
    // 0x194950: 0x269000b0  addiu       $s0, $s4, 0xB0
    ctx->pc = 0x194950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x194954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x194954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194958: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x194958u;
    SET_GPR_U32(ctx, 31, 0x194960u);
    ctx->pc = 0x19495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194958u;
    // 0x19495c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x194958u, 0x194960u)) {
        return;
    }
    ctx->pc = 0x194960u;
label_194960:
    // 0x194960: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x194960u;
    SET_GPR_U32(ctx, 31, 0x194968u);
    ctx->pc = 0x194964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194960u;
    // 0x194964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x194960u, 0x194968u)) {
        return;
    }
    ctx->pc = 0x194968u;
label_194968:
    // 0x194968: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x194968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19496c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19496Cu;
    SET_GPR_U32(ctx, 31, 0x194974u);
    ctx->pc = 0x194970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19496Cu;
    // 0x194970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19496Cu, 0x194974u)) {
        return;
    }
    ctx->pc = 0x194974u;
label_194974:
    // 0x194974: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x194974u;
    SET_GPR_U32(ctx, 31, 0x19497Cu);
    ctx->pc = 0x194978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194974u;
    // 0x194978: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x194974u, 0x19497Cu)) {
        return;
    }
    ctx->pc = 0x19497Cu;
label_19497c:
    // 0x19497c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19497cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194980: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x194980u;
    SET_GPR_U32(ctx, 31, 0x194988u);
    ctx->pc = 0x194984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194980u;
    // 0x194984: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x194980u, 0x194988u)) {
        return;
    }
    ctx->pc = 0x194988u;
label_194988:
    // 0x194988: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x194988u;
    SET_GPR_U32(ctx, 31, 0x194990u);
    ctx->pc = 0x19498Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194988u;
    // 0x19498c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x194988u, 0x194990u)) {
        return;
    }
    ctx->pc = 0x194990u;
label_194990:
    // 0x194990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194994: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x194994u;
    SET_GPR_U32(ctx, 31, 0x19499Cu);
    ctx->pc = 0x194998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194994u;
    // 0x194998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x194994u, 0x19499Cu)) {
        return;
    }
    ctx->pc = 0x19499Cu;
label_19499c:
    // 0x19499c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x19499cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x1949a0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1949A0u;
    SET_GPR_U32(ctx, 31, 0x1949A8u);
    ctx->pc = 0x1949A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949A0u;
    // 0x1949a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1949A0u, 0x1949A8u)) {
        return;
    }
    ctx->pc = 0x1949A8u;
label_1949a8:
    // 0x1949a8: 0x6a1fff9  bgez        $s5, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1949A8u;
    {
        const bool branch_taken_0x1949a8 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x1949ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949A8u;
        // 0x1949ac: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949a8) {
            ctx->pc = 0x194990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194990;
        }
    }
    ctx->pc = 0x1949B0u;
    // 0x1949b0: 0x26900130  addiu       $s0, $s4, 0x130
    ctx->pc = 0x1949b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
    // 0x1949b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1949b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1949b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949bc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1949BCu;
    SET_GPR_U32(ctx, 31, 0x1949C4u);
    ctx->pc = 0x1949C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949BCu;
    // 0x1949c0: 0x26970090  addiu       $s7, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1949BCu, 0x1949C4u)) {
        return;
    }
    ctx->pc = 0x1949C4u;
label_1949c4:
    // 0x1949c4: 0x26960098  addiu       $s6, $s4, 0x98
    ctx->pc = 0x1949c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
    // 0x1949c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1949c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949cc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1949CCu;
    SET_GPR_U32(ctx, 31, 0x1949D4u);
    ctx->pc = 0x1949D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949CCu;
    // 0x1949d0: 0x269300a0  addiu       $s3, $s4, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1949CCu, 0x1949D4u)) {
        return;
    }
    ctx->pc = 0x1949D4u;
label_1949d4:
    // 0x1949d4: 0x269200a8  addiu       $s2, $s4, 0xA8
    ctx->pc = 0x1949d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 168));
    // 0x1949d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1949d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1949dc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1949DCu;
    SET_GPR_U32(ctx, 31, 0x1949E4u);
    ctx->pc = 0x1949E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1949DCu;
    // 0x1949e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1949DCu, 0x1949E4u)) {
        return;
    }
    ctx->pc = 0x1949E4u;
label_1949e4:
    // 0x1949e4: 0x269100b0  addiu       $s1, $s4, 0xB0
    ctx->pc = 0x1949e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x1949e8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1949E8u;
    {
        const bool branch_taken_0x1949e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1949ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949E8u;
        // 0x1949ec: 0x26950008  addiu       $s5, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949e8) {
            ctx->pc = 0x194A18u;
            goto label_194a18;
        }
    }
    ctx->pc = 0x1949F0u;
    // 0x1949f0: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1949F0u;
    {
        const bool branch_taken_0x1949f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x1949F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1949F0u;
        // 0x1949f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1949f0) {
            ctx->pc = 0x194A1Cu;
            goto label_194a1c;
        }
    }
    ctx->pc = 0x1949F8u;
    // 0x1949f8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x1949f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x1949fc: 0x0  nop
    ctx->pc = 0x1949fcu;
    // NOP
label_194a00:
    // 0x194a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x194a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a04: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x194A04u;
    SET_GPR_U32(ctx, 31, 0x194A0Cu);
    ctx->pc = 0x194A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A04u;
    // 0x194a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x194A04u, 0x194A0Cu)) {
        return;
    }
    ctx->pc = 0x194A0Cu;
label_194a0c:
    // 0x194a0c: 0x0  nop
    ctx->pc = 0x194a0cu;
    // NOP
    // 0x194a10: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x194A10u;
    {
        const bool branch_taken_0x194a10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x194A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A10u;
        // 0x194a14: 0x2610fff8  addiu       $s0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194a10) {
            ctx->pc = 0x194A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_194a00;
        }
    }
    ctx->pc = 0x194A18u;
label_194a18:
    // 0x194a18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x194a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_194a1c:
    // 0x194a1c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x194A1Cu;
    SET_GPR_U32(ctx, 31, 0x194A24u);
    ctx->pc = 0x194A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A1Cu;
    // 0x194a20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x194A1Cu, 0x194A24u)) {
        return;
    }
    ctx->pc = 0x194A24u;
label_194a24:
    // 0x194a24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x194a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a28: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x194A28u;
    SET_GPR_U32(ctx, 31, 0x194A30u);
    ctx->pc = 0x194A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A28u;
    // 0x194a2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x194A28u, 0x194A30u)) {
        return;
    }
    ctx->pc = 0x194A30u;
label_194a30:
    // 0x194a30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x194a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a34: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x194A34u;
    SET_GPR_U32(ctx, 31, 0x194A3Cu);
    ctx->pc = 0x194A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A34u;
    // 0x194a38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x194A34u, 0x194A3Cu)) {
        return;
    }
    ctx->pc = 0x194A3Cu;
label_194a3c:
    // 0x194a3c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x194a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a40: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x194A40u;
    SET_GPR_U32(ctx, 31, 0x194A48u);
    ctx->pc = 0x194A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A40u;
    // 0x194a44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x194A40u, 0x194A48u)) {
        return;
    }
    ctx->pc = 0x194A48u;
label_194a48:
    // 0x194a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x194a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a4c: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x194A4Cu;
    SET_GPR_U32(ctx, 31, 0x194A54u);
    ctx->pc = 0x194A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A4Cu;
    // 0x194a50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x194A4Cu, 0x194A54u)) {
        return;
    }
    ctx->pc = 0x194A54u;
label_194a54:
    // 0x194a54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x194a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194a58: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x194A58u;
    SET_GPR_U32(ctx, 31, 0x194A60u);
    ctx->pc = 0x194A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194A58u;
    // 0x194a5c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x194A58u, 0x194A60u)) {
        return;
    }
    ctx->pc = 0x194A60u;
label_194a60:
    // 0x194a60: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x194a60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194a64: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x194a64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x194a68: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x194a68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194a6c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x194a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194a70: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x194a70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194a74: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x194a74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x194a78: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x194a78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194a7c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x194a7cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194a80: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x194a80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194a84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194a88: 0x3e00008  jr          $ra
    ctx->pc = 0x194A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194A88u;
        // 0x194a8c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194A90u;
}
