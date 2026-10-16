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

// Function: sub_0018CD18
// Address: 0x18cd18 - 0x18d238
void sub_0018CD18_0x18cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CD18_0x18cd18");
#endif

    switch (ctx->pc) {
        case 0x18cd6cu: goto label_18cd6c;
        case 0x18cd78u: goto label_18cd78;
        case 0x18cd8cu: goto label_18cd8c;
        case 0x18cd94u: goto label_18cd94;
        case 0x18cda4u: goto label_18cda4;
        case 0x18cdb4u: goto label_18cdb4;
        case 0x18cdc4u: goto label_18cdc4;
        case 0x18cdd4u: goto label_18cdd4;
        case 0x18cde8u: goto label_18cde8;
        case 0x18cdfcu: goto label_18cdfc;
        case 0x18ce04u: goto label_18ce04;
        case 0x18ce0cu: goto label_18ce0c;
        case 0x18ce20u: goto label_18ce20;
        case 0x18ce34u: goto label_18ce34;
        case 0x18ce3cu: goto label_18ce3c;
        case 0x18ce44u: goto label_18ce44;
        case 0x18ce54u: goto label_18ce54;
        case 0x18ce70u: goto label_18ce70;
        case 0x18ceb0u: goto label_18ceb0;
        case 0x18cf00u: goto label_18cf00;
        case 0x18cf40u: goto label_18cf40;
        case 0x18cf70u: goto label_18cf70;
        case 0x18cfb0u: goto label_18cfb0;
        case 0x18cfe0u: goto label_18cfe0;
        case 0x18d020u: goto label_18d020;
        case 0x18d050u: goto label_18d050;
        case 0x18d090u: goto label_18d090;
        case 0x18d0c0u: goto label_18d0c0;
        case 0x18d100u: goto label_18d100;
        case 0x18d130u: goto label_18d130;
        case 0x18d170u: goto label_18d170;
        case 0x18d1a0u: goto label_18d1a0;
        case 0x18d1e0u: goto label_18d1e0;
        case 0x18d204u: goto label_18d204;
        default: break;
    }

    ctx->pc = 0x18cd18u;

    // 0x18cd18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x18cd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18cd1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18cd20: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18cd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18cd24: 0x244294b0  addiu       $v0, $v0, -0x6B50
    ctx->pc = 0x18cd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939824));
    // 0x18cd28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18cd28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd2c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x18cd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x18cd30: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x18cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x18cd34: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18cd38: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x18cd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x18cd3c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18cd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18cd40: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x18cd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x18cd44: 0x26b200b0  addiu       $s2, $s5, 0xB0
    ctx->pc = 0x18cd44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
    // 0x18cd48: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x18cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x18cd4c: 0x3c1e006a  lui         $fp, 0x6A
    ctx->pc = 0x18cd4cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
    // 0x18cd50: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x18cd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x18cd54: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x18cd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x18cd58: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x18cd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x18cd5c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x18cd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x18cd60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18cd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18cd64: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CD64u;
    SET_GPR_U32(ctx, 31, 0x18CD6Cu);
    ctx->pc = 0x18CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD64u;
    // 0x18cd68: 0xaea20004  sw          $v0, 0x4($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CD64u, 0x18CD6Cu)) {
        return;
    }
    ctx->pc = 0x18CD6Cu;
label_18cd6c:
    // 0x18cd6c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18cd70: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CD70u;
    SET_GPR_U32(ctx, 31, 0x18CD78u);
    ctx->pc = 0x18CD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD70u;
    // 0x18cd74: 0x2484bd88  addiu       $a0, $a0, -0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CD70u, 0x18CD78u)) {
        return;
    }
    ctx->pc = 0x18CD78u;
label_18cd78:
    // 0x18cd78: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x18cd78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x18cd7c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd80: 0x2610bd90  addiu       $s0, $s0, -0x4270
    ctx->pc = 0x18cd80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950288));
    // 0x18cd84: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CD84u;
    SET_GPR_U32(ctx, 31, 0x18CD8Cu);
    ctx->pc = 0x18CD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD84u;
    // 0x18cd88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CD84u, 0x18CD8Cu)) {
        return;
    }
    ctx->pc = 0x18CD8Cu;
