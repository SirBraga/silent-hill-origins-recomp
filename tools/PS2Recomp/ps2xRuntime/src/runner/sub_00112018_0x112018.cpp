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

// Function: sub_00112018
// Address: 0x112018 - 0x112168
void sub_00112018_0x112018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112018_0x112018");
#endif

    switch (ctx->pc) {
        case 0x112054u: goto label_112054;
        case 0x112068u: goto label_112068;
        case 0x112070u: goto label_112070;
        case 0x112078u: goto label_112078;
        case 0x112084u: goto label_112084;
        case 0x112090u: goto label_112090;
        case 0x11209cu: goto label_11209c;
        case 0x1120a8u: goto label_1120a8;
        case 0x1120b4u: goto label_1120b4;
        case 0x1120c4u: goto label_1120c4;
        case 0x1120d4u: goto label_1120d4;
        case 0x1120e4u: goto label_1120e4;
        case 0x1120f4u: goto label_1120f4;
        case 0x112104u: goto label_112104;
        case 0x112114u: goto label_112114;
        case 0x112124u: goto label_112124;
        case 0x112130u: goto label_112130;
        case 0x112140u: goto label_112140;
        case 0x11214cu: goto label_11214c;
        default: break;
    }

    ctx->pc = 0x112018u;

    // 0x112018: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x112018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11201c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11201cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x112020: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x112020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x112024: 0x2442aaf0  addiu       $v0, $v0, -0x5510
    ctx->pc = 0x112024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945520));
    // 0x112028: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x112028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11202c: 0x3c11006b  lui         $s1, 0x6B
    ctx->pc = 0x11202cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)107 << 16));
    // 0x112030: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x112030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x112034: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x112034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112038: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x112038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11203c: 0x263144c8  addiu       $s1, $s1, 0x44C8
    ctx->pc = 0x11203cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17608));
    // 0x112040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x112044: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x112044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112048: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x112048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x11204c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11204Cu;
    SET_GPR_U32(ctx, 31, 0x112054u);
    ctx->pc = 0x112050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11204Cu;
    // 0x112050: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11204Cu, 0x112054u)) {
        return;
    }
    ctx->pc = 0x112054u;
label_112054:
    // 0x112054: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x112054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x112058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11205c: 0x261044d0  addiu       $s0, $s0, 0x44D0
    ctx->pc = 0x11205cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17616));
    // 0x112060: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x112060u;
    SET_GPR_U32(ctx, 31, 0x112068u);
    ctx->pc = 0x112064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112060u;
    // 0x112064: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x112060u, 0x112068u)) {
        return;
    }
    ctx->pc = 0x112068u;
label_112068:
    // 0x112068: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x112068u;
    SET_GPR_U32(ctx, 31, 0x112070u);
    ctx->pc = 0x11206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112068u;
    // 0x11206c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x112068u, 0x112070u)) {
        return;
    }
    ctx->pc = 0x112070u;
label_112070:
    // 0x112070: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x112070u;
    SET_GPR_U32(ctx, 31, 0x112078u);
    ctx->pc = 0x112074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112070u;
    // 0x112074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x112070u, 0x112078u)) {
        return;
    }
    ctx->pc = 0x112078u;
label_112078:
    // 0x112078: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x112078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x11207c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x11207Cu;
    SET_GPR_U32(ctx, 31, 0x112084u);
    ctx->pc = 0x112080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11207Cu;
    // 0x112080: 0x24844500  addiu       $a0, $a0, 0x4500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x11207Cu, 0x112084u)) {
        return;
    }
    ctx->pc = 0x112084u;
label_112084:
    // 0x112084: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x112084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x112088: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x112088u;
    SET_GPR_U32(ctx, 31, 0x112090u);
    ctx->pc = 0x11208Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112088u;
    // 0x11208c: 0x24844508  addiu       $a0, $a0, 0x4508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x112088u, 0x112090u)) {
        return;
    }
    ctx->pc = 0x112090u;
label_112090:
    // 0x112090: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x112090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x112094: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x112094u;
    SET_GPR_U32(ctx, 31, 0x11209Cu);
    ctx->pc = 0x112098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112094u;
    // 0x112098: 0x248444e8  addiu       $a0, $a0, 0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x112094u, 0x11209Cu)) {
        return;
    }
    ctx->pc = 0x11209Cu;
label_11209c:
    // 0x11209c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11209cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1120a0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1120A0u;
    SET_GPR_U32(ctx, 31, 0x1120A8u);
    ctx->pc = 0x1120A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120A0u;
    // 0x1120a4: 0x248444f0  addiu       $a0, $a0, 0x44F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1120A0u, 0x1120A8u)) {
        return;
    }
    ctx->pc = 0x1120A8u;
