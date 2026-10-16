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

// Function: sub_0010C0A0
// Address: 0x10c0a0 - 0x10c278
void sub_0010C0A0_0x10c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C0A0_0x10c0a0");
#endif

    switch (ctx->pc) {
        case 0x10c0ecu: goto label_10c0ec;
        case 0x10c0fcu: goto label_10c0fc;
        case 0x10c10cu: goto label_10c10c;
        case 0x10c11cu: goto label_10c11c;
        case 0x10c130u: goto label_10c130;
        case 0x10c144u: goto label_10c144;
        case 0x10c158u: goto label_10c158;
        case 0x10c16cu: goto label_10c16c;
        case 0x10c180u: goto label_10c180;
        case 0x10c194u: goto label_10c194;
        case 0x10c1a8u: goto label_10c1a8;
        case 0x10c1b0u: goto label_10c1b0;
        case 0x10c1b8u: goto label_10c1b8;
        case 0x10c1c0u: goto label_10c1c0;
        case 0x10c1c8u: goto label_10c1c8;
        case 0x10c1d0u: goto label_10c1d0;
        case 0x10c1d8u: goto label_10c1d8;
        case 0x10c1e0u: goto label_10c1e0;
        case 0x10c1ecu: goto label_10c1ec;
        case 0x10c1f8u: goto label_10c1f8;
        case 0x10c20cu: goto label_10c20c;
        case 0x10c220u: goto label_10c220;
        case 0x10c228u: goto label_10c228;
        case 0x10c230u: goto label_10c230;
        case 0x10c238u: goto label_10c238;
        case 0x10c244u: goto label_10c244;
        default: break;
    }

    ctx->pc = 0x10c0a0u;

    // 0x10c0a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10c0a4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x10c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x10c0a8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x10c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x10c0ac: 0x2442a198  addiu       $v0, $v0, -0x5E68
    ctx->pc = 0x10c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943128));
    // 0x10c0b0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x10c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x10c0b4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x10c0b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0b8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x10c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x10c0bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10c0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0c0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x10c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x10c0c4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10c0c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x10c0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x10c0cc: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x10c0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x10c0d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x10c0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x10c0d4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x10c0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x10c0d8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x10c0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x10c0dc: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x10c0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x10c0e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10c0e4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C0E4u;
    SET_GPR_U32(ctx, 31, 0x10C0ECu);
    ctx->pc = 0x10C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0E4u;
    // 0x10c0e8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C0E4u, 0x10C0ECu)) {
        return;
    }
    ctx->pc = 0x10C0ECu;
label_10c0ec:
    // 0x10c0ec: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x10c0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x10c0f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0f4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C0F4u;
    SET_GPR_U32(ctx, 31, 0x10C0FCu);
    ctx->pc = 0x10C0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0F4u;
    // 0x10c0f8: 0x24a58898  addiu       $a1, $a1, -0x7768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C0F4u, 0x10C0FCu)) {
        return;
    }
    ctx->pc = 0x10C0FCu;
label_10c0fc:
    // 0x10c0fc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10c0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10c100: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c104: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C104u;
    SET_GPR_U32(ctx, 31, 0x10C10Cu);
    ctx->pc = 0x10C108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C104u;
    // 0x10c108: 0x24a5f8b8  addiu       $a1, $a1, -0x748 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C104u, 0x10C10Cu)) {
        return;
    }
    ctx->pc = 0x10C10Cu;
label_10c10c:
    // 0x10c10c: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x10c10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x10c110: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c114: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C114u;
    SET_GPR_U32(ctx, 31, 0x10C11Cu);
    ctx->pc = 0x10C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C114u;
    // 0x10c118: 0x24a5f8c0  addiu       $a1, $a1, -0x740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C114u, 0x10C11Cu)) {
        return;
    }
    ctx->pc = 0x10C11Cu;
label_10c11c:
    // 0x10c11c: 0x3c17006b  lui         $s7, 0x6B
    ctx->pc = 0x10c11cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)107 << 16));
    // 0x10c120: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c124: 0x26f74328  addiu       $s7, $s7, 0x4328
    ctx->pc = 0x10c124u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 17192));
    // 0x10c128: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C128u;
    SET_GPR_U32(ctx, 31, 0x10C130u);
    ctx->pc = 0x10C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C128u;
    // 0x10c12c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C128u, 0x10C130u)) {
        return;
    }
    ctx->pc = 0x10C130u;