label_18cd8c:
    // 0x18cd8c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CD8Cu;
    SET_GPR_U32(ctx, 31, 0x18CD94u);
    ctx->pc = 0x18CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD8Cu;
    // 0x18cd90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CD8Cu, 0x18CD94u)) {
        return;
    }
    ctx->pc = 0x18CD94u;
label_18cd94:
    // 0x18cd94: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x18cd98: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cd9c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CD9Cu;
    SET_GPR_U32(ctx, 31, 0x18CDA4u);
    ctx->pc = 0x18CDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CD9Cu;
    // 0x18cda0: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CD9Cu, 0x18CDA4u)) {
        return;
    }
    ctx->pc = 0x18CDA4u;
label_18cda4:
    // 0x18cda4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x18cda8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CDACu;
    SET_GPR_U32(ctx, 31, 0x18CDB4u);
    ctx->pc = 0x18CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDACu;
    // 0x18cdb0: 0x24a5f888  addiu       $a1, $a1, -0x778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CDACu, 0x18CDB4u)) {
        return;
    }
    ctx->pc = 0x18CDB4u;
label_18cdb4:
    // 0x18cdb4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x18cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x18cdb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdbc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CDBCu;
    SET_GPR_U32(ctx, 31, 0x18CDC4u);
    ctx->pc = 0x18CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDBCu;
    // 0x18cdc0: 0x24a586d0  addiu       $a1, $a1, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CDBCu, 0x18CDC4u)) {
        return;
    }
    ctx->pc = 0x18CDC4u;
label_18cdc4:
    // 0x18cdc4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x18cdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x18cdc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdcc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CDCCu;
    SET_GPR_U32(ctx, 31, 0x18CDD4u);
    ctx->pc = 0x18CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDCCu;
    // 0x18cdd0: 0x24a586c8  addiu       $a1, $a1, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CDCCu, 0x18CDD4u)) {
        return;
    }
    ctx->pc = 0x18CDD4u;
label_18cdd4:
    // 0x18cdd4: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x18cdd4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x18cdd8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cdd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cddc: 0x26314700  addiu       $s1, $s1, 0x4700
    ctx->pc = 0x18cddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18176));
    // 0x18cde0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CDE0u;
    SET_GPR_U32(ctx, 31, 0x18CDE8u);
    ctx->pc = 0x18CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDE0u;
    // 0x18cde4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CDE0u, 0x18CDE8u)) {
        return;
    }
    ctx->pc = 0x18CDE8u;
label_18cde8:
    // 0x18cde8: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x18cde8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x18cdec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cdf0: 0x261046f8  addiu       $s0, $s0, 0x46F8
    ctx->pc = 0x18cdf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18168));
    // 0x18cdf4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CDF4u;
    SET_GPR_U32(ctx, 31, 0x18CDFCu);
    ctx->pc = 0x18CDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDF4u;
    // 0x18cdf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CDF4u, 0x18CDFCu)) {
        return;
    }
    ctx->pc = 0x18CDFCu;
label_18cdfc:
    // 0x18cdfc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CDFCu;
    SET_GPR_U32(ctx, 31, 0x18CE04u);
    ctx->pc = 0x18CE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CDFCu;
    // 0x18ce00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CDFCu, 0x18CE04u)) {
        return;
    }
    ctx->pc = 0x18CE04u;
label_18ce04:
    // 0x18ce04: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CE04u;
    SET_GPR_U32(ctx, 31, 0x18CE0Cu);
    ctx->pc = 0x18CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE04u;
    // 0x18ce08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CE04u, 0x18CE0Cu)) {
        return;
    }
    ctx->pc = 0x18CE0Cu;
label_18ce0c:
    // 0x18ce0c: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x18ce0cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x18ce10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18ce10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce14: 0x26314720  addiu       $s1, $s1, 0x4720
    ctx->pc = 0x18ce14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18208));
    // 0x18ce18: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CE18u;
    SET_GPR_U32(ctx, 31, 0x18CE20u);
    ctx->pc = 0x18CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE18u;
    // 0x18ce1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CE18u, 0x18CE20u)) {
        return;
    }
    ctx->pc = 0x18CE20u;
