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

// Function: sub_001F906C
// Address: 0x1f906c - 0x1f9254
void sub_001F906C_0x1f906c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F906C_0x1f906c");
#endif

    switch (ctx->pc) {
        case 0x1f906cu: goto label_1f906c;
        case 0x1f9070u: goto label_1f9070;
        case 0x1f9074u: goto label_1f9074;
        case 0x1f9078u: goto label_1f9078;
        case 0x1f907cu: goto label_1f907c;
        case 0x1f9080u: goto label_1f9080;
        case 0x1f9084u: goto label_1f9084;
        case 0x1f9088u: goto label_1f9088;
        case 0x1f908cu: goto label_1f908c;
        case 0x1f9090u: goto label_1f9090;
        case 0x1f9094u: goto label_1f9094;
        case 0x1f9098u: goto label_1f9098;
        case 0x1f909cu: goto label_1f909c;
        case 0x1f90a0u: goto label_1f90a0;
        case 0x1f90a4u: goto label_1f90a4;
        case 0x1f90a8u: goto label_1f90a8;
        case 0x1f90acu: goto label_1f90ac;
        case 0x1f90b0u: goto label_1f90b0;
        case 0x1f90b4u: goto label_1f90b4;
        case 0x1f90b8u: goto label_1f90b8;
        case 0x1f90bcu: goto label_1f90bc;
        case 0x1f90c0u: goto label_1f90c0;
        case 0x1f90c4u: goto label_1f90c4;
        case 0x1f90c8u: goto label_1f90c8;
        case 0x1f90ccu: goto label_1f90cc;
        case 0x1f90d0u: goto label_1f90d0;
        case 0x1f90d4u: goto label_1f90d4;
        case 0x1f90d8u: goto label_1f90d8;
        case 0x1f90dcu: goto label_1f90dc;
        case 0x1f90e0u: goto label_1f90e0;
        case 0x1f90e4u: goto label_1f90e4;
        case 0x1f90e8u: goto label_1f90e8;
        case 0x1f90ecu: goto label_1f90ec;
        case 0x1f90f0u: goto label_1f90f0;
        case 0x1f90f4u: goto label_1f90f4;
        case 0x1f90f8u: goto label_1f90f8;
        case 0x1f90fcu: goto label_1f90fc;
        case 0x1f9100u: goto label_1f9100;
        case 0x1f9104u: goto label_1f9104;
        case 0x1f9108u: goto label_1f9108;
        case 0x1f910cu: goto label_1f910c;
        case 0x1f9110u: goto label_1f9110;
        case 0x1f9114u: goto label_1f9114;
        case 0x1f9118u: goto label_1f9118;
        case 0x1f911cu: goto label_1f911c;
        case 0x1f9120u: goto label_1f9120;
        case 0x1f9124u: goto label_1f9124;
        case 0x1f9128u: goto label_1f9128;
        case 0x1f912cu: goto label_1f912c;
        case 0x1f9130u: goto label_1f9130;
        case 0x1f9134u: goto label_1f9134;
        case 0x1f9138u: goto label_1f9138;
        case 0x1f913cu: goto label_1f913c;
        case 0x1f9140u: goto label_1f9140;
        case 0x1f9144u: goto label_1f9144;
        case 0x1f9148u: goto label_1f9148;
        case 0x1f914cu: goto label_1f914c;
        case 0x1f9150u: goto label_1f9150;
        case 0x1f9154u: goto label_1f9154;
        case 0x1f9158u: goto label_1f9158;
        case 0x1f915cu: goto label_1f915c;
        case 0x1f9160u: goto label_1f9160;
        case 0x1f9164u: goto label_1f9164;
        case 0x1f9168u: goto label_1f9168;
        case 0x1f916cu: goto label_1f916c;
        case 0x1f9170u: goto label_1f9170;
        case 0x1f9174u: goto label_1f9174;
        case 0x1f9178u: goto label_1f9178;
        case 0x1f917cu: goto label_1f917c;
        case 0x1f9180u: goto label_1f9180;
        case 0x1f9184u: goto label_1f9184;
        case 0x1f9188u: goto label_1f9188;
        case 0x1f918cu: goto label_1f918c;
        case 0x1f9190u: goto label_1f9190;
        case 0x1f9194u: goto label_1f9194;
        case 0x1f9198u: goto label_1f9198;
        case 0x1f919cu: goto label_1f919c;
        case 0x1f91a0u: goto label_1f91a0;
        case 0x1f91a4u: goto label_1f91a4;
        case 0x1f91a8u: goto label_1f91a8;
        case 0x1f91acu: goto label_1f91ac;
        case 0x1f91b0u: goto label_1f91b0;
        case 0x1f91b4u: goto label_1f91b4;
        case 0x1f91b8u: goto label_1f91b8;
        case 0x1f91bcu: goto label_1f91bc;
        case 0x1f91c0u: goto label_1f91c0;
        case 0x1f91c4u: goto label_1f91c4;
        case 0x1f91c8u: goto label_1f91c8;
        case 0x1f91ccu: goto label_1f91cc;
        case 0x1f91d0u: goto label_1f91d0;
        case 0x1f91d4u: goto label_1f91d4;
        case 0x1f91d8u: goto label_1f91d8;
        case 0x1f91dcu: goto label_1f91dc;
        case 0x1f91e0u: goto label_1f91e0;
        case 0x1f91e4u: goto label_1f91e4;
        case 0x1f91e8u: goto label_1f91e8;
        case 0x1f91ecu: goto label_1f91ec;
        case 0x1f91f0u: goto label_1f91f0;
        case 0x1f91f4u: goto label_1f91f4;
        case 0x1f91f8u: goto label_1f91f8;
        case 0x1f91fcu: goto label_1f91fc;
        case 0x1f9200u: goto label_1f9200;
        case 0x1f9204u: goto label_1f9204;
        case 0x1f9208u: goto label_1f9208;
        case 0x1f920cu: goto label_1f920c;
        case 0x1f9210u: goto label_1f9210;
        case 0x1f9214u: goto label_1f9214;
        case 0x1f9218u: goto label_1f9218;
        case 0x1f921cu: goto label_1f921c;
        case 0x1f9220u: goto label_1f9220;
        case 0x1f9224u: goto label_1f9224;
        case 0x1f9228u: goto label_1f9228;
        case 0x1f922cu: goto label_1f922c;
        case 0x1f9230u: goto label_1f9230;
        case 0x1f9234u: goto label_1f9234;
        case 0x1f9238u: goto label_1f9238;
        case 0x1f923cu: goto label_1f923c;
        case 0x1f9240u: goto label_1f9240;
        case 0x1f9244u: goto label_1f9244;
        case 0x1f9248u: goto label_1f9248;
        case 0x1f924cu: goto label_1f924c;
        case 0x1f9250u: goto label_1f9250;
        default: break;
    }

    ctx->pc = 0x1f906cu;