label_10c130:
    // 0x10c130: 0x3c16006b  lui         $s6, 0x6B
    ctx->pc = 0x10c130u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)107 << 16));
    // 0x10c134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c138: 0x26d64330  addiu       $s6, $s6, 0x4330
    ctx->pc = 0x10c138u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 17200));
    // 0x10c13c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C13Cu;
    SET_GPR_U32(ctx, 31, 0x10C144u);
    ctx->pc = 0x10C140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C13Cu;
    // 0x10c140: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C13Cu, 0x10C144u)) {
        return;
    }
    ctx->pc = 0x10C144u;
label_10c144:
    // 0x10c144: 0x3c15006b  lui         $s5, 0x6B
    ctx->pc = 0x10c144u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)107 << 16));
    // 0x10c148: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c14c: 0x26b54338  addiu       $s5, $s5, 0x4338
    ctx->pc = 0x10c14cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 17208));
    // 0x10c150: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C150u;
    SET_GPR_U32(ctx, 31, 0x10C158u);
    ctx->pc = 0x10C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C150u;
    // 0x10c154: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C150u, 0x10C158u)) {
        return;
    }
    ctx->pc = 0x10C158u;
label_10c158:
    // 0x10c158: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x10c158u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
    // 0x10c15c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c160: 0x26944340  addiu       $s4, $s4, 0x4340
    ctx->pc = 0x10c160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 17216));
    // 0x10c164: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C164u;
    SET_GPR_U32(ctx, 31, 0x10C16Cu);
    ctx->pc = 0x10C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C164u;
    // 0x10c168: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C164u, 0x10C16Cu)) {
        return;
    }
    ctx->pc = 0x10C16Cu;
label_10c16c:
    // 0x10c16c: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x10c16cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x10c170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c174: 0x26734348  addiu       $s3, $s3, 0x4348
    ctx->pc = 0x10c174u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 17224));
    // 0x10c178: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C178u;
    SET_GPR_U32(ctx, 31, 0x10C180u);
    ctx->pc = 0x10C17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C178u;
    // 0x10c17c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C178u, 0x10C180u)) {
        return;
    }
    ctx->pc = 0x10C180u;
label_10c180:
    // 0x10c180: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x10c180u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x10c184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c188: 0x26314350  addiu       $s1, $s1, 0x4350
    ctx->pc = 0x10c188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17232));
    // 0x10c18c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C18Cu;
    SET_GPR_U32(ctx, 31, 0x10C194u);
    ctx->pc = 0x10C190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C18Cu;
    // 0x10c190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C18Cu, 0x10C194u)) {
        return;
    }
    ctx->pc = 0x10C194u;
label_10c194:
    // 0x10c194: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x10c194u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x10c198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c19c: 0x26104358  addiu       $s0, $s0, 0x4358
    ctx->pc = 0x10c19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17240));
    // 0x10c1a0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C1A0u;
    SET_GPR_U32(ctx, 31, 0x10C1A8u);
    ctx->pc = 0x10C1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1A0u;
    // 0x10c1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C1A0u, 0x10C1A8u)) {
        return;
    }
    ctx->pc = 0x10C1A8u;
label_10c1a8:
    // 0x10c1a8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1A8u;
    SET_GPR_U32(ctx, 31, 0x10C1B0u);
    ctx->pc = 0x10C1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1A8u;
    // 0x10c1ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1A8u, 0x10C1B0u)) {
        return;
    }
    ctx->pc = 0x10C1B0u;
label_10c1b0:
    // 0x10c1b0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1B0u;
    SET_GPR_U32(ctx, 31, 0x10C1B8u);
    ctx->pc = 0x10C1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1B0u;
    // 0x10c1b4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1B0u, 0x10C1B8u)) {
        return;
    }
    ctx->pc = 0x10C1B8u;
label_10c1b8:
    // 0x10c1b8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1B8u;
    SET_GPR_U32(ctx, 31, 0x10C1C0u);
    ctx->pc = 0x10C1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1B8u;
    // 0x10c1bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1B8u, 0x10C1C0u)) {
        return;
    }
    ctx->pc = 0x10C1C0u;
label_10c1c0:
    // 0x10c1c0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1C0u;
    SET_GPR_U32(ctx, 31, 0x10C1C8u);
    ctx->pc = 0x10C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1C0u;
    // 0x10c1c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1C0u, 0x10C1C8u)) {
        return;
    }
    ctx->pc = 0x10C1C8u;