label_18ce20:
    // 0x18ce20: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x18ce20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x18ce24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x18ce24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce28: 0x26104728  addiu       $s0, $s0, 0x4728
    ctx->pc = 0x18ce28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18216));
    // 0x18ce2c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18CE2Cu;
    SET_GPR_U32(ctx, 31, 0x18CE34u);
    ctx->pc = 0x18CE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE2Cu;
    // 0x18ce30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18CE2Cu, 0x18CE34u)) {
        return;
    }
    ctx->pc = 0x18CE34u;
label_18ce34:
    // 0x18ce34: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CE34u;
    SET_GPR_U32(ctx, 31, 0x18CE3Cu);
    ctx->pc = 0x18CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE34u;
    // 0x18ce38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CE34u, 0x18CE3Cu)) {
        return;
    }
    ctx->pc = 0x18CE3Cu;
label_18ce3c:
    // 0x18ce3c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18CE3Cu;
    SET_GPR_U32(ctx, 31, 0x18CE44u);
    ctx->pc = 0x18CE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE3Cu;
    // 0x18ce40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18CE3Cu, 0x18CE44u)) {
        return;
    }
    ctx->pc = 0x18CE44u;
label_18ce44:
    // 0x18ce44: 0x26a4007c  addiu       $a0, $s5, 0x7C
    ctx->pc = 0x18ce44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 124));
    // 0x18ce48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ce48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ce4c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18CE4Cu;
    SET_GPR_U32(ctx, 31, 0x18CE54u);
    ctx->pc = 0x18CE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CE4Cu;
    // 0x18ce50: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18CE4Cu, 0x18CE54u)) {
        return;
    }
    ctx->pc = 0x18CE54u;
label_18ce54:
    // 0x18ce54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18ce54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18ce58: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18ce58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ce5c: 0x246394d0  addiu       $v1, $v1, -0x6B30
    ctx->pc = 0x18ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939856));
    // 0x18ce60: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18CE60u;
    {
        const bool branch_taken_0x18ce60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE60u;
        // 0x18ce64: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce60) {
            ctx->pc = 0x18CEC8u;
            goto label_18cec8;
        }
    }
    ctx->pc = 0x18CE68u;
    // 0x18ce68: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x18ce68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ce6c: 0x0  nop
    ctx->pc = 0x18ce6cu;
    // NOP
label_18ce70:
    // 0x18ce70: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18CE70u;
    {
        const bool branch_taken_0x18ce70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ce70) {
            ctx->pc = 0x18CE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CE70u;
            // 0x18ce74: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CEC0u;
            goto label_18cec0;
        }
    }
    ctx->pc = 0x18CE78u;
    // 0x18ce78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18ce7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE7Cu;
    {
        const bool branch_taken_0x18ce7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE7Cu;
        // 0x18ce80: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce7c) {
            ctx->pc = 0x18CE8Cu;
            goto label_18ce8c;
        }
    }
    ctx->pc = 0x18CE84u;
    // 0x18ce84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CE84u;
    {
        const bool branch_taken_0x18ce84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE84u;
        // 0x18ce88: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce84) {
            ctx->pc = 0x18CE90u;
            goto label_18ce90;
        }
    }
    ctx->pc = 0x18CE8Cu;
label_18ce8c:
    // 0x18ce8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18ce90:
    // 0x18ce90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18ce94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CE94u;
    {
        const bool branch_taken_0x18ce94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE94u;
        // 0x18ce98: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce94) {
            ctx->pc = 0x18CEA4u;
            goto label_18cea4;
        }
    }
    ctx->pc = 0x18CE9Cu;
    // 0x18ce9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CE9Cu;
    {
        const bool branch_taken_0x18ce9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CE9Cu;
        // 0x18cea0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ce9c) {
            ctx->pc = 0x18CEA8u;
            goto label_18cea8;
        }
    }
    ctx->pc = 0x18CEA4u;
label_18cea4:
    // 0x18cea4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18cea8:
    // 0x18cea8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18CEA8u;
    SET_GPR_U32(ctx, 31, 0x18CEB0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18CEA8u, 0x18CEB0u)) {
        return;
    }
    ctx->pc = 0x18CEB0u;
label_18ceb0:
    // 0x18ceb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18ceb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ceb8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18cebc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_18cec0:
    // 0x18cec0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18CEC0u;
    {
        const bool branch_taken_0x18cec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cec0) {
            ctx->pc = 0x18CEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CEC0u;
            // 0x18cec4: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CE70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ce70;
        }
    }
    ctx->pc = 0x18CEC8u;