label_1f906c:
    // 0x1f906c: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1f906cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
label_1f9070:
    // 0x1f9070: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x1f9070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_1f9074:
    // 0x1f9074: 0xc07e9e0  jal         func_1FA780
label_1f9078:
    if (ctx->pc == 0x1F9078u) {
        ctx->pc = 0x1F9078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9074u;
        // 0x1f9078: 0x24e4906c  addiu       $a0, $a3, -0x6F94 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938732));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F907Cu;
        goto label_1f907c;
    }
    ctx->pc = 0x1F9074u;
    SET_GPR_U32(ctx, 31, 0x1F907Cu);
    ctx->pc = 0x1F9078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9074u;
    // 0x1f9078: 0x24e4906c  addiu       $a0, $a3, -0x6F94 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA780u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FA780u, 0x1F9074u, 0x1F907Cu)) {
        return;
    }
    ctx->pc = 0x1F907Cu;
label_1f907c:
    // 0x1f907c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f907cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9080:
    // 0x1f9080: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_1f9084:
    if (ctx->pc == 0x1F9084u) {
        ctx->pc = 0x1F9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9080u;
        // 0x1f9084: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9088u;
        goto label_1f9088;
    }
    ctx->pc = 0x1F9080u;
    {
        const bool branch_taken_0x1f9080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9080u;
        // 0x1f9084: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9080) {
            ctx->pc = 0x1F9094u;
            goto label_1f9094;
        }
    }
    ctx->pc = 0x1F9088u;
label_1f9088:
    // 0x1f9088: 0xc07e10c  jal         func_1F8430
label_1f908c:
    if (ctx->pc == 0x1F908Cu) {
        ctx->pc = 0x1F9090u;
        goto label_1f9090;
    }
    ctx->pc = 0x1F9088u;
    SET_GPR_U32(ctx, 31, 0x1F9090u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F9088u, 0x1F9090u)) {
        return;
    }
    ctx->pc = 0x1F9090u;