label_10c1c8:
    // 0x10c1c8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1C8u;
    SET_GPR_U32(ctx, 31, 0x10C1D0u);
    ctx->pc = 0x10C1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1C8u;
    // 0x10c1cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1C8u, 0x10C1D0u)) {
        return;
    }
    ctx->pc = 0x10C1D0u;
label_10c1d0:
    // 0x10c1d0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1D0u;
    SET_GPR_U32(ctx, 31, 0x10C1D8u);
    ctx->pc = 0x10C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1D0u;
    // 0x10c1d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1D0u, 0x10C1D8u)) {
        return;
    }
    ctx->pc = 0x10C1D8u;
label_10c1d8:
    // 0x10c1d8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1D8u;
    SET_GPR_U32(ctx, 31, 0x10C1E0u);
    ctx->pc = 0x10C1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1D8u;
    // 0x10c1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1D8u, 0x10C1E0u)) {
        return;
    }
    ctx->pc = 0x10C1E0u;
label_10c1e0:
    // 0x10c1e0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10c1e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1E4u;
    SET_GPR_U32(ctx, 31, 0x10C1ECu);
    ctx->pc = 0x10C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1E4u;
    // 0x10c1e8: 0x24844318  addiu       $a0, $a0, 0x4318 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1E4u, 0x10C1ECu)) {
        return;
    }
    ctx->pc = 0x10C1ECu;
label_10c1ec:
    // 0x10c1ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x10c1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x10c1f0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C1F0u;
    SET_GPR_U32(ctx, 31, 0x10C1F8u);
    ctx->pc = 0x10C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1F0u;
    // 0x10c1f4: 0x24844320  addiu       $a0, $a0, 0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C1F0u, 0x10C1F8u)) {
        return;
    }
    ctx->pc = 0x10C1F8u;
label_10c1f8:
    // 0x10c1f8: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x10c1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x10c1fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c200: 0x2631bcf0  addiu       $s1, $s1, -0x4310
    ctx->pc = 0x10c200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294950128));
    // 0x10c204: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C204u;
    SET_GPR_U32(ctx, 31, 0x10C20Cu);
    ctx->pc = 0x10C208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C204u;
    // 0x10c208: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C204u, 0x10C20Cu)) {
        return;
    }
    ctx->pc = 0x10C20Cu;
label_10c20c:
    // 0x10c20c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x10c20cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x10c210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c214: 0x2610bcf8  addiu       $s0, $s0, -0x4308
    ctx->pc = 0x10c214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950136));
    // 0x10c218: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x10C218u;
    SET_GPR_U32(ctx, 31, 0x10C220u);
    ctx->pc = 0x10C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C218u;
    // 0x10c21c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x10C218u, 0x10C220u)) {
        return;
    }
    ctx->pc = 0x10C220u;
label_10c220:
    // 0x10c220: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C220u;
    SET_GPR_U32(ctx, 31, 0x10C228u);
    ctx->pc = 0x10C224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C220u;
    // 0x10c224: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C220u, 0x10C228u)) {
        return;
    }
    ctx->pc = 0x10C228u;
label_10c228:
    // 0x10c228: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x10C228u;
    SET_GPR_U32(ctx, 31, 0x10C230u);
    ctx->pc = 0x10C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C228u;
    // 0x10c22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x10C228u, 0x10C230u)) {
        return;
    }
    ctx->pc = 0x10C230u;
label_10c230:
    // 0x10c230: 0xc0438ec  jal         func_10E3B0
    ctx->pc = 0x10C230u;
    SET_GPR_U32(ctx, 31, 0x10C238u);
    ctx->pc = 0x10C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C230u;
    // 0x10c234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E3B0u, 0x10C230u, 0x10C238u)) {
        return;
    }
    ctx->pc = 0x10C238u;
label_10c238:
    // 0x10c238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10c238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c23c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x10C23Cu;
    SET_GPR_U32(ctx, 31, 0x10C244u);
    ctx->pc = 0x10C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C23Cu;
    // 0x10c240: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x10C23Cu, 0x10C244u)) {
        return;
    }
    ctx->pc = 0x10C244u;
label_10c244:
    // 0x10c244: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x10c244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10c248: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x10c248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10c24c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x10c24cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c250: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x10c250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c254: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x10c254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c258: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x10c258u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c25c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x10c25cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c260: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x10c260u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c264: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x10c264u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C26Cu;
        // 0x10c270: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C274u;
    // 0x10c274: 0x0  nop
    ctx->pc = 0x10c274u;
    // NOP
    ctx->pc = 0x10c278u;
}