label_18cec8:
    // 0x18cec8: 0x26b0009c  addiu       $s0, $s5, 0x9C
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 156));
    // 0x18cecc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18ced0: 0x244294e8  addiu       $v0, $v0, -0x6B18
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939880));
    // 0x18ced4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x18ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18ced8: 0x26b1005c  addiu       $s1, $s5, 0x5C
    ctx->pc = 0x18ced8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 92));
    // 0x18cedc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x18cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x18cee0: 0x26b2004c  addiu       $s2, $s5, 0x4C
    ctx->pc = 0x18cee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 76));
    // 0x18cee4: 0x26b3003c  addiu       $s3, $s5, 0x3C
    ctx->pc = 0x18cee4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
    // 0x18cee8: 0x26b4002c  addiu       $s4, $s5, 0x2C
    ctx->pc = 0x18cee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 44));
    // 0x18ceec: 0x26b6001c  addiu       $s6, $s5, 0x1C
    ctx->pc = 0x18ceecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x18cef0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18CEF0u;
    {
        const bool branch_taken_0x18cef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CEF0u;
        // 0x18cef4: 0x26b7000c  addiu       $s7, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cef0) {
            ctx->pc = 0x18CF58u;
            goto label_18cf58;
        }
    }
    ctx->pc = 0x18CEF8u;
    // 0x18cef8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18cef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18cefc: 0x0  nop
    ctx->pc = 0x18cefcu;
    // NOP
label_18cf00:
    // 0x18cf00: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18CF00u;
    {
        const bool branch_taken_0x18cf00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cf00) {
            ctx->pc = 0x18CF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CF00u;
            // 0x18cf04: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CF50u;
            goto label_18cf50;
        }
    }
    ctx->pc = 0x18CF08u;
    // 0x18cf08: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18cf0c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF0Cu;
    {
        const bool branch_taken_0x18cf0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF0Cu;
        // 0x18cf10: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf0c) {
            ctx->pc = 0x18CF1Cu;
            goto label_18cf1c;
        }
    }
    ctx->pc = 0x18CF14u;
    // 0x18cf14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CF14u;
    {
        const bool branch_taken_0x18cf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF14u;
        // 0x18cf18: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf14) {
            ctx->pc = 0x18CF20u;
            goto label_18cf20;
        }
    }
    ctx->pc = 0x18CF1Cu;
label_18cf1c:
    // 0x18cf1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18cf20:
    // 0x18cf20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18cf24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF24u;
    {
        const bool branch_taken_0x18cf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF24u;
        // 0x18cf28: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf24) {
            ctx->pc = 0x18CF34u;
            goto label_18cf34;
        }
    }
    ctx->pc = 0x18CF2Cu;
    // 0x18cf2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CF2Cu;
    {
        const bool branch_taken_0x18cf2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF2Cu;
        // 0x18cf30: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf2c) {
            ctx->pc = 0x18CF38u;
            goto label_18cf38;
        }
    }
    ctx->pc = 0x18CF34u;
label_18cf34:
    // 0x18cf34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18cf38:
    // 0x18cf38: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18CF38u;
    SET_GPR_U32(ctx, 31, 0x18CF40u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18CF38u, 0x18CF40u)) {
        return;
    }
    ctx->pc = 0x18CF40u;
label_18cf40:
    // 0x18cf40: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18cf44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cf48: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18cf4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18cf50:
    // 0x18cf50: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18CF50u;
    {
        const bool branch_taken_0x18cf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf50) {
            ctx->pc = 0x18CF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CF50u;
            // 0x18cf54: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cf00;
        }
    }
    ctx->pc = 0x18CF58u;
label_18cf58:
    // 0x18cf58: 0x27c29500  addiu       $v0, $fp, -0x6B00
    ctx->pc = 0x18cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939904));
    // 0x18cf5c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x18cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18cf60: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18CF60u;
    {
        const bool branch_taken_0x18cf60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF60u;
        // 0x18cf64: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf60) {
            ctx->pc = 0x18CFCCu;
            goto label_18cfcc;
        }
    }
    ctx->pc = 0x18CF68u;
    // 0x18cf68: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18cf6c: 0x0  nop
    ctx->pc = 0x18cf6cu;
    // NOP