label_1f9090:
    // 0x1f9090: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x1f9090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_1f9094:
    // 0x1f9094: 0x27c806f0  addiu       $t0, $fp, 0x6F0
    ctx->pc = 0x1f9094u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_1f9098:
    // 0x1f9098: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f9098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f909c:
    // 0x1f909c: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x1f909cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_1f90a0:
    // 0x1f90a0: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x1f90a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_1f90a4:
    // 0x1f90a4: 0x8fc205e8  lw          $v0, 0x5E8($fp)
    ctx->pc = 0x1f90a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_1f90a8:
    // 0x1f90a8: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1f90a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1f90ac:
    // 0x1f90ac: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1f90acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_1f90b0:
    // 0x1f90b0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1f90b0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_1f90b4:
    // 0x1f90b4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1f90b4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_1f90b8:
    // 0x1f90b8: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1f90b8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_1f90bc:
    // 0x1f90bc: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x1f90bcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_1f90c0:
    // 0x1f90c0: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1f90c0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_1f90c4:
    // 0x1f90c4: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x1f90c4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_1f90c8:
    // 0x1f90c8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1f90c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1f90cc:
    // 0x1f90cc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1f90d0:
    // 0x1f90d0: 0x0  nop
    ctx->pc = 0x1f90d0u;
    // NOP
label_1f90d4:
    // 0x1f90d4: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_1f90d8:
    if (ctx->pc == 0x1F90D8u) {
        ctx->pc = 0x1F90DCu;
        goto label_1f90dc;
    }
    ctx->pc = 0x1F90D4u;
    {
        const bool branch_taken_0x1f90d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f90d4) {
            ctx->pc = 0x1F90A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f90a8;
        }
    }
    ctx->pc = 0x1F90DCu;
label_1f90dc:
    // 0x1f90dc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1f90dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_1f90e0:
    // 0x1f90e0: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1f90e0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_1f90e4:
    // 0x1f90e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1f90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1f90e8:
    // 0x1f90e8: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1f90e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_1f90ec:
    // 0x1f90ec: 0x27c20680  addiu       $v0, $fp, 0x680
    ctx->pc = 0x1f90ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_1f90f0:
    // 0x1f90f0: 0x8fc405e4  lw          $a0, 0x5E4($fp)
    ctx->pc = 0x1f90f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_1f90f4:
    // 0x1f90f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f90f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f90f8:
    // 0x1f90f8: 0x8fc605e8  lw          $a2, 0x5E8($fp)
    ctx->pc = 0x1f90f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_1f90fc:
    // 0x1f90fc: 0x8fc705ec  lw          $a3, 0x5EC($fp)
    ctx->pc = 0x1f90fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_1f9100:
    // 0x1f9100: 0xc07e326  jal         func_1F8C98
label_1f9104:
    if (ctx->pc == 0x1F9104u) {
        ctx->pc = 0x1F9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9100u;
        // 0x1f9104: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9108u;
        goto label_1f9108;
    }
    ctx->pc = 0x1F9100u;
    SET_GPR_U32(ctx, 31, 0x1F9108u);
    ctx->pc = 0x1F9104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9100u;
    // 0x1f9104: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8C98u, 0x1F9100u, 0x1F9108u)) {
        return;
    }
    ctx->pc = 0x1F9108u;
label_1f9108:
    // 0x1f9108: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x1f9108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_1f910c:
    // 0x1f910c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1f910cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_1f9110:
    // 0x1f9110: 0x8fc805e8  lw          $t0, 0x5E8($fp)
    ctx->pc = 0x1f9110u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_1f9114:
    // 0x1f9114: 0x24659138  addiu       $a1, $v1, -0x6EC8
    ctx->pc = 0x1f9114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938936));
label_1f9118:
    // 0x1f9118: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f9118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f911c:
    // 0x1f911c: 0x27c40680  addiu       $a0, $fp, 0x680
    ctx->pc = 0x1f911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_1f9120:
    // 0x1f9120: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1f9120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1f9124:
    // 0x1f9124: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f9124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1f9128:
    // 0x1f9128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f9128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f912c:
    // 0x1f912c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1f912cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1f9130:
    // 0x1f9130: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f9134:
    if (ctx->pc == 0x1F9134u) {
        ctx->pc = 0x1F9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9130u;
        // 0x1f9134: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9138u;
        goto label_1f9138;
    }
    ctx->pc = 0x1F9130u;
    {
        const bool branch_taken_0x1f9130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9130u;
        // 0x1f9134: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9130) {
            ctx->pc = 0x1F9140u;
            goto label_1f9140;
        }
    }
    ctx->pc = 0x1F9138u;
label_1f9138:
    // 0x1f9138: 0x800008  jr          $a0