label_1120a8:
    // 0x1120a8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1120a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x1120ac: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1120ACu;
    SET_GPR_U32(ctx, 31, 0x1120B4u);
    ctx->pc = 0x1120B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120ACu;
    // 0x1120b0: 0x248444f8  addiu       $a0, $a0, 0x44F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1120ACu, 0x1120B4u)) {
        return;
    }
    ctx->pc = 0x1120B4u;
label_1120b4:
    // 0x1120b4: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1120b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1120b8: 0x26104510  addiu       $s0, $s0, 0x4510
    ctx->pc = 0x1120b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 17680));
    // 0x1120bc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x1120BCu;
    SET_GPR_U32(ctx, 31, 0x1120C4u);
    ctx->pc = 0x1120C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120BCu;
    // 0x1120c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1120BCu, 0x1120C4u)) {
        return;
    }
    ctx->pc = 0x1120C4u;
label_1120c4:
    // 0x1120c4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1120c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1120c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1120c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120cc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1120CCu;
    SET_GPR_U32(ctx, 31, 0x1120D4u);
    ctx->pc = 0x1120D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120CCu;
    // 0x1120d0: 0x24a5f880  addiu       $a1, $a1, -0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1120CCu, 0x1120D4u)) {
        return;
    }
    ctx->pc = 0x1120D4u;
label_1120d4:
    // 0x1120d4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1120d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1120d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1120d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120dc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1120DCu;
    SET_GPR_U32(ctx, 31, 0x1120E4u);
    ctx->pc = 0x1120E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120DCu;
    // 0x1120e0: 0x24a5f8d0  addiu       $a1, $a1, -0x730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1120DCu, 0x1120E4u)) {
        return;
    }
    ctx->pc = 0x1120E4u;
label_1120e4:
    // 0x1120e4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1120e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1120e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1120e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120ec: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1120ECu;
    SET_GPR_U32(ctx, 31, 0x1120F4u);
    ctx->pc = 0x1120F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120ECu;
    // 0x1120f0: 0x24a58988  addiu       $a1, $a1, -0x7678 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1120ECu, 0x1120F4u)) {
        return;
    }
    ctx->pc = 0x1120F4u;
label_1120f4:
    // 0x1120f4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1120f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1120f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1120f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1120fc: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1120FCu;
    SET_GPR_U32(ctx, 31, 0x112104u);
    ctx->pc = 0x112100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1120FCu;
    // 0x112100: 0x24a58990  addiu       $a1, $a1, -0x7670 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1120FCu, 0x112104u)) {
        return;
    }
    ctx->pc = 0x112104u;
label_112104:
    // 0x112104: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x112104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x112108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11210c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11210Cu;
    SET_GPR_U32(ctx, 31, 0x112114u);
    ctx->pc = 0x112110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11210Cu;
    // 0x112110: 0x24a58980  addiu       $a1, $a1, -0x7680 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11210Cu, 0x112114u)) {
        return;
    }
    ctx->pc = 0x112114u;
label_112114:
    // 0x112114: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x112114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x112118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11211c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x11211Cu;
    SET_GPR_U32(ctx, 31, 0x112124u);
    ctx->pc = 0x112120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11211Cu;
    // 0x112120: 0x24a58978  addiu       $a1, $a1, -0x7688 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x11211Cu, 0x112124u)) {
        return;
    }
    ctx->pc = 0x112124u;
label_112124:
    // 0x112124: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112128: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x112128u;
    SET_GPR_U32(ctx, 31, 0x112130u);
    ctx->pc = 0x11212Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112128u;
    // 0x11212c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x112128u, 0x112130u)) {
        return;
    }
    ctx->pc = 0x112130u;
label_112130:
    // 0x112130: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x112130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x112134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112138: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x112138u;
    SET_GPR_U32(ctx, 31, 0x112140u);
    ctx->pc = 0x11213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112138u;
    // 0x11213c: 0x24a586c8  addiu       $a1, $a1, -0x7938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x112138u, 0x112140u)) {
        return;
    }
    ctx->pc = 0x112140u;
label_112140:
    // 0x112140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x112140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112144: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x112144u;
    SET_GPR_U32(ctx, 31, 0x11214Cu);
    ctx->pc = 0x112148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112144u;
    // 0x112148: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x112144u, 0x11214Cu)) {
        return;
    }
    ctx->pc = 0x11214Cu;
label_11214c:
    // 0x11214c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11214cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112150: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x112150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x112154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x112154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x112158: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x112158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11215c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112160: 0x3e00008  jr          $ra
    ctx->pc = 0x112160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112160u;
        // 0x112164: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112168u;
}