label_18cf70:
    // 0x18cf70: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18CF70u;
    {
        const bool branch_taken_0x18cf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cf70) {
            ctx->pc = 0x18CF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CF70u;
            // 0x18cf74: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CFC0u;
            goto label_18cfc0;
        }
    }
    ctx->pc = 0x18CF78u;
    // 0x18cf78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18cf7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF7Cu;
    {
        const bool branch_taken_0x18cf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF7Cu;
        // 0x18cf80: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf7c) {
            ctx->pc = 0x18CF8Cu;
            goto label_18cf8c;
        }
    }
    ctx->pc = 0x18CF84u;
    // 0x18cf84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CF84u;
    {
        const bool branch_taken_0x18cf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF84u;
        // 0x18cf88: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf84) {
            ctx->pc = 0x18CF90u;
            goto label_18cf90;
        }
    }
    ctx->pc = 0x18CF8Cu;
label_18cf8c:
    // 0x18cf8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18cf90:
    // 0x18cf90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18cf90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18cf94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF94u;
    {
        const bool branch_taken_0x18cf94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF94u;
        // 0x18cf98: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf94) {
            ctx->pc = 0x18CFA4u;
            goto label_18cfa4;
        }
    }
    ctx->pc = 0x18CF9Cu;
    // 0x18cf9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CF9Cu;
    {
        const bool branch_taken_0x18cf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CF9Cu;
        // 0x18cfa0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf9c) {
            ctx->pc = 0x18CFA8u;
            goto label_18cfa8;
        }
    }
    ctx->pc = 0x18CFA4u;
label_18cfa4:
    // 0x18cfa4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18cfa8:
    // 0x18cfa8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18CFA8u;
    SET_GPR_U32(ctx, 31, 0x18CFB0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18CFA8u, 0x18CFB0u)) {
        return;
    }
    ctx->pc = 0x18CFB0u;
label_18cfb0:
    // 0x18cfb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x18cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18cfb4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18cfb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x18cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x18cfbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18cfc0:
    // 0x18cfc0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18CFC0u;
    {
        const bool branch_taken_0x18cfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cfc0) {
            ctx->pc = 0x18CFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CFC0u;
            // 0x18cfc4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cf70;
        }
    }
    ctx->pc = 0x18CFC8u;
    // 0x18cfc8: 0x27c29500  addiu       $v0, $fp, -0x6B00
    ctx->pc = 0x18cfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939904));
label_18cfcc:
    // 0x18cfcc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x18cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18cfd0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18CFD0u;
    {
        const bool branch_taken_0x18cfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFD0u;
        // 0x18cfd4: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfd0) {
            ctx->pc = 0x18D038u;
            goto label_18d038;
        }
    }
    ctx->pc = 0x18CFD8u;
    // 0x18cfd8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x18cfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18cfdc: 0x0  nop
    ctx->pc = 0x18cfdcu;
    // NOP
label_18cfe0:
    // 0x18cfe0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18CFE0u;
    {
        const bool branch_taken_0x18cfe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cfe0) {
            ctx->pc = 0x18CFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CFE0u;
            // 0x18cfe4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D030u;
            goto label_18d030;
        }
    }
    ctx->pc = 0x18CFE8u;
    // 0x18cfe8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18cfec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CFECu;
    {
        const bool branch_taken_0x18cfec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFECu;
        // 0x18cff0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfec) {
            ctx->pc = 0x18CFFCu;
            goto label_18cffc;
        }
    }
    ctx->pc = 0x18CFF4u;
    // 0x18cff4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18CFF4u;
    {
        const bool branch_taken_0x18cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CFF4u;
        // 0x18cff8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cff4) {
            ctx->pc = 0x18D000u;
            goto label_18d000;
        }
    }
    ctx->pc = 0x18CFFCu;
label_18cffc:
    // 0x18cffc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18d000:
    // 0x18d000: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18d000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18d004: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D004u;
    {
        const bool branch_taken_0x18d004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D004u;
        // 0x18d008: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d004) {
            ctx->pc = 0x18D014u;
            goto label_18d014;
        }
    }
    ctx->pc = 0x18D00Cu;
    // 0x18d00c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D00Cu;
    {
        const bool branch_taken_0x18d00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D00Cu;
        // 0x18d010: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d00c) {
            ctx->pc = 0x18D018u;
            goto label_18d018;
        }
    }
    ctx->pc = 0x18D014u;