label_1f913c:
    if (ctx->pc == 0x1F913Cu) {
        ctx->pc = 0x1F913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9138u;
        // 0x1f913c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9140u;
        goto label_1f9140;
    }
    ctx->pc = 0x1F9138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x1F913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9138u;
        // 0x1f913c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9138u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F9140u;
label_1f9140:
    // 0x1f9140: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x1f9140u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1f9144:
    // 0x1f9144: 0xdfbf0680  ld          $ra, 0x680($sp)
    ctx->pc = 0x1f9144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_1f9148:
    // 0x1f9148: 0xdfbe0670  ld          $fp, 0x670($sp)
    ctx->pc = 0x1f9148u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_1f914c:
    // 0x1f914c: 0xdfb70660  ld          $s7, 0x660($sp)
    ctx->pc = 0x1f914cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_1f9150:
    // 0x1f9150: 0xdfb60650  ld          $s6, 0x650($sp)
    ctx->pc = 0x1f9150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_1f9154:
    // 0x1f9154: 0xdfb50640  ld          $s5, 0x640($sp)
    ctx->pc = 0x1f9154u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_1f9158:
    // 0x1f9158: 0xdfb40630  ld          $s4, 0x630($sp)
    ctx->pc = 0x1f9158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_1f915c:
    // 0x1f915c: 0xdfb30620  ld          $s3, 0x620($sp)
    ctx->pc = 0x1f915cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_1f9160:
    // 0x1f9160: 0xdfb20610  ld          $s2, 0x610($sp)
    ctx->pc = 0x1f9160u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_1f9164:
    // 0x1f9164: 0xdfb10600  ld          $s1, 0x600($sp)
    ctx->pc = 0x1f9164u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_1f9168:
    // 0x1f9168: 0xdfb005f0  ld          $s0, 0x5F0($sp)
    ctx->pc = 0x1f9168u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_1f916c:
    // 0x1f916c: 0xc7bf06e8  lwc1        $f31, 0x6E8($sp)
    ctx->pc = 0x1f916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1f9170:
    // 0x1f9170: 0xc7be06e0  lwc1        $f30, 0x6E0($sp)
    ctx->pc = 0x1f9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1f9174:
    // 0x1f9174: 0xc7bd06d8  lwc1        $f29, 0x6D8($sp)
    ctx->pc = 0x1f9174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1f9178:
    // 0x1f9178: 0xc7bc06d0  lwc1        $f28, 0x6D0($sp)
    ctx->pc = 0x1f9178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1f917c:
    // 0x1f917c: 0xc7bb06c8  lwc1        $f27, 0x6C8($sp)
    ctx->pc = 0x1f917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1f9180:
    // 0x1f9180: 0xc7ba06c0  lwc1        $f26, 0x6C0($sp)
    ctx->pc = 0x1f9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1f9184:
    // 0x1f9184: 0xc7b906b8  lwc1        $f25, 0x6B8($sp)
    ctx->pc = 0x1f9184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1f9188:
    // 0x1f9188: 0xc7b806b0  lwc1        $f24, 0x6B0($sp)
    ctx->pc = 0x1f9188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1f918c:
    // 0x1f918c: 0xc7b706a8  lwc1        $f23, 0x6A8($sp)
    ctx->pc = 0x1f918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1f9190:
    // 0x1f9190: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x1f9190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1f9194:
    // 0x1f9194: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x1f9194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f9198:
    // 0x1f9198: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x1f9198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f919c:
    // 0x1f919c: 0x3e00008  jr          $ra
label_1f91a0:
    if (ctx->pc == 0x1F91A0u) {
        ctx->pc = 0x1F91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F919Cu;
        // 0x1f91a0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F91A4u;
        goto label_1f91a4;
    }
    ctx->pc = 0x1F919Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F919Cu;
        // 0x1f91a0: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F919Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F91A4u;
label_1f91a4:
    // 0x1f91a4: 0x0  nop
    ctx->pc = 0x1f91a4u;
    // NOP
label_1f91a8:
    // 0x1f91a8: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x1f91a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_1f91ac:
    // 0x1f91ac: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f91acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f91b0:
    // 0x1f91b0: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x1f91b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_1f91b4:
    // 0x1f91b4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x1f91b4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1f91b8:
    // 0x1f91b8: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x1f91b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_1f91bc:
    // 0x1f91bc: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x1f91bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_1f91c0:
    // 0x1f91c0: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x1f91c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_1f91c4:
    // 0x1f91c4: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x1f91c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_1f91c8:
    // 0x1f91c8: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x1f91c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_1f91cc:
    // 0x1f91cc: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x1f91ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_1f91d0:
    // 0x1f91d0: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x1f91d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_1f91d4:
    // 0x1f91d4: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x1f91d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_1f91d8:
    // 0x1f91d8: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x1f91d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_1f91dc:
    // 0x1f91dc: 0xe7bf06f8  swc1        $f31, 0x6F8($sp)
    ctx->pc = 0x1f91dcu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_1f91e0:
    // 0x1f91e0: 0xe7be06f0  swc1        $f30, 0x6F0($sp)
    ctx->pc = 0x1f91e0u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_1f91e4:
    // 0x1f91e4: 0xe7bd06e8  swc1        $f29, 0x6E8($sp)
    ctx->pc = 0x1f91e4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_1f91e8:
    // 0x1f91e8: 0xe7bc06e0  swc1        $f28, 0x6E0($sp)
    ctx->pc = 0x1f91e8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_1f91ec:
    // 0x1f91ec: 0xe7bb06d8  swc1        $f27, 0x6D8($sp)
    ctx->pc = 0x1f91ecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_1f91f0:
    // 0x1f91f0: 0xe7ba06d0  swc1        $f26, 0x6D0($sp)
    ctx->pc = 0x1f91f0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_1f91f4:
    // 0x1f91f4: 0xe7b906c8  swc1        $f25, 0x6C8($sp)
    ctx->pc = 0x1f91f4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_1f91f8:
    // 0x1f91f8: 0xe7b806c0  swc1        $f24, 0x6C0($sp)
    ctx->pc = 0x1f91f8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_1f91fc:
    // 0x1f91fc: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x1f91fcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_1f9200:
    // 0x1f9200: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x1f9200u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_1f9204:
    // 0x1f9204: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x1f9204u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_1f9208:
    // 0x1f9208: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x1f9208u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_1f920c:
    // 0x1f920c: 0xafc405e4  sw          $a0, 0x5E4($fp)
    ctx->pc = 0x1f920cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 4));
label_1f9210:
    // 0x1f9210: 0x8c62ec54  lw          $v0, -0x13AC($v1)
    ctx->pc = 0x1f9210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962260)));
label_1f9214:
    // 0x1f9214: 0x40f809  jalr        $v0
label_1f9218:
    if (ctx->pc == 0x1F9218u) {
        ctx->pc = 0x1F921Cu;
        goto label_1f921c;
    }
    ctx->pc = 0x1F9214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F921Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9214u, 0x1F921Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F921Cu;
label_1f921c:
    // 0x1f921c: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x1f921cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_1f9220:
    // 0x1f9220: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x1f9220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_1f9224:
    // 0x1f9224: 0x8fc305e8  lw          $v1, 0x5E8($fp)
    ctx->pc = 0x1f9224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_1f9228:
    // 0x1f9228: 0xafc205ec  sw          $v0, 0x5EC($fp)
    ctx->pc = 0x1f9228u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 2));
label_1f922c:
    // 0x1f922c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1f922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1f9230:
    // 0x1f9230: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1f9234:
    if (ctx->pc == 0x1F9234u) {
        ctx->pc = 0x1F9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9230u;
        // 0x1f9234: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9238u;
        goto label_1f9238;
    }
    ctx->pc = 0x1F9230u;
    {
        const bool branch_taken_0x1f9230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9230u;
        // 0x1f9234: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9230) {
            ctx->pc = 0x1F9240u;
            goto label_1f9240;
        }
    }
    ctx->pc = 0x1F9238u;
label_1f9238:
    // 0x1f9238: 0xc07e10c  jal         func_1F8430
label_1f923c:
    if (ctx->pc == 0x1F923Cu) {
        ctx->pc = 0x1F9240u;
        goto label_1f9240;
    }
    ctx->pc = 0x1F9238u;
    SET_GPR_U32(ctx, 31, 0x1F9240u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F9238u, 0x1F9240u)) {
        return;
    }
    ctx->pc = 0x1F9240u;
label_1f9240:
    // 0x1f9240: 0x8fc605e4  lw          $a2, 0x5E4($fp)
    ctx->pc = 0x1f9240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_1f9244:
    // 0x1f9244: 0x27c705e0  addiu       $a3, $fp, 0x5E0
    ctx->pc = 0x1f9244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_1f9248:
    // 0x1f9248: 0x8fc505e8  lw          $a1, 0x5E8($fp)
    ctx->pc = 0x1f9248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_1f924c:
    // 0x1f924c: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x1f924cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_1f9250:
    // 0x1f9250: 0xafc705f0  sw          $a3, 0x5F0($fp)
    ctx->pc = 0x1f9250u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1520), GPR_U32(ctx, 7));
    ctx->pc = 0x1f9254u;
}