label_18d014:
    // 0x18d014: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d018:
    // 0x18d018: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18D018u;
    SET_GPR_U32(ctx, 31, 0x18D020u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D018u, 0x18D020u)) {
        return;
    }
    ctx->pc = 0x18D020u;
label_18d020:
    // 0x18d020: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18d024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d028: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x18d028u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x18d02c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18d02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_18d030:
    // 0x18d030: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18D030u;
    {
        const bool branch_taken_0x18d030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d030) {
            ctx->pc = 0x18D034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D030u;
            // 0x18d034: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18cfe0;
        }
    }
    ctx->pc = 0x18D038u;
label_18d038:
    // 0x18d038: 0x27c29500  addiu       $v0, $fp, -0x6B00
    ctx->pc = 0x18d038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939904));
    // 0x18d03c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x18d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18d040: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18D040u;
    {
        const bool branch_taken_0x18d040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D040u;
        // 0x18d044: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d040) {
            ctx->pc = 0x18D0ACu;
            goto label_18d0ac;
        }
    }
    ctx->pc = 0x18D048u;
    // 0x18d048: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x18d048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18d04c: 0x0  nop
    ctx->pc = 0x18d04cu;
    // NOP
label_18d050:
    // 0x18d050: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D050u;
    {
        const bool branch_taken_0x18d050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d050) {
            ctx->pc = 0x18D054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D050u;
            // 0x18d054: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D0A0u;
            goto label_18d0a0;
        }
    }
    ctx->pc = 0x18D058u;
    // 0x18d058: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18d05c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D05Cu;
        // 0x18d060: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D06Cu;
            goto label_18d06c;
        }
    }
    ctx->pc = 0x18D064u;
    // 0x18d064: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D064u;
    {
        const bool branch_taken_0x18d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D064u;
        // 0x18d068: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d064) {
            ctx->pc = 0x18D070u;
            goto label_18d070;
        }
    }
    ctx->pc = 0x18D06Cu;
label_18d06c:
    // 0x18d06c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18d070:
    // 0x18d070: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18d074: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D074u;
    {
        const bool branch_taken_0x18d074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D074u;
        // 0x18d078: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d074) {
            ctx->pc = 0x18D084u;
            goto label_18d084;
        }
    }
    ctx->pc = 0x18D07Cu;
    // 0x18d07c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D07Cu;
    {
        const bool branch_taken_0x18d07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D07Cu;
        // 0x18d080: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d07c) {
            ctx->pc = 0x18D088u;
            goto label_18d088;
        }
    }
    ctx->pc = 0x18D084u;
label_18d084:
    // 0x18d084: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d088:
    // 0x18d088: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18D088u;
    SET_GPR_U32(ctx, 31, 0x18D090u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D088u, 0x18D090u)) {
        return;
    }
    ctx->pc = 0x18D090u;
label_18d090:
    // 0x18d090: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18d094: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d098: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x18d098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x18d09c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_18d0a0:
    // 0x18d0a0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18D0A0u;
    {
        const bool branch_taken_0x18d0a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d0a0) {
            ctx->pc = 0x18D0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D0A0u;
            // 0x18d0a4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d050;
        }
    }
    ctx->pc = 0x18D0A8u;
    // 0x18d0a8: 0x27c29500  addiu       $v0, $fp, -0x6B00
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939904));
label_18d0ac:
    // 0x18d0ac: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18d0b0: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D0B0u;
    {
        const bool branch_taken_0x18d0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0B0u;
        // 0x18d0b4: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0b0) {
            ctx->pc = 0x18D118u;
            goto label_18d118;
        }
    }
    ctx->pc = 0x18D0B8u;
    // 0x18d0b8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x18d0bc: 0x0  nop
    ctx->pc = 0x18d0bcu;
    // NOP
label_18d0c0:
    // 0x18d0c0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D0C0u;
    {
        const bool branch_taken_0x18d0c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d0c0) {
            ctx->pc = 0x18D0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D0C0u;
            // 0x18d0c4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D110u;
            goto label_18d110;
        }
    }
    ctx->pc = 0x18D0C8u;
    // 0x18d0c8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18d0cc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D0CCu;
    {
        const bool branch_taken_0x18d0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0CCu;
        // 0x18d0d0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0cc) {
            ctx->pc = 0x18D0DCu;
            goto label_18d0dc;
        }
    }
    ctx->pc = 0x18D0D4u;
    // 0x18d0d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D0D4u;
    {
        const bool branch_taken_0x18d0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0D4u;
        // 0x18d0d8: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0d4) {
            ctx->pc = 0x18D0E0u;
            goto label_18d0e0;
        }
    }
    ctx->pc = 0x18D0DCu;
label_18d0dc:
    // 0x18d0dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18d0e0:
    // 0x18d0e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18d0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18d0e4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D0E4u;
    {
        const bool branch_taken_0x18d0e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0E4u;
        // 0x18d0e8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0e4) {
            ctx->pc = 0x18D0F4u;
            goto label_18d0f4;
        }
    }
    ctx->pc = 0x18D0ECu;
    // 0x18d0ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D0ECu;
    {
        const bool branch_taken_0x18d0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0ECu;
        // 0x18d0f0: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0ec) {
            ctx->pc = 0x18D0F8u;
            goto label_18d0f8;
        }
    }
    ctx->pc = 0x18D0F4u;
label_18d0f4:
    // 0x18d0f4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d0f8:
    // 0x18d0f8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18D0F8u;
    SET_GPR_U32(ctx, 31, 0x18D100u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D0F8u, 0x18D100u)) {
        return;
    }
    ctx->pc = 0x18D100u;
label_18d100:
    // 0x18d100: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x18d100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x18d104: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d108: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x18d108u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x18d10c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x18d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_18d110:
    // 0x18d110: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18D110u;
    {
        const bool branch_taken_0x18d110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d110) {
            ctx->pc = 0x18D114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D110u;
            // 0x18d114: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d0c0;
        }
    }
    ctx->pc = 0x18D118u;
label_18d118:
    // 0x18d118: 0x27c29500  addiu       $v0, $fp, -0x6B00
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939904));
    // 0x18d11c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x18d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18d120: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x18D120u;
    {
        const bool branch_taken_0x18d120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D120u;
        // 0x18d124: 0xaec2000c  sw          $v0, 0xC($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d120) {
            ctx->pc = 0x18D18Cu;
            goto label_18d18c;
        }
    }
    ctx->pc = 0x18D128u;
    // 0x18d128: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x18d128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x18d12c: 0x0  nop
    ctx->pc = 0x18d12cu;
    // NOP
label_18d130:
    // 0x18d130: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D130u;
    {
        const bool branch_taken_0x18d130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d130) {
            ctx->pc = 0x18D134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D130u;
            // 0x18d134: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D180u;
            goto label_18d180;
        }
    }
    ctx->pc = 0x18D138u;
    // 0x18d138: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18d13c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D13Cu;
    {
        const bool branch_taken_0x18d13c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D13Cu;
        // 0x18d140: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d13c) {
            ctx->pc = 0x18D14Cu;
            goto label_18d14c;
        }
    }
    ctx->pc = 0x18D144u;
    // 0x18d144: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D144u;
    {
        const bool branch_taken_0x18d144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D144u;
        // 0x18d148: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d144) {
            ctx->pc = 0x18D150u;
            goto label_18d150;
        }
    }
    ctx->pc = 0x18D14Cu;
label_18d14c:
    // 0x18d14c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18d150:
    // 0x18d150: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18d150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18d154: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D154u;
    {
        const bool branch_taken_0x18d154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D154u;
        // 0x18d158: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d154) {
            ctx->pc = 0x18D164u;
            goto label_18d164;
        }
    }
    ctx->pc = 0x18D15Cu;
    // 0x18d15c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D15Cu;
    {
        const bool branch_taken_0x18d15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D15Cu;
        // 0x18d160: 0xaec20008  sw          $v0, 0x8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d15c) {
            ctx->pc = 0x18D168u;
            goto label_18d168;
        }
    }
    ctx->pc = 0x18D164u;
label_18d164:
    // 0x18d164: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d164u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d168:
    // 0x18d168: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18D168u;
    SET_GPR_U32(ctx, 31, 0x18D170u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D168u, 0x18D170u)) {
        return;
    }
    ctx->pc = 0x18D170u;
label_18d170:
    // 0x18d170: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x18d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x18d174: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d178: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x18d178u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x18d17c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x18d17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_18d180:
    // 0x18d180: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18D180u;
    {
        const bool branch_taken_0x18d180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d180) {
            ctx->pc = 0x18D184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D180u;
            // 0x18d184: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d130;
        }
    }
    ctx->pc = 0x18D188u;
    // 0x18d188: 0x27c29500  addiu       $v0, $fp, -0x6B00
    ctx->pc = 0x18d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294939904));
label_18d18c:
    // 0x18d18c: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x18d18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x18d190: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D190u;
    {
        const bool branch_taken_0x18d190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D190u;
        // 0x18d194: 0xaee2000c  sw          $v0, 0xC($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d190) {
            ctx->pc = 0x18D1F8u;
            goto label_18d1f8;
        }
    }
    ctx->pc = 0x18D198u;
    // 0x18d198: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x18d19c: 0x0  nop
    ctx->pc = 0x18d19cu;
    // NOP
label_18d1a0:
    // 0x18d1a0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D1A0u;
    {
        const bool branch_taken_0x18d1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d1a0) {
            ctx->pc = 0x18D1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D1A0u;
            // 0x18d1a4: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D1F0u;
            goto label_18d1f0;
        }
    }
    ctx->pc = 0x18D1A8u;
    // 0x18d1a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18d1ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1ACu;
    {
        const bool branch_taken_0x18d1ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1ACu;
        // 0x18d1b0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1ac) {
            ctx->pc = 0x18D1BCu;
            goto label_18d1bc;
        }
    }
    ctx->pc = 0x18D1B4u;
    // 0x18d1b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D1B4u;
    {
        const bool branch_taken_0x18d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B4u;
        // 0x18d1b8: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1b4) {
            ctx->pc = 0x18D1C0u;
            goto label_18d1c0;
        }
    }
    ctx->pc = 0x18D1BCu;
label_18d1bc:
    // 0x18d1bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18d1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18d1c0:
    // 0x18d1c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18d1c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1C4u;
    {
        const bool branch_taken_0x18d1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18D1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C4u;
        // 0x18d1c8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1c4) {
            ctx->pc = 0x18D1D4u;
            goto label_18d1d4;
        }
    }
    ctx->pc = 0x18D1CCu;
    // 0x18d1cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18D1CCu;
    {
        const bool branch_taken_0x18d1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1CCu;
        // 0x18d1d0: 0xaee20008  sw          $v0, 0x8($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1cc) {
            ctx->pc = 0x18D1D8u;
            goto label_18d1d8;
        }
    }
    ctx->pc = 0x18D1D4u;
label_18d1d4:
    // 0x18d1d4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18d1d8:
    // 0x18d1d8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18D1D8u;
    SET_GPR_U32(ctx, 31, 0x18D1E0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18D1D8u, 0x18D1E0u)) {
        return;
    }
    ctx->pc = 0x18D1E0u;
label_18d1e0:
    // 0x18d1e0: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x18d1e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18d1e8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x18d1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x18d1ec: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x18d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_18d1f0:
    // 0x18d1f0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x18D1F0u;
    {
        const bool branch_taken_0x18d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d1f0) {
            ctx->pc = 0x18D1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18D1F0u;
            // 0x18d1f4: 0x8ee40004  lw          $a0, 0x4($s7) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18D1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18d1a0;
        }
    }
    ctx->pc = 0x18D1F8u;
label_18d1f8:
    // 0x18d1f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x18d1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d1fc: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x18D1FCu;
    SET_GPR_U32(ctx, 31, 0x18D204u);
    ctx->pc = 0x18D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D1FCu;
    // 0x18d200: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x18D1FCu, 0x18D204u)) {
        return;
    }
    ctx->pc = 0x18D204u;
label_18d204:
    // 0x18d204: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x18d204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18d208: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x18d208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18d20c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x18d20cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18d210: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x18d210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18d214: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18d214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18d218: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18d218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18d21c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x18d21cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d220: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x18d220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18d224: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x18d224u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d22c: 0x3e00008  jr          $ra
    ctx->pc = 0x18D22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D22Cu;
        // 0x18d230: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D22Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D234u;
    // 0x18d234: 0x0  nop
    ctx->pc = 0x18d234u;
    // NOP
    ctx->pc = 0x18d238u;
}
